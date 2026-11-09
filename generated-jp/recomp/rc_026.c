#include "r5900.h"
#include "functab.h"

void JP_F_002ADE40(Ctx *c) { /* func_002ADE40 */
ENTER(0x2ade40);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(7, RD(0) + RD(0)); if (t) goto L_002ADE78; }
SET64(6, (s32)rd32(c, (RW(4) + 0)));
L_002ADE54:;
SET64(2, (s32)rd32(c, (RW(6) + 0)));
{ int t = RD(5) != RD(2);  if (t) goto L_002ADE68; }
 goto L_002ADE7C;
L_002ADE68:;
SET32(7, RW(7) + 1);
SET64(2, RSD(7) < RSD(3));
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002ADE54; } }
L_002ADE78:;
SET32(7, RW(0) + -1);
L_002ADE7C:;
{ int t = RSD(7) < 0; SET64(2, RD(0) + RD(0)); if (t) goto L_002ADEF4; }
{ int t = RSD(7) < 0;  if (t) goto L_002ADEFC; }
L_002ADE8C:;
SET64(1, RSD(7) < RSD(3));
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002ADF04; }
{ int t = RSD(7) < 0;  if (t) goto L_002ADF04; }
SET64(2, rd8(c, (RW(4) + 20)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002ADF0C; }
SET32(2, RW(3) - RW(7));
SET32(5, RW(7) << 2);
SET32(3, RW(2) + -1);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(6, RW(3) + -1);
SET32(8, RW(2) + RW(5));
SET64(2, (s32)rd32(c, (RW(8) + 0)));
{ int t = RSD(3) <= 0; SET32(7, RW(8) + 4); if (t) goto L_002ADF14; }
L_002ADED0:;
SET64(5, (s32)rd32(c, (RW(7) + 0)));
SET64(3, RD(6) + RD(0));
SET32(6, RW(6) + -1);
wr32(c, (RW(8) + 0), RW(5));
SET32(7, RW(7) + 4);
{ int t = RSD(3) > 0; SET32(8, RW(8) + 4); if (t) { POLL(); goto L_002ADED0; } }
SET64(3, (s32)rd32(c, (RW(4) + 16))); goto L_002ADF18;
L_002ADEF4:;
 goto L_002ADF24;
L_002ADEFC:;
SET32(7, RW(7) + RW(3)); { POLL(); goto L_002ADE8C; }
L_002ADF04:;
 goto L_002ADF24;
L_002ADF0C:;
 { POLL(); goto L_002ADF04; }
L_002ADF14:;
SET64(3, (s32)rd32(c, (RW(4) + 16)));
L_002ADF18:;
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 16), RW(3)); { POLL(); goto L_002ADF04; }
L_002ADF24:;
 return;
}

void JP_F_002ADF30(Ctx *c) { /* func_002ADF30 */
ENTER(0x2adf30);
{ int t = RSD(5) < 0;  if (t) goto L_002ADFA4; }
L_002ADF38:;
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(1, RSD(5) < RSD(3));
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002ADFB0; }
{ int t = RSD(5) < 0;  if (t) goto L_002ADFB0; }
SET64(2, rd8(c, (RW(4) + 20)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002ADFB8; }
SET32(2, RW(3) - RW(5));
SET32(3, RW(2) + -1);
SET32(5, RW(5) << 2);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET32(6, RW(3) + -1);
SET32(8, RW(2) + RW(5));
SET64(2, (s32)rd32(c, (RW(8) + 0)));
{ int t = RSD(3) <= 0; SET32(7, RW(8) + 4); if (t) goto L_002ADFC0; }
L_002ADF80:;
SET64(5, (s32)rd32(c, (RW(7) + 0)));
SET64(3, RD(6) + RD(0));
SET32(6, RW(6) + -1);
wr32(c, (RW(8) + 0), RW(5));
SET32(7, RW(7) + 4);
{ int t = RSD(3) > 0; SET32(8, RW(8) + 4); if (t) { POLL(); goto L_002ADF80; } }
SET64(3, (s32)rd32(c, (RW(4) + 16))); goto L_002ADFC4;
L_002ADFA4:;
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET32(5, RW(5) + RW(2)); { POLL(); goto L_002ADF38; }
L_002ADFB0:;
 goto L_002ADFCC;
L_002ADFB8:;
 goto L_002ADFCC;
L_002ADFC0:;
SET64(3, (s32)rd32(c, (RW(4) + 16)));
L_002ADFC4:;
SET32(3, RW(3) + -1);
wr32(c, (RW(4) + 16), RW(3));
L_002ADFCC:;
 return;
}

void JP_F_002ADFE0(Ctx *c) { /* func_002ADFE0 */
ENTER(0x2adfe0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
{ int t = RSD(18) < 0; wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); if (t) goto L_002AE0A0; }
L_002AE00C:;
SET64(4, (s32)rd32(c, (RW(20) + 16)));
SET64(3, RSD(4) < RSD(18));
{ int t = RD(3) != RD(0);  if (t) goto L_002AE170; }
{ int t = RSD(18) < 0;  if (t) goto L_002AE170; }
SET64(3, rd8(c, (RW(20) + 20)));
{ int t = RD(3) != RD(0);  if (t) goto L_002AE170; }
SET64(3, (s32)rd32(c, (RW(20) + 8)));
SET32(4, RW(4) + 1);
SET64(1, RSD(3) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_002AE144; }
SET64(2, (s32)rd32(c, (RW(20) + 12)));
SET32(17, RW(3) + RW(2));
SET64(1, RSD(17) < RSD(4));
{ int t = RD(1) == RD(0);  if (t) goto L_002AE05C; }
SET64(17, RD(4) + RD(0));
L_002AE05C:;
SET64(31, 0x2ae064); SET32(4, RW(17) << 2); JP_F_00100530(c);
SET64(16, RD(2) + RD(0));
SET64(5, (s32)rd32(c, (RW(20) + 0)));
SET64(2, (s32)rd32(c, (RW(20) + 16)));
SET64(6, RD(16) + RD(0));
{ int t = RSD(2) <= 0; SET32(4, RW(2) + -1); if (t) goto L_002AE0AC; }
L_002AE07C:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET64(2, RD(4) + RD(0));
SET32(4, RW(4) + -1);
wr32(c, (RW(6) + 0), RW(3));
SET32(5, RW(5) + 4);
{ int t = RSD(2) > 0; SET32(6, RW(6) + 4); if (t) { POLL(); goto L_002AE07C; } }
SET64(4, (s32)rd32(c, (RW(20) + 0))); goto L_002AE0B0;
L_002AE0A0:;
SET64(3, (s32)rd32(c, (RW(20) + 16)));
SET32(18, RW(18) + RW(3)); { POLL(); goto L_002AE00C; }
L_002AE0AC:;
SET64(4, (s32)rd32(c, (RW(20) + 0)));
L_002AE0B0:;
SET64(31, 0x2ae0b8);  JP_F_00100430(c);
wr32(c, (RW(20) + 0), RW(16));
wr32(c, (RW(20) + 8), RW(17)); goto L_002AE144;
L_002AE0C4:;
{ int t = RSD(5) <= 0; SET32(8, RW(5) + -1); if (t) goto L_002AE128; }
SET32(3, RW(8) << 2);
SET32(7, RW(6) + RW(3));
SET32(6, RW(9) + RW(3));
L_002AE0D8:;
SET64(5, (s32)rd32(c, (RW(7) + 0)));
SET64(3, RD(8) + RD(0));
SET32(8, RW(8) + -1);
wr32(c, (RW(6) + 0), RW(5));
SET32(7, RW(7) + -4);
{ int t = RSD(3) > 0; SET32(6, RW(6) + -4); if (t) { POLL(); goto L_002AE0D8; } }
 goto L_002AE128;
L_002AE0FC:;
SET64(3, RD(8) + RD(0));
{ int t = RSD(3) <= 0; SET32(8, RW(8) + -1); if (t) goto L_002AE128; }
L_002AE108:;
SET64(5, (s32)rd32(c, (RW(6) + 0)));
SET64(3, RD(8) + RD(0));
SET32(8, RW(8) + -1);
wr32(c, (RW(9) + 0), RW(5));
SET32(6, RW(6) + 4);
{ int t = RSD(3) > 0; SET32(9, RW(9) + 4); if (t) { POLL(); goto L_002AE108; } }
L_002AE128:;
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 0), RW(19));
SET64(3, (s32)rd32(c, (RW(20) + 16)));
SET32(3, RW(3) + 1);
wr32(c, (RW(20) + 16), RW(3)); goto L_002AE170;
L_002AE144:;
SET64(3, (s32)rd32(c, (RW(20) + 0)));
SET32(4, RW(18) << 2);
SET64(5, (s32)rd32(c, (RW(20) + 16)));
SET32(6, RW(3) + RW(4));
SET32(9, RW(6) + 4);
SET32(5, RW(5) - RW(18));
SET64(1, RSD(6) < RSD(9));
{ int t = RD(1) == RD(0); SET64(8, RD(5) + RD(0)); if (t) { POLL(); goto L_002AE0FC; } }
 { POLL(); goto L_002AE0C4; }
L_002AE170:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002AE190(Ctx *c) { /* func_002AE190 */
ENTER(0x2ae190);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AE1CC; }
SET64(31, 0x2ae1b4); SET64(4, (s32)rd32(c, (RW(17) + 0))); JP_F_00100430(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AE1D0; }
SET64(31, 0x2ae1cc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AE1CC:;
SET64(2, RD(17) + RD(0));
L_002AE1D0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AE1F0(Ctx *c) { /* func_002AE1F0 */
ENTER(0x2ae1f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x2ae218); SET32(4, RW(17) << 2); JP_F_00100530(c);
wr32(c, (RW(18) + 0), RW(2));
wr32(c, (RW(18) + 4), RW(17));
{ int t = RD(16) == RD(0); wr32(c, (RW(18) + 8), RW(17)); if (t) goto L_002AE230; }
wr32(c, (RW(18) + 12), RW(16)); goto L_002AE238;
L_002AE230:;
SET64(16, RD(17) + RD(0));
wr32(c, (RW(18) + 12), RW(16));
L_002AE238:;
SET64(2, RD(18) + RD(0));
wr32(c, (RW(18) + 16), RW(0));
wr8(c, (RW(18) + 20), (u8)RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AE260(Ctx *c) { /* func_002AE260 */
ENTER(0x2ae260);
SET64(12, (s32)rd32(c, (RW(4) + 0)));
SET64(8, (s32)rd32(c, (RW(5) + 0)));
SET64(11, (s32)rd32(c, (RW(4) + 4)));
SET64(7, (s32)rd32(c, (RW(5) + 4)));
SET64(10, (s32)rd32(c, (RW(4) + 8)));
SET64(6, (s32)rd32(c, (RW(5) + 8)));
SET64(9, (s32)rd32(c, (RW(4) + 12)));
SET64(3, (s32)rd32(c, (RW(5) + 12)));
wr32(c, (RW(4) + 0), RW(8));
wr32(c, (RW(4) + 4), RW(7));
wr32(c, (RW(5) + 0), RW(12));
wr32(c, (RW(4) + 8), RW(6));
wr32(c, (RW(5) + 4), RW(11));
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(5) + 8), RW(10));
wr32(c, (RW(5) + 12), RW(9)); return;
}

void JP_F_002AE2B0(Ctx *c) { /* func_002AE2B0 */
ENTER(0x2ae2b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AE300; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5944);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 16), RW(2)); if (t) goto L_002AE2E8; }
SET64(31, 0x2ae2e8);  JP_F_00100430(c);
L_002AE2E8:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AE304; }
SET64(31, 0x2ae300); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AE300:;
SET64(2, RD(17) + RD(0));
L_002AE304:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AE320(Ctx *c) { /* func_002AE320 */
ENTER(0x2ae320);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 8), RW(6));
SET32(2, RW(2) + 5944);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 16), RW(2));
wr32(c, (RW(4) + 4), RW(0));
{ int t = RD(8) != RD(0); wr32(c, (RW(4) + 12), RW(7)); if (t) goto L_002AE36C; }
L_002AE340:;
{ int t = RD(5) == RD(0); SET64(2, RD(4) + RD(0)); if (t) goto L_002AE364; }
SET32(3, RW(7) + -1);
SET64(2, ~(RD(7) | RD(0)));
SET32(3, RW(5) + RW(3));
SET32(2, RW(2) + 1);
SET64(2, RD(2) & RD(3));
wr32(c, (RW(4) + 4), RW(2));
SET64(2, RD(4) + RD(0));
L_002AE364:;
 goto L_002AE374;
L_002AE36C:;
wr32(c, (RW(4) + 0), RW(5)); { POLL(); goto L_002AE340; }
L_002AE374:;
 return;
}

void JP_F_002AE380(Ctx *c) { /* func_002AE380 */
ENTER(0x2ae380);
SET32(29, RW(29) + -48);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 32), RD(31));
SET32(2, RW(2) + 5944);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(6) + RD(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 16), RW(2));
wr32(c, (RW(4) + 8), RW(5));
{ int t = RSD(5) > 0; wr32(c, (RW(4) + 12), RW(16)); if (t) goto L_002AE3C0; }
L_002AE3B8:;
SET64(2, RD(17) + RD(0)); goto L_002AE3FC;
L_002AE3C0:;
SET32(2, RW(5) + -1);
div_s(c, 0, RSW(2), RSW(16));
SET64(2, c->lo.d[0]);
SET32(2, RW(2) + 1);
mul_s(c, 0, 2, RSW(16), RSW(2));
SET64(31, 0x2ae3dc); SET32(4, RW(2) + RW(16)); JP_F_00100530(c);
SET32(3, RW(16) + -1);
wr32(c, (RW(17) + 0), RW(2));
SET32(3, RW(2) + RW(3));
SET64(2, ~(RD(16) | RD(0)));
SET32(2, RW(2) + 1);
SET64(2, RD(2) & RD(3));
wr32(c, (RW(17) + 4), RW(2)); { POLL(); goto L_002AE3B8; }
L_002AE3FC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AE410(Ctx *c) { /* func_002AE410 */
ENTER(0x2ae410);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET64(16, RD(4) + RD(0));
SET32(2, RW(2) + -1);
{ int t = RSD(2) <= 0; wr32(c, (RW(4) + 8), RW(2)); if (t) goto L_002AE438; }
SET64(2, RD(0) + RD(0)); goto L_002AE460;
L_002AE438:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ae450);  rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(31, 0x2ae45c); SET64(4, RD(2) + RD(0)); JP_F_002AD930(c);
SET32(2, RW(0) + 1);
L_002AE460:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AE470(Ctx *c) { /* func_002AE470 */
ENTER(0x2ae470);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AE4B8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5968);
SET64(31, 0x2ae4a0); wr32(c, (RW(17) + 0), RW(2)); JP_F_002AD480(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AE4BC; }
SET64(31, 0x2ae4b8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AE4B8:;
SET64(2, RD(17) + RD(0));
L_002AE4BC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AE4D0(Ctx *c) { /* func_002AE4D0 */
ENTER(0x2ae4d0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2ae4f4); SET64(16, RD(6) + RD(0)); JP_F_002AD4E0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(4, (s64)(s32)0x540000);
SET32(2, RW(2) + 5968);
SET32(4, RW(4) + 1896);
wr32(c, (RW(18) + 0), RW(2));
SET64(5, RD(18) + RD(0));
wr32(c, (RW(18) + 4), RW(17));
SET64(31, 0x2ae518); wr32(c, (RW(18) + 8), RW(16)); JP_F_002AD290(c);
{ int t = RD(2) == RD(0); SET64(17, (s64)(s32)0x540000); if (t) goto L_002AE528; }
L_002AE520:;
SET64(2, RD(18) + RD(0)); goto L_002AE588;
L_002AE528:;
SET32(4, RW(0) + 20);
SET64(31, 0x2ae534); SET32(17, RW(17) + 1896); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002AE574; }
SET64(31, 0x2ae544); SET64(4, RD(16) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(4, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5936);
SET32(4, RW(4) + 5760);
wr32(c, (RW(16) + 0), RW(2));
SET32(3, RW(0) + 128);
wr32(c, (RW(16) + 4), RW(0));
SET32(2, RW(0) + 1);
wr32(c, (RW(16) + 0), RW(4));
wr32(c, (RW(16) + 8), RW(18));
wr32(c, (RW(16) + 12), RW(3));
wr8(c, (RW(16) + 16), (u8)RW(2));
L_002AE574:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ae580); SET64(5, RD(16) + RD(0)); JP_F_002AD320(c);
 { POLL(); goto L_002AE520; }
L_002AE588:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AE5A0(Ctx *c) { /* func_002AE5A0 */
ENTER(0x2ae5a0);
L_002AE5A0:;
SET64(5, (s32)rd32(c, (RW(4) + 16)));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25);  switch (t) { case 0x2ae5a0: goto L_002AE5A0; default: rt_jump(c, t); return; } }
}

void JP_F_002AE5C0(Ctx *c) { /* func_002AE5C0 */
ENTER(0x2ae5c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2ae5e4); SET64(16, RD(6) + RD(0)); JP_F_002AF190(c);
SET32(2, RW(0) + 32);
SET64(3, (s64)(s32)0x4e0000);
wr32(c, (RW(18) + 12), RW(2));
SET32(3, RW(3) + 5984);
wr32(c, (RW(18) + 8), RW(17));
SET64(2, RD(18) + RD(0));
wr32(c, (RW(18) + 16), RW(16));
wr32(c, (RW(18) + 0), RW(3));
wr32(c, (RW(18) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AE620(Ctx *c) { /* func_002AE620 */
ENTER(0x2ae620);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AE66C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 5984);
SET64(31, 0x2ae650); wr32(c, (RW(17) + 0), RW(2)); JP_F_002ACB80(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AE670; }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ae66c); SET32(5, RW(0) + 20); JP_F_002AC940(c);
L_002AE66C:;
SET64(2, RD(17) + RD(0));
L_002AE670:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AE690(Ctx *c) { /* func_002AE690 */
ENTER(0x2ae690);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(20, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(20) == RD(0); wr32(c, (RW(29) + 172), RW(4)); if (t) goto L_002AE79C; }
{ int t = RD(21) == RD(0);  if (t) goto L_002AE79C; }
SET64(19, (s32)rd32(c, (RW(21) + 4)));
{ int t = RD(19) == RD(0);  if (t) goto L_002AE798; }
{ int t = RD(20) == RD(0);  if (t) goto L_002AE798; }
SET64(18, (s32)rd32(c, (RW(20) + 4)));
{ int t = RD(18) == RD(0);  if (t) goto L_002AE794; }
{ int t = RD(19) == RD(0);  if (t) goto L_002AE794; }
SET64(17, (s32)rd32(c, (RW(19) + 4)));
{ int t = RD(17) == RD(0);  if (t) goto L_002AE790; }
{ int t = RD(18) == RD(0);  if (t) goto L_002AE790; }
SET64(16, (s32)rd32(c, (RW(18) + 4)));
{ int t = RD(16) == RD(0);  if (t) goto L_002AE78C; }
{ int t = RD(17) == RD(0);  if (t) goto L_002AE78C; }
SET64(22, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(22) == RD(0);  if (t) goto L_002AE788; }
{ int t = RD(16) == RD(0);  if (t) goto L_002AE788; }
SET64(23, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(23) == RD(0);  if (t) goto L_002AE784; }
{ int t = RD(22) == RD(0);  if (t) goto L_002AE784; }
SET64(30, (s32)rd32(c, (RW(22) + 4)));
{ int t = RD(30) == RD(0);  if (t) goto L_002AE780; }
{ int t = RD(23) == RD(0);  if (t) goto L_002AE780; }
SET64(5, (s32)rd32(c, (RW(23) + 4)));
{ int t = RD(5) == RD(0);  if (t) goto L_002AE77C; }
{ int t = RD(30) == RD(0); SET64(4, RD(30) + RD(0)); if (t) goto L_002AE77C; }
SET64(31, 0x2ae77c);  JP_F_002AE690(c);
L_002AE77C:;
wr32(c, (RW(23) + 4), RW(30));
L_002AE780:;
wr32(c, (RW(22) + 4), RW(23));
L_002AE784:;
wr32(c, (RW(16) + 4), RW(22));
L_002AE788:;
wr32(c, (RW(17) + 4), RW(16));
L_002AE78C:;
wr32(c, (RW(18) + 4), RW(17));
L_002AE790:;
wr32(c, (RW(19) + 4), RW(18));
L_002AE794:;
wr32(c, (RW(20) + 4), RW(19));
L_002AE798:;
wr32(c, (RW(21) + 4), RW(20));
L_002AE79C:;
SET64(2, (s32)rd32(c, (RW(29) + 172)));
wr32(c, (RW(2) + 4), RW(21));
SET64(2, RD(21) + RD(0));
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

void JP_F_002AE7E0(Ctx *c) { /* func_002AE7E0 */
ENTER(0x2ae7e0);
{ int t = RD(5) == RD(0); SET64(2, RD(4) + RD(0)); if (t) goto L_002AE84C; }
{ int t = RD(4) == RD(5);  if (t) goto L_002AE854; }
{ int t = RD(5) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002AE860; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0); SET64(3, RD(4) + RD(0)); if (t) goto L_002AE828; }
L_002AE804:;
{ int t = RD(2) != RD(5);  if (t) goto L_002AE814; }
 goto L_002AE82C;
L_002AE814:;
SET64(3, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 4)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002AE804; } }
L_002AE828:;
SET64(3, RD(0) + RD(0));
L_002AE82C:;
{ int t = RD(3) == RD(0); SET64(2, RD(4) + RD(0)); if (t) goto L_002AE844; }
SET64(2, (s32)rd32(c, (RW(5) + 4)));
wr32(c, (RW(3) + 4), RW(2));
wr32(c, (RW(5) + 4), RW(0));
SET64(2, RD(4) + RD(0));
L_002AE844:;
 goto L_002AE868;
L_002AE84C:;
 goto L_002AE868;
L_002AE854:;
SET64(2, (s32)rd32(c, (RW(4) + 4)));
wr32(c, (RW(4) + 4), RW(0)); goto L_002AE868;
L_002AE860:;
 { POLL(); goto L_002AE82C; }
L_002AE868:;
 return;
}

void JP_F_002AE870(Ctx *c) { /* func_002AE870 */
ENTER(0x2ae870);
{ int t = RD(5) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002AE8A8; }
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) == RD(0);  if (t) goto L_002AE8B0; }
L_002AE884:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002AE884; } }
wr32(c, (RW(4) + 4), RW(5)); goto L_002AE8B4;
L_002AE8A8:;
 goto L_002AE8B8;
L_002AE8B0:;
wr32(c, (RW(4) + 4), RW(5));
L_002AE8B4:;
SET64(2, RD(5) + RD(0));
L_002AE8B8:;
 return;
}

void JP_F_002AE8C0(Ctx *c) { /* func_002AE8C0 */
ENTER(0x2ae8c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AE92C; }
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(2, (s64)(s32)0x4d0000);
SET32(2, RW(2) + 5936);
{ int t = RD(4) == RD(0); wr32(c, (RW(17) + 0), RW(2)); if (t) goto L_002AE908; }
{ int t = RD(4) == RD(0);  if (t) goto L_002AE908; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ae908); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AE908:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ae914); SET64(5, RD(0) + RD(0)); JP_F_002AF140(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AE930; }
SET64(31, 0x2ae92c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002AE92C:;
SET64(2, RD(17) + RD(0));
L_002AE930:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AE950(Ctx *c) { /* func_002AE950 */
ENTER(0x2ae950);
c->f[5].u = rd32(c, (RW(4) + 4));
SET64(2, RD(4) + RD(0));
c->f[4].u = rd32(c, (RW(4) + 16));
c->f[3].u = rd32(c, (RW(4) + 8));
c->f[2].u = rd32(c, (RW(4) + 32));
c->f[1].u = rd32(c, (RW(4) + 36));
c->f[0].u = rd32(c, (RW(4) + 24));
wr32(c, (RW(4) + 4), c->f[4].u);
wr32(c, (RW(4) + 16), c->f[5].u);
wr32(c, (RW(4) + 8), c->f[2].u);
wr32(c, (RW(4) + 32), c->f[3].u);
wr32(c, (RW(4) + 36), c->f[0].u);
wr32(c, (RW(4) + 24), c->f[1].u); return;
}

void JP_F_002AE990(Ctx *c) { /* func_002AE990 */
ENTER(0x2ae990);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 8), c->f[22].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(31, 0x2ae9b0); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_001186A0(c);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 16) & ~15u, (GPR *)&c->vf[5]);
rd128(c, (RW(16) + 32) & ~15u, (GPR *)&c->vf[6]);
rd128(c, (RW(16) + 48) & ~15u, (GPR *)&c->vf[7]);
vu0_exec(c, 0x4bc7222a);
vu0_exec(c, 0x4b084201);
vu0_exec(c, 0x4b084202);
vu0_exec(c, 0x4bc72a6a);
vu0_exec(c, 0x4b094a41);
vu0_exec(c, 0x4b094a42);
vu0_exec(c, 0x4bc732aa);
vu0_exec(c, 0x4b0a5281);
vu0_exec(c, 0x4b0a5282);
memcpy(&c->r[2], &c->vf[8], 16);
c->f[22].u = RW(2);
memcpy(&c->r[2], &c->vf[9], 16);
c->f[21].u = RW(2);
memcpy(&c->r[2], &c->vf[10], 16);
c->f[20].u = RW(2);
SET64(31, 0x2aea04);  JP_F_001186F8(c);
SET64(3, (s64)(s32)0xbf800000);
SET64(2, RD(16) + RD(0));
c->f[2].u = RW(3);
c->f[5].u = rd32(c, (RW(16) + 4));
c->f[0].f = fpu(F(2) * F(22));
wr32(c, (RW(16) + 48), c->f[0].u);
c->f[1].f = fpu(F(2) * F(21));
c->f[0].f = fpu(F(2) * F(20));
c->f[4].u = rd32(c, (RW(16) + 16));
wr32(c, (RW(16) + 52), c->f[1].u);
wr32(c, (RW(16) + 56), c->f[0].u);
c->f[3].u = rd32(c, (RW(16) + 8));
c->f[2].u = rd32(c, (RW(16) + 32));
c->f[1].u = rd32(c, (RW(16) + 36));
c->f[0].u = rd32(c, (RW(16) + 24));
wr32(c, (RW(16) + 4), c->f[4].u);
wr32(c, (RW(16) + 16), c->f[5].u);
wr32(c, (RW(16) + 8), c->f[2].u);
wr32(c, (RW(16) + 32), c->f[3].u);
wr32(c, (RW(16) + 36), c->f[0].u);
wr32(c, (RW(16) + 24), c->f[1].u);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[22].u = rd32(c, (RW(29) + 8));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_002AEA80(Ctx *c) { /* func_002AEA80 */
ENTER(0x2aea80);
SET32(29, RW(29) + -96);
SET64(6, RD(5) + RD(0));
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET32(4, RW(29) + 32);
SET64(31, 0x2aeaa0); SET64(5, RD(16) + RD(0)); JP_F_002AEAE0(c);
rd128(c, (RW(29) + 32) & ~15u, &c->r[6]);
SET64(2, RD(16) + RD(0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[6]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[4]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002AEAE0(Ctx *c) { /* func_002AEAE0 */
ENTER(0x2aeae0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(31, 0x2aeb04); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
SET32(3, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(17) + 16) & ~15u, (GPR *)&c->vf[5]);
rd128(c, (RW(17) + 32) & ~15u, (GPR *)&c->vf[6]);
rd128(c, (RW(17) + 48) & ~15u, (GPR *)&c->vf[7]);
SET32(2, RW(0) + 4);
L_002AEB1C:;
rd128(c, (RW(18) + 0) & ~15u, (GPR *)&c->vf[8]);
vu0_exec(c, 0x4be821bc);
vu0_exec(c, 0x4be828bd);
vu0_exec(c, 0x4be830be);
vu0_exec(c, 0x4be83a4b);
wr128(c, (RW(3) + 0) & ~15u, (GPR *)&c->vf[9]);
SET32(2, RW(2) + -1);
SET32(3, RW(3) + 16);
{ int t = RD(0) != RD(2); SET32(18, RW(18) + 16); if (t) { POLL(); goto L_002AEB1C; } }
SET64(31, 0x2aeb4c);  JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[5]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[4]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[6]);
wr128(c, (RW(16) + 16) & ~15u, &c->r[5]);
wr128(c, (RW(16) + 32) & ~15u, &c->r[4]);
wr128(c, (RW(16) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002AEB90(Ctx *c) { /* func_002AEB90 */
ENTER(0x2aeb90);
c->f[2].u = rd32(c, (RW(5) + 0));
SET64(2, RD(4) + RD(0));
c->f[1].u = rd32(c, (RW(5) + 4));
c->f[0].u = rd32(c, (RW(5) + 8));
wr32(c, (RW(4) + 0), c->f[2].u);
wr32(c, (RW(4) + 20), c->f[1].u);
wr32(c, (RW(4) + 40), c->f[0].u); return;
}

void JP_F_002AEBB0(Ctx *c) { /* func_002AEBB0 */
ENTER(0x2aebb0);
SET32(29, RW(29) + -448);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 80), RD(31));
SET32(6, RW(29) + 416);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(4, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(18, RW(29) + 440);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(17, RW(29) + 420);
SET32(16, RW(29) + 436);
SET32(19, RW(29) + 424);
wr32(c, (RW(29) + 444), RW(2));
SET32(5, RW(29) + 432);
wr32(c, (RW(29) + 428), RW(2));
wr32(c, (RW(29) + 432), RW(0));
wr32(c, (RW(29) + 416), RW(0));
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(17) + 0), RW(0));
SET64(31, 0x2aec14); wr32(c, (RW(19) + 0), RW(0)); JP_F_002AF9D0(c);
SET64(31, 0x2aec1c);  JP_F_001186A0(c);
SET32(2, RW(29) + 352);
vu0_exec(c, 0x4be4033d);
vu0_exec(c, 0x4be5233d);
vu0_exec(c, 0x4be62b3d);
wr128(c, (RW(2) + 48) & ~15u, (GPR *)&c->vf[0]);
wr128(c, (RW(2) + 32) & ~15u, (GPR *)&c->vf[4]);
wr128(c, (RW(2) + 16) & ~15u, (GPR *)&c->vf[5]);
SET64(31, 0x2aec40); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
c->f[0].u = rd32(c, (RW(18) + 0));
SET32(3, RW(29) + 352);
c->f[1].u = rd32(c, (RW(19) + 0));
SET32(2, RW(29) + 368);
wr32(c, (RW(3) + 4), c->f[0].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(3) + 0), c->f[1].u);
wr32(c, (RW(2) + 4), c->f[1].u);
SET64(31, 0x2aec68); wr32(c, (RW(2) + 0), c->f[0].u); JP_F_001186A0(c);
SET32(2, RW(29) + 288);
vu0_exec(c, 0x4be4033d);
vu0_exec(c, 0x4be5233d);
vu0_exec(c, 0x4be62b3d);
wr128(c, (RW(2) + 48) & ~15u, (GPR *)&c->vf[0]);
wr128(c, (RW(2) + 32) & ~15u, (GPR *)&c->vf[4]);
wr128(c, (RW(2) + 16) & ~15u, (GPR *)&c->vf[5]);
SET64(31, 0x2aec8c); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
c->f[0].u = rd32(c, (RW(16) + 0));
SET32(2, RW(29) + 320);
c->f[1].u = rd32(c, (RW(17) + 0));
SET32(3, RW(29) + 288);
wr32(c, (RW(2) + 0), c->f[0].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(3) + 0), c->f[1].u);
wr32(c, (RW(2) + 8), c->f[1].u);
SET64(31, 0x2aecb4); wr32(c, (RW(3) + 8), c->f[0].u); JP_F_001186A0(c);
SET32(2, RW(29) + 224);
vu0_exec(c, 0x4be4033d);
vu0_exec(c, 0x4be5233d);
vu0_exec(c, 0x4be62b3d);
wr128(c, (RW(2) + 48) & ~15u, (GPR *)&c->vf[0]);
wr128(c, (RW(2) + 32) & ~15u, (GPR *)&c->vf[4]);
wr128(c, (RW(2) + 16) & ~15u, (GPR *)&c->vf[5]);
SET64(31, 0x2aecd8); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
c->f[0].u = rd32(c, (RW(29) + 432));
SET32(3, RW(29) + 240);
c->f[1].u = rd32(c, (RW(29) + 416));
SET32(2, RW(29) + 256);
SET32(4, RW(29) + 96);
SET32(5, RW(29) + 352);
SET32(6, RW(29) + 288);
wr32(c, (RW(3) + 8), c->f[0].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(3) + 4), c->f[1].u);
wr32(c, (RW(2) + 8), c->f[1].u);
SET64(31, 0x2aed0c); wr32(c, (RW(2) + 4), c->f[0].u); JP_F_002AEAE0(c);
SET32(4, RW(29) + 160);
SET32(5, RW(29) + 96);
SET64(31, 0x2aed1c); SET32(6, RW(29) + 224); JP_F_002AEAE0(c);
SET32(7, RW(29) + 160);
rd128(c, (RW(20) + 48) & ~15u, &c->r[6]);
rd128(c, (RW(7) + 0) & ~15u, &c->r[5]);
SET64(2, RD(20) + RD(0));
rd128(c, (RW(7) + 16) & ~15u, &c->r[4]);
rd128(c, (RW(7) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(7) + 48) & ~15u, &c->r[6]);
wr128(c, (RW(20) + 0) & ~15u, &c->r[5]);
wr128(c, (RW(20) + 16) & ~15u, &c->r[4]);
wr128(c, (RW(20) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(20) + 48) & ~15u, &c->r[6]);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 448); return;
}

void JP_F_002AED70(Ctx *c) { /* func_002AED70 */
ENTER(0x2aed70);
SET32(29, RW(29) + -448);
SET64(2, (s64)(s32)0x3f800000);
wr64(c, (RW(29) + 80), RD(31));
SET32(6, RW(29) + 416);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(4, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(18, RW(29) + 440);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(17, RW(29) + 420);
SET32(16, RW(29) + 436);
SET32(19, RW(29) + 424);
wr32(c, (RW(29) + 444), RW(2));
SET32(5, RW(29) + 432);
wr32(c, (RW(29) + 428), RW(2));
wr32(c, (RW(29) + 432), RW(0));
wr32(c, (RW(29) + 416), RW(0));
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(18) + 0), RW(0));
wr32(c, (RW(17) + 0), RW(0));
SET64(31, 0x2aedd4); wr32(c, (RW(19) + 0), RW(0)); JP_F_002AF9D0(c);
SET64(31, 0x2aeddc);  JP_F_001186A0(c);
SET32(2, RW(29) + 352);
vu0_exec(c, 0x4be4033d);
vu0_exec(c, 0x4be5233d);
vu0_exec(c, 0x4be62b3d);
wr128(c, (RW(2) + 48) & ~15u, (GPR *)&c->vf[0]);
wr128(c, (RW(2) + 32) & ~15u, (GPR *)&c->vf[4]);
wr128(c, (RW(2) + 16) & ~15u, (GPR *)&c->vf[5]);
SET64(31, 0x2aee00); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
c->f[0].u = rd32(c, (RW(18) + 0));
SET32(3, RW(29) + 352);
c->f[1].u = rd32(c, (RW(19) + 0));
SET32(2, RW(29) + 368);
wr32(c, (RW(3) + 4), c->f[0].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(3) + 0), c->f[1].u);
wr32(c, (RW(2) + 4), c->f[1].u);
SET64(31, 0x2aee28); wr32(c, (RW(2) + 0), c->f[0].u); JP_F_001186A0(c);
SET32(2, RW(29) + 288);
vu0_exec(c, 0x4be4033d);
vu0_exec(c, 0x4be5233d);
vu0_exec(c, 0x4be62b3d);
wr128(c, (RW(2) + 48) & ~15u, (GPR *)&c->vf[0]);
wr128(c, (RW(2) + 32) & ~15u, (GPR *)&c->vf[4]);
wr128(c, (RW(2) + 16) & ~15u, (GPR *)&c->vf[5]);
SET64(31, 0x2aee4c); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
c->f[0].u = rd32(c, (RW(16) + 0));
SET32(2, RW(29) + 320);
c->f[1].u = rd32(c, (RW(17) + 0));
SET32(3, RW(29) + 288);
wr32(c, (RW(2) + 0), c->f[0].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(3) + 0), c->f[1].u);
wr32(c, (RW(2) + 8), c->f[1].u);
SET64(31, 0x2aee74); wr32(c, (RW(3) + 8), c->f[0].u); JP_F_001186A0(c);
SET32(2, RW(29) + 224);
vu0_exec(c, 0x4be4033d);
vu0_exec(c, 0x4be5233d);
vu0_exec(c, 0x4be62b3d);
wr128(c, (RW(2) + 48) & ~15u, (GPR *)&c->vf[0]);
wr128(c, (RW(2) + 32) & ~15u, (GPR *)&c->vf[4]);
wr128(c, (RW(2) + 16) & ~15u, (GPR *)&c->vf[5]);
SET64(31, 0x2aee98); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
c->f[0].u = rd32(c, (RW(29) + 432));
SET32(3, RW(29) + 240);
c->f[1].u = rd32(c, (RW(29) + 416));
SET32(2, RW(29) + 256);
SET32(4, RW(29) + 96);
SET32(5, RW(29) + 224);
SET32(6, RW(29) + 288);
wr32(c, (RW(3) + 8), c->f[0].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(3) + 4), c->f[1].u);
wr32(c, (RW(2) + 8), c->f[1].u);
SET64(31, 0x2aeecc); wr32(c, (RW(2) + 4), c->f[0].u); JP_F_002AEAE0(c);
SET32(4, RW(29) + 160);
SET32(5, RW(29) + 96);
SET64(31, 0x2aeedc); SET32(6, RW(29) + 352); JP_F_002AEAE0(c);
SET32(7, RW(29) + 160);
rd128(c, (RW(20) + 48) & ~15u, &c->r[6]);
rd128(c, (RW(7) + 0) & ~15u, &c->r[5]);
SET64(2, RD(20) + RD(0));
rd128(c, (RW(7) + 16) & ~15u, &c->r[4]);
rd128(c, (RW(7) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(7) + 48) & ~15u, &c->r[6]);
wr128(c, (RW(20) + 0) & ~15u, &c->r[5]);
wr128(c, (RW(20) + 16) & ~15u, &c->r[4]);
wr128(c, (RW(20) + 32) & ~15u, &c->r[3]);
wr128(c, (RW(20) + 48) & ~15u, &c->r[6]);
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 448); return;
}

void JP_F_002AEF30(Ctx *c) { /* func_002AEF30 */
ENTER(0x2aef30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2aef4c); c->f[20].u = c->f[12].u; JP_F_0011F6F0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x2aef58); c->f[20].u = c->f[0].u; JP_F_0011F450(c);
wr32(c, (RW(16) + 0), c->f[0].u);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 20), c->f[0].u);
c->f[0].u = c->f[20].u ^ 0x80000000u;
wr32(c, (RW(16) + 4), c->f[20].u);
wr32(c, (RW(16) + 16), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AEF90(Ctx *c) { /* func_002AEF90 */
ENTER(0x2aef90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2aefac); c->f[20].u = c->f[12].u; JP_F_0011F6F0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x2aefb8); c->f[20].u = c->f[0].u; JP_F_0011F450(c);
wr32(c, (RW(16) + 0), c->f[0].u);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 40), c->f[0].u);
c->f[0].u = c->f[20].u ^ 0x80000000u;
wr32(c, (RW(16) + 32), c->f[20].u);
wr32(c, (RW(16) + 8), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AEFF0(Ctx *c) { /* func_002AEFF0 */
ENTER(0x2aeff0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2af00c); c->f[20].u = c->f[12].u; JP_F_0011F6F0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x2af018); c->f[20].u = c->f[0].u; JP_F_0011F450(c);
wr32(c, (RW(16) + 20), c->f[0].u);
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 40), c->f[0].u);
c->f[0].u = c->f[20].u ^ 0x80000000u;
wr32(c, (RW(16) + 24), c->f[20].u);
wr32(c, (RW(16) + 36), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AF050(Ctx *c) { /* func_002AF050 */
ENTER(0x2af050);
c->f[3].u = rd32(c, (RW(5) + 0));
SET32(3, RW(6) << 2);
c->f[2].u = rd32(c, (RW(5) + 4));
SET32(3, RW(4) + RW(3));
c->f[1].u = rd32(c, (RW(5) + 8));
c->f[0].u = rd32(c, (RW(5) + 12));
wr32(c, (RW(3) + 0), c->f[3].u);
wr32(c, (RW(3) + 16), c->f[2].u);
wr32(c, (RW(3) + 32), c->f[1].u);
wr32(c, (RW(3) + 48), c->f[0].u); return;
}

void JP_F_002AF080(Ctx *c) { /* func_002AF080 */
ENTER(0x2af080);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2af094); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
vu0_exec(c, 0x4be4033d);
vu0_exec(c, 0x4be5233d);
vu0_exec(c, 0x4be62b3d);
wr128(c, (RW(16) + 48) & ~15u, (GPR *)&c->vf[0]);
wr128(c, (RW(16) + 32) & ~15u, (GPR *)&c->vf[4]);
wr128(c, (RW(16) + 16) & ~15u, (GPR *)&c->vf[5]);
SET64(31, 0x2af0b4); wr128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AF0D0(Ctx *c) { /* func_002AF0D0 */
ENTER(0x2af0d0);
c->f[7].u = rd32(c, (RW(29) + 0));
SET64(2, RD(4) + RD(0));
c->f[6].u = rd32(c, (RW(29) + 8));
c->f[5].u = rd32(c, (RW(29) + 16));
c->f[4].u = rd32(c, (RW(29) + 24));
c->f[3].u = rd32(c, (RW(29) + 32));
c->f[2].u = rd32(c, (RW(29) + 40));
c->f[1].u = rd32(c, (RW(29) + 48));
c->f[0].u = rd32(c, (RW(29) + 56));
wr32(c, (RW(4) + 0), c->f[12].u);
wr32(c, (RW(4) + 4), c->f[13].u);
wr32(c, (RW(4) + 8), c->f[14].u);
wr32(c, (RW(4) + 12), c->f[15].u);
wr32(c, (RW(4) + 16), c->f[16].u);
wr32(c, (RW(4) + 20), c->f[17].u);
wr32(c, (RW(4) + 24), c->f[18].u);
wr32(c, (RW(4) + 28), c->f[19].u);
wr32(c, (RW(4) + 32), c->f[7].u);
wr32(c, (RW(4) + 36), c->f[6].u);
wr32(c, (RW(4) + 40), c->f[5].u);
wr32(c, (RW(4) + 44), c->f[4].u);
wr32(c, (RW(4) + 48), c->f[3].u);
wr32(c, (RW(4) + 52), c->f[2].u);
wr32(c, (RW(4) + 56), c->f[1].u);
wr32(c, (RW(4) + 60), c->f[0].u); return;
}

void JP_F_002AF140(Ctx *c) { /* func_002AF140 */
ENTER(0x2af140);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002AF17C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6000);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002AF178; }
SET64(31, 0x2af178);  JP_F_001004B0(c);
L_002AF178:;
SET64(2, RD(16) + RD(0));
L_002AF17C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AF190(Ctx *c) { /* func_002AF190 */
ENTER(0x2af190);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6000);
wr32(c, (RW(4) + 0), RW(2));
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002AF1B0(Ctx *c) { /* func_002AF1B0 */
ENTER(0x2af1b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RSD(6) <= 0; wr32(c, (RW(4) + 0), RW(7)); if (t) goto L_002AF22C; }
SET64(1, RSD(6) < (s64)7);
{ int t = RD(1) == RD(0); SET32(2, RW(6) << 2); if (t) goto L_002AF220; }
SET32(2, RW(6) << 2);
SET32(2, RW(18) + RW(2));
SET32(17, RW(2) + -4);
SET64(1, RD(18) < RD(17));
{ int t = RD(1) == RD(0); SET64(2, RD(19) + RD(0)); if (t) goto L_002AF230; }
L_002AF1FC:;
SET64(2, RD(18) < RD(17));
{ int t = RD(2) != RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002AF238; }
L_002AF208:;
SET32(17, RW(17) + -4);
SET64(1, RD(18) < RD(17));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_002AF1FC; } }
 goto L_002AF22C;
L_002AF220:;
SET32(2, RW(18) + RW(2));
SET64(31, 0x2af22c); SET32(6, RW(2) + -4); JP_F_002AF2A0(c);
L_002AF22C:;
SET64(2, RD(19) + RD(0));
L_002AF230:;
 goto L_002AF278;
L_002AF238:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
{ u32 t = RW(2); SET64(31, 0x2af248); SET64(4, (s32)rd32(c, (RW(16) + 0))); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AF260; }
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(16) + 4), RW(2));
wr32(c, (RW(16) + 0), RW(3));
L_002AF260:;
SET32(16, RW(16) + 4);
SET64(2, RD(16) < RD(17));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002AF238; } }
 { POLL(); goto L_002AF208; }
L_002AF278:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AF2A0(Ctx *c) { /* func_002AF2A0 */
ENTER(0x2af2a0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 144), RD(31));
wr128(c, (RW(29) + 128) & ~15u, &c->r[30]);
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(19) - RW(20));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RSD(2) >= 0; SET32(3, RSW(2) >> 2); if (t) goto L_002AF2EC; }
SET32(2, RW(2) + 3);
SET32(3, RSW(2) >> 2);
L_002AF2EC:;
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002AF2FC; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002AF2FC:;
SET32(2, RW(2) << 2);
SET64(23, (s32)rd32(c, (RW(20) + 0)));
SET32(30, RW(20) + RW(2));
SET64(22, (s32)rd32(c, (RW(19) + 0)));
SET64(18, (s32)rd32(c, (RW(30) + 0)));
SET32(17, RW(20) + 4);
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET32(16, RW(19) + -4);
SET64(4, RD(23) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2af328); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AF380; }
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(4, RD(18) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2af340); SET64(5, RD(22) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AF3D0; }
wr32(c, (RW(20) + 0), RW(22));
wr32(c, (RW(19) + 0), RW(23));
L_002AF350:;
SET64(3, RD(17) < RD(19));
L_002AF354:;
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) != RD(0); SET64(3, RD(20) < RD(16)); if (t) goto L_002AF40C; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2af370); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) > 0;  if (t) goto L_002AF408; }
SET32(17, RW(17) + 4); { POLL(); goto L_002AF350; }
L_002AF380:;
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(4, RD(18) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2af390); SET64(5, RD(22) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0; SET64(3, RD(17) < RD(19)); if (t) { POLL(); goto L_002AF354; } }
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(4, RD(23) + RD(0));
SET64(5, RD(22) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2af3ac); wr32(c, (RW(19) + 0), RW(18)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AF3C4; }
wr32(c, (RW(30) + 0), RW(23));
SET64(18, RD(23) + RD(0));
wr32(c, (RW(20) + 0), RW(22)); { POLL(); goto L_002AF350; }
L_002AF3C4:;
wr32(c, (RW(30) + 0), RW(22));
SET64(18, RD(22) + RD(0)); { POLL(); goto L_002AF350; }
L_002AF3D0:;
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(4, RD(23) + RD(0));
SET64(5, RD(22) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2af3e4); wr32(c, (RW(20) + 0), RW(18)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AF3FC; }
wr32(c, (RW(30) + 0), RW(22));
SET64(18, RD(22) + RD(0));
wr32(c, (RW(19) + 0), RW(23)); { POLL(); goto L_002AF350; }
L_002AF3FC:;
wr32(c, (RW(30) + 0), RW(23));
SET64(18, RD(23) + RD(0)); { POLL(); goto L_002AF350; }
L_002AF408:;
SET64(3, RD(20) < RD(16));
L_002AF40C:;
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002AF438; }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2af428); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) > 0;  if (t) goto L_002AF438; }
SET32(16, RW(16) + -4); { POLL(); goto L_002AF408; }
L_002AF438:;
SET64(3, RD(17) < RD(16));
{ int t = RD(3) != RD(0);  if (t) goto L_002AF490; }
SET64(1, RD(20) < RD(16));
L_002AF448:;
{ int t = RD(1) == RD(0); SET64(1, RD(17) < RD(19)); if (t) goto L_002AF544; }
SET32(3, RW(20) + 24);
SET64(3, RD(3) < RD(16));
{ int t = RD(3) != RD(0);  if (t) goto L_002AF530; }
SET64(1, RD(20) < RD(16));
{ int t = RD(1) == RD(0);  if (t) goto L_002AF540; }
L_002AF46C:;
SET64(3, RD(20) < RD(16));
{ int t = RD(3) != RD(0); SET64(18, RD(20) + RD(0)); if (t) goto L_002AF590; }
L_002AF478:;
SET32(16, RW(16) + -4);
SET64(1, RD(20) < RD(16));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_002AF46C; } }
 goto L_002AF540;
L_002AF490:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET32(17, RW(17) + 4);
L_002AF4A4:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2af4b4); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AF500; }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2af4cc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AF508; }
L_002AF4D8:;
SET64(1, RD(17) < RD(16));
{ int t = RD(1) == RD(0); SET64(1, RD(20) < RD(16)); if (t) { POLL(); goto L_002AF448; } }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET32(17, RW(17) + 4); { POLL(); goto L_002AF4A4; }
L_002AF500:;
SET32(17, RW(17) + 4); { POLL(); goto L_002AF4A4; }
L_002AF508:;
SET32(16, RW(16) + -4);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2af51c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) { POLL(); goto L_002AF508; } }
 { POLL(); goto L_002AF4D8; }
L_002AF530:;
SET64(5, RD(20) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2af540); SET64(4, RD(21) + RD(0)); JP_F_002AF2A0(c);
L_002AF540:;
SET64(1, RD(17) < RD(19));
L_002AF544:;
{ int t = RD(1) == RD(0);  if (t) goto L_002AF628; }
SET32(3, RW(17) + 24);
SET64(3, RD(3) < RD(19));
{ int t = RD(3) != RD(0);  if (t) goto L_002AF5D0; }
SET64(1, RD(17) < RD(19));
{ int t = RD(1) == RD(0);  if (t) goto L_002AF628; }
L_002AF568:;
SET64(3, RD(17) < RD(19));
{ int t = RD(3) != RD(0); SET64(16, RD(17) + RD(0)); if (t) goto L_002AF5E8; }
L_002AF578:;
SET32(19, RW(19) + -4);
SET64(1, RD(17) < RD(19));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_002AF568; } }
 goto L_002AF5E0;
L_002AF590:;
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2af5a0); SET64(4, (s32)rd32(c, (RW(18) + 0))); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AF5B8; }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(18) + 4), RW(3));
wr32(c, (RW(18) + 0), RW(4));
L_002AF5B8:;
SET32(18, RW(18) + 4);
SET64(3, RD(18) < RD(16));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002AF590; } }
 { POLL(); goto L_002AF478; }
L_002AF5D0:;
SET64(4, RD(21) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2af5e0); SET64(6, RD(19) + RD(0)); JP_F_002AF2A0(c);
L_002AF5E0:;
 goto L_002AF628;
L_002AF5E8:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2af5f8); SET64(4, (s32)rd32(c, (RW(16) + 0))); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AF610; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(16) + 4), RW(3));
wr32(c, (RW(16) + 0), RW(4));
L_002AF610:;
SET32(16, RW(16) + 4);
SET64(3, RD(16) < RD(19));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002AF5E8; } }
 { POLL(); goto L_002AF578; }
L_002AF628:;
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

void JP_F_002AF660(Ctx *c) { /* func_002AF660 */
ENTER(0x2af660);
SET32(29, RW(29) + -176);
rd128(c, (RW(6) + 0) & ~15u, &c->r[2]);
wr64(c, (RW(29) + 32), RD(31));
SET64(3, (s64)(s32)0x3f800000);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET32(4, RW(29) + 160);
wr32(c, (RW(29) + 156), RW(3));
c->f[21].u = c->f[12].u;
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
rd128(c, (RW(5) + 0) & ~15u, &c->r[2]);
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 164), RW(0));
wr32(c, (RW(29) + 168), RW(0));
wr32(c, (RW(29) + 172), RW(3));
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
SET64(31, 0x2af6bc); SET32(5, RW(29) + 144); JP_F_002B01C0(c);
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
{ int t = c->fcc; SET64(2, (s64)(s32)0xbf800000); if (t) goto L_002AF708; }
SET64(3, (s64)(s32)0x3f800000);
L_002AF6D4:;
c->f[1].u = RW(3);
c->fcc = F(0) < F(1);
{ int t = c->fcc; c->f[12].u = c->f[0].u; if (t) goto L_002AF734; }
L_002AF6E8:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0));
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_002AF7C0;
L_002AF708:;
SET32(4, RW(29) + 128);
c->f[12].u = RW(2);
SET64(31, 0x2af718); SET32(5, RW(29) + 144); JP_F_002AFCA0(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET32(4, RW(29) + 160);
SET32(5, RW(29) + 144);
SET64(31, 0x2af72c); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); JP_F_002B01C0(c);
SET64(3, (s64)(s32)0x3f800000); { POLL(); goto L_002AF6D4; }
L_002AF734:;
SET64(31, 0x2af73c);  JP_F_0011F880(c);
c->f[20].u = c->f[0].u;
c->f[21].f = fpu(F(20) * F(21));
SET64(31, 0x2af74c); c->f[12].f = fpu(F(20) - F(21)); JP_F_0011F6F0(c);
c->f[12].u = c->f[0].u;
SET32(4, RW(29) + 112);
SET64(31, 0x2af75c); SET32(5, RW(29) + 160); JP_F_002AFCA0(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
c->f[12].u = c->f[21].u;
SET64(31, 0x2af76c); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_0011F6F0(c);
c->f[12].u = c->f[0].u;
SET32(4, RW(29) + 96);
SET64(31, 0x2af77c); SET32(5, RW(29) + 144); JP_F_002AFCA0(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
SET32(4, RW(29) + 48);
SET32(5, RW(29) + 160);
SET32(6, RW(29) + 144);
SET64(31, 0x2af794); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); JP_F_002AFD10(c);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
c->f[12].u = c->f[20].u;
SET64(31, 0x2af7a4); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); JP_F_0011F6F0(c);
c->f[12].u = c->f[0].u;
SET32(4, RW(29) + 64);
SET64(31, 0x2af7b4); SET32(5, RW(29) + 160); JP_F_002AFC30(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[3]); { POLL(); goto L_002AF6E8; }
L_002AF7C0:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 176); return;
}

void JP_F_002AF7E0(Ctx *c) { /* func_002AF7E0 */
ENTER(0x2af7e0);
SET32(29, RW(29) + -64);
SET64(3, (s64)(s32)0x40000000);
c->f[6].u = rd32(c, (RW(5) + 0));
wr32(c, (RW(29) + 0), RW(0));
c->f[12].u = rd32(c, (RW(5) + 4));
wr32(c, (RW(29) + 4), RW(0));
c->f[1].u = rd32(c, (RW(5) + 8));
wr32(c, (RW(29) + 8), RW(0));
c->f[0].u = rd32(c, (RW(5) + 12));
wr32(c, (RW(29) + 28), RW(0));
c->f[2].u = RW(3);
wr32(c, (RW(29) + 44), RW(0));
c->f[4].u = RW(0);
wr32(c, (RW(29) + 60), RW(0));
c->f[13].f = fpu(F(6) * F(6));
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 12), RW(5));
c->f[8].f = fpu(F(1) * F(6));
rd128(c, (RW(29) + 0) & ~15u, &c->r[3]);
c->f[7].f = fpu(F(6) * F(12));
wr128(c, (RW(4) + 48) & ~15u, &c->r[3]);
c->f[5].f = fpu(F(0) * F(1));
c->f[6].f = fpu(F(0) * F(6));
c->f[10].f = fpu(F(1) * F(1));
c->f[9].f = fpu(F(12) * F(1));
c->f[0].f = fpu(F(0) * F(12));
c->f[1].f = fpu(F(8) + F(0));
c->f[0].f = fpu(F(8) - F(0));
c->f[0].f = fpu(F(2) * F(0));
c->f[1].f = fpu(F(2) * F(1));
wr32(c, (RW(29) + 56), c->f[0].u);
c->f[0].f = fpu(F(9) + F(6));
wr32(c, (RW(29) + 16), c->f[1].u);
c->f[1].f = fpu(F(9) - F(6));
c->f[0].f = fpu(F(2) * F(0));
c->f[1].f = fpu(F(2) * F(1));
c->f[3].u = RW(5);
wr32(c, (RW(29) + 20), c->f[1].u);
c->f[11].f = fpu(F(12) * F(12));
wr32(c, (RW(29) + 40), c->f[0].u);
c->f[0].f = fpu(F(13) + F(11));
c->facc = fpu(F(4) + F(3));
c->f[0].f = fpu(c->facc - F(2) * F(0));
wr32(c, (RW(29) + 24), c->f[0].u);
rd128(c, (RW(29) + 16) & ~15u, &c->r[3]);
c->f[1].f = fpu(F(10) + F(13));
c->facc = fpu(F(4) + F(3));
c->f[1].f = fpu(c->facc - F(2) * F(1));
wr32(c, (RW(29) + 36), c->f[1].u);
wr128(c, (RW(4) + 32) & ~15u, &c->r[3]);
c->f[1].f = fpu(F(7) - F(5));
c->f[1].f = fpu(F(2) * F(1));
wr32(c, (RW(29) + 32), c->f[1].u);
rd128(c, (RW(29) + 32) & ~15u, &c->r[3]);
c->f[0].f = fpu(F(11) + F(10));
c->facc = fpu(F(4) + F(3));
c->f[0].f = fpu(c->facc - F(2) * F(0));
wr32(c, (RW(29) + 48), c->f[0].u);
wr128(c, (RW(4) + 16) & ~15u, &c->r[3]);
c->f[0].f = fpu(F(7) + F(5));
c->f[0].f = fpu(F(2) * F(0));
wr32(c, (RW(29) + 52), c->f[0].u);
rd128(c, (RW(29) + 48) & ~15u, &c->r[5]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[5]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002AF8F0(Ctx *c) { /* func_002AF8F0 */
ENTER(0x2af8f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2af908); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_001186A0(c);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
vu0_exec(c, 0x4be4216a);
vu0_exec(c, 0x4b052941);
vu0_exec(c, 0x4b052942);
vu0_exec(c, 0x4b052943);
vu0_exec(c, 0x4a0503bd);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4b000160);
memcpy(&c->r[2], &c->vf[5], 16);
c->f[20].u = RW(2);
SET64(31, 0x2af938);  JP_F_001186F8(c);
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_002AF950(Ctx *c) { /* func_002AF950 */
ENTER(0x2af950);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(2, RD(16) < RD(5));
{ int t = RD(2) != RD(0);  if (t) goto L_002AF9A0; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(1, RD(5) < RD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_002AF9AC; }
L_002AF97C:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(1, RD(5) < RD(2));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_002AF97C; } }
 goto L_002AF9AC;
L_002AF9A0:;
wr32(c, (RW(5) + 4), RW(16));
SET64(2, RD(5) + RD(0)); goto L_002AF9B8;
L_002AF9AC:;
SET64(31, 0x2af9b4);  JP_F_002AE690(c);
SET64(2, RD(16) + RD(0));
L_002AF9B8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002AF9D0(Ctx *c) { /* func_002AF9D0 */
ENTER(0x2af9d0);
SET32(29, RW(29) + -176);
SET64(2, (s64)(s32)0x3fa20000);
wr64(c, (RW(29) + 112), RD(31));
SET64(2, RD(2) | 0xf983);
wr128(c, (RW(29) + 96) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(17, RW(29) + 164);
wr32(c, (RW(29) + 4), c->f[21].u);
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[20].u = RW(2);
SET64(31, 0x2afa1c); SET32(16, RW(29) + 168); JP_F_001186A0(c);
SET64(3, (s32)c->f[20].u);
SET32(2, RW(29) + 160);
if (5) memcpy(&c->vf[5], &c->r[3], 16);
rd128(c, (RW(21) + 0) & ~15u, (GPR *)&c->vf[4]);
vu0_exec(c, 0x4bc520d8);
vu0_exec(c, 0x4bc2197c);
SET64(31, 0x2afa3c); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[2]); JP_F_001186F8(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(6, (s32)rd32(c, (RW(29) + 160)));
c->f[20].u = RW(2);
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET32(5, RW(0) + -2);
SET64(2, (s64)(s32)0x3f490000);
SET32(18, RW(29) + 160);
SET64(2, RD(2) | 0xfdb);
c->f[21].u = RW(2);
SET32(2, RSW(6) >> 31);
SET32(6, RW(6) + RW(2));
SET32(2, RSW(4) >> 31);
SET32(2, RW(4) + RW(2));
SET32(2, RW(2) + 1);
SET32(4, RW(6) + 1);
SET64(2, RD(2) & RD(5));
SET64(4, RD(4) & RD(5));
wr32(c, (RW(17) + 0), RW(2));
SET32(2, RSW(3) >> 31);
wr32(c, (RW(29) + 160), RW(4));
SET32(2, RW(3) + RW(2));
SET32(2, RW(2) + 1);
SET64(2, RD(2) & RD(5));
SET64(31, 0x2afaa4); wr32(c, (RW(16) + 0), RW(2)); JP_F_001186A0(c);
SET64(3, (s64)(s32)0x4c0000);
SET64(2, (s64)(s32)0x4c0000);
SET64(4, RD(18) + RD(0));
SET32(6, RW(29) + 128);
SET32(5, RW(29) + 144);
SET32(3, RW(3) + -28832);
SET32(2, RW(2) + -28848);
rd128(c, (RW(4) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4bc5293c);
SET64(4, (s32)c->f[21].u);
if (6) memcpy(&c->vf[6], &c->r[4], 16);
vu0_exec(c, 0x4bc62898);
rd128(c, (RW(21) + 0) & ~15u, (GPR *)&c->vf[4]);
vu0_exec(c, 0x4bc0003f);
vu0_exec(c, 0x4bc2212c);
rd128(c, (RW(3) + 0) & ~15u, (GPR *)&c->vf[6]);
vu0_exec(c, 0x4bc4222a);
rd128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[7]);
vu0_exec(c, 0x4bc4426a);
vu0_exec(c, 0x4bc842aa);
vu0_exec(c, 0x4bc640bc);
vu0_exec(c, 0x4bc84aea);
vu0_exec(c, 0x4bc94b2a);
vu0_exec(c, 0x4bc9536a);
vu0_exec(c, 0x4bca53aa);
vu0_exec(c, 0x4bca5bea);
vu0_exec(c, 0x4bc650bd);
vu0_exec(c, 0x4bc660be);
vu0_exec(c, 0x4bc6708b);
vu0_exec(c, 0x4bc0203c);
vu0_exec(c, 0x4bc748bc);
vu0_exec(c, 0x4bc758bd);
vu0_exec(c, 0x4bc768be);
vu0_exec(c, 0x4bc778cb);
wr128(c, (RW(6) + 0) & ~15u, (GPR *)&c->vf[2]);
SET64(31, 0x2afb3c); wr128(c, (RW(5) + 0) & ~15u, (GPR *)&c->vf[3]); JP_F_001186F8(c);
SET64(9, RD(0) + RD(0));
SET32(8, RW(29) + 128);
SET64(7, RD(20) + RD(0));
SET32(6, RW(29) + 144);
SET64(5, RD(19) + RD(0));
L_002AFB50:;
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(3, RD(4) & 0x2);
{ int t = RD(3) == RD(0); SET64(3, RD(4) & 0x4); if (t) goto L_002AFB98; }
{ int t = RD(3) == RD(0);  if (t) goto L_002AFB80; }
c->f[1].u = rd32(c, (RW(8) + 0));
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[1].u = c->f[1].u ^ 0x80000000u;
wr32(c, (RW(7) + 0), c->f[1].u);
wr32(c, (RW(5) + 0), c->f[0].u); goto L_002AFBD0;
L_002AFB80:;
c->f[1].u = rd32(c, (RW(8) + 0));
c->f[0].u = rd32(c, (RW(6) + 0));
wr32(c, (RW(7) + 0), c->f[1].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(5) + 0), c->f[0].u); goto L_002AFBD0;
L_002AFB98:;
SET64(3, RD(4) & 0x4);
{ int t = RD(3) == RD(0);  if (t) goto L_002AFBC0; }
c->f[1].u = rd32(c, (RW(6) + 0));
c->f[0].u = rd32(c, (RW(8) + 0));
c->f[1].u = c->f[1].u ^ 0x80000000u;
wr32(c, (RW(7) + 0), c->f[1].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(5) + 0), c->f[0].u); goto L_002AFBD0;
L_002AFBC0:;
c->f[1].u = rd32(c, (RW(6) + 0));
c->f[0].u = rd32(c, (RW(8) + 0));
wr32(c, (RW(7) + 0), c->f[1].u);
wr32(c, (RW(5) + 0), c->f[0].u);
L_002AFBD0:;
SET32(9, RW(9) + 1);
SET64(3, RSD(9) < (s64)3);
SET32(18, RW(18) + 4);
SET32(8, RW(8) + 4);
SET32(7, RW(7) + 4);
SET32(6, RW(6) + 4);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002AFB50; } }
wr32(c, (RW(19) + 12), c->f[20].u);
wr32(c, (RW(20) + 12), c->f[20].u);
SET64(31, rd64(c, (RW(29) + 112)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 96) & ~15u, &c->r[21]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 80) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002AFC30(Ctx *c) { /* func_002AFC30 */
ENTER(0x2afc30);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2afc54); c->f[20].u = c->f[12].u; JP_F_001186A0(c);
SET64(3, (s32)c->f[20].u);
SET32(2, RW(29) + 64);
if (4) memcpy(&c->vf[4], &c->r[3], 16);
vu0_exec(c, 0x4a6403bc);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4be0299c);
SET64(31, 0x2afc78); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AFCA0(Ctx *c) { /* func_002AFCA0 */
ENTER(0x2afca0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2afcc4); c->f[20].u = c->f[12].u; JP_F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
SET64(3, (s32)c->f[20].u);
if (5) memcpy(&c->vf[5], &c->r[3], 16);
vu0_exec(c, 0x4be52198);
SET64(31, 0x2afce4); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AFD10(Ctx *c) { /* func_002AFD10 */
ENTER(0x2afd10);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2afd34); SET64(16, RD(6) + RD(0)); JP_F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521a8);
SET64(31, 0x2afd4c); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AFD70(Ctx *c) { /* func_002AFD70 */
ENTER(0x2afd70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2afd8c); SET64(16, RD(5) + RD(0)); JP_F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
rd128(c, (RW(16) + 16) & ~15u, (GPR *)&c->vf[6]);
rd128(c, (RW(16) + 32) & ~15u, (GPR *)&c->vf[7]);
rd128(c, (RW(16) + 48) & ~15u, (GPR *)&c->vf[8]);
vu0_exec(c, 0x4be429bc);
vu0_exec(c, 0x4be430bd);
vu0_exec(c, 0x4be438be);
vu0_exec(c, 0x4be4424b);
SET64(31, 0x2afdb8); wr128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[9]); JP_F_001186F8(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002AFDD0(Ctx *c) { /* func_002AFDD0 */
ENTER(0x2afdd0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2afdf4); SET64(16, RD(6) + RD(0)); JP_F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
rd128(c, (RW(16) + 16) & ~15u, (GPR *)&c->vf[6]);
rd128(c, (RW(16) + 32) & ~15u, (GPR *)&c->vf[7]);
rd128(c, (RW(16) + 48) & ~15u, (GPR *)&c->vf[8]);
vu0_exec(c, 0x4be429bc);
vu0_exec(c, 0x4be430bd);
vu0_exec(c, 0x4be438be);
vu0_exec(c, 0x4be4424b);
SET64(31, 0x2afe24); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[9]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AFE50(Ctx *c) { /* func_002AFE50 */
ENTER(0x2afe50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2afe6c); c->f[20].u = c->f[12].u; JP_F_001186A0(c);
SET64(2, (s32)c->f[20].u);
if (4) memcpy(&c->vf[4], &c->r[2], 16);
vu0_exec(c, 0x4a6403bc);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4be0299c);
SET64(31, 0x2afe90); wr128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_002AFEB0(Ctx *c) { /* func_002AFEB0 */
ENTER(0x2afeb0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2afed4); c->f[20].u = c->f[12].u; JP_F_001186A0(c);
SET64(3, (s32)c->f[20].u);
SET32(2, RW(29) + 64);
if (4) memcpy(&c->vf[4], &c->r[3], 16);
vu0_exec(c, 0x4a6403bc);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4be0299c);
SET64(31, 0x2afef8); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AFF20(Ctx *c) { /* func_002AFF20 */
ENTER(0x2aff20);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2aff44); c->f[20].u = c->f[12].u; JP_F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
SET64(3, (s32)c->f[20].u);
if (5) memcpy(&c->vf[5], &c->r[3], 16);
vu0_exec(c, 0x4be52198);
SET64(31, 0x2aff64); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002AFF90(Ctx *c) { /* func_002AFF90 */
ENTER(0x2aff90);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2affb4); SET64(16, RD(6) + RD(0)); JP_F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521ac);
SET64(31, 0x2affcc); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

static void JP_B_002AFFF0(Ctx *c, u32 entry) { /* func_002AFFF0 */
ENTER(entry);
switch (entry) { case 0x2b0000: goto L_002B0000; case 0x2b0018: goto L_002B0018; case 0x2b001c: goto L_002B001C; case 0x2b0020: goto L_002B0020; case 0x2b0024: goto L_002B0024; case 0x2b0028: goto L_002B0028; case 0x2b002c: goto L_002B002C; case 0x2b0034: goto L_002B0034; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
L_002B0000:;
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b000c); SET64(16, RD(5) + RD(0)); JP_F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521a8);
L_002B0018:;
SET64(31, 0x2b0020); wr128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
if (0) { L_002B001C:; wr128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[6]); }
L_002B0020:;
SET64(2, RD(17) + RD(0));
L_002B0024:;
SET64(31, rd64(c, (RW(29) + 32)));
L_002B0028:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
L_002B002C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
if (0) { L_002B0034:; SET32(29, RW(29) + 48); }
}
void JP_F_002AFFF0(Ctx *c) { JP_B_002AFFF0(c, 0x2afff0); }
void JP_F_002B0000(Ctx *c) { JP_B_002AFFF0(c, 0x2b0000); }
void JP_F_002B0018(Ctx *c) { JP_B_002AFFF0(c, 0x2b0018); }
void JP_F_002B001C(Ctx *c) { JP_B_002AFFF0(c, 0x2b001c); }
void JP_F_002B0020(Ctx *c) { JP_B_002AFFF0(c, 0x2b0020); }
void JP_F_002B0024(Ctx *c) { JP_B_002AFFF0(c, 0x2b0024); }
void JP_F_002B0028(Ctx *c) { JP_B_002AFFF0(c, 0x2b0028); }
void JP_F_002B002C(Ctx *c) { JP_B_002AFFF0(c, 0x2b002c); }
void JP_F_002B0034(Ctx *c) { JP_B_002AFFF0(c, 0x2b0034); }

static void JP_B_002B0040(Ctx *c, u32 entry) { /* func_002B0040 */
ENTER(entry);
switch (entry) { case 0x2b0044: goto L_002B0044; }
SET32(29, RW(29) + -80);
L_002B0044:;
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2b0064); SET64(16, RD(6) + RD(0)); JP_F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521a8);
SET64(31, 0x2b007c); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}
void JP_F_002B0040(Ctx *c) { JP_B_002B0040(c, 0x2b0040); }
void JP_F_002B0044(Ctx *c) { JP_B_002B0040(c, 0x2b0044); }

void JP_F_002B00A0(Ctx *c) { /* func_002B00A0 */
ENTER(0x2b00a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b00bc); SET64(16, RD(5) + RD(0)); JP_F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521aa);
SET64(31, 0x2b00d0); wr128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B00F0(Ctx *c) { /* func_002B00F0 */
ENTER(0x2b00f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2b0114); SET64(16, RD(6) + RD(0)); JP_F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521aa);
SET64(31, 0x2b012c); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002B0150(Ctx *c) { /* func_002B0150 */
ENTER(0x2b0150);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2b0174); SET64(16, RD(6) + RD(0)); JP_F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4bc522fe);
vu0_exec(c, 0x4bc429ae);
vu0_exec(c, 0x4a26033c);
SET64(31, 0x2b0194); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); JP_F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002B01C0(Ctx *c) { /* func_002B01C0 */
ENTER(0x2b01c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2b01e0); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521aa);
vu0_exec(c, 0x4b063181);
vu0_exec(c, 0x4b063182);
vu0_exec(c, 0x4b063183);
memcpy(&c->r[2], &c->vf[6], 16);
c->f[20].u = RW(2);
SET64(31, 0x2b0208);  JP_F_001186F8(c);
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B0230(Ctx *c) { /* func_002B0230 */
ENTER(0x2b0230);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2b0250); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4bc521aa);
vu0_exec(c, 0x4b063181);
vu0_exec(c, 0x4b063182);
memcpy(&c->r[2], &c->vf[6], 16);
c->f[20].u = RW(2);
SET64(31, 0x2b0274);  JP_F_001186F8(c);
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B0290(Ctx *c) { /* func_002B0290 */
ENTER(0x2b0290);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2b02a8); wr32(c, (RW(29) + 0), c->f[20].u); JP_F_001186A0(c);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
vu0_exec(c, 0x4bc4216a);
vu0_exec(c, 0x4b052941);
vu0_exec(c, 0x4b052942);
vu0_exec(c, 0x4a0503bd);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4b0001a0);
memcpy(&c->r[2], &c->vf[6], 16);
c->f[20].u = RW(2);
SET64(31, 0x2b02d4);  JP_F_001186F8(c);
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

static void JP_B_002B02F0(Ctx *c, u32 entry) { /* func_002B02F0 */
ENTER(entry);
switch (entry) { case 0x2b0320: goto L_002B0320; }
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
SET64(31, 0x2b0314); c->f[20].u = c->f[13].u; JP_F_001186A0(c);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
SET64(2, (s32)c->f[21].u);
L_002B0320:;
if (5) memcpy(&c->vf[5], &c->r[2], 16);
SET64(2, (s32)c->f[20].u);
if (6) memcpy(&c->vf[6], &c->r[2], 16);
vu0_exec(c, 0x4be521d0);
vu0_exec(c, 0x4be63a14);
SET64(31, 0x2b0340); wr128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[8]); JP_F_001186F8(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}
void JP_F_002B02F0(Ctx *c) { JP_B_002B02F0(c, 0x2b02f0); }
void JP_F_002B0320(Ctx *c) { JP_B_002B02F0(c, 0x2b0320); }

void JP_F_002B0360(Ctx *c) { /* func_002B0360 */
ENTER(0x2b0360);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b0374); SET64(16, RD(4) + RD(0)); JP_F_001186A0(c);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
vu0_exec(c, 0x4bc4216a);
vu0_exec(c, 0x4b052941);
vu0_exec(c, 0x4b052942);
vu0_exec(c, 0x4a6503be);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4bc0211c);
SET64(31, 0x2b0398); wr128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]); JP_F_001186F8(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B03B0(Ctx *c) { /* func_002B03B0 */
ENTER(0x2b03b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002B03EC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6016);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 8), RW(3)); if (t) goto L_002B03E8; }
SET64(31, 0x2b03e8);  JP_F_001004B0(c);
L_002B03E8:;
SET64(2, RD(16) + RD(0));
L_002B03EC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B0400(Ctx *c) { /* func_002B0400 */
ENTER(0x2b0400);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(0) + 4);
SET32(2, RW(2) + 6016);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 8), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void JP_F_002B0420(Ctx *c) { /* func_002B0420 */
ENTER(0x2b0420);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RSD(2) < 0; SET64(17, RD(4) + RD(0)); if (t) goto L_002B0444; }
L_002B043C:;
SET64(2, (s32)rd32(c, (RW(17) + 4))); goto L_002B04EC;
L_002B0444:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2b0454); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET32(4, RW(0) + 12); if (t) goto L_002B0498; }
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 12); if (t) goto L_002B0470; }
SET64(25, (s32)rd32(c, (RW(16) + 0))); goto L_002B04BC;
L_002B0470:;
SET64(31, 0x2b0478);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002B0490; }
SET64(4, RD(2) + RD(0));
SET64(31, 0x2b048c); SET64(5, RD(17) + RD(0)); JP_F_002A0D70(c);
SET64(16, RD(2) + RD(0));
L_002B0490:;
 goto L_002B04B8;
L_002B0498:;
SET64(31, 0x2b04a0);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002B04B8; }
SET64(4, RD(2) + RD(0));
SET64(31, 0x2b04b4); SET64(5, RD(17) + RD(0)); JP_F_002A08D0(c);
SET64(16, RD(2) + RD(0));
L_002B04B8:;
SET64(25, (s32)rd32(c, (RW(16) + 0)));
L_002B04BC:;
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2b04c8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(16) == RD(0); wr32(c, (RW(17) + 4), RW(2)); if (t) { POLL(); goto L_002B043C; } }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b04e4); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002B043C; }
L_002B04EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B0500(Ctx *c) { /* func_002B0500 */
ENTER(0x2b0500);
SET64(2, (s32)rd32(c, (RW(4) + 0))); return;
}

void JP_F_002B0510(Ctx *c) { /* func_002B0510 */
ENTER(0x2b0510);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B0558; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6080);
SET64(31, 0x2b0540); wr32(c, (RW(17) + 8), RW(2)); JP_F_00100430(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B055C; }
SET64(31, 0x2b0558); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B0558:;
SET64(2, RD(17) + RD(0));
L_002B055C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B0570(Ctx *c) { /* func_002B0570 */
ENTER(0x2b0570);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 32), RD(31));
SET32(3, RW(3) + 6080);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(0) + -1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 8), RW(3));
{ int t = RD(16) == RD(0); wr32(c, (RW(4) + 4), RW(2)); if (t) goto L_002B05C4; }
SET64(31, 0x2b05ac); SET64(4, RD(16) + RD(0)); JP_F_0012A4D8(c);
SET64(31, 0x2b05b4); SET32(4, RW(2) + 1); JP_F_00100530(c);
SET64(5, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, 0x2b05c4); SET64(4, RD(2) + RD(0)); JP_F_0012A3C0(c);
L_002B05C4:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B05E0(Ctx *c) { /* func_002B05E0 */
ENTER(0x2b05e0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002B061C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6048);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002B0618; }
SET64(31, 0x2b0618);  JP_F_001004B0(c);
L_002B0618:;
SET64(2, RD(16) + RD(0));
L_002B061C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B0630(Ctx *c) { /* func_002B0630 */
ENTER(0x2b0630);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6048);
wr32(c, (RW(4) + 0), RW(2));
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002B0650(Ctx *c) { /* func_002B0650 */
ENTER(0x2b0650);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 148)));
SET64(3, RD(3) & 0x6);
{ int t = RD(3) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B0674; }
L_002B066C:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B06AC;
L_002B0674:;
SET64(3, (s32)rd32(c, (RW(4) + 148)));
SET32(2, RW(0) + -3);
SET64(2, RD(3) & RD(2));
wr32(c, (RW(4) + 148), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b0694);  rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2b06a4); SET32(4, RW(4) + 1992); JP_F_002B4920(c);
 { POLL(); goto L_002B066C; }
L_002B06AC:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B06C0(Ctx *c) { /* func_002B06C0 */
ENTER(0x2b06c0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
{ int t = RD(7) == RD(0); SET64(16, RD(8) + RD(0)); if (t) goto L_002B07C4; }
SET64(3, (s32)rd32(c, (RW(19) + 140)));
SET32(2, RW(0) + 10);
SET64(4, (s32)rd32(c, (RW(19) + 144)));
SET64(7, (s16)rd16(c, (RW(28) + -31446)));
SET64(6, (s16)rd16(c, (RW(28) + -31444)));
SET64(5, (s16)rd16(c, (RW(28) + -31442)));
SET64(8, (s16)rd16(c, (RW(28) + -31448)));
SET32(3, RW(3) << 2);
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(29));
SET32(9, RW(4) + RW(3));
wr16(c, (RW(29) + 122), (u16)RW(7));
wr16(c, (RW(29) + 124), (u16)RW(6));
wr16(c, (RW(29) + 126), (u16)RW(5));
SET64(7, (s16)rd16(c, (RW(28) + -31440)));
SET64(6, (s16)rd16(c, (RW(28) + -31438)));
SET64(5, (s16)rd16(c, (RW(28) + -31436)));
SET64(4, (s16)rd16(c, (RW(28) + -31434)));
wr16(c, (RW(29) + 120), (u16)RW(8));
SET64(3, (s32)rd32(c, (RW(19) + 136)));
wr16(c, (RW(29) + 112), (u16)RW(7));
wr16(c, (RW(29) + 114), (u16)RW(6));
wr16(c, (RW(29) + 116), (u16)RW(5));
wr16(c, (RW(29) + 118), (u16)RW(4));
SET64(4, rd16(c, (RW(9) + 112)));
{ int t = RD(3) == RD(2); SET64(8, rd16(c, (RW(9) + 120))); if (t) goto L_002B0784; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_002B0784; }
{ int t = RD(3) == RD(0);  if (t) goto L_002B0778; }
SET64(20, RD(0) + RD(0)); goto L_002B078C;
L_002B0778:;
mul_s(c, 0, 2, RSW(8), RSW(4));
SET32(20, RW(2) << 2); goto L_002B078C;
L_002B0784:;
mul_s(c, 0, 2, RSW(8), RSW(4));
SET32(20, RW(2) << 1);
L_002B078C:;
SET64(31, 0x2b0794); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002B07A8; }
SET64(5, RD(20) + RD(0));
SET64(31, 0x2b07a8); SET32(6, RW(0) + 128); JP_F_002AE380(c);
L_002B07A8:;
wr32(c, (RW(19) + 132), RW(2));
SET64(5, RD(17) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x2b07bc); SET64(6, RD(20) + RD(0)); JP_F_00127218(c);
SET64(2, (s32)rd32(c, (RW(19) + 132)));
SET64(17, (s32)rd32(c, (RW(2) + 4)));
L_002B07C4:;
SET64(2, (s32)rd32(c, (RW(19) + 140)));
SET64(5, RD(17) + RD(0));
SET64(6, (s16)rd16(c, (RW(28) + -31434)));
SET64(4, RD(19) + RD(0));
SET64(3, (s32)rd32(c, (RW(19) + 144)));
SET32(9, RW(29) + 96);
SET64(10, (s16)rd16(c, (RW(28) + -31440)));
SET64(8, (s16)rd16(c, (RW(28) + -31438)));
SET64(7, (s16)rd16(c, (RW(28) + -31436)));
SET32(2, RW(2) << 2);
SET64(11, (s16)rd16(c, (RW(28) + -31448)));
wr16(c, (RW(29) + 134), (u16)RW(6));
SET32(2, RW(2) + RW(29));
SET32(3, RW(3) << 1);
wr32(c, (RW(29) + 96), RW(0));
wr16(c, (RW(29) + 128), (u16)RW(10));
SET32(6, RW(3) + RW(2));
wr16(c, (RW(29) + 130), (u16)RW(8));
wr16(c, (RW(29) + 132), (u16)RW(7));
SET64(10, (s16)rd16(c, (RW(28) + -31446)));
SET64(8, (s16)rd16(c, (RW(28) + -31444)));
SET64(7, (s16)rd16(c, (RW(28) + -31442)));
SET64(3, rd16(c, (RW(6) + 128)));
wr16(c, (RW(29) + 136), (u16)RW(11));
SET64(2, (s32)rd32(c, (RW(19) + 128)));
wr16(c, (RW(29) + 138), (u16)RW(10));
wr16(c, (RW(29) + 140), (u16)RW(8));
wr16(c, (RW(29) + 142), (u16)RW(7));
wr32(c, (RW(29) + 108), RW(3));
SET64(3, rd16(c, (RW(6) + 136)));
wr32(c, (RW(29) + 100), RW(0));
SET64(8, (s32)rd32(c, (RW(19) + 136)));
wr32(c, (RW(29) + 104), RW(3));
SET64(3, (s32)rd32(c, (RW(2) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 8)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET32(2, RW(2) + -1);
SET32(2, RSW(2) >> 6);
SET32(6, RSW(3) >> 6);
SET64(31, 0x2b0868); SET32(7, RW(2) + 1); JP_F_002B3900(c);
{ int t = RD(18) == RD(0);  if (t) goto L_002B08B4; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b0884); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_002B0884:;
{ int t = RD(16) == RD(0);  if (t) goto L_002B089C; }
SET64(2, (s32)rd32(c, (RW(19) + 148)));
SET64(2, RD(2) | 0x4);
wr32(c, (RW(19) + 148), RW(2)); goto L_002B08AC;
L_002B089C:;
SET64(3, (s32)rd32(c, (RW(19) + 148)));
SET32(2, RW(0) + -5);
SET64(2, RD(3) & RD(2));
wr32(c, (RW(19) + 148), RW(2));
L_002B08AC:;
SET64(2, RD(0) + RD(0)); goto L_002B08C4;
L_002B08B4:;
SET64(2, (s32)rd32(c, (RW(19) + 148)));
SET64(2, RD(2) | 0x2);
wr32(c, (RW(19) + 148), RW(2)); { POLL(); goto L_002B0884; }
L_002B08C4:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002B08F0(Ctx *c) { /* func_002B08F0 */
ENTER(0x2b08f0);
 return;
}

void JP_F_002B0900(Ctx *c) { /* func_002B0900 */
ENTER(0x2b0900);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 128)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B094C; }
SET64(2, (s32)rd32(c, (RW(16) + 148)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002B0944; }
{ int t = RD(4) == RD(0);  if (t) goto L_002B0944; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b0944); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B0944:;
wr32(c, (RW(16) + 128), RW(0));
wr32(c, (RW(16) + 148), RW(0));
L_002B094C:;
SET64(4, (s32)rd32(c, (RW(16) + 132)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B0974; }
{ int t = RD(4) == RD(0);  if (t) goto L_002B0970; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b0970); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B0970:;
wr32(c, (RW(16) + 132), RW(0));
L_002B0974:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B0990(Ctx *c) { /* func_002B0990 */
ENTER(0x2b0990);
SET64(2, (s32)rd32(c, (RW(4) + 128)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B09C4; }
SET64(2, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_002B09C0; }
SET64(3, (s32)rd32(c, (RW(4) + 148)));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 128), RW(5));
SET64(3, RD(3) | 0x1);
wr32(c, (RW(4) + 148), RW(3)); goto L_002B09C4;
L_002B09C0:;
SET64(2, RD(0) + RD(0));
L_002B09C4:;
 return;
}

void JP_F_002B09D0(Ctx *c) { /* func_002B09D0 */
ENTER(0x2b09d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 128)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B09F0; }
L_002B09E8:;
SET64(2, RD(0) + RD(0)); goto L_002B0A2C;
L_002B09F0:;
SET64(31, 0x2b09f8); SET32(4, RW(0) + 24); JP_F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002B0A18; }
SET64(5, (s32)rd32(c, (RW(16) + 140)));
SET64(4, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 144)));
SET64(7, (s32)rd32(c, (RW(16) + 136)));
SET64(31, 0x2b0a18); SET64(8, RD(0) + RD(0)); JP_F_002B2BD0(c);
L_002B0A18:;
wr32(c, (RW(16) + 128), RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_002B09E8; } }
SET32(2, RW(0) + 1);
L_002B0A2C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B0A40(Ctx *c) { /* func_002B0A40 */
ENTER(0x2b0a40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B0A9C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6112);
wr32(c, (RW(17) + 152), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2b0a78);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b0a84); SET32(5, RW(0) + -1); JP_F_002B3AB0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B0AA0; }
SET64(31, 0x2b0a9c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B0A9C:;
SET64(2, RD(17) + RD(0));
L_002B0AA0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B0AC0(Ctx *c) { /* func_002B0AC0 */
ENTER(0x2b0ac0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + 6112);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(16, RD(7) + RD(0));
SET64(31, 0x2b0af8); wr32(c, (RW(4) + 152), RW(2)); JP_F_002B3B10(c);
wr32(c, (RW(19) + 136), RW(16));
SET64(2, RD(19) + RD(0));
wr32(c, (RW(19) + 140), RW(18));
wr32(c, (RW(19) + 144), RW(17));
wr32(c, (RW(19) + 128), RW(0));
wr32(c, (RW(19) + 132), RW(0));
wr32(c, (RW(19) + 148), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002B0B30(Ctx *c) { /* func_002B0B30 */
ENTER(0x2b0b30);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B0BA0; }
{ int t = RSD(2) <= 0; SET32(18, RW(2) + -1); if (t) goto L_002B0BA0; }
L_002B0B5C:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(31, 0x2b0b68); SET64(5, RD(0) + RD(0)); JP_F_002ADD80(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x2b0b74); SET64(4, RD(17) + RD(0)); JP_F_00243AB0(c);
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_002B0B88; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2b0b88); SET64(6, RD(0) + RD(0)); JP_F_002B1910(c);
L_002B0B88:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(31, 0x2b0b94); SET64(5, RD(17) + RD(0)); JP_F_002ADE40(c);
SET64(2, RD(18) + RD(0));
{ int t = RSD(2) > 0; SET32(18, RW(18) + -1); if (t) { POLL(); goto L_002B0B5C; } }
L_002B0BA0:;
SET64(31, 0x2b0ba8); SET64(4, RD(16) + RD(0)); JP_F_002B1800(c);
SET64(31, 0x2b0bb0); SET64(4, RD(16) + RD(0)); JP_F_00243AB0(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x2b0bbc); SET64(4, RD(0) + RD(0)); JP_F_0010F8E0(c);
SET64(4, (s32)rd32(c, (RW(16) + 104)));
SET64(31, 0x2b0bc8); SET64(5, RD(17) + RD(0)); JP_F_00106138(c);
SET64(3, (s64)(s32)0x10000000);
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr16(c, (RW(16) + 108), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B0BF0(Ctx *c) { /* func_002B0BF0 */
ENTER(0x2b0bf0);
SET64(3, (s64)(s32)0x10000000);
SET64(5, rd16(c, (RW(4) + 108)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(0) + RD(0));
SET32(3, RW(3) - RW(5));
wr16(c, (RW(4) + 110), (u16)RW(3)); return;
}

void JP_F_002B0C10(Ctx *c) { /* func_002B0C10 */
ENTER(0x2b0c10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(28) + -29912)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B0C40; }
{ int t = RD(4) == RD(0);  if (t) goto L_002B0C3C; }
SET64(25, (s32)rd32(c, (RW(4) + 52)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b0c3c); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B0C3C:;
wr32(c, (RW(28) + -29912), RW(0));
L_002B0C40:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002B0C50(Ctx *c) { /* func_002B0C50 */
ENTER(0x2b0c50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -29912)));
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 112); if (t) goto L_002B0C74; }
SET64(2, RD(0) + RD(0)); goto L_002B0D2C;
L_002B0C74:;
SET64(31, 0x2b0c7c);  JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002B0C90; }
wr32(c, (RW(28) + -29912), RW(16));
L_002B0C88:;
SET64(2, RD(16) + RD(0)); goto L_002B0D2C;
L_002B0C90:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2b0c9c); SET32(5, RW(0) + 64); JP_F_002B1C20(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 5856);
SET32(17, RW(16) + 68);
wr32(c, (RW(16) + 64), RW(2));
SET32(3, RW(3) + 6160);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 52), RW(3));
SET32(2, RW(2) + 6172);
SET32(4, RW(17) + 12);
wr32(c, (RW(16) + 64), RW(2));
SET32(5, RW(0) + 64);
wr32(c, (RW(16) + 68), RW(4));
SET32(6, RW(0) + 4);
SET64(31, 0x2b0cdc); wr32(c, (RW(16) + 76), RW(4)); JP_F_002AE1F0(c);
wr32(c, (RW(17) + 4), RW(0));
SET32(4, RW(0) + 1);
SET64(31, 0x2b0cec); wr16(c, (RW(16) + 110), (u16)RW(0)); JP_F_00105E08(c);
wr32(c, (RW(16) + 104), RW(2));
SET64(3, RD(0) + (s64)64);
SET64(6, (s32)rd32(c, (RW(16) + 104)));
SET32(2, RW(0) + -65);
SET64(5, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(6) + 0)));
SET64(2, RD(4) & RD(2));
SET64(2, RD(2) | RD(3));
{ int t = RD(16) == RD(0); wr32(c, (RW(6) + 0), RW(2)); if (t) goto L_002B0D18; }
SET32(5, RW(16) + 64);
L_002B0D18:;
SET64(4, (s32)rd32(c, (RW(28) + -29920)));
SET64(31, 0x2b0d24); SET64(6, RD(0) + RD(0)); JP_F_002AB9D0(c);
wr32(c, (RW(28) + -29912), RW(16)); { POLL(); goto L_002B0C88; }
L_002B0D2C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B0D40(Ctx *c) { /* func_002B0D40 */
ENTER(0x2b0d40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002B0DC4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6160);
SET32(2, RW(2) + 6172);
wr32(c, (RW(16) + 52), RW(3));
SET64(5, RD(16) + RD(0));
{ int t = RD(16) == RD(0); wr32(c, (RW(16) + 64), RW(2)); if (t) goto L_002B0D80; }
SET32(5, RW(5) + 64);
L_002B0D80:;
SET64(31, 0x2b0d88); SET64(4, (s32)rd32(c, (RW(28) + -29920))); JP_F_002AB950(c);
SET32(2, RW(16) + 68);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002B0DA4; }
SET32(4, RW(16) + 80);
SET64(31, 0x2b0da0); SET64(5, RD(0) + RD(0)); JP_F_002AE190(c);
SET64(4, RD(16) + RD(0));
L_002B0DA4:;
SET64(31, 0x2b0dac); SET64(5, RD(0) + RD(0)); JP_F_002B1BC0(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002B0DC8; }
SET64(31, 0x2b0dc4); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002B0DC4:;
SET64(2, RD(16) + RD(0));
L_002B0DC8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B0DE0(Ctx *c) { /* func_002B0DE0 */
ENTER(0x2b0de0);
SET32(4, RW(4) + -64); { JP_F_002B0BF0(c); return; }
}

void JP_F_002B0DF0(Ctx *c) { /* func_002B0DF0 */
ENTER(0x2b0df0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B0E7C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6192);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 52), RW(2)); if (t) goto L_002B0E64; }
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 208);
SET32(2, RW(2) + 6224);
SET32(5, RW(0) + -1);
SET64(31, 0x2b0e34); wr32(c, (RW(17) + 52), RW(2)); JP_F_002AA640(c);
SET32(4, RW(17) + 160);
SET64(31, 0x2b0e40); SET32(5, RW(0) + -1); JP_F_002B4450(c);
SET32(4, RW(17) + 112);
SET64(31, 0x2b0e4c); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET32(4, RW(17) + 64);
SET64(31, 0x2b0e58); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b0e64); SET64(5, RD(0) + RD(0)); JP_F_002B1BC0(c);
L_002B0E64:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B0E80; }
SET64(31, 0x2b0e7c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B0E7C:;
SET64(2, RD(17) + RD(0));
L_002B0E80:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B0EA0(Ctx *c) { /* func_002B0EA0 */
ENTER(0x2b0ea0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b0eb4); SET64(16, RD(4) + RD(0)); JP_F_002B16C0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + 6192);
wr32(c, (RW(16) + 52), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B0EE0(Ctx *c) { /* func_002B0EE0 */
ENTER(0x2b0ee0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(28) + -29912)));
SET32(17, RW(17) + 2016);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
{ int t = RD(3) == RD(0); SET32(16, RW(17) + RW(2)); if (t) goto L_002B0F1C; }
SET32(4, RW(17) + 336); goto L_002B0F20;
L_002B0F1C:;
SET32(4, RW(17) + 96);
L_002B0F20:;
SET64(2, (s64)(s32)0x12000000);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, rd64(c, (RW(2) + 4096)));
SET32(5, RW(0) + 2048);
SET64(6, RD(5) + RD(0));
SET64(3, RD(3) << 62);
SET64(2, RD(2) >> 13);
SET64(3, RD(3) >> 63);
SET64(2, RD(2) & 0x1);
SET64(2, RD(2) ^ 0x1);
SET64(2, RD(3) & RD(2));
SET64(7, RD(2) << 48);
SET64(31, 0x2b0f58); SET64(7, RSD(7) >> 48); JP_F_00105C08(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b0f64); SET32(5, RW(17) + 560); JP_F_0010FF58(c);
SET64(31, 0x2b0f6c); SET64(4, RD(16) + RD(0)); JP_F_00104B48(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B0F80(Ctx *c) { /* func_002B0F80 */
ENTER(0x2b0f80);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1014; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6208);
SET64(31, 0x2b0fac); wr32(c, (RW(17) + 52), RW(2)); JP_F_002B1CC0(c);
{ int t = RD(17) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002B1000; }
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 208);
SET32(2, RW(2) + 6224);
SET32(5, RW(0) + -1);
SET64(31, 0x2b0fcc); wr32(c, (RW(17) + 52), RW(2)); JP_F_002AA640(c);
SET32(4, RW(17) + 160);
SET64(31, 0x2b0fd8); SET32(5, RW(0) + -1); JP_F_002B4450(c);
SET32(4, RW(17) + 112);
SET64(31, 0x2b0fe4); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET32(4, RW(17) + 64);
SET64(31, 0x2b0ff0); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b0ffc); SET64(5, RD(0) + RD(0)); JP_F_002B1BC0(c);
SET64(2, RD(16) << 48);
L_002B1000:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B1018; }
SET64(31, 0x2b1014); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B1014:;
SET64(2, RD(17) + RD(0));
L_002B1018:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B1030(Ctx *c) { /* func_002B1030 */
ENTER(0x2b1030);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(5, RW(0) + 4096);
SET64(31, 0x2b105c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002B16C0(c);
SET64(4, (s32)rd32(c, (RW(19) + 8)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6208);
SET64(5, (s32)rd32(c, (RW(19) + 12)));
wr32(c, (RW(20) + 52), RW(2));
SET32(3, RW(0) + 4096);
SET64(6, (s32)rd32(c, (RW(19) + 32)));
SET64(7, (s32)rd32(c, (RW(19) + 36)));
SET32(2, RW(3) - RW(4));
SET32(2, RSW(2) >> 1);
wr32(c, (RW(28) + -29904), RW(2));
SET32(2, RW(3) - RW(5));
SET32(2, RSW(2) >> 1);
SET64(31, 0x2b1098); wr32(c, (RW(28) + -29900), RW(2)); JP_F_002B1D50(c);
SET64(18, (s64)(s32)0x540000);
SET64(17, RD(0) + RD(0));
SET32(18, RW(18) + 2016);
SET64(16, RD(18) + RD(0));
L_002B10A8:;
SET64(5, (s16)rd16(c, (RW(19) + 32)));
SET64(6, (s16)rd16(c, (RW(19) + 8)));
SET64(7, (s16)rd16(c, (RW(19) + 12)));
SET64(8, (s16)rd16(c, (RW(19) + 40)));
SET64(9, (s16)rd16(c, (RW(19) + 44)));
SET64(31, 0x2b10c4); SET64(4, RD(16) + RD(0)); JP_F_001047D0(c);
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 40); if (t) { POLL(); goto L_002B10A8; } }
SET64(5, (s16)rd16(c, (RW(19) + 32)));
SET32(4, RW(18) + 96);
SET64(6, (s16)rd16(c, (RW(19) + 8)));
SET64(7, (s16)rd16(c, (RW(19) + 12)));
SET64(9, (s16)rd16(c, (RW(19) + 36)));
SET64(31, 0x2b10f0); SET32(8, RW(0) + 2); JP_F_00104CD0(c);
SET64(5, (s16)rd16(c, (RW(19) + 32)));
SET64(16, RD(2) + RD(0));
SET64(6, (s16)rd16(c, (RW(19) + 8)));
SET32(4, RW(18) + 336);
SET64(7, (s16)rd16(c, (RW(19) + 12)));
SET64(9, (s16)rd16(c, (RW(19) + 36)));
SET64(31, 0x2b1110); SET32(8, RW(0) + 2); JP_F_00104CD0(c);
SET64(3, (s64)(s32)0x10000000);
SET64(6, RD(16) << 32);
SET64(4, RD(3) << 32);
SET64(2, RD(2) << 32);
SET64(3, RD(0) | 0x8000);
SET64(6, RSD(6) >> 32);
SET64(5, RD(3) | RD(4));
SET64(8, (s32)rd32(c, (RW(28) + -29896)));
SET64(3, RD(6) | RD(5));
SET32(4, RW(0) + 14);
wr64(c, (RW(18) + 80), RD(3));
SET64(2, RSD(2) >> 32);
SET64(3, (s64)(s32)0x50000);
SET64(2, RD(2) | RD(5));
SET64(3, RD(3) | 0x180b);
wr64(c, (RW(18) + 320), RD(2));
wr64(c, (RW(18) + 88), RD(4));
SET32(10, RW(0) + -512);
wr64(c, (RW(18) + 328), RD(4));
SET64(2, RD(20) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 56)));
wr64(c, (RW(18) + 208), RD(3));
wr64(c, (RW(18) + 448), RD(3));
SET64(13, (s32)rd32(c, (RW(8) + 0)));
SET64(12, (s32)rd32(c, (RW(8) + 4)));
SET64(3, rd64(c, (RW(18) + 96)));
SET64(11, (s32)rd32(c, (RW(8) + 8)));
SET64(9, RD(6) & RD(10));
SET64(5, rd64(c, (RW(18) + 336)));
SET64(7, (s32)rd32(c, (RW(18) + 16)));
SET64(4, rd64(c, (RW(18) + 352)));
SET64(13, (s32)rd32(c, (RW(13) + 48)));
SET64(12, (s32)rd32(c, (RW(12) + 48)));
SET64(8, RD(3) & RD(10));
SET64(6, RD(5) & RD(10));
SET64(3, rd64(c, (RW(18) + 112)));
SET64(5, (s32)rd32(c, (RW(11) + 48)));
SET64(7, RD(7) & RD(10));
SET64(4, RD(4) & RD(10));
SET64(13, (s32)rd32(c, (RW(13) + 12)));
SET64(3, RD(3) & RD(10));
SET64(11, (s32)rd32(c, (RW(12) + 12)));
SET64(10, (s32)rd32(c, (RW(5) + 12)));
SET32(12, RSW(13) >> 11);
SET32(11, RSW(11) >> 11);
SET64(5, RD(12) & 0x1ff);
SET32(10, RSW(10) >> 11);
SET64(5, RD(7) | RD(5));
wr32(c, (RW(18) + 16), RW(5));
SET64(5, RD(12) << 32);
SET64(5, RSD(5) >> 32);
SET64(7, RD(5) & 0x1ff);
SET64(5, RD(10) << 32);
SET64(6, RD(6) | RD(7));
SET64(5, RSD(5) >> 32);
wr64(c, (RW(18) + 336), RD(6));
SET64(5, RD(5) & 0x1ff);
SET64(4, RD(4) | RD(5));
wr64(c, (RW(18) + 352), RD(4));
SET64(4, RD(4) & 0x1ff);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(18) + 112), RD(3));
SET64(4, RD(11) & 0x1ff);
SET64(3, RD(11) << 32);
SET64(4, RD(9) | RD(4));
SET64(3, RSD(3) >> 32);
wr32(c, (RW(18) + 56), RW(4));
SET64(3, RD(3) & 0x1ff);
SET64(3, RD(8) | RD(3));
wr64(c, (RW(18) + 96), RD(3));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B1250(Ctx *c) { /* func_002B1250 */
ENTER(0x2b1250);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(3) + 2016);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -29912)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B127C; }
SET32(6, RW(3) + 320); goto L_002B1280;
L_002B127C:;
SET32(6, RW(3) + 80);
L_002B1280:;
SET64(3, rd64(c, (RW(6) + 0)));
SET64(4, RD(5) + RD(0));
SET64(5, RD(6) + RD(0));
SET64(2, (s64)(s32)0x50000000);
SET64(7, (s64)(s32)0x13000000);
SET64(3, RD(3) & 0x7fff);
SET64(3, RD(3) << 4);
SET64(3, RD(3) + (s64)16);
SET64(6, RD(3) << 32);
SET64(6, RSD(6) >> 32);
SET32(3, RSW(6) >> 4);
SET64(31, 0x2b12b4); SET64(8, RD(3) | RD(2)); JP_F_002B1A50(c);
SET64(25, (s32)rd32(c, (RW(16) + 168)));
SET32(4, RW(16) + 160);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b12c8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B12E0(Ctx *c) { /* func_002B12E0 */
ENTER(0x2b12e0);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -29912)));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 68)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2b1318); SET64(5, RD(16) + RD(0)); JP_F_002ADFE0(c);
SET64(25, (s32)rd32(c, (RW(16) + 52)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2b132c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd8(c, (RW(16) + 324)));
{ int t = RD(3) == RD(0);  if (t) goto L_002B1424; }
SET64(25, (s32)rd32(c, (RW(16) + 72)));
SET32(4, RW(16) + 64);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b134c); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(16) + 272)));
SET32(17, RW(29) + 136);
SET64(3, (s32)rd32(c, (RW(16) + 276)));
SET32(18, RW(29) + 120);
SET64(21, (s32)rd32(c, (RW(16) + 280)));
SET64(2, (s32)rd32(c, (RW(16) + 284)));
wr32(c, (RW(29) + 128), RW(4));
wr32(c, (RW(29) + 112), RW(4));
wr32(c, (RW(29) + 132), RW(3));
wr32(c, (RW(29) + 116), RW(3));
wr32(c, (RW(17) + 0), RW(21));
wr32(c, (RW(29) + 140), RW(2));
wr32(c, (RW(29) + 124), RW(2));
{ int t = RSD(21) <= 0; wr32(c, (RW(18) + 0), RW(21)); if (t) goto L_002B1400; }
{ int t = RSD(21) >= 0; SET32(20, RSW(21) >> 6); if (t) goto L_002B1398; }
SET32(2, RW(21) + 63);
SET32(20, RSW(2) >> 6);
L_002B1398:;
SET32(19, RW(29) + 120);
L_002B139C:;
{ int t = RD(20) == RD(0); SET64(2, RD(21) & 0x3f); if (t) goto L_002B13AC; }
SET32(2, RW(0) + 64); goto L_002B13C0;
L_002B13AC:;
{ int t = RSD(21) >= 0;  if (t) goto L_002B13C0; }
{ int t = RD(2) == RD(0);  if (t) goto L_002B13C0; }
SET32(2, RW(2) + -64);
L_002B13C0:;
wr32(c, (RW(18) + 0), RW(2));
SET32(4, RW(16) + 208);
SET64(3, rd64(c, (RW(29) + 112)));
SET64(2, rd64(c, (RW(19) + 0)));
wr64(c, (RW(16) + 272), RD(3));
wr64(c, (RW(16) + 280), RD(2));
SET64(25, (s32)rd32(c, (RW(16) + 216)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b13e8); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 112)));
SET32(21, RW(21) + -64);
SET32(20, RW(20) + -1);
SET32(2, RW(2) + 64);
{ int t = RSD(21) > 0; wr32(c, (RW(29) + 112), RW(2)); if (t) { POLL(); goto L_002B139C; } }
L_002B1400:;
SET64(2, rd64(c, (RW(17) + 0)));
SET32(4, RW(16) + 112);
SET64(3, rd64(c, (RW(29) + 128)));
wr64(c, (RW(16) + 280), RD(2));
wr64(c, (RW(16) + 272), RD(3));
SET64(25, (s32)rd32(c, (RW(16) + 120)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b1424); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_002B1424:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002B1450(Ctx *c) { /* func_002B1450 */
ENTER(0x2b1450);
SET32(29, RW(29) + -32);
SET64(6, (s32)rd32(c, (RW(5) + 12)));
wr32(c, (RW(29) + 16), RW(0));
SET64(3, (s32)rd32(c, (RW(5) + 8)));
wr32(c, (RW(29) + 20), RW(0));
SET64(2, rd64(c, (RW(29) + 16)));
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(29) + 28), RW(6));
wr32(c, (RW(29) + 24), RW(3));
SET64(5, RD(0) + RD(0));
wr64(c, (RW(4) + 272), RD(2));
SET64(2, rd64(c, (RW(29) + 24)));
wr64(c, (RW(4) + 280), RD(2));
SET64(31, 0x2b148c); SET32(4, RW(4) + 208); JP_F_002AA560(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void JP_F_002B14A0(Ctx *c) { /* func_002B14A0 */
ENTER(0x2b14a0);
SET64(3, rd64(c, (RW(5) + 0)));
SET64(2, rd64(c, (RW(5) + 8)));
wr64(c, (RW(4) + 304), RD(3));
wr64(c, (RW(4) + 312), RD(2));
SET64(7, (s32)rd32(c, (RW(4) + 308)));
SET64(2, (s32)rd32(c, (RW(4) + 316)));
SET64(5, (s32)rd32(c, (RW(4) + 304)));
SET64(3, (s32)rd32(c, (RW(4) + 312)));
SET32(2, RW(7) + RW(2));
SET32(8, RW(2) + -1);
SET32(3, RW(5) + RW(3));
SET32(4, RW(4) + 160);
SET32(6, RW(3) + -1); { JP_F_002B4410(c); return; }
}

void JP_F_002B14E0(Ctx *c) { /* func_002B14E0 */
ENTER(0x2b14e0);
SET64(6, (s32)rd32(c, (RW(5) + 0)));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET64(7, (s32)rd32(c, (RW(28) + -29904)));
SET64(5, (s32)rd32(c, (RW(28) + -29900)));
SET32(6, RW(7) + RW(6));
SET32(6, RW(6) << 4);
wr32(c, (RW(4) + 288), RW(6));
SET32(3, RW(5) + RW(3));
SET32(3, RW(3) << 4);
wr32(c, (RW(4) + 292), RW(3)); return;
}

void JP_F_002B1510(Ctx *c) { /* func_002B1510 */
ENTER(0x2b1510);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2b1528); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_001046B8(c);
SET64(31, 0x2b1530); SET32(4, RW(0) + 1); JP_F_00105E30(c);
SET64(31, 0x2b1538);  JP_F_00107BC0(c);
SET64(31, 0x2b1540); SET64(4, (s64)(s32)0x40000); JP_F_00100530(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(0) + RD(0));
SET64(3, RD(18) + RD(0));
L_002B154C:;
wr128(c, (RW(3) + 0) & ~15u, &c->r[0]);
SET32(4, RW(4) + 8);
wr128(c, (RW(3) + 16) & ~15u, &c->r[0]);
SET64(2, RSD(4) < (s64)16384);
wr128(c, (RW(3) + 32) & ~15u, &c->r[0]);
wr128(c, (RW(3) + 48) & ~15u, &c->r[0]);
wr128(c, (RW(3) + 64) & ~15u, &c->r[0]);
wr128(c, (RW(3) + 80) & ~15u, &c->r[0]);
wr128(c, (RW(3) + 96) & ~15u, &c->r[0]);
wr128(c, (RW(3) + 112) & ~15u, &c->r[0]);
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 128); if (t) { POLL(); goto L_002B154C; } }
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002B1584:;
{ int t = RSD(16) >= 0; SET32(2, RSW(16) >> 6); if (t) goto L_002B1594; }
SET32(2, RW(16) + 63);
SET32(2, RSW(2) >> 6);
L_002B1594:;
SET64(5, RD(2) << 48);
SET32(4, RW(29) + 64);
SET64(5, RSD(5) >> 48);
SET32(6, RW(0) + 1);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET32(10, RW(0) + 64);
SET64(31, 0x2b15bc); SET32(11, RW(0) + 1024); JP_F_001051D0(c);
SET64(31, 0x2b15c4); SET64(4, RD(0) + RD(0)); JP_F_0010F8E0(c);
SET32(4, RW(29) + 64);
SET64(31, 0x2b15d0); SET64(5, RD(18) + RD(0)); JP_F_001053B8(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x2b15dc); SET64(5, RD(0) + RD(0)); JP_F_00104EB8(c);
SET64(2, (s64)(s32)0x10000);
SET32(17, RW(17) + 1);
SET32(16, RW(16) + RW(2));
SET64(2, RSD(17) < (s64)16);
{ int t = RD(2) != RD(0); SET64(4, RD(18) + RD(0)); if (t) { POLL(); goto L_002B1584; } }
SET64(31, 0x2b15fc);  JP_F_00100430(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void JP_F_002B1620(Ctx *c) { /* func_002B1620 */
ENTER(0x2b1620);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B169C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 208);
SET32(2, RW(2) + 6224);
SET32(5, RW(0) + -1);
SET64(31, 0x2b1654); wr32(c, (RW(17) + 52), RW(2)); JP_F_002AA640(c);
SET32(4, RW(17) + 160);
SET64(31, 0x2b1660); SET32(5, RW(0) + -1); JP_F_002B4450(c);
SET32(4, RW(17) + 112);
SET64(31, 0x2b166c); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET32(4, RW(17) + 64);
SET64(31, 0x2b1678); SET32(5, RW(0) + -1); JP_F_002B4320(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b1684); SET64(5, RD(0) + RD(0)); JP_F_002B1BC0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B16A0; }
SET64(31, 0x2b169c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B169C:;
SET64(2, RD(17) + RD(0));
L_002B16A0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B16C0(Ctx *c) { /* func_002B16C0 */
ENTER(0x2b16c0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b16d4); SET64(16, RD(4) + RD(0)); JP_F_002B1C20(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(16) + 64);
SET32(2, RW(2) + 6224);
SET64(31, 0x2b16e8); wr32(c, (RW(16) + 52), RW(2)); JP_F_002B4380(c);
SET64(31, 0x2b16f0); SET32(4, RW(16) + 112); JP_F_002B4380(c);
SET32(4, RW(16) + 160);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2b1708); SET64(8, RD(0) + RD(0)); JP_F_002B44B0(c);
SET32(2, RW(0) + 128);
SET32(4, RW(16) + 208);
wr8(c, (RW(29) + 60), (u8)RW(2));
SET32(5, RW(29) + 32);
wr8(c, (RW(29) + 61), (u8)RW(2));
SET32(6, RW(29) + 60);
wr8(c, (RW(29) + 62), (u8)RW(2));
SET64(7, RD(0) + RD(0));
wr8(c, (RW(29) + 63), (u8)RW(2));
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
SET64(31, 0x2b1740); wr32(c, (RW(29) + 44), RW(0)); JP_F_002AA6B0(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 64);
SET64(6, RD(5) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
wr8(c, (RW(16) + 324), (u8)RW(5));
wr32(c, (RW(16) + 288), RW(0));
wr32(c, (RW(16) + 292), RW(0));
wr32(c, (RW(16) + 304), RW(0));
wr32(c, (RW(16) + 308), RW(0));
wr32(c, (RW(16) + 312), RW(0));
wr32(c, (RW(16) + 316), RW(0));
wr8(c, (RW(16) + 320), (u8)RW(0));
wr8(c, (RW(16) + 321), (u8)RW(0));
wr8(c, (RW(16) + 322), (u8)RW(0));
SET64(31, 0x2b1784); wr8(c, (RW(16) + 323), (u8)RW(0)); JP_F_002B42A0(c);
SET32(4, RW(16) + 64);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b1794); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 64);
SET64(31, 0x2b17a4); SET64(6, RD(5) + RD(0)); JP_F_002B4230(c);
SET32(4, RW(16) + 208);
SET64(31, 0x2b17b0); SET32(5, RW(16) + 320); JP_F_002AA5C0(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 112);
SET32(6, RW(0) + 5);
SET32(7, RW(0) + 128);
SET64(31, 0x2b17c8); SET64(8, RD(5) + RD(0)); JP_F_002B42A0(c);
SET32(4, RW(16) + 112);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b17d8); SET64(6, RD(0) + RD(0)); JP_F_002B4260(c);
SET32(4, RW(16) + 112);
SET32(5, RW(0) + 1);
SET64(31, 0x2b17e8); SET32(6, RW(0) + 2); JP_F_002B4230(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B1800(Ctx *c) { /* func_002B1800 */
ENTER(0x2b1800);
SET64(9, (s32)rd32(c, (RW(4) + 32)));
SET64(3, (s64)(s32)0x70000000);
SET64(10, RD(3) | 0x2);
SET64(6, (s64)(s32)0x13000000);
SET64(3, (s64)(s32)0x50000000);
SET64(5, RD(3) | 0x2);
SET64(7, RD(5) << 32);
SET64(3, (s64)(s32)0x10000000);
SET64(8, RD(6) | RD(7));
SET64(5, RD(3) << 32);
wr64(c, (RW(9) + 0), RD(10));
SET64(3, RD(0) | 0x8001);
SET64(7, (s32)rd32(c, (RW(4) + 32)));
SET64(3, RD(3) | RD(5));
SET32(6, RW(0) + 14);
SET32(5, RW(0) + 97);
wr64(c, (RW(7) + 8), RD(8));
SET64(8, (s32)rd32(c, (RW(4) + 32)));
SET32(7, RW(8) + 16);
wr32(c, (RW(4) + 32), RW(7));
wr64(c, (RW(8) + 16), RD(3));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 8), RD(6));
SET64(6, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(6) + 16);
wr32(c, (RW(4) + 32), RW(3));
wr64(c, (RW(6) + 16), RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 8), RD(5));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(3) + 16);
wr32(c, (RW(4) + 32), RW(3)); return;
}

void JP_F_002B1890(Ctx *c) { /* func_002B1890 */
ENTER(0x2b1890);
SET32(8, RSW(6) >> 4);
SET64(3, (s64)(s32)0x60000000);
SET64(6, RD(5) << 32);
SET32(9, RW(8) + -1);
SET64(6, RD(6) >> 32);
SET64(7, RD(6) << 32);
SET64(7, RD(7) | RD(3));
SET64(6, RD(8) << 32);
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET64(6, RSD(6) >> 32);
SET64(7, RD(6) | RD(7));
SET64(6, (s64)(s32)0x13000000);
wr64(c, (RW(3) + 0), RD(7));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 8), RD(6));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(3) + 16);
{ int t = RSD(8) <= 0; wr32(c, (RW(4) + 32), RW(3)); if (t) goto L_002B1900; }
L_002B18DC:;
SET64(7, (s32)rd32(c, (RW(4) + 32)));
SET64(3, RD(9) + RD(0));
rd128(c, (RW(5) + 0) & ~15u, &c->r[8]);
SET32(9, RW(9) + -1);
SET32(6, RW(7) + 16);
wr32(c, (RW(4) + 32), RW(6));
SET32(5, RW(5) + 16);
{ int t = RSD(3) > 0; wr128(c, (RW(7) + 0) & ~15u, &c->r[8]); if (t) { POLL(); goto L_002B18DC; } }
L_002B1900:;
 return;
}

void JP_F_002B1910(Ctx *c) { /* func_002B1910 */
ENTER(0x2b1910);
SET64(3, RD(5) << 32);
SET64(3, RD(3) >> 32);
SET64(7, RD(3) << 32);
SET32(3, RSW(6) >> 4);
SET64(5, RD(3) << 32);
SET64(3, (s64)(s32)0x50000000);
SET64(5, RSD(5) >> 32);
SET64(6, RD(7) | RD(3));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET64(6, RD(5) | RD(6));
SET64(5, (s64)(s32)0x13000000);
wr64(c, (RW(3) + 0), RD(6));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 8), RD(5));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(3) + 16);
wr32(c, (RW(4) + 32), RW(3)); return;
}

void JP_F_002B1960(Ctx *c) { /* func_002B1960 */
ENTER(0x2b1960);
SET64(3, RD(5) << 32);
SET64(1, RD(6) < (u64)(s64)2049);
SET64(3, RD(3) >> 32);
SET64(5, RD(3) << 32);
SET32(3, RW(6) + 8);
SET32(8, RW(3) >> 4);
SET64(3, (s64)(s32)0x30000000);
SET64(3, RD(5) | RD(3));
SET64(5, RD(8) << 32);
SET64(5, RSD(5) >> 32);
SET64(5, RD(5) | RD(3));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
{ int t = RD(1) != RD(0); wr64(c, (RW(3) + 0), RD(5)); if (t) goto L_002B19A0; }
SET64(3, RD(0) + RD(0)); goto L_002B19A4;
L_002B19A0:;
SET32(3, RW(6) >> 3);
L_002B19A4:;
SET32(5, RW(3) << 16);
SET64(6, RD(7) | RD(5));
SET64(3, (s64)(s32)0x4a000000);
SET64(6, RD(6) | RD(3));
SET64(5, (s64)(s32)0x13000000);
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET64(6, RD(6) << 32);
SET64(6, RD(6) >> 32);
SET64(6, RD(6) << 32);
SET64(5, RD(6) | RD(5));
wr64(c, (RW(3) + 8), RD(5));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(3) + 16);
wr32(c, (RW(4) + 32), RW(3)); return;
}

void JP_F_002B19E0(Ctx *c) { /* func_002B19E0 */
ENTER(0x2b19e0);
SET64(3, RD(5) << 32);
SET64(3, RD(3) >> 32);
SET64(8, RD(3) << 32);
SET32(3, RW(6) + 8);
SET32(5, RW(3) >> 4);
SET32(3, RW(6) >> 3);
SET64(9, RD(5) << 32);
SET32(3, RW(3) << 16);
SET64(9, RSD(9) >> 32);
SET64(5, RD(7) | RD(3));
SET64(6, (s32)rd32(c, (RW(4) + 32)));
SET64(3, (s64)(s32)0x30000000);
SET64(3, RD(8) | RD(3));
SET64(7, RD(9) | RD(3));
SET64(3, (s64)(s32)0x4a000000);
SET64(5, RD(5) | RD(3));
SET64(5, RD(5) << 32);
SET64(3, (s64)(s32)0x13000000);
SET64(5, RD(5) >> 32);
wr64(c, (RW(6) + 0), RD(7));
SET64(5, RD(5) << 32);
SET64(5, RD(5) | RD(3));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 8), RD(5));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(3) + 16);
wr32(c, (RW(4) + 32), RW(3)); return;
}

void JP_F_002B1A50(Ctx *c) { /* func_002B1A50 */
ENTER(0x2b1a50);
SET64(3, RD(5) << 32);
SET64(3, RD(3) >> 32);
SET64(9, RD(3) << 32);
SET32(3, RSW(6) >> 4);
SET64(6, RD(3) << 32);
SET64(3, RD(8) << 32);
SET64(6, RSD(6) >> 32);
SET64(3, RD(3) >> 32);
SET64(5, RD(3) << 32);
SET64(3, RD(7) << 32);
SET64(3, RD(3) >> 32);
SET64(5, RD(5) | RD(3));
SET64(3, (s64)(s32)0x30000000);
SET64(7, RD(9) | RD(3));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET64(6, RD(6) | RD(7));
wr64(c, (RW(3) + 0), RD(6));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 8), RD(5));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(3) + 16);
wr32(c, (RW(4) + 32), RW(3)); return;
}

void JP_F_002B1AB0(Ctx *c) { /* func_002B1AB0 */
ENTER(0x2b1ab0);
SET32(9, RSW(6) >> 4);
SET64(3, RD(7) << 32);
SET64(6, RD(8) << 32);
SET64(7, RD(9) << 32);
SET64(6, RD(6) >> 32);
SET64(3, RD(3) >> 32);
SET64(6, RD(6) << 32);
SET64(7, RSD(7) >> 32);
SET64(6, RD(6) | RD(3));
SET32(10, RW(9) + -1);
SET64(3, (s64)(s32)0x10000000);
SET64(7, RD(7) | RD(3));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 0), RD(7));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 8), RD(6));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(3) + 16);
{ int t = RSD(9) <= 0; wr32(c, (RW(4) + 32), RW(3)); if (t) goto L_002B1B28; }
L_002B1B00:;
SET64(7, (s32)rd32(c, (RW(4) + 32)));
SET64(3, RD(10) + RD(0));
rd128(c, (RW(5) + 0) & ~15u, &c->r[8]);
SET32(10, RW(10) + -1);
SET32(6, RW(7) + 16);
wr32(c, (RW(4) + 32), RW(6));
SET32(5, RW(5) + 16);
{ int t = RSD(3) > 0; wr128(c, (RW(7) + 0) & ~15u, &c->r[8]); if (t) { POLL(); goto L_002B1B00; } }
L_002B1B28:;
 return;
}

void JP_F_002B1B30(Ctx *c) { /* func_002B1B30 */
ENTER(0x2b1b30);
SET32(3, RSW(5) >> 4);
SET64(8, RD(3) << 32);
SET64(3, RD(7) << 32);
SET64(8, RSD(8) >> 32);
SET64(3, RD(3) >> 32);
SET64(5, RD(3) << 32);
SET64(3, RD(6) << 32);
SET64(3, RD(3) >> 32);
SET64(5, RD(5) | RD(3));
SET64(3, (s64)(s32)0x10000000);
SET64(6, RD(8) | RD(3));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 0), RD(6));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
wr64(c, (RW(3) + 8), RD(5));
SET64(3, (s32)rd32(c, (RW(4) + 32)));
SET32(3, RW(3) + 16);
wr32(c, (RW(4) + 32), RW(3)); return;
}

void JP_F_002B1B80(Ctx *c) { /* func_002B1B80 */
ENTER(0x2b1b80);
SET64(3, RD(6) + RD(0));
{ int t = RSD(3) <= 0; SET32(6, RW(3) + -1); if (t) goto L_002B1BB0; }
L_002B1B8C:;
SET64(8, (s32)rd32(c, (RW(4) + 32)));
SET64(3, RD(6) + RD(0));
rd128(c, (RW(5) + 0) & ~15u, &c->r[9]);
SET32(6, RW(6) + -1);
SET32(7, RW(8) + 16);
wr32(c, (RW(4) + 32), RW(7));
SET32(5, RW(5) + 16);
{ int t = RSD(3) > 0; wr128(c, (RW(8) + 0) & ~15u, &c->r[9]); if (t) { POLL(); goto L_002B1B8C; } }
L_002B1BB0:;
 return;
}

void JP_F_002B1BC0(Ctx *c) { /* func_002B1BC0 */
ENTER(0x2b1bc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1C08; }
SET64(2, (s64)(s32)0x4e0000);
SET32(5, RW(0) + -1);
SET32(2, RW(2) + 6240);
SET64(31, 0x2b1bf0); wr32(c, (RW(17) + 52), RW(2)); JP_F_002AE2B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B1C0C; }
SET64(31, 0x2b1c08); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B1C08:;
SET64(2, RD(17) + RD(0));
L_002B1C0C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B1C20(Ctx *c) { /* func_002B1C20 */
ENTER(0x2b1c20);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 6240);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(5) + 7);
wr32(c, (RW(4) + 52), RW(2));
SET64(16, RD(4) + RD(0));
SET32(2, RW(0) + -8);
SET32(6, RW(0) + 128);
SET64(2, RD(3) & RD(2));
SET64(31, 0x2b1c54); SET32(5, RW(2) << 5); JP_F_002AE380(c);
SET64(6, (s32)rd32(c, (RW(16) + 8)));
SET64(4, (s64)(s32)0x30000000);
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 40), RW(0));
SET64(3, (s32)rd32(c, (RW(16) + 40)));
wr32(c, (RW(16) + 28), RW(0));
wr32(c, (RW(16) + 32), RW(0));
SET32(6, RW(6) >> 5);
SET64(5, RD(5) | RD(4));
wr32(c, (RW(16) + 36), RW(6));
SET32(4, RW(6) << 4);
wr32(c, (RW(16) + 20), RW(5));
SET32(3, RW(3) << 2);
SET32(4, RW(5) + RW(4));
wr32(c, (RW(16) + 24), RW(4));
SET32(3, RW(3) + RW(16));
SET64(3, (s32)rd32(c, (RW(3) + 20)));
wr32(c, (RW(16) + 32), RW(3));
wr32(c, (RW(16) + 28), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B1CC0(Ctx *c) { /* func_002B1CC0 */
ENTER(0x2b1cc0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -29896)));
{ int t = RD(16) == RD(0);  if (t) goto L_002B1D40; }
{ int t = RD(16) == RD(0);  if (t) goto L_002B1D3C; }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B1CFC; }
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b1cfc); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B1CFC:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B1D18; }
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b1d18); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B1D18:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B1D34; }
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b1d34); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B1D34:;
SET64(31, 0x2b1d3c); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002B1D3C:;
wr32(c, (RW(28) + -29896), RW(0));
L_002B1D40:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B1D50(Ctx *c) { /* func_002B1D50 */
ENTER(0x2b1d50);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(3, (s32)rd32(c, (RW(28) + -29896)));
{ int t = RD(3) == RD(0); SET64(16, RD(7) + RD(0)); if (t) goto L_002B1D8C; }
L_002B1D84:;
SET64(31, rd64(c, (RW(29) + 80))); goto L_002B1E18;
L_002B1D8C:;
SET64(31, 0x2b1d94); SET32(4, RW(0) + 12); JP_F_00100670(c);
SET64(20, RD(2) + RD(0));
{ int t = RD(20) == RD(0); SET32(4, RW(0) + 80); if (t) goto L_002B1E10; }
SET64(31, 0x2b1da8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(7, RD(16) + RD(0)); if (t) goto L_002B1DC0; }
SET64(4, RD(2) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x2b1dc0); SET64(6, RD(18) + RD(0)); JP_F_002B1ED0(c);
L_002B1DC0:;
wr32(c, (RW(20) + 8), RW(2));
SET64(31, 0x2b1dcc); SET32(4, RW(0) + 80); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002B1DE4; }
SET64(5, RD(19) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b1de4); SET64(7, RD(17) + RD(0)); JP_F_002B2080(c);
L_002B1DE4:;
wr32(c, (RW(20) + 0), RW(2));
SET64(31, 0x2b1df0); SET32(4, RW(0) + 80); JP_F_00100670(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_002B1E0C; }
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b1e08); SET64(7, RD(17) + RD(0)); JP_F_002B2080(c);
SET64(4, RD(2) + RD(0));
L_002B1E0C:;
wr32(c, (RW(20) + 4), RW(4));
L_002B1E10:;
wr32(c, (RW(28) + -29896), RW(20)); { POLL(); goto L_002B1D84; }
L_002B1E18:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

static void JP_B_002B1E40(Ctx *c, u32 entry) { /* func_002B1E40 */
ENTER(entry);
switch (entry) { case 0x2b1e50: goto L_002B1E50; }
L_002B1E40:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25);  switch (t) { case 0x2b1e40: goto L_002B1E40; case 0x2b1e50: goto L_002B1E50; default: rt_jump(c, t); return; } }
L_002B1E50:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1EAC; }
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6256);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2624);
SET64(31, 0x2b1e88); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B34B0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b1e94); SET32(5, RW(0) + -1); JP_F_002B4A30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B1EB0; }
SET64(31, 0x2b1eac); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B1EAC:;
SET64(2, RD(17) + RD(0));
L_002B1EB0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002B1E40(Ctx *c) { JP_B_002B1E40(c, 0x2b1e40); }
void JP_F_002B1E50(Ctx *c) { JP_B_002B1E40(c, 0x2b1e50); }

void JP_F_002B1ED0(Ctx *c) { /* func_002B1ED0 */
ENTER(0x2b1ed0);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + 6256);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(16, RD(7) + RD(0));
wr32(c, (RW(4) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2b1f14); SET64(7, RD(0) + RD(0)); JP_F_002B4A90(c);
SET32(2, RW(0) + 58);
wr32(c, (RW(19) + 52), RW(16));
SET64(6, RD(0) + RD(0));
SET64(4, RD(0) + RD(0));
{ int t = RD(16) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_002B1F64; }
SET32(2, RW(0) + 50);
{ int t = RD(16) == RD(2); SET32(2, RW(0) + 49); if (t) goto L_002B1F64; }
{ int t = RD(16) == RD(2);  if (t) goto L_002B1F54; }
SET32(2, RW(0) + 48);
{ int t = RD(16) == RD(2);  if (t) goto L_002B1F54; }
SET32(2, RW(17) + -1); goto L_002B1F74;
L_002B1F54:;
SET32(6, RW(0) + 6);
SET32(4, RW(0) + 5);
SET64(5, RD(0) + RD(0)); goto L_002B1F70;
L_002B1F64:;
SET32(6, RW(0) + 6);
SET32(5, RW(0) + 1);
SET64(4, RD(6) + RD(0));
L_002B1F70:;
SET32(2, RW(17) + -1);
L_002B1F74:;
SET32(3, RW(18) + -1);
SET32(2, RSW(2) >> (RW(4) & 31));
SET32(3, RSW(3) >> (RW(6) & 31));
SET32(2, RW(2) + 1);
SET32(3, RW(3) + 1);
SET32(2, RW(2) << (RW(4) & 31));
SET32(3, RW(3) << (RW(6) & 31));
wr32(c, (RW(19) + 60), RW(2));
wr32(c, (RW(19) + 56), RW(3));
mul_s(c, 0, 2, RSW(3), RSW(2));
SET64(4, (s64)(s32)0x540000);
SET32(6, RW(0) + 11);
SET32(4, RW(4) + 2624);
SET64(7, RD(16) + RD(0));
SET64(31, 0x2b1fb4); SET32(5, RSW(2) >> (RW(5) & 31)); JP_F_002B3550(c);
wr32(c, (RW(19) + 48), RW(2));
SET64(6, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(4, RD(19) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2b1fd0); SET32(5, RSW(2) >> 11); JP_F_002B4A00(c);
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

static void JP_B_002B1FF0(Ctx *c, u32 entry) { /* func_002B1FF0 */
ENTER(entry);
switch (entry) { case 0x2b2000: goto L_002B2000; }
L_002B1FF0:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25);  switch (t) { case 0x2b1ff0: goto L_002B1FF0; case 0x2b2000: goto L_002B2000; default: rt_jump(c, t); return; } }
L_002B2000:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B205C; }
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6272);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2624);
SET64(31, 0x2b2038); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B34B0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b2044); SET32(5, RW(0) + -1); JP_F_002B3D60(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B2060; }
SET64(31, 0x2b205c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B205C:;
SET64(2, RD(17) + RD(0));
L_002B2060:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002B1FF0(Ctx *c) { JP_B_002B1FF0(c, 0x2b1ff0); }
void JP_F_002B2000(Ctx *c) { JP_B_002B1FF0(c, 0x2b2000); }

void JP_F_002B2080(Ctx *c) { /* func_002B2080 */
ENTER(0x2b2080);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + 6272);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(8, RD(0) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(16, RD(7) + RD(0));
wr32(c, (RW(4) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2b20c8); SET64(7, RD(0) + RD(0)); JP_F_002B3DC0(c);
SET32(3, RW(0) + 58);
wr32(c, (RW(19) + 52), RW(16));
SET64(6, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(16) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_002B213C; }
SET32(3, RW(0) + 50);
{ int t = RD(16) == RD(3); SET32(3, RW(0) + 10); if (t) goto L_002B213C; }
{ int t = RD(16) == RD(3);  if (t) goto L_002B213C; }
SET32(3, RW(0) + 2);
{ int t = RD(16) == RD(3); SET32(3, RW(0) + 49); if (t) goto L_002B213C; }
{ int t = RD(16) == RD(3);  if (t) goto L_002B212C; }
SET32(3, RW(0) + 48);
{ int t = RD(16) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_002B212C; }
{ int t = RD(16) == RD(3);  if (t) goto L_002B212C; }
{ int t = RD(16) == RD(0);  if (t) goto L_002B212C; }
SET32(3, RW(17) + -1); goto L_002B214C;
L_002B212C:;
SET32(6, RW(0) + 6);
SET32(5, RW(0) + 5);
SET64(2, RD(0) + RD(0)); goto L_002B2148;
L_002B213C:;
SET32(6, RW(0) + 6);
SET32(2, RW(0) + 1);
SET64(5, RD(6) + RD(0));
L_002B2148:;
SET32(3, RW(17) + -1);
L_002B214C:;
SET32(4, RW(18) + -1);
SET32(3, RSW(3) >> (RW(5) & 31));
SET32(4, RSW(4) >> (RW(6) & 31));
SET32(3, RW(3) + 1);
SET32(4, RW(4) + 1);
SET32(3, RW(3) << (RW(5) & 31));
SET32(4, RW(4) << (RW(6) & 31));
wr32(c, (RW(19) + 60), RW(3));
wr32(c, (RW(19) + 56), RW(4));
mul_s(c, 0, 3, RSW(4), RSW(3));
SET32(6, RW(0) + 11);
SET64(7, RD(16) + RD(0));
SET64(4, (s64)(s32)0x540000);
SET32(5, RSW(3) >> (RW(2) & 31));
SET64(31, 0x2b218c); SET32(4, RW(4) + 2624); JP_F_002B3550(c);
wr32(c, (RW(19) + 48), RW(2));
SET64(7, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET64(4, RD(19) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(5, RSW(3) >> 11);
SET32(2, RW(2) + -1);
SET32(2, RSW(2) >> 6);
SET64(31, 0x2b21b8); SET32(6, RW(2) + 1); JP_F_002B3D20(c);
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002B21E0(Ctx *c) { /* func_002B21E0 */
ENTER(0x2b21e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 252)));
SET64(2, RD(2) & 0x6);
{ int t = RD(2) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B223C; }
SET64(4, (s32)rd32(c, (RW(17) + 244)));
L_002B2208:;
{ int t = RD(4) == RD(0);  if (t) goto L_002B2220; }
SET64(25, (s32)rd32(c, (RW(4) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b2220); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_002B2220:;
SET64(25, (s32)rd32(c, (RW(17) + 40)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b2234); SET32(4, RW(17) + 32); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002B2274;
L_002B223C:;
SET64(3, (s32)rd32(c, (RW(17) + 252)));
SET32(2, RW(0) + -3);
SET64(2, RD(3) & RD(2));
wr32(c, (RW(17) + 252), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 120)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b225c); SET32(4, RW(17) + 112); rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2b226c); SET32(4, RW(4) + 2592); JP_F_002B4920(c);
SET64(4, (s32)rd32(c, (RW(17) + 244))); { POLL(); goto L_002B2208; }
L_002B2274:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B2290(Ctx *c) { /* func_002B2290 */
ENTER(0x2b2290);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
{ int t = RD(7) == RD(0); SET64(16, RD(8) + RD(0)); if (t) goto L_002B23EC; }
SET64(3, (s32)rd32(c, (RW(19) + 12)));
SET32(2, RW(0) + 36);
{ int t = RD(3) == RD(2);  if (t) goto L_002B2384; }
SET32(2, RW(0) + 44);
{ int t = RD(3) == RD(2);  if (t) goto L_002B2384; }
SET32(2, RW(0) + 20);
{ int t = RD(3) == RD(2);  if (t) goto L_002B2384; }
SET32(2, RW(0) + 27);
{ int t = RD(3) == RD(2);  if (t) goto L_002B2374; }
SET32(2, RW(0) + 19);
{ int t = RD(3) == RD(2);  if (t) goto L_002B2374; }
SET32(2, RW(0) + 10);
{ int t = RD(3) == RD(2);  if (t) goto L_002B2360; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_002B2360; }
SET32(2, RW(0) + 49);
{ int t = RD(3) == RD(2);  if (t) goto L_002B234C; }
SET32(2, RW(0) + 48);
{ int t = RD(3) == RD(2);  if (t) goto L_002B234C; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002B234C; }
{ int t = RD(3) == RD(0);  if (t) goto L_002B234C; }
SET64(20, RD(0) + RD(0)); goto L_002B23AC;
L_002B234C:;
SET64(3, (s16)rd16(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(19) + 2)));
mul_s(c, 0, 2, RSW(3), RSW(2));
SET32(20, RW(2) << 2); goto L_002B23AC;
L_002B2360:;
SET64(3, (s16)rd16(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(19) + 2)));
mul_s(c, 0, 2, RSW(3), RSW(2));
SET32(20, RW(2) << 1); goto L_002B23AC;
L_002B2374:;
SET64(3, (s16)rd16(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(19) + 2)));
mul_s(c, 0, 20, RSW(3), RSW(2)); goto L_002B23AC;
L_002B2384:;
SET64(3, (s16)rd16(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(19) + 2)));
mul_s(c, 0, 2, RSW(3), RSW(2));
{ int t = RSD(2) >= 0; SET32(20, RSW(2) >> 1); if (t) goto L_002B23AC; }
SET32(2, RW(2) + 1);
SET32(20, RSW(2) >> 1);
SET32(4, RW(0) + 20); goto L_002B23B0;
SET64(20, RD(0) + RD(0));
L_002B23AC:;
SET32(4, RW(0) + 20);
L_002B23B0:;
SET64(31, 0x2b23b8);  JP_F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002B23D0; }
SET64(4, RD(2) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x2b23d0); SET32(6, RW(0) + 128); JP_F_002AE380(c);
L_002B23D0:;
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(17) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x2b23e4); SET64(6, RD(20) + RD(0)); JP_F_00127218(c);
SET64(2, (s32)rd32(c, (RW(19) + 248)));
SET64(17, (s32)rd32(c, (RW(2) + 4)));
L_002B23EC:;
SET64(6, (s16)rd16(c, (RW(19) + 8)));
SET64(5, RD(17) + RD(0));
SET64(3, (s16)rd16(c, (RW(19) + 6)));
SET32(4, RW(19) + 112);
SET64(2, (s32)rd32(c, (RW(19) + 240)));
SET32(9, RW(29) + 96);
wr32(c, (RW(29) + 96), RW(0));
wr32(c, (RW(29) + 100), RW(0));
SET64(7, (s16)rd16(c, (RW(19) + 10)));
wr32(c, (RW(29) + 108), RW(6));
wr32(c, (RW(29) + 104), RW(3));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
SET64(8, (s32)rd32(c, (RW(19) + 16)));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x2b242c); SET32(6, RSW(2) >> 6); JP_F_002B3900(c);
{ int t = RD(18) == RD(0);  if (t) goto L_002B2478; }
SET64(25, (s32)rd32(c, (RW(19) + 120)));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b2448); SET32(4, RW(19) + 112); rt_call(c, t); }
L_002B2448:;
{ int t = RD(16) == RD(0);  if (t) goto L_002B2460; }
SET64(2, (s32)rd32(c, (RW(19) + 252)));
SET64(2, RD(2) | 0x4);
wr32(c, (RW(19) + 252), RW(2)); goto L_002B2470;
L_002B2460:;
SET64(3, (s32)rd32(c, (RW(19) + 252)));
SET32(2, RW(0) + -5);
SET64(2, RD(3) & RD(2));
wr32(c, (RW(19) + 252), RW(2));
L_002B2470:;
SET64(2, RD(0) + RD(0)); goto L_002B2488;
L_002B2478:;
SET64(2, (s32)rd32(c, (RW(19) + 252)));
SET64(2, RD(2) | 0x2);
wr32(c, (RW(19) + 252), RW(2)); { POLL(); goto L_002B2448; }
L_002B2488:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002B24B0(Ctx *c) { /* func_002B24B0 */
ENTER(0x2b24b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 240)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B259C; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(8, RW(0) + 31);
SET64(4, (s64)(s32)0x80000000);
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(3, (s16)rd16(c, (RW(16) + 0)));
SET32(5, RSW(2) >> 6);
L_002B24E0:;
SET64(2, RD(3) & RD(4));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002B2514; }
SET64(1, RD(4) < RD(3));
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B250C; }
SET32(2, RW(0) + 1); goto L_002B250C;
SET64(2, RD(0) + RD(0));
L_002B250C:;
SET32(8, RW(8) + RW(2)); goto L_002B2520;
L_002B2514:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0); SET32(8, RW(8) + -1); if (t) { POLL(); goto L_002B24E0; } }
L_002B2520:;
SET64(1, RSD(8) < (s64)11);
{ int t = RD(1) != RD(0);  if (t) goto L_002B2530; }
SET32(8, RW(0) + 10);
L_002B2530:;
SET64(3, (s16)rd16(c, (RW(16) + 2)));
SET32(9, RW(0) + 31);
SET64(4, (s64)(s32)0x80000000);
L_002B253C:;
SET64(2, RD(3) & RD(4));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002B2570; }
SET64(1, RD(4) < RD(3));
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B2568; }
SET32(2, RW(0) + 1); goto L_002B2568;
SET64(2, RD(0) + RD(0));
L_002B2568:;
SET32(9, RW(9) + RW(2)); goto L_002B2580;
L_002B2570:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0); SET32(9, RW(9) + -1); if (t) { POLL(); goto L_002B253C; } }
L_002B2580:;
SET64(1, RSD(9) < (s64)11);
{ int t = RD(1) != RD(0); SET64(6, (s16)rd16(c, (RW(16) + 4))); if (t) goto L_002B2590; }
SET32(9, RW(0) + 10);
L_002B2590:;
SET64(7, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x2b259c); SET32(4, RW(16) + 32); JP_F_002B47D0(c);
L_002B259C:;
SET64(5, (s32)rd32(c, (RW(16) + 244)));
{ int t = RD(5) == RD(0); SET32(4, RW(16) + 32); if (t) goto L_002B25E4; }
SET64(3, (s32)rd32(c, (RW(5) + 128)));
{ int t = RD(3) == RD(0);  if (t) goto L_002B2604; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(16) + 32);
SET64(6, (s32)rd32(c, (RW(5) + 136)));
SET64(8, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(5) + 144)));
SET32(9, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x2b25d8); SET32(5, RSW(2) >> 6); JP_F_002B4710(c);
L_002B25D8:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B2608;
SET32(4, RW(16) + 32);
L_002B25E4:;
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x2b25fc); SET32(9, RW(0) + 1); JP_F_002B4710(c);
 { POLL(); goto L_002B25D8; }
L_002B2604:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B2608:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B2620(Ctx *c) { /* func_002B2620 */
ENTER(0x2b2620);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 240)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B266C; }
SET64(2, (s32)rd32(c, (RW(16) + 252)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002B2664; }
{ int t = RD(4) == RD(0);  if (t) goto L_002B2664; }
SET64(25, (s32)rd32(c, (RW(4) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b2664); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B2664:;
wr32(c, (RW(16) + 240), RW(0));
wr32(c, (RW(16) + 252), RW(0));
L_002B266C:;
SET64(4, (s32)rd32(c, (RW(16) + 248)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B2694; }
{ int t = RD(4) == RD(0);  if (t) goto L_002B2690; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b2690); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B2690:;
wr32(c, (RW(16) + 248), RW(0));
L_002B2694:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B26B0(Ctx *c) { /* func_002B26B0 */
ENTER(0x2b26b0);
SET64(2, (s32)rd32(c, (RW(4) + 240)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B26E4; }
SET64(2, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_002B26E0; }
SET64(3, (s32)rd32(c, (RW(4) + 252)));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 240), RW(5));
SET64(3, RD(3) | 0x1);
wr32(c, (RW(4) + 252), RW(3)); goto L_002B26E4;
L_002B26E0:;
SET64(2, RD(0) + RD(0));
L_002B26E4:;
 return;
}

void JP_F_002B26F0(Ctx *c) { /* func_002B26F0 */
ENTER(0x2b26f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 240)));
{ int t = RD(2) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002B2720; }
L_002B2718:;
SET64(2, RD(0) + RD(0)); goto L_002B275C;
L_002B2720:;
SET64(31, 0x2b2728); SET32(4, RW(0) + 28); JP_F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002B2748; }
SET64(7, (s32)rd32(c, (RW(18) + 12)));
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2b2748); SET64(8, RD(0) + RD(0)); JP_F_002B2D80(c);
L_002B2748:;
wr32(c, (RW(18) + 240), RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_002B2718; } }
SET32(2, RW(0) + 1);
L_002B275C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

static void JP_B_002B2780(Ctx *c, u32 entry) { /* func_002B2780 */
ENTER(entry);
switch (entry) { case 0x2b27a0: goto L_002B27A0; }
wr32(c, (RW(4) + 244), RW(5));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25);  switch (t) { case 0x2b27a0: goto L_002B27A0; default: rt_jump(c, t); return; } }
L_002B27A0:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B281C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6288);
wr32(c, (RW(17) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2b27d8);  rt_call(c, t); }
SET32(4, RW(17) + 112);
SET64(31, 0x2b27e4); SET32(5, RW(0) + -1); JP_F_002B3AB0(c);
SET32(4, RW(17) + 32);
SET64(31, 0x2b27f0); SET32(5, RW(0) + -1); JP_F_002B4840(c);
{ int t = RD(17) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002B2808; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6328);
wr32(c, (RW(17) + 20), RW(2));
SET64(2, RD(16) << 48);
L_002B2808:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B2820; }
SET64(31, 0x2b281c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B281C:;
SET64(2, RD(17) + RD(0));
L_002B2820:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void JP_F_002B2780(Ctx *c) { JP_B_002B2780(c, 0x2b2780); }
void JP_F_002B27A0(Ctx *c) { JP_B_002B2780(c, 0x2b27a0); }

void JP_F_002B2840(Ctx *c) { /* func_002B2840 */
ENTER(0x2b2840);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b2854); SET64(16, RD(4) + RD(0)); JP_F_002B2940(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(16) + 32);
SET32(2, RW(2) + 6288);
SET64(31, 0x2b2868); wr32(c, (RW(16) + 20), RW(2)); JP_F_002B48A0(c);
SET64(31, 0x2b2870); SET32(4, RW(16) + 112); JP_F_002B3B10(c);
SET32(4, RW(16) + 32);
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(16) + 240), RW(0));
wr32(c, (RW(16) + 244), RW(0));
wr32(c, (RW(16) + 248), RW(0));
SET64(31, 0x2b2894); wr32(c, (RW(16) + 252), RW(0)); JP_F_002B46B0(c);
SET32(4, RW(16) + 32);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b28a4); SET64(6, RD(0) + RD(0)); JP_F_002B4670(c);
SET32(4, RW(16) + 32);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b28b4); SET32(6, RW(0) + 1); JP_F_002B4630(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 32);
SET64(31, 0x2b28c4); SET64(6, RD(5) + RD(0)); JP_F_002B4600(c);
SET32(4, RW(16) + 32);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2b28dc); SET64(8, RD(0) + RD(0)); JP_F_002B45A0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B28F0(Ctx *c) { /* func_002B28F0 */
ENTER(0x2b28f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002B292C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6328);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 20), RW(3)); if (t) goto L_002B2928; }
SET64(31, 0x2b2928);  JP_F_001004B0(c);
L_002B2928:;
SET64(2, RD(16) + RD(0));
L_002B292C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B2940(Ctx *c) { /* func_002B2940 */
ENTER(0x2b2940);
SET64(2, (s64)(s32)0x4e0000);
wr16(c, (RW(4) + 2), (u16)RW(6));
SET32(2, RW(2) + 6328);
wr16(c, (RW(4) + 0), (u16)RW(5));
wr32(c, (RW(4) + 20), RW(2));
wr32(c, (RW(4) + 12), RW(7));
{ int t = RD(8) != RD(0); wr32(c, (RW(4) + 16), RW(8)); if (t) goto L_002B2A64; }
SET32(2, RW(0) + 20);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 19); if (t) goto L_002B2A04; }
{ int t = RD(7) == RD(2);  if (t) goto L_002B29D0; }
SET32(2, RW(0) + 2);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_002B29AC; }
{ int t = RD(7) == RD(2);  if (t) goto L_002B2998; }
{ int t = RD(7) == RD(0);  if (t) goto L_002B2998; }
SET64(3, (s16)rd16(c, (RW(4) + 0))); goto L_002B2A38;
L_002B2998:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
SET64(2, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 6), (u16)RW(3));
wr16(c, (RW(4) + 8), (u16)RW(2)); goto L_002B2A34;
L_002B29AC:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002B29C0; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002B29C0:;
wr16(c, (RW(4) + 6), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 8), (u16)RW(2)); goto L_002B2A34;
L_002B29D0:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002B29E4; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002B29E4:;
SET64(3, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 6), (u16)RW(2));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002B29FC; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002B29FC:;
wr16(c, (RW(4) + 8), (u16)RW(2)); goto L_002B2A34;
L_002B2A04:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 2); if (t) goto L_002B2A18; }
SET32(2, RW(3) + 3);
SET32(2, RSW(2) >> 2);
L_002B2A18:;
SET64(3, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 6), (u16)RW(2));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002B2A30; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002B2A30:;
wr16(c, (RW(4) + 8), (u16)RW(2));
L_002B2A34:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
L_002B2A38:;
SET64(2, (s16)rd16(c, (RW(4) + 6)));
SET32(3, RW(3) + -1);
SET32(2, RW(2) + -1);
SET32(3, RSW(3) >> 6);
SET32(2, RSW(2) >> 6);
SET32(3, RW(3) + 1);
SET32(2, RW(2) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
wr16(c, (RW(4) + 10), (u16)RW(2));
L_002B2A5C:;
SET64(2, RD(4) + RD(0)); goto L_002B2B44;
L_002B2A64:;
SET64(6, (s16)rd16(c, (RW(4) + 0)));
SET32(2, RW(0) + 36);
SET64(3, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 6), (u16)RW(6));
{ int t = RD(7) == RD(2); wr16(c, (RW(4) + 8), (u16)RW(3)); if (t) goto L_002B2B14; }
SET32(2, RW(0) + 44);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 20); if (t) goto L_002B2B14; }
{ int t = RD(7) == RD(2);  if (t) goto L_002B2B14; }
SET32(2, RW(0) + 27);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 19); if (t) goto L_002B2B14; }
{ int t = RD(7) == RD(2);  if (t) goto L_002B2B14; }
SET32(2, RW(0) + 58);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 50); if (t) goto L_002B2AFC; }
{ int t = RD(7) == RD(2);  if (t) goto L_002B2AFC; }
SET32(2, RW(0) + 10);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 2); if (t) goto L_002B2AFC; }
{ int t = RD(7) == RD(2);  if (t) goto L_002B2AFC; }
SET32(2, RW(0) + 49);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 48); if (t) goto L_002B2AFC; }
{ int t = RD(7) == RD(2);  if (t) goto L_002B2AFC; }
SET32(2, RW(0) + 1);
{ int t = RD(7) == RD(2);  if (t) goto L_002B2AFC; }
{ int t = RD(7) == RD(0);  if (t) goto L_002B2AFC; }
SET32(2, RW(5) + -1); goto L_002B2B2C;
L_002B2AFC:;
SET64(2, (s16)rd16(c, (RW(4) + 0)));
SET32(2, RW(2) + -1);
SET32(2, RSW(2) >> 6);
SET32(2, RW(2) + 1);
SET32(5, RW(2) << 6); goto L_002B2B28;
L_002B2B14:;
SET64(2, (s16)rd16(c, (RW(4) + 0)));
SET32(2, RW(2) + -1);
SET32(2, RSW(2) >> 7);
SET32(2, RW(2) + 1);
SET32(5, RW(2) << 7);
L_002B2B28:;
SET32(2, RW(5) + -1);
L_002B2B2C:;
SET32(2, RSW(2) >> 6);
SET32(2, RW(2) + 1);
wr16(c, (RW(4) + 4), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(4) + 4)));
wr16(c, (RW(4) + 10), (u16)RW(2)); { POLL(); goto L_002B2A5C; }
L_002B2B44:;
 return;
}

void JP_F_002B2B50(Ctx *c) { /* func_002B2B50 */
ENTER(0x2b2b50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B2B98; }
SET64(2, rd8(c, (RW(17) + 16)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6344);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 20), RW(3)); if (t) goto L_002B2BA4; }
SET64(2, RD(16) << 48);
L_002B2B84:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B2B9C; }
SET64(31, 0x2b2b98); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B2B98:;
SET64(2, RD(17) + RD(0));
L_002B2B9C:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002B2BBC;
L_002B2BA4:;
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2b2bb4); SET32(4, RW(4) + 2624); JP_F_002B34B0(c);
SET64(2, RD(16) << 48); { POLL(); goto L_002B2B84; }
L_002B2BBC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B2BD0(Ctx *c) { /* func_002B2BD0 */
ENTER(0x2b2bd0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 6344);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(9, RD(0) + RD(0));
wr32(c, (RW(4) + 20), RW(2));
SET64(16, RD(4) + RD(0));
SET64(2, RD(0) < RD(8));
wr32(c, (RW(4) + 4), RW(7));
{ int t = RD(6) == RD(0); wr8(c, (RW(4) + 16), (u8)RW(2)); if (t) goto L_002B2C58; }
SET32(2, RW(0) + 1);
{ int t = RD(6) != RD(2);  if (t) goto L_002B2C40; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B2CAC; }
{ int t = RD(5) != RD(2);  if (t) goto L_002B2C28; }
wr32(c, (RW(16) + 12), RW(2));
SET32(2, RW(0) + 256);
wr32(c, (RW(16) + 8), RW(2));
L_002B2C28:;
SET32(2, RW(0) + 2);
{ int t = RD(7) == RD(2);  if (t) goto L_002B2C3C; }
SET64(2, rd8(c, (RW(16) + 16))); goto L_002B2C44;
L_002B2C3C:;
SET32(9, RW(0) + 1);
L_002B2C40:;
SET64(2, rd8(c, (RW(16) + 16)));
L_002B2C44:;
{ int t = RD(2) == RD(0);  if (t) goto L_002B2CBC; }
wr32(c, (RW(16) + 0), RW(8));
L_002B2C50:;
SET64(2, RD(16) + RD(0)); goto L_002B2CF0;
L_002B2C58:;
{ int t = RD(5) == RD(0); SET32(3, RW(0) + 8); if (t) goto L_002B2C9C; }
SET32(2, RW(0) + 1);
{ int t = RD(5) != RD(2); SET32(2, RW(0) + 10); if (t) goto L_002B2C7C; }
SET32(2, RW(0) + 16);
wr32(c, (RW(16) + 8), RW(2));
wr32(c, (RW(16) + 12), RW(2));
L_002B2C78:;
SET32(2, RW(0) + 10);
L_002B2C7C:;
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 2); if (t) goto L_002B2C94; }
{ int t = RD(7) == RD(2);  if (t) goto L_002B2C94; }
if (RD(7) == 0) SET64(9, RD(0)); { POLL(); goto L_002B2C40; }
L_002B2C94:;
SET32(9, RW(0) + 1); { POLL(); goto L_002B2C40; }
L_002B2C9C:;
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 8), RW(3));
wr32(c, (RW(16) + 12), RW(2)); { POLL(); goto L_002B2C78; }
L_002B2CAC:;
wr32(c, (RW(16) + 12), RW(2));
SET32(2, RW(0) + 16);
wr32(c, (RW(16) + 8), RW(2)); { POLL(); goto L_002B2C28; }
L_002B2CBC:;
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
mul_s(c, 0, 3, RSW(3), RSW(2));
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + 2624);
SET32(6, RW(0) + 6);
SET32(3, RSW(3) >> (RW(9) & 31));
SET32(2, RW(0) + -64);
SET32(3, RW(3) + 63);
SET64(31, 0x2b2ce8); SET64(5, RD(3) & RD(2)); JP_F_002B3550(c);
wr32(c, (RW(16) + 0), RW(2)); { POLL(); goto L_002B2C50; }
L_002B2CF0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B2D00(Ctx *c) { /* func_002B2D00 */
ENTER(0x2b2d00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B2D48; }
SET64(2, rd8(c, (RW(17) + 20)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6360);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 24), RW(3)); if (t) goto L_002B2D54; }
SET64(2, RD(16) << 48);
L_002B2D34:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B2D4C; }
SET64(31, 0x2b2d48); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B2D48:;
SET64(2, RD(17) + RD(0));
L_002B2D4C:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002B2D6C;
L_002B2D54:;
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2b2d64); SET32(4, RW(4) + 2624); JP_F_002B34B0(c);
SET64(2, RD(16) << 48); { POLL(); goto L_002B2D34; }
L_002B2D6C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B2D80(Ctx *c) { /* func_002B2D80 */
ENTER(0x2b2d80);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 6360);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(9, RW(0) + 36);
wr32(c, (RW(4) + 24), RW(2));
SET64(16, RD(4) + RD(0));
SET64(2, RD(0) < RD(8));
wr32(c, (RW(4) + 4), RW(7));
wr8(c, (RW(4) + 20), (u8)RW(2));
SET64(3, RD(0) + RD(0));
SET64(4, RD(0) + RD(0));
{ int t = RD(7) == RD(9); SET64(2, RD(0) + RD(0)); if (t) goto L_002B2E6C; }
SET32(9, RW(0) + 44);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 20); if (t) goto L_002B2E6C; }
{ int t = RD(7) == RD(9);  if (t) goto L_002B2E6C; }
SET32(9, RW(0) + 27);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 19); if (t) goto L_002B2E5C; }
{ int t = RD(7) == RD(9);  if (t) goto L_002B2E5C; }
SET32(9, RW(0) + 58);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 50); if (t) goto L_002B2E4C; }
{ int t = RD(7) == RD(9);  if (t) goto L_002B2E4C; }
SET32(9, RW(0) + 10);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 2); if (t) goto L_002B2E4C; }
{ int t = RD(7) == RD(9);  if (t) goto L_002B2E4C; }
SET32(9, RW(0) + 49);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 48); if (t) goto L_002B2E3C; }
{ int t = RD(7) == RD(9);  if (t) goto L_002B2E3C; }
SET32(9, RW(0) + 1);
{ int t = RD(7) == RD(9);  if (t) goto L_002B2E3C; }
{ int t = RD(7) == RD(0);  if (t) goto L_002B2E3C; }
SET32(9, RW(5) + -1); goto L_002B2E7C;
L_002B2E3C:;
SET32(4, RW(0) + 6);
SET32(3, RW(0) + 5);
SET64(2, RD(0) + RD(0)); goto L_002B2E78;
L_002B2E4C:;
SET32(4, RW(0) + 6);
SET32(2, RW(0) + 1);
SET64(3, RD(4) + RD(0)); goto L_002B2E78;
L_002B2E5C:;
SET32(4, RW(0) + 7);
SET32(3, RW(0) + 6);
SET32(2, RW(0) + 2); goto L_002B2E78;
L_002B2E6C:;
SET32(4, RW(0) + 7);
SET32(2, RW(0) + 3);
SET64(3, RD(4) + RD(0));
L_002B2E78:;
SET32(9, RW(5) + -1);
L_002B2E7C:;
SET32(5, RW(6) + -1);
SET32(5, RSW(5) >> (RW(3) & 31));
SET32(6, RSW(9) >> (RW(4) & 31));
SET32(5, RW(5) + 1);
SET32(6, RW(6) + 1);
SET32(5, RW(5) << (RW(3) & 31));
SET32(4, RW(6) << (RW(4) & 31));
SET64(3, rd8(c, (RW(16) + 20)));
wr32(c, (RW(16) + 16), RW(6));
wr32(c, (RW(16) + 8), RW(4));
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 12), RW(5)); if (t) goto L_002B2EB8; }
wr32(c, (RW(16) + 0), RW(8));
L_002B2EB0:;
SET64(2, RD(16) + RD(0)); goto L_002B2EE4;
L_002B2EB8:;
mul_s(c, 0, 5, RSW(4), RSW(5));
SET32(3, RW(0) + -64);
SET32(6, RW(0) + 6);
SET32(2, RSW(5) >> (RW(2) & 31));
SET64(4, (s64)(s32)0x540000);
SET32(2, RW(2) + 63);
SET32(4, RW(4) + 2624);
SET64(31, 0x2b2edc); SET64(5, RD(2) & RD(3)); JP_F_002B3550(c);
wr32(c, (RW(16) + 0), RW(2)); { POLL(); goto L_002B2EB0; }
L_002B2EE4:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B2F00(Ctx *c) { /* func_002B2F00 */
ENTER(0x2b2f00);
SET32(2, RW(0) + 44);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0xf0000000); if (t) goto L_002B2FBC; }
SET32(2, RW(0) + 36);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0xf000000); if (t) goto L_002B2FB4; }
SET32(2, RW(0) + 27);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0xff000000); if (t) goto L_002B2FAC; }
SET32(2, RW(0) + 49);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0xff0000); if (t) goto L_002B2FA4; }
SET32(2, RW(0) + 1);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 58); if (t) goto L_002B2FA0; }
{ int t = RD(4) == RD(2);  if (t) goto L_002B2F94; }
SET32(2, RW(0) + 50);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + -1); if (t) goto L_002B2F98; }
SET32(2, RW(0) + 48);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 20); if (t) goto L_002B2F94; }
{ int t = RD(4) == RD(2);  if (t) goto L_002B2F94; }
SET32(2, RW(0) + 19);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 10); if (t) goto L_002B2F94; }
{ int t = RD(4) == RD(2);  if (t) goto L_002B2F94; }
SET32(2, RW(0) + 2);
{ int t = RD(4) == RD(2);  if (t) goto L_002B2F94; }
{ int t = RD(4) == RD(0);  if (t) goto L_002B2F94; }
SET64(2, RD(0) + RD(0)); goto L_002B2FBC;
L_002B2F94:;
SET32(2, RW(0) + -1);
L_002B2F98:;
 goto L_002B2FBC;
L_002B2FA0:;
SET64(2, (s64)(s32)0xff0000);
L_002B2FA4:;
SET64(2, RD(2) | 0xffff); goto L_002B2FBC;
L_002B2FAC:;
 goto L_002B2FBC;
L_002B2FB4:;
 goto L_002B2FBC;
L_002B2FBC:;
 return;
}

void JP_F_002B2FD0(Ctx *c) { /* func_002B2FD0 */
ENTER(0x2b2fd0);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(3, ~(RD(3) | RD(0)));
wr32(c, (RW(4) + 16), RW(3)); return;
}

void JP_F_002B2FE0(Ctx *c) { /* func_002B2FE0 */
ENTER(0x2b2fe0);
SET32(29, RW(29) + -128);
SET32(3, RW(0) + 1);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(4, RW(3) << (RW(6) & 31));
SET32(3, RW(4) + -1);
SET64(2, RD(2) & RD(3));
{ int t = RD(2) == RD(0); SET64(19, RD(7) + RD(0)); if (t) goto L_002B302C; }
SET32(18, RW(4) - RW(2)); goto L_002B3030;
L_002B302C:;
SET64(18, RD(0) + RD(0));
L_002B3030:;
SET64(4, RD(19) + RD(0));
{ int t = RD(19) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002B3060; }
L_002B303C:;
SET64(2, RD(4) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_002B3050; }
SET32(3, RW(3) + 1);
L_002B3050:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_002B303C; } }
L_002B3060:;
SET32(2, RW(0) + 32);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 17, RSW(5), RSW(2));
SET64(31, 0x2b3078); SET32(4, RW(0) + 20); JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002B30F0; }
L_002B3080:;
SET64(2, (s32)rd32(c, (RW(21) + 16)));
SET64(3, RD(0) + RD(0));
SET64(16, RD(2) | RD(19));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002B30B8; }
L_002B3094:;
SET64(2, RD(4) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_002B30A8; }
SET32(3, RW(3) + 1);
L_002B30A8:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_002B3094; } }
L_002B30B8:;
SET32(2, RW(0) + 32);
SET32(2, RW(2) - RW(3));
{ int t = RSD(2) > 0; SET32(4, RW(0) + 20); if (t) goto L_002B312C; }
L_002B30C8:;
{ int t = RD(18) == RD(0);  if (t) goto L_002B31E8; }
SET64(2, (s32)rd32(c, (RW(21) + 8)));
SET32(17, RW(18) + RW(17));
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 20); if (t) goto L_002B3180; }
L_002B30E4:;
wr32(c, (RW(21) + 8), RW(18));
L_002B30E8:;
SET64(2, RD(20) + RD(0)); goto L_002B3204;
L_002B30F0:;
SET64(2, (s32)rd32(c, (RW(21) + 12)));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b3100); SET32(16, RW(2) + RW(18)); JP_F_002AF190(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 5936);
SET32(2, RW(2) + -1208);
wr32(c, (RW(20) + 0), RW(3));
wr32(c, (RW(20) + 4), RW(0));
wr32(c, (RW(20) + 0), RW(2));
wr32(c, (RW(20) + 8), RW(17));
wr32(c, (RW(20) + 12), RW(16));
wr32(c, (RW(20) + 16), RW(19)); { POLL(); goto L_002B3080; }
L_002B312C:;
SET64(31, 0x2b3134);  JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002B3144; }
L_002B313C:;
wr32(c, (RW(20) + 4), RW(19)); { POLL(); goto L_002B30C8; }
L_002B3144:;
SET64(2, (s32)rd32(c, (RW(21) + 12)));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3154); SET32(22, RW(2) + RW(18)); JP_F_002AF190(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 5936);
SET32(2, RW(2) + -1208);
wr32(c, (RW(19) + 0), RW(3));
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(19) + 0), RW(2));
wr32(c, (RW(19) + 8), RW(17));
wr32(c, (RW(19) + 12), RW(22));
wr32(c, (RW(19) + 16), RW(16)); { POLL(); goto L_002B313C; }
L_002B3180:;
SET64(31, 0x2b3188);  JP_F_00100670(c);
{ int t = RD(2) != RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002B31A0; }
L_002B3190:;
SET64(2, (s32)rd32(c, (RW(21) + 4)));
wr32(c, (RW(16) + 4), RW(2));
wr32(c, (RW(21) + 4), RW(16)); { POLL(); goto L_002B30E4; }
L_002B31A0:;
SET64(3, (s32)rd32(c, (RW(21) + 12)));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(21) + 8)));
SET64(19, (s32)rd32(c, (RW(21) + 16)));
SET32(22, RW(3) + RW(17));
SET64(31, 0x2b31bc); SET32(17, RW(2) - RW(17)); JP_F_002AF190(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + 5936);
SET32(2, RW(2) + -1208);
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 8), RW(17));
wr32(c, (RW(16) + 12), RW(22));
wr32(c, (RW(16) + 16), RW(19)); { POLL(); goto L_002B3190; }
L_002B31E8:;
SET64(3, (s32)rd32(c, (RW(21) + 12)));
SET64(2, (s32)rd32(c, (RW(21) + 8)));
SET32(3, RW(3) + RW(17));
SET32(2, RW(2) - RW(17));
wr32(c, (RW(21) + 12), RW(3));
wr32(c, (RW(21) + 8), RW(2)); { POLL(); goto L_002B30E8; }
L_002B3204:;
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002B3230(Ctx *c) { /* func_002B3230 */
ENTER(0x2b3230);
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET64(2, (s64)(s32)0x100000);
div_s(c, 0, RSW(2), RSW(3));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
SET64(5, c->lo.d[0]);
{ int t = RD(4) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002B3270; }
L_002B3250:;
SET64(2, RD(4) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_002B3260; }
SET32(3, RW(3) + 1);
L_002B3260:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_002B3250; } }
L_002B3270:;
SET32(3, RW(3) << 20);
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 5); if (t) goto L_002B3284; }
SET32(2, RW(3) + 31);
SET32(2, RSW(2) >> 5);
L_002B3284:;
SET32(2, RW(5) + RW(2)); return;
}

void JP_F_002B3290(Ctx *c) { /* func_002B3290 */
ENTER(0x2b3290);
SET32(2, RW(0) + 1);
SET32(6, RW(2) << (RW(6) & 31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(6) + -1);
SET64(2, RD(2) & RD(3));
{ int t = RD(2) == RD(0);  if (t) goto L_002B32B4; }
SET32(6, RW(6) - RW(2)); goto L_002B32B8;
L_002B32B4:;
SET64(6, RD(0) + RD(0));
L_002B32B8:;
SET64(8, RD(7) + RD(0));
{ int t = RD(7) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002B32E8; }
L_002B32C4:;
SET64(2, RD(8) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_002B32D8; }
SET32(3, RW(3) + 1);
L_002B32D8:;
SET32(8, RW(8) >> 1);
{ int t = RD(8) != RD(0);  if (t) { POLL(); goto L_002B32C4; } }
L_002B32E8:;
SET32(2, RW(0) + 32);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 3, RSW(5), RSW(2));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) - RW(6));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B3328; }
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET64(2, RD(2) & RD(7));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_002B3324; }
 goto L_002B3328;
L_002B3324:;
SET64(2, RD(0) + RD(0));
L_002B3328:;
 return;
}

void JP_F_002B3330(Ctx *c) { /* func_002B3330 */
ENTER(0x2b3330);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(9, (s32)rd32(c, (RW(5) + 12)));
SET64(8, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(8) == RD(9);  if (t) goto L_002B33A0; }
L_002B3348:;
SET64(7, (s32)rd32(c, (RW(4) + 8)));
SET32(3, RW(8) + RW(7));
{ int t = RD(3) != RD(9);  if (t) goto L_002B33EC; }
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
{ int t = RD(6) != RD(3);  if (t) goto L_002B33EC; }
SET64(6, (s32)rd32(c, (RW(5) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET32(6, RW(7) + RW(6));
wr32(c, (RW(4) + 8), RW(6));
wr32(c, (RW(4) + 4), RW(3));
{ int t = RD(5) == RD(0); wr32(c, (RW(5) + 4), RW(0)); if (t) goto L_002B33F4; }
SET64(25, (s32)rd32(c, (RW(5) + 0)));
SET64(4, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b3398); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B3398:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B33F8;
L_002B33A0:;
SET64(6, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(6) != RD(3);  if (t) { POLL(); goto L_002B3348; } }
SET64(7, (s32)rd32(c, (RW(5) + 16)));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(4) + 4), RW(3));
SET64(6, RD(6) & RD(7));
wr32(c, (RW(5) + 4), RW(0));
{ int t = RD(5) == RD(0); wr32(c, (RW(4) + 16), RW(6)); if (t) goto L_002B33F4; }
SET64(25, (s32)rd32(c, (RW(5) + 0)));
SET64(4, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b33e4); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002B3398; }
L_002B33EC:;
wr32(c, (RW(4) + 4), RW(5)); { POLL(); goto L_002B3398; }
L_002B33F4:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B33F8:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B3400(Ctx *c) { /* func_002B3400 */
ENTER(0x2b3400);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(31, 0x2b342c); SET64(16, RD(7) + RD(0)); JP_F_002AF190(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 8), RW(18));
SET32(2, RW(2) + -1208);
wr32(c, (RW(19) + 12), RW(17));
wr32(c, (RW(19) + 0), RW(2));
SET64(2, RD(19) + RD(0));
wr32(c, (RW(19) + 16), RW(16));
wr32(c, (RW(19) + 4), RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002B3470(Ctx *c) { /* func_002B3470 */
ENTER(0x2b3470);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B34A0; }
L_002B347C:;
SET64(3, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(3) != RD(0);  if (t) goto L_002B3490; }
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) + RW(3));
L_002B3490:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_002B347C; } }
L_002B34A0:;
 return;
}

void JP_F_002B34B0(Ctx *c) { /* func_002B34B0 */
ENTER(0x2b34b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
SET32(4, RW(28) + -29928);
SET64(31, 0x2b34d4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002AB650(c);
SET64(16, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
L_002B34DC:;
SET64(3, RD(0) < RD(16));
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002B3508; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_002B3508; }
SET64(18, RD(16) + RD(0));
SET64(16, (s32)rd32(c, (RW(16) + 4))); { POLL(); goto L_002B34DC; }
L_002B3508:;
SET64(31, 0x2b3510); SET64(4, RD(17) + RD(0)); JP_F_002B2FD0(c);
{ int t = RD(16) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_002B3528; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x2b3524); SET64(4, RD(17) + RD(0)); JP_F_002B3330(c);
SET64(4, RD(18) + RD(0));
L_002B3528:;
SET64(31, 0x2b3530); SET64(5, RD(17) + RD(0)); JP_F_002B3330(c);
SET64(31, 0x2b3538); SET32(4, RW(28) + -29928); JP_F_002AB600(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B3550(Ctx *c) { /* func_002B3550 */
ENTER(0x2b3550);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 128), RD(31));
wr128(c, (RW(29) + 112) & ~15u, &c->r[23]);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(6) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(4, RW(28) + -29928);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b3590); SET64(16, RD(7) + RD(0)); JP_F_002AB650(c);
SET64(4, RD(16) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(23, RD(0) + RD(0));
SET64(31, 0x2b35a4); SET64(17, RD(20) + RD(0)); JP_F_002B2F00(c);
SET64(22, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 4)));
{ int t = RD(2) != RD(0);  if (t) goto L_002B3614; }
L_002B35B4:;
{ int t = RD(18) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002B3600; }
SET64(5, RD(19) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(7, RD(22) + RD(0));
SET64(31, 0x2b35d0); SET64(4, RD(18) + RD(0)); JP_F_002B2FE0(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET32(4, RW(28) + -29928); if (t) goto L_002B3604; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
{ int t = RD(2) == RD(0);  if (t) goto L_002B3680; }
L_002B35E8:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
L_002B35EC:;
{ int t = RD(5) == RD(0); SET64(4, RD(23) + RD(0)); if (t) goto L_002B3600; }
SET64(31, 0x2b35fc);  JP_F_002AE690(c);
wr32(c, (RW(16) + 4), RW(0));
L_002B3600:;
SET32(4, RW(28) + -29928);
L_002B3604:;
SET64(31, 0x2b360c);  JP_F_002AB600(c);
SET64(2, RD(16) + RD(0)); goto L_002B36B0;
L_002B3614:;
SET64(23, RD(17) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(21) + RD(0));
SET64(7, RD(22) + RD(0));
SET64(31, 0x2b3630); SET64(4, RD(17) + RD(0)); JP_F_002B3290(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002B3660; }
{ int t = RD(18) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002B3674; }
SET64(31, 0x2b3648);  JP_F_002B3230(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2b3654); SET64(4, RD(18) + RD(0)); JP_F_002B3230(c);
SET64(1, RSD(2) < RSD(16));
{ int t = RD(1) != RD(0);  if (t) goto L_002B3674; }
L_002B3660:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002B3614; } }
 { POLL(); goto L_002B35B4; }
L_002B3674:;
SET64(18, RD(17) + RD(0)); { POLL(); goto L_002B3660; }
L_002B3680:;
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b368c); SET64(5, RD(18) + RD(0)); JP_F_002AE7E0(c);
{ int t = RD(18) == RD(0);  if (t) { POLL(); goto L_002B35E8; } }
SET64(25, (s32)rd32(c, (RW(18) + 0)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b36a8); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 4))); { POLL(); goto L_002B35EC; }
L_002B36B0:;
SET64(31, rd64(c, (RW(29) + 128)));
rd128(c, (RW(29) + 112) & ~15u, &c->r[23]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002B36E0(Ctx *c) { /* func_002B36E0 */
ENTER(0x2b36e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B3738; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6376);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 0), RW(2)); if (t) goto L_002B3720; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -1208);
SET64(31, 0x2b3720); wr32(c, (RW(17) + 0), RW(2)); JP_F_002AE8C0(c);
L_002B3720:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B373C; }
SET64(31, 0x2b3738); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B3738:;
SET64(2, RD(17) + RD(0));
L_002B373C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B3750(Ctx *c) { /* func_002B3750 */
ENTER(0x2b3750);
SET32(29, RW(29) + -128);
SET64(2, (s64)(s32)0x50000000);
wr64(c, (RW(29) + 112), RD(31));
SET32(6, RW(0) + 96);
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
SET64(7, (s64)(s32)0x13000000);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(8, RD(2) | 0x6);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(4, RD(20) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(5, RW(21) + 16);
SET64(31, 0x2b3798); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_002B1AB0(c);
SET64(3, rd64(c, (RW(21) + 96)));
SET64(2, (s64)(s32)0x51000000);
SET64(5, (s32)rd32(c, (RW(21) + 112)));
SET64(4, RD(20) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(3, RD(3) & 0x7fff);
SET64(6, RD(3) << 4);
SET64(3, RD(3) << 32);
SET64(6, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(6, RSD(6) >> 32);
SET64(31, 0x2b37cc); SET64(8, RD(3) | RD(2)); JP_F_002B1A50(c);
SET64(6, (s32)rd32(c, (RW(21) + 116)));
SET64(1, RD(0) | 0x8000);
SET64(1, RSD(6) < RSD(1));
{ int t = RD(1) != RD(0);  if (t) goto L_002B38D0; }
SET64(5, rd64(c, (RW(21) + 96)));
SET64(3, (s64)(s32)0x80010000);
SET64(4, (s32)rd32(c, (RW(21) + 112)));
SET64(3, RD(3) | 0x3);
SET64(18, RD(0) + RD(0));
SET64(5, RD(5) & 0x7fff);
SET64(5, RD(5) << 32);
SET64(5, RSD(5) >> 32);
SET32(5, RW(5) << 4);
SET32(19, RW(4) + RW(5));
mul_s(c, 0, 0, RSW(3), RSW(6));
SET32(4, RW(6) >> 31);
SET64(3, c->hi.d[0]);
SET32(3, RW(3) + RW(6));
SET32(3, RSW(3) >> 14);
SET32(3, RW(3) + RW(4));
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002B38D0; }
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x51000000);
SET64(2, rd64(c, (RW(2) + -28816)));
SET64(4, RD(2) & 0x7fff);
SET64(2, RD(4) << 32);
SET64(16, RD(4) << 4);
SET64(2, RSD(2) >> 32);
SET64(17, RD(2) | RD(3));
SET32(22, RW(2) << 4);
L_002B3854:;
SET64(5, (s64)(s32)0x4c0000);
SET64(2, (s64)(s32)0x50000000);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + -28816);
SET32(6, RW(0) + 16);
SET64(7, (s64)(s32)0x13000000);
SET64(31, 0x2b3874); SET64(8, RD(2) | 0x1); JP_F_002B1A50(c);
SET64(6, RD(16) << 32);
SET64(4, RD(20) + RD(0));
SET64(6, RSD(6) >> 32);
SET64(5, RD(19) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2b3890); SET64(8, RD(17) + RD(0)); JP_F_002B1A50(c);
SET64(5, (s32)rd32(c, (RW(21) + 116)));
SET64(3, (s64)(s32)0x80010000);
SET64(3, RD(3) | 0x3);
SET32(19, RW(19) + RW(22));
SET32(18, RW(18) + 1);
mul_s(c, 0, 0, RSW(3), RSW(5));
SET32(4, RW(5) >> 31);
SET64(3, c->hi.d[0]);
SET32(3, RW(3) + RW(5));
SET32(3, RSW(3) >> 14);
SET32(3, RW(3) + RW(4));
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B3854; } }
L_002B38D0:;
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002B3900(Ctx *c) { /* func_002B3900 */
ENTER(0x2b3900);
wr32(c, (RW(4) + 112), RW(5));
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(7, (s32)rd32(c, (RW(9) + 0)));
SET64(5, RD(5) << 32);
SET64(3, RD(3) << 48);
SET64(5, RD(5) | RD(3));
SET64(6, (s32)rd32(c, (RW(9) + 8)));
SET64(3, RD(8) << 32);
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 56);
SET64(5, RD(3) | RD(5));
SET64(7, RD(7) << 32);
SET64(3, (s32)rd32(c, (RW(9) + 4)));
wr64(c, (RW(4) + 32), RD(5));
SET64(5, (s32)rd32(c, (RW(9) + 12)));
SET64(3, RD(3) << 48);
SET64(3, RD(7) | RD(3));
wr64(c, (RW(4) + 48), RD(3));
SET64(3, RD(5) << 32);
SET64(3, RD(6) | RD(3));
wr64(c, (RW(4) + 64), RD(3));
mul_s(c, 0, 5, RSW(6), RSW(5));
SET32(3, RW(0) + 36);
SET32(5, RW(5) >> 4);
{ int t = RD(8) == RD(3); wr32(c, (RW(4) + 116), RW(5)); if (t) goto L_002B3A28; }
SET32(3, RW(0) + 44);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 20); if (t) goto L_002B3A28; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B3A28; }
SET32(3, RW(0) + 27);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 19); if (t) goto L_002B3A40; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B3A40; }
SET32(3, RW(0) + 58);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 50); if (t) goto L_002B3A18; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B3A18; }
SET32(3, RW(0) + 10);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 2); if (t) goto L_002B3A18; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B3A18; }
SET32(3, RW(0) + 49);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_002B3A04; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B3A04; }
SET32(3, RW(0) + 48);
{ int t = RD(8) == RD(3);  if (t) goto L_002B39F4; }
{ int t = RD(8) == RD(0);  if (t) goto L_002B39F4; }
SET64(7, (s32)rd32(c, (RW(4) + 116))); goto L_002B3A44;
L_002B39F4:;
SET64(3, (s32)rd32(c, (RW(4) + 116)));
SET32(3, RW(3) << 2);
wr32(c, (RW(4) + 116), RW(3)); goto L_002B3A40;
L_002B3A04:;
SET64(5, (s32)rd32(c, (RW(4) + 116)));
SET32(3, RW(5) << 1);
SET32(3, RW(3) + RW(5));
wr32(c, (RW(4) + 116), RW(3)); goto L_002B3A40;
L_002B3A18:;
SET64(3, (s32)rd32(c, (RW(4) + 116)));
SET32(3, RW(3) << 1);
wr32(c, (RW(4) + 116), RW(3)); goto L_002B3A40;
L_002B3A28:;
SET64(5, (s32)rd32(c, (RW(4) + 116)));
{ int t = RSD(5) >= 0; SET32(3, RSW(5) >> 1); if (t) goto L_002B3A3C; }
SET32(3, RW(5) + 1);
SET32(3, RSW(3) >> 1);
L_002B3A3C:;
wr32(c, (RW(4) + 116), RW(3));
L_002B3A40:;
SET64(7, (s32)rd32(c, (RW(4) + 116)));
L_002B3A44:;
SET64(1, RD(0) | 0x8000);
SET64(6, rd64(c, (RW(4) + 96)));
SET32(3, RW(0) + -32768);
SET64(5, RD(7) & 0x7fff);
SET64(1, RSD(7) < RSD(1));
SET64(3, RD(6) & RD(3));
SET64(3, RD(3) | RD(5));
{ int t = RD(1) != RD(0); wr64(c, (RW(4) + 96), RD(3)); if (t) goto L_002B3AA8; }
SET32(3, RW(0) + 32767);
div_s(c, 0, RSW(7), RSW(3));
SET64(5, c->hi.d[0]);
{ int t = RD(5) != RD(0);  if (t) goto L_002B3A88; }
SET64(5, RD(3) + RD(0));
SET32(3, RW(7) + -32767);
wr32(c, (RW(4) + 116), RW(3));
L_002B3A88:;
SET64(6, rd64(c, (RW(4) + 96)));
SET64(3, RD(5) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RD(3) & 0x7fff);
SET32(3, RW(0) + -32768);
SET64(3, RD(6) & RD(3));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 96), RD(3));
L_002B3AA8:;
 return;
}

void JP_F_002B3AB0(Ctx *c) { /* func_002B3AB0 */
ENTER(0x2b3ab0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B3AF8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6400);
SET64(31, 0x2b3ae0); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B3AFC; }
SET64(31, 0x2b3af8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B3AF8:;
SET64(2, RD(17) + RD(0));
L_002B3AFC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B3B10(Ctx *c) { /* func_002B3B10 */
ENTER(0x2b3b10);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b3b24); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 112), RW(0));
SET32(2, RW(2) + 6400);
wr64(c, (RW(16) + 80), RD(0));
wr32(c, (RW(16) + 8), RW(2));
SET64(2, (s64)(s32)0x10000000);
wr64(c, (RW(16) + 104), RD(0));
SET64(3, RD(2) << 32);
SET32(2, RW(0) + 4);
SET64(2, RD(2) | RD(3));
SET32(3, RW(0) + 14);
wr64(c, (RW(16) + 16), RD(2));
SET32(2, RW(0) + 80);
wr64(c, (RW(16) + 24), RD(3));
SET32(3, RW(0) + 81);
wr64(c, (RW(16) + 40), RD(2));
SET32(2, RW(0) + 82);
wr64(c, (RW(16) + 56), RD(3));
SET32(3, RW(0) + 83);
wr64(c, (RW(16) + 72), RD(2));
SET64(2, (s64)(s32)0x8000000);
wr64(c, (RW(16) + 88), RD(3));
SET64(4, RD(2) << 32);
SET64(3, RD(0) | 0x8000);
SET64(3, RD(3) | RD(4));
SET64(2, RD(16) + RD(0));
wr64(c, (RW(16) + 96), RD(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B3BA0(Ctx *c) { /* func_002B3BA0 */
ENTER(0x2b3ba0);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { JP_F_002B1AB0(c); return; }
}

void JP_F_002B3BC0(Ctx *c) { /* func_002B3BC0 */
ENTER(0x2b3bc0);
SET64(8, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(8, RSD(8) >> 32);
SET64(5, RD(5) << 8);
SET64(3, RD(3) << 16);
SET64(5, RD(8) | RD(5));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B3BF0(Ctx *c) { /* func_002B3BF0 */
ENTER(0x2b3bf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B3C38; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6432);
SET64(31, 0x2b3c20); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B3C3C; }
SET64(31, 0x2b3c38); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B3C38:;
SET64(2, RD(17) + RD(0));
L_002B3C3C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B3C50(Ctx *c) { /* func_002B3C50 */
ENTER(0x2b3c50);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
SET64(31, 0x2b3c7c); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(2, RD(18) << 32);
SET64(4, RD(19) << 32);
SET64(2, RSD(2) >> 32);
SET64(4, RSD(4) >> 32);
SET64(3, RD(2) << 8);
SET64(2, RD(17) << 32);
SET64(3, RD(4) | RD(3));
SET64(2, RSD(2) >> 32);
SET64(2, RD(2) << 16);
SET64(2, RD(2) | RD(3));
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(16) + 32), RD(2));
SET32(3, RW(3) + 6432);
SET32(2, RW(0) + 14);
wr32(c, (RW(16) + 8), RW(3));
SET64(3, (s64)(s32)0x10000000);
wr64(c, (RW(16) + 24), RD(2));
SET64(4, RD(3) << 32);
SET32(2, RW(0) + 61);
SET64(3, RD(0) | 0x8001);
wr64(c, (RW(16) + 40), RD(2));
SET64(3, RD(3) | RD(4));
SET64(2, RD(16) + RD(0));
wr64(c, (RW(16) + 16), RD(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002B3D00(Ctx *c) { /* func_002B3D00 */
ENTER(0x2b3d00);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { JP_F_002B1AB0(c); return; }
}

void JP_F_002B3D20(Ctx *c) { /* func_002B3D20 */
ENTER(0x2b3d20);
SET64(9, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(9, RSD(9) >> 32);
SET64(6, RD(5) << 16);
SET64(5, RD(3) << 24);
SET64(6, RD(9) | RD(6));
SET64(3, RD(8) << 32);
SET64(5, RD(5) | RD(6));
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 32);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B3D60(Ctx *c) { /* func_002B3D60 */
ENTER(0x2b3d60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B3DA8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6464);
SET64(31, 0x2b3d90); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B3DAC; }
SET64(31, 0x2b3da8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B3DA8:;
SET64(2, RD(17) + RD(0));
L_002B3DAC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B3DC0(Ctx *c) { /* func_002B3DC0 */
ENTER(0x2b3dc0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(7) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b3df4); SET64(16, RD(8) + RD(0)); JP_F_002B0400(c);
SET64(2, RD(19) << 32);
SET64(4, RD(20) << 32);
SET64(2, RSD(2) >> 32);
SET64(4, RSD(4) >> 32);
SET64(3, RD(2) << 16);
SET64(2, RD(18) << 32);
SET64(3, RD(4) | RD(3));
SET64(2, RSD(2) >> 32);
SET64(4, (s64)(s32)0x4e0000);
SET64(2, RD(2) << 24);
SET32(4, RW(4) + 6464);
SET64(3, RD(2) | RD(3));
wr32(c, (RW(17) + 8), RW(4));
SET64(2, RD(16) << 32);
SET64(2, RSD(2) >> 32);
SET64(2, RD(2) << 32);
SET64(2, RD(2) | RD(3));
wr64(c, (RW(17) + 32), RD(2));
SET64(2, (s64)(s32)0x10000000);
SET64(3, RD(2) << 32);
SET64(2, RD(0) | 0x8001);
SET64(3, RD(2) | RD(3));
SET32(2, RW(0) + 14);
wr64(c, (RW(17) + 16), RD(3));
SET32(3, RW(0) + 76);
wr64(c, (RW(17) + 24), RD(2));
wr64(c, (RW(17) + 40), RD(3));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B3E90(Ctx *c) { /* func_002B3E90 */
ENTER(0x2b3e90);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 80);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x5); { JP_F_002B1AB0(c); return; }
}

void JP_F_002B3EB0(Ctx *c) { /* func_002B3EB0 */
ENTER(0x2b3eb0);
SET64(8, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(8, RSD(8) >> 32);
SET64(5, RD(5) << 15);
SET64(3, RD(3) << 32);
SET64(5, RD(8) | RD(5));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 64), RD(3)); return;
}

void JP_F_002B3EE0(Ctx *c) { /* func_002B3EE0 */
ENTER(0x2b3ee0);
SET64(3, RD(5) << 32);
SET64(3, RSD(3) >> 32);
wr64(c, (RW(4) + 80), RD(3)); return;
}

void JP_F_002B3EF0(Ctx *c) { /* func_002B3EF0 */
ENTER(0x2b3ef0);
SET64(10, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(10, RSD(10) >> 32);
SET64(6, RD(5) << 2);
SET64(5, RD(3) << 4);
SET64(6, RD(10) | RD(6));
SET64(3, RD(8) << 32);
SET64(5, RD(5) | RD(6));
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 6);
SET64(5, RD(3) | RD(5));
SET64(3, RD(9) << 32);
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 32);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B3F40(Ctx *c) { /* func_002B3F40 */
ENTER(0x2b3f40);
SET32(7, RW(5) + 16);
SET32(6, RW(4) + 16);
SET64(5, RD(0) + RD(0));
L_002B3F4C:;
rd128(c, (RW(7) + 0) & ~15u, &c->r[3]);
SET32(5, RW(5) + 1);
SET64(2, RD(5) < (u64)(s64)5);
wr128(c, (RW(6) + 0) & ~15u, &c->r[3]);
SET32(7, RW(7) + 16);
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 16); if (t) { POLL(); goto L_002B3F4C; } }
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002B3F70(Ctx *c) { /* func_002B3F70 */
ENTER(0x2b3f70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B3FB8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6496);
SET64(31, 0x2b3fa0); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B3FBC; }
SET64(31, 0x2b3fb8); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B3FB8:;
SET64(2, RD(17) + RD(0));
L_002B3FBC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B3FD0(Ctx *c) { /* func_002B3FD0 */
ENTER(0x2b3fd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b3fe4); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, RD(0) | 0x8004);
SET32(2, RW(2) + 6496);
wr64(c, (RW(16) + 48), RD(0));
wr32(c, (RW(16) + 8), RW(2));
SET64(2, (s64)(s32)0x10000000);
wr64(c, (RW(16) + 80), RD(0));
SET64(4, RD(2) << 32);
SET32(2, RW(0) + 14);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(16) + 24), RD(2));
SET32(4, RW(0) + 128);
SET32(2, RW(0) + 66);
wr64(c, (RW(16) + 16), RD(3));
wr64(c, (RW(16) + 40), RD(2));
SET64(3, RD(4) << 32);
SET32(2, RW(0) + 73);
SET64(3, RD(4) | RD(3));
wr64(c, (RW(16) + 56), RD(2));
SET32(2, RW(0) + 59);
wr64(c, (RW(16) + 64), RD(3));
wr64(c, (RW(16) + 72), RD(2));
SET32(2, RW(0) + 74);
wr64(c, (RW(16) + 88), RD(2));
SET32(2, RW(0) + 68);
wr64(c, (RW(16) + 32), RD(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B4060(Ctx *c) { /* func_002B4060 */
ENTER(0x2b4060);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 80);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x5); { JP_F_002B1AB0(c); return; }
}

void JP_F_002B4080(Ctx *c) { /* func_002B4080 */
ENTER(0x2b4080);
SET64(12, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(12, RSD(12) >> 32);
SET64(6, RD(5) << 16);
SET64(7, (s32)rd32(c, (RW(8) + 0)));
SET64(5, RD(3) << 24);
SET64(6, RD(12) | RD(6));
SET64(3, RD(9) << 32);
SET64(5, RD(5) | RD(6));
SET64(3, RSD(3) >> 32);
SET64(9, (s32)rd32(c, (RW(8) + 4)));
SET64(3, RD(3) << 32);
SET64(6, RD(3) | RD(5));
SET64(3, RD(10) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RD(3) << 48);
SET64(3, RD(11) << 32);
SET64(5, RD(5) | RD(6));
SET64(3, RSD(3) >> 32);
SET64(6, (s32)rd32(c, (RW(29) + 0)));
SET64(3, RD(3) << 56);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3));
SET64(3, (s32)rd32(c, (RW(8) + 12)));
SET64(5, (s32)rd32(c, (RW(8) + 8)));
SET64(3, RD(3) << 32);
SET64(8, RD(9) << 16);
SET64(3, RD(5) | RD(3));
SET64(8, RD(7) | RD(8));
SET64(7, (s32)rd32(c, (RW(6) + 0)));
SET64(6, (s32)rd32(c, (RW(6) + 4)));
SET64(5, RD(7) << 32);
SET64(5, RD(5) | RD(8));
wr64(c, (RW(4) + 64), RD(3));
SET64(3, RD(6) << 48);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 48), RD(3)); return;
}

void JP_F_002B4130(Ctx *c) { /* func_002B4130 */
ENTER(0x2b4130);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4178; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6528);
SET64(31, 0x2b4160); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B417C; }
SET64(31, 0x2b4178); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B4178:;
SET64(2, RD(17) + RD(0));
L_002B417C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B4190(Ctx *c) { /* func_002B4190 */
ENTER(0x2b4190);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b41a4); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x10000000);
SET64(3, (s64)(s32)0x4e0000);
SET64(4, RD(2) << 32);
SET32(3, RW(3) + 6528);
SET32(2, RW(0) + 14);
wr32(c, (RW(16) + 8), RW(3));
wr64(c, (RW(16) + 24), RD(2));
SET64(3, RD(0) | 0x8004);
SET32(2, RW(0) + 80);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(16) + 40), RD(2));
SET32(2, RW(0) + 81);
wr64(c, (RW(16) + 16), RD(3));
wr64(c, (RW(16) + 56), RD(2));
SET32(2, RW(0) + 82);
wr64(c, (RW(16) + 72), RD(2));
SET32(2, RW(0) + 83);
wr64(c, (RW(16) + 88), RD(2));
SET32(2, RW(0) + 2);
wr64(c, (RW(16) + 80), RD(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B4210(Ctx *c) { /* func_002B4210 */
ENTER(0x2b4210);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { JP_F_002B1AB0(c); return; }
}

void JP_F_002B4230(Ctx *c) { /* func_002B4230 */
ENTER(0x2b4230);
SET64(7, rd64(c, (RW(4) + 32)));
SET64(3, RD(6) << 32);
SET64(6, (s64)(s32)0xfff80000);
SET64(3, RSD(3) >> 32);
SET64(6, RD(6) | 0xffff);
SET64(5, (s64)(s32)0x10000);
SET64(3, RD(3) << 17);
SET64(6, RD(7) & RD(6));
SET64(5, RD(6) | RD(5));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B4260(Ctx *c) { /* func_002B4260 */
ENTER(0x2b4260);
SET64(3, RD(5) << 32);
SET64(7, rd64(c, (RW(4) + 32)));
SET64(3, RSD(3) >> 32);
SET64(5, RD(3) << 14);
SET64(3, RD(6) << 32);
SET64(6, (s64)(s32)0xffff0000);
SET64(3, RSD(3) >> 32);
SET64(6, RD(6) | 0x3fff);
SET64(3, RD(3) << 15);
SET64(6, RD(7) & RD(6));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B42A0(Ctx *c) { /* func_002B42A0 */
ENTER(0x2b42a0);
SET64(9, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET32(7, RW(0) + -16384);
SET64(6, RD(5) << 1);
SET64(9, RSD(9) >> 32);
SET64(5, RD(3) << 4);
SET64(3, RD(8) << 32);
SET64(8, rd64(c, (RW(4) + 32)));
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 12);
SET64(7, RD(8) & RD(7));
SET64(7, RD(9) | RD(7));
SET64(6, RD(6) | RD(7));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B42F0(Ctx *c) { /* func_002B42F0 */
ENTER(0x2b42f0);
SET32(7, RW(5) + 16);
SET32(6, RW(4) + 16);
SET64(5, RD(0) + RD(0));
L_002B42FC:;
rd128(c, (RW(7) + 0) & ~15u, &c->r[3]);
SET32(5, RW(5) + 1);
SET64(2, RD(5) < (u64)(s64)2);
wr128(c, (RW(6) + 0) & ~15u, &c->r[3]);
SET32(7, RW(7) + 16);
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 16); if (t) { POLL(); goto L_002B42FC; } }
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002B4320(Ctx *c) { /* func_002B4320 */
ENTER(0x2b4320);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4368; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6560);
SET64(31, 0x2b4350); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B436C; }
SET64(31, 0x2b4368); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B4368:;
SET64(2, RD(17) + RD(0));
L_002B436C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B4380(Ctx *c) { /* func_002B4380 */
ENTER(0x2b4380);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b4394); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x10000000);
SET64(3, (s64)(s32)0x4e0000);
SET64(4, RD(2) << 32);
SET32(3, RW(3) + 6560);
SET32(2, RW(0) + 14);
wr32(c, (RW(16) + 8), RW(3));
wr64(c, (RW(16) + 24), RD(2));
SET64(3, RD(0) | 0x8001);
SET32(2, RW(0) + 71);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(16) + 40), RD(2));
wr64(c, (RW(16) + 16), RD(3));
SET64(2, (s64)(s32)0x50000);
SET64(3, RD(2) | 0x100b);
wr64(c, (RW(16) + 32), RD(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B43F0(Ctx *c) { /* func_002B43F0 */
ENTER(0x2b43f0);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { JP_F_002B1AB0(c); return; }
}

void JP_F_002B4410(Ctx *c) { /* func_002B4410 */
ENTER(0x2b4410);
SET64(9, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(9, RSD(9) >> 32);
SET64(6, RD(5) << 16);
SET64(5, RD(3) << 32);
SET64(6, RD(9) | RD(6));
SET64(3, RD(8) << 32);
SET64(5, RD(5) | RD(6));
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 48);
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B4450(Ctx *c) { /* func_002B4450 */
ENTER(0x2b4450);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4498; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6592);
SET64(31, 0x2b4480); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B449C; }
SET64(31, 0x2b4498); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B4498:;
SET64(2, RD(17) + RD(0));
L_002B449C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B44B0(Ctx *c) { /* func_002B44B0 */
ENTER(0x2b44b0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(5) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(6) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(7) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b44e4); SET64(16, RD(8) + RD(0)); JP_F_002B0400(c);
SET64(2, RD(19) << 32);
SET64(4, RD(20) << 32);
SET64(2, RSD(2) >> 32);
SET64(4, RSD(4) >> 32);
SET64(3, RD(2) << 16);
SET64(2, RD(18) << 32);
SET64(3, RD(4) | RD(3));
SET64(2, RSD(2) >> 32);
SET64(4, (s64)(s32)0x4e0000);
SET64(2, RD(2) << 32);
SET32(4, RW(4) + 6592);
SET64(3, RD(2) | RD(3));
wr32(c, (RW(17) + 8), RW(4));
SET64(2, RD(16) << 32);
SET64(2, RSD(2) >> 32);
SET64(2, RD(2) << 48);
SET64(2, RD(2) | RD(3));
wr64(c, (RW(17) + 32), RD(2));
SET64(2, (s64)(s32)0x10000000);
SET64(3, RD(2) << 32);
SET64(2, RD(0) | 0x8001);
SET64(3, RD(2) | RD(3));
SET32(2, RW(0) + 14);
wr64(c, (RW(17) + 16), RD(3));
SET32(3, RW(0) + 64);
wr64(c, (RW(17) + 24), RD(2));
wr64(c, (RW(17) + 40), RD(3));
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B4580(Ctx *c) { /* func_002B4580 */
ENTER(0x2b4580);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 64);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x4); { JP_F_002B1AB0(c); return; }
}

void JP_F_002B45A0(Ctx *c) { /* func_002B45A0 */
ENTER(0x2b45a0);
SET64(3, RD(5) << 32);
SET64(10, rd64(c, (RW(4) + 64)));
SET64(3, RSD(3) >> 32);
SET64(9, RD(3) << 4);
SET64(3, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(6, RD(3) << 14);
SET64(3, RD(7) << 32);
SET64(3, RSD(3) >> 32);
SET32(7, RW(0) + 15);
SET64(5, RD(3) << 24);
SET64(3, RD(8) << 32);
SET32(8, RW(0) + -4096);
SET64(3, RSD(3) >> 32);
SET64(8, RD(8) << 32);
SET64(3, RD(3) << 34);
SET64(7, RD(7) | RD(8));
SET64(7, RD(10) & RD(7));
SET64(7, RD(9) | RD(7));
SET64(6, RD(6) | RD(7));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 64), RD(3)); return;
}

void JP_F_002B4600(Ctx *c) { /* func_002B4600 */
ENTER(0x2b4600);
SET64(7, rd64(c, (RW(4) + 64)));
SET64(3, RD(6) << 32);
SET64(5, RD(5) << 32);
SET32(6, RW(0) + -16);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(3, RD(3) << 2);
SET64(6, RD(7) & RD(6));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 64), RD(3)); return;
}

void JP_F_002B4630(Ctx *c) { /* func_002B4630 */
ENTER(0x2b4630);
SET64(7, rd64(c, (RW(4) + 32)));
SET64(3, RD(5) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RD(3) << 2);
SET64(3, RD(6) << 32);
SET32(6, RW(0) + -541);
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 9);
SET64(6, RD(7) & RD(6));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B4670(Ctx *c) { /* func_002B4670 */
ENTER(0x2b4670);
SET64(7, rd64(c, (RW(4) + 32)));
SET64(3, RD(5) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RD(3) << 5);
SET64(3, RD(6) << 32);
SET32(6, RW(0) + -481);
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 6);
SET64(6, RD(7) & RD(6));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B46B0(Ctx *c) { /* func_002B46B0 */
ENTER(0x2b46b0);
SET64(8, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET32(6, RW(0) + -4096);
SET64(9, rd64(c, (RW(4) + 32)));
SET64(7, RD(6) << 32);
SET64(5, RSD(5) >> 32);
SET64(6, RD(0) | 0xffe7);
SET64(8, RSD(8) >> 32);
SET64(6, RD(6) << 16);
SET64(5, RD(5) << 19);
SET64(6, RD(6) | 0xfffe);
SET64(3, RD(3) << 32);
SET64(6, RD(6) | RD(7));
SET64(6, RD(9) & RD(6));
SET64(6, RD(8) | RD(6));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B4710(Ctx *c) { /* func_002B4710 */
ENTER(0x2b4710);
SET64(3, RD(5) << 32);
SET64(3, RSD(3) >> 32);
SET64(11, RD(3) << 37);
SET64(3, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(10, RD(3) << 51);
SET64(3, RD(7) << 32);
SET64(3, RSD(3) >> 32);
SET64(7, RD(0) | 0xffff);
SET64(6, RD(3) << 55);
SET64(7, RD(7) << 16);
SET64(3, RD(8) << 32);
SET64(7, RD(7) | 0xffff);
SET64(3, RSD(3) >> 32);
SET32(8, RW(0) + 31);
SET64(5, RD(3) << 56);
SET64(8, RD(8) << 32);
SET64(3, RD(9) << 32);
SET64(7, RD(7) | RD(8));
SET64(9, rd64(c, (RW(4) + 48)));
SET64(3, RSD(3) >> 32);
SET64(3, RD(3) << 61);
SET64(7, RD(9) & RD(7));
SET64(7, RD(11) | RD(7));
SET64(7, RD(10) | RD(7));
SET64(6, RD(6) | RD(7));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 48), RD(3)); return;
}

void JP_F_002B4790(Ctx *c) { /* func_002B4790 */
ENTER(0x2b4790);
SET64(7, rd64(c, (RW(4) + 48)));
SET64(3, RD(5) << 32);
SET64(5, RD(0) | 0xffff);
SET32(6, RW(0) + -25);
SET64(5, RD(5) << 16);
SET64(3, RSD(3) >> 32);
SET64(6, RD(6) << 32);
SET64(5, RD(5) | 0xffff);
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) << 35);
SET64(5, RD(7) & RD(5));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 48), RD(3)); return;
}

void JP_F_002B47D0(Ctx *c) { /* func_002B47D0 */
ENTER(0x2b47d0);
SET64(10, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(6, RD(3) << 20);
SET64(5, RSD(5) >> 32);
SET64(3, RD(9) << 32);
SET64(7, RD(5) << 14);
SET64(9, rd64(c, (RW(4) + 48)));
SET64(5, RD(8) << 32);
SET32(8, RW(0) + -4);
SET64(5, RSD(5) >> 32);
SET64(8, RD(8) << 32);
SET64(3, RSD(3) >> 32);
SET64(10, RSD(10) >> 32);
SET64(5, RD(5) << 26);
SET64(3, RD(3) << 30);
SET64(8, RD(9) & RD(8));
SET64(8, RD(10) | RD(8));
SET64(7, RD(7) | RD(8));
SET64(6, RD(6) | RD(7));
SET64(5, RD(5) | RD(6));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 48), RD(3)); return;
}

void JP_F_002B4840(Ctx *c) { /* func_002B4840 */
ENTER(0x2b4840);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4888; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6624);
SET64(31, 0x2b4870); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B488C; }
SET64(31, 0x2b4888); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B4888:;
SET64(2, RD(17) + RD(0));
L_002B488C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B48A0(Ctx *c) { /* func_002B48A0 */
ENTER(0x2b48a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b48b4); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(16) + 32), RD(0));
SET32(2, RW(2) + 6624);
wr32(c, (RW(16) + 8), RW(2));
SET64(2, (s64)(s32)0x10000000);
SET64(3, RD(2) << 32);
SET64(2, RD(0) | 0x8003);
SET64(3, RD(2) | RD(3));
SET32(2, RW(0) + 14);
wr64(c, (RW(16) + 16), RD(3));
wr64(c, (RW(16) + 24), RD(2));
SET32(3, RW(0) + 20);
SET32(2, RW(0) + 6);
wr64(c, (RW(16) + 40), RD(3));
wr64(c, (RW(16) + 56), RD(2));
SET32(3, RW(0) + 8);
SET32(2, RW(0) + 4);
wr64(c, (RW(16) + 72), RD(3));
SET64(2, RD(2) << 32);
wr64(c, (RW(16) + 48), RD(2));
SET32(2, RW(0) + 5);
wr64(c, (RW(16) + 64), RD(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B4920(Ctx *c) { /* func_002B4920 */
ENTER(0x2b4920);
SET64(4, RD(5) + RD(0));
SET64(2, (s64)(s32)0x50000000);
SET64(5, (s64)(s32)0x4c0000);
SET32(6, RW(0) + 32);
SET32(5, RW(5) + -28800);
SET64(7, (s64)(s32)0x13000000);
SET64(8, RD(2) | 0x2); { JP_F_002B1A50(c); return; }
}

void JP_F_002B4940(Ctx *c) { /* func_002B4940 */
ENTER(0x2b4940);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4988; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6656);
SET64(31, 0x2b4970); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B498C; }
SET64(31, 0x2b4988); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B4988:;
SET64(2, RD(17) + RD(0));
L_002B498C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B49A0(Ctx *c) { /* func_002B49A0 */
ENTER(0x2b49a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b49b4); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + 6656);
wr32(c, (RW(16) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B49E0(Ctx *c) { /* func_002B49E0 */
ENTER(0x2b49e0);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { JP_F_002B1AB0(c); return; }
}

void JP_F_002B4A00(Ctx *c) { /* func_002B4A00 */
ENTER(0x2b4a00);
SET64(8, RD(5) << 32);
SET64(3, RD(7) << 32);
SET64(5, RD(6) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RSD(5) >> 32);
SET64(8, RSD(8) >> 32);
SET64(5, RD(5) << 24);
SET64(3, RD(3) << 32);
SET64(5, RD(8) | RD(5));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 32), RD(3)); return;
}

void JP_F_002B4A30(Ctx *c) { /* func_002B4A30 */
ENTER(0x2b4a30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4A78; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6688);
SET64(31, 0x2b4a60); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B4A7C; }
SET64(31, 0x2b4a78); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B4A78:;
SET64(2, RD(17) + RD(0));
L_002B4A7C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B4A90(Ctx *c) { /* func_002B4A90 */
ENTER(0x2b4a90);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
SET64(31, 0x2b4abc); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(2, RD(18) << 32);
SET64(4, RD(19) << 32);
SET64(2, RSD(2) >> 32);
SET64(4, RSD(4) >> 32);
SET64(3, RD(2) << 24);
SET64(2, RD(17) << 32);
SET64(3, RD(4) | RD(3));
SET64(2, RSD(2) >> 32);
SET64(2, RD(2) << 32);
SET64(2, RD(2) | RD(3));
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(16) + 32), RD(2));
SET32(3, RW(3) + 6688);
SET32(2, RW(0) + 14);
wr32(c, (RW(16) + 8), RW(3));
SET64(3, (s64)(s32)0x10000000);
wr64(c, (RW(16) + 24), RD(2));
SET64(4, RD(3) << 32);
SET32(2, RW(0) + 78);
SET64(3, RD(0) | 0x8001);
wr64(c, (RW(16) + 40), RD(2));
SET64(3, RD(3) | RD(4));
SET64(2, RD(16) + RD(0));
wr64(c, (RW(16) + 16), RD(3));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002B4B40(Ctx *c) { /* func_002B4B40 */
ENTER(0x2b4b40);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET64(1, RSD(0) < RSD(5));
{ int t = RD(1) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002B4CF8; }
L_002B4B78:;
SET64(4, (s32)rd32(c, (RW(20) + 80)));
SET32(2, RW(18) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B4B94; }
SET32(2, RW(4) << 2); goto L_002B4B9C;
L_002B4B94:;
SET32(4, RW(5) - RW(18));
SET32(2, RW(4) << 2);
L_002B4B9C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(20) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(17, RW(2) >> 2);
SET64(4, RD(19) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(20) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b4bf0); wr64(c, (RW(20) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(20) + 40)));
mul_s(c, 0, 16, RSW(17), RSW(2));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b4c04); SET64(5, RD(18) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(16) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(19) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b4c2c); SET64(7, RD(2) | 0x204); JP_F_002B1A50(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2b4c3c); SET32(16, RW(17) << 16); JP_F_002A5AA0(c);
SET64(3, rd8(c, (RW(20) + 42)));
mul_s(c, 0, 6, RSW(17), RSW(3));
SET64(5, RD(2) + RD(0));
SET64(2, (s64)(s32)0x6c000000);
SET64(4, RD(19) + RD(0));
SET64(3, RD(2) | 0x8003);
SET32(6, RW(6) << 3);
SET64(2, (s64)(s32)0x1000000);
SET64(8, RD(16) | RD(3));
SET64(31, 0x2b4c68); SET64(7, RD(2) | 0x104); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(20) + 43)));
mul_s(c, 0, 21, RSW(17), RSW(2));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b4c7c); SET64(5, RD(18) + RD(0)); JP_F_002A5A70(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(21) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(21) << 2);
SET64(2, RD(2) | 0xc004);
SET64(4, RD(19) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b4ca4); SET64(7, RD(2) | 0x104); JP_F_002B1A50(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b4cb0); SET64(5, RD(18) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(6, RW(17) << 3);
SET64(2, (s64)(s32)0x7d000000);
SET64(4, RD(19) + RD(0));
SET64(3, RD(2) | 0xc001);
SET64(2, (s64)(s32)0x1000000);
SET64(8, RD(16) | RD(3));
SET64(31, 0x2b4cd4); SET64(7, RD(2) | 0x104); JP_F_002B1A50(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b4ce0); SET64(5, RD(19) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(20) + 80)));
SET64(5, rd16(c, (RW(20) + 28)));
SET32(18, RW(18) + RW(3));
SET64(3, RSD(18) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B4B78; } }
L_002B4CF8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002B4D20(Ctx *c) { /* func_002B4D20 */
ENTER(0x2b4d20);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B4D80; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B4D54; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B4D54; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B4D54; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B4DA0;
L_002B4D54:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29160)));
SET64(5, (s32)rd32(c, (RW(3) + -29664)));
SET64(8, (s32)rd32(c, (RW(28) + -29964)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -29880)));
SET64(31, 0x2b4d78); SET32(7, RW(0) + 48); JP_F_002A2C80(c);
 goto L_002B4D9C;
L_002B4D80:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b4d9c); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B4D9C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B4DA0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B4DB0(Ctx *c) { /* func_002B4DB0 */
ENTER(0x2b4db0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4E04; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6720);
SET32(2, RW(2) + 6760);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b4dec); wr32(c, (RW(17) + 64), RW(2)); JP_F_002A2CF0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B4E08; }
SET64(31, 0x2b4e04); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B4E04:;
SET64(2, RD(17) + RD(0));
L_002B4E08:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B4E20(Ctx *c) { /* func_002B4E20 */
ENTER(0x2b4e20);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b4e40); SET64(16, RD(5) + RD(0)); JP_F_002A2D70(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6720);
SET32(3, RW(3) + 6760);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(18, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b4e78); SET32(8, RW(0) + 1); JP_F_002A5E50(c);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b4e90); SET32(8, RW(0) + 1); JP_F_002A5CD0(c);
SET32(7, RW(0) + 1);
SET64(6, RD(16) & 0xffff);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b4ea8); SET64(8, RD(7) + RD(0)); JP_F_002A5C10(c);
SET64(2, (s64)(s32)0x500b0000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET64(2, (s64)(s32)0x40000);
SET64(3, RD(3) << 32);
SET64(2, RD(2) | 0x2412);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(5) | RD(3));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b4edc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b4ef0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B4F10(Ctx *c) { /* func_002B4F10 */
ENTER(0x2b4f10);
SET32(4, RW(4) + -64); { JP_F_002B4DB0(c); return; }
}

void JP_F_002B4F20(Ctx *c) { /* func_002B4F20 */
ENTER(0x2b4f20);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { JP_F_002B1AB0(c); return; }
}

void JP_F_002B4F40(Ctx *c) { /* func_002B4F40 */
ENTER(0x2b4f40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4F88; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6784);
SET64(31, 0x2b4f70); wr32(c, (RW(17) + 8), RW(2)); JP_F_002B03B0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B4F8C; }
SET64(31, 0x2b4f88); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B4F88:;
SET64(2, RD(17) + RD(0));
L_002B4F8C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B4FA0(Ctx *c) { /* func_002B4FA0 */
ENTER(0x2b4fa0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2b4fbc); SET64(16, RD(4) + RD(0)); JP_F_002B0400(c);
SET64(2, RD(17) << 32);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RSD(2) >> 32);
SET32(3, RW(3) + 6784);
wr32(c, (RW(16) + 8), RW(3));
wr64(c, (RW(16) + 32), RD(2));
SET64(3, (s64)(s32)0x10000000);
SET32(2, RW(0) + 14);
SET64(4, RD(3) << 32);
wr64(c, (RW(16) + 24), RD(2));
SET64(3, RD(0) | 0x8001);
SET32(2, RW(0) + 26);
SET64(3, RD(3) | RD(4));
wr64(c, (RW(16) + 40), RD(2));
wr64(c, (RW(16) + 16), RD(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B5010(Ctx *c) { /* func_002B5010 */
ENTER(0x2b5010);
SET32(29, RW(29) + -96);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(3) + 0)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B5040; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B5058;
L_002B5040:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B5058:;
c->fcc = F(12) <= F(0);
{ int t = c->fcc;  if (t) goto L_002B5258; }
SET64(7, (s32)rd32(c, (RW(5) + 8)));
SET32(4, RW(7) << 1);
SET32(4, RW(4) + RW(3));
SET64(4, rd16(c, (RW(4) + -2)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B5088; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B50A0;
L_002B5088:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B50A0:;
c->fcc = F(0) <= F(12);
{ int t = c->fcc; SET32(9, RW(7) + -1); if (t) goto L_002B5268; }
SET64(1, RSD(9) < RSD(0));
{ int t = RD(1) != RD(0); SET64(10, RD(0) + RD(0)); if (t) goto L_002B51B0; }
SET64(8, (s32)rd32(c, (RW(5) + 4)));
SET32(2, RW(10) + RW(9));
L_002B50C0:;
SET32(2, RSW(2) >> 1);
SET32(7, RW(2) << 1);
SET32(4, RW(8) + RW(7));
SET64(4, rd16(c, (RW(4) + 0)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B50E4; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B50FC;
L_002B50E4:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B50FC:;
c->fcc = F(12) < F(0);
{ int t = c->fcc; SET32(4, RW(8) + RW(7)); if (t) goto L_002B5154; }
SET32(4, RW(8) + RW(7));
SET64(4, rd16(c, (RW(4) + 2)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B5124; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B513C;
L_002B5124:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B513C:;
c->fcc = F(12) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002B5150; }
SET32(4, RW(2) << 1); goto L_002B51B8;
L_002B5150:;
SET32(4, RW(8) + RW(7));
L_002B5154:;
SET64(4, rd16(c, (RW(4) + 0)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B516C; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B5184;
L_002B516C:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B5184:;
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002B5198; }
SET64(9, RD(2) + RD(0)); goto L_002B51A0;
L_002B5198:;
SET64(10, RD(2) + RD(0));
L_002B51A0:;
SET64(1, RSD(9) < RSD(10));
{ int t = RD(1) == RD(0); SET32(2, RW(10) + RW(9)); if (t) { POLL(); goto L_002B50C0; } }
L_002B51B0:;
SET32(2, RW(0) + -1);
SET32(4, RW(2) << 1);
L_002B51B8:;
SET32(3, RW(3) + RW(4));
SET64(6, rd16(c, (RW(3) + 0)));
SET64(3, rd16(c, (RW(3) + 2)));
SET32(3, RW(3) - RW(6));
c->f[0].u = RW(3);
{ int t = RSD(6) < 0; c->f[1].f = (f32)(s32)c->f[0].u; if (t) goto L_002B51E0; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B51FC;
L_002B51E0:;
SET32(4, RW(6) >> 1);
SET64(3, RD(6) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B51FC:;
c->f[0].f = fpu(F(12) - F(0));
SET32(3, RW(2) << 4);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(2, RW(2) + 1);
SET32(2, RW(2) << 4);
SET32(4, RW(29) + 48);
SET32(6, RW(29) + 80);
c->f[20].f = fpu_div(F(0), F(1));
SET32(3, RW(5) + RW(3));
SET32(5, RW(5) + RW(2));
rd128(c, (RW(3) + 0) & ~15u, &c->r[2]);
SET64(31, 0x2b5230); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); JP_F_002AFF90(c);
c->f[12].u = c->f[20].u;
SET32(4, RW(29) + 64);
SET64(31, 0x2b5240); SET32(5, RW(29) + 48); JP_F_002AFF20(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2b524c); SET32(5, RW(29) + 64); JP_F_002AFFF0(c);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_002B5280;
L_002B5258:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
rd128(c, (RW(3) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_002B5280;
L_002B5268:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(4, RW(7) + -1);
SET32(4, RW(4) << 4);
SET32(3, RW(3) + RW(4));
rd128(c, (RW(3) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
L_002B5280:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B52A0(Ctx *c) { /* func_002B52A0 */
ENTER(0x2b52a0);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, rd16(c, (RW(3) + 0)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B52C4; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B52DC;
L_002B52C4:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B52DC:;
c->fcc = F(12) <= F(0);
{ int t = c->fcc;  if (t) goto L_002B54EC; }
SET64(8, (s32)rd32(c, (RW(5) + 8)));
SET32(6, RW(8) << 1);
SET32(6, RW(6) + RW(3));
SET64(6, rd16(c, (RW(6) + -2)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B530C; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B5324;
L_002B530C:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B5324:;
c->fcc = F(0) <= F(12);
{ int t = c->fcc; SET32(10, RW(8) + -1); if (t) goto L_002B5510; }
SET64(1, RSD(10) < RSD(0));
{ int t = RD(1) != RD(0); SET64(11, RD(0) + RD(0)); if (t) goto L_002B5438; }
SET64(9, (s32)rd32(c, (RW(5) + 4)));
SET32(2, RW(11) + RW(10));
L_002B5344:;
SET32(2, RSW(2) >> 1);
SET32(8, RW(2) << 1);
SET32(6, RW(9) + RW(8));
SET64(6, rd16(c, (RW(6) + 0)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B5368; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B5380;
L_002B5368:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B5380:;
c->fcc = F(12) < F(0);
{ int t = c->fcc; SET32(6, RW(9) + RW(8)); if (t) goto L_002B53D8; }
SET32(6, RW(9) + RW(8));
SET64(6, rd16(c, (RW(6) + 2)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B53A8; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B53C0;
L_002B53A8:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B53C0:;
c->fcc = F(12) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002B53D4; }
SET32(6, RW(2) << 1); goto L_002B5440;
L_002B53D4:;
SET32(6, RW(9) + RW(8));
L_002B53D8:;
SET64(6, rd16(c, (RW(6) + 0)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B53F0; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B5408;
L_002B53F0:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B5408:;
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002B5420; }
SET64(10, RD(2) + RD(0)); goto L_002B5428;
L_002B5420:;
SET64(11, RD(2) + RD(0));
L_002B5428:;
SET64(1, RSD(10) < RSD(11));
{ int t = RD(1) == RD(0); SET32(2, RW(11) + RW(10)); if (t) { POLL(); goto L_002B5344; } }
L_002B5438:;
SET32(2, RW(0) + -1);
SET32(6, RW(2) << 1);
L_002B5440:;
SET32(3, RW(3) + RW(6));
SET64(7, rd16(c, (RW(3) + 0)));
SET64(3, rd16(c, (RW(3) + 2)));
SET32(3, RW(3) - RW(7));
c->f[0].u = RW(3);
{ int t = RSD(7) < 0; c->f[1].f = (f32)(s32)c->f[0].u; if (t) goto L_002B5468; }
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B5484;
L_002B5468:;
SET32(6, RW(7) >> 1);
SET64(3, RD(7) & 0x1);
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B5484:;
c->f[0].f = fpu(F(12) - F(0));
SET32(3, RW(2) + 1);
SET64(7, (s64)(s32)0x3f800000);
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(3) << 4);
SET32(2, RW(2) << 4);
wr32(c, (RW(29) + 16), RW(0));
SET32(6, RW(29) + 16);
c->f[12].f = fpu_div(F(0), F(1));
wr32(c, (RW(29) + 20), RW(0));
wr32(c, (RW(29) + 24), RW(0));
wr32(c, (RW(29) + 28), RW(7));
SET32(3, RW(5) + RW(3));
SET32(2, RW(5) + RW(2));
rd128(c, (RW(3) + 0) & ~15u, &c->r[3]);
SET32(5, RW(29) + 32);
wr128(c, (RW(29) + 16) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 44), RW(7));
wr32(c, (RW(29) + 32), RW(0));
wr32(c, (RW(29) + 36), RW(0));
wr32(c, (RW(29) + 40), RW(0));
rd128(c, (RW(2) + 0) & ~15u, &c->r[2]);
SET64(31, 0x2b54e4); wr128(c, (RW(29) + 32) & ~15u, &c->r[2]); JP_F_002AF660(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B5540;
L_002B54EC:;
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); goto L_002B553C;
L_002B5510:;
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET32(3, RW(8) + -1);
SET32(6, RW(3) << 4);
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 8), RW(0));
SET32(3, RW(5) + RW(6));
rd128(c, (RW(3) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]);
L_002B553C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B5540:;
SET32(29, RW(29) + 48); return;
}

void JP_F_002B5550(Ctx *c) { /* func_002B5550 */
ENTER(0x2b5550);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(2) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B5564; }
 goto L_002B5578;
L_002B5564:;
wr32(c, (RW(4) + 0), RW(5));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(7));
wr8(c, (RW(4) + 12), (u8)RW(8));
L_002B5578:;
 return;
}

void JP_F_002B5580(Ctx *c) { /* func_002B5580 */
ENTER(0x2b5580);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B55FC; }
SET64(2, rd8(c, (RW(17) + 12)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6816);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 16), RW(3)); if (t) goto L_002B55E4; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_002B55CC; }
{ int t = RD(2) == RD(0); SET32(4, RW(2) + -16); if (t) goto L_002B55CC; }
SET64(31, 0x2b55cc);  JP_F_00100430(c);
L_002B55CC:;
SET64(4, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B55E0; }
SET64(31, 0x2b55e0);  JP_F_00100430(c);
L_002B55E0:;
wr8(c, (RW(17) + 12), (u8)RW(0));
L_002B55E4:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(17) + 8), RW(0)); if (t) goto L_002B55FC; }
SET64(31, 0x2b55fc); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B55FC:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B5620(Ctx *c) { /* func_002B5620 */
ENTER(0x2b5620);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 0), RW(0));
SET32(2, RW(2) + 6816);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 16), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr8(c, (RW(4) + 12), (u8)RW(0)); return;
}

void JP_F_002B5650(Ctx *c) { /* func_002B5650 */
ENTER(0x2b5650);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 32)));
{ int t = RD(4) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002B5684; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b5684);  rt_call(c, t); }
L_002B5684:;
SET64(3, (s32)rd32(c, (RW(18) + 36)));
{ int t = RD(3) == RD(0);  if (t) goto L_002B56E0; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(1, RSD(0) < RSD(2));
{ int t = RD(1) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002B56E0; }
L_002B56A4:;
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2b56b0); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 8)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b56c4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 36)));
SET32(16, RW(16) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002B56A4; } }
L_002B56E0:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2b56ec); SET64(5, RD(17) + RD(0)); JP_F_002A2720(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B5710(Ctx *c) { /* func_002B5710 */
ENTER(0x2b5710);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002B574C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6848);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 48), RW(3)); if (t) goto L_002B5748; }
SET64(31, 0x2b5748);  JP_F_001004B0(c);
L_002B5748:;
SET64(2, RD(16) + RD(0));
L_002B574C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B5760(Ctx *c) { /* func_002B5760 */
ENTER(0x2b5760);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 6848);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2b5780); wr32(c, (RW(4) + 48), RW(2)); JP_F_002A27E0(c);
wr32(c, (RW(16) + 32), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B57A0(Ctx *c) { /* func_002B57A0 */
ENTER(0x2b57a0);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2b57c8); SET64(4, (s32)rd32(c, (RW(4) + 4))); JP_F_002A7560(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002B57D8; }
L_002B57D0:;
 goto L_002B5880;
L_002B57D8:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(29) + 104);
SET64(5, (s8)rd8(c, (RW(28) + -31432)));
SET64(18, (s32)rd32(c, (RW(2) + 44)));
SET64(19, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b57f4); SET32(6, RW(0) + 6); JP_F_001273D0(c);
SET32(6, RW(0) + -1);
SET64(4, RD(18) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x2b5808); SET64(7, RD(6) + RD(0)); JP_F_00138070(c);
SET32(20, RW(2) + -1);
{ int t = RSD(20) < 0; SET32(17, RW(29) + 105); if (t) goto L_002B5850; }
SET64(4, RD(18) + RD(0));
L_002B5818:;
SET64(5, RD(19) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(31, 0x2b5828); SET32(7, RW(0) + 3); JP_F_00138070(c);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_002B5878; }
{ int t = RD(2) != RD(3);  if (t) goto L_002B5840; }
wr8(c, (RW(17) + 0), (u8)RW(20));
L_002B5840:;
SET32(20, RW(20) + -1);
{ int t = RSD(20) >= 0; SET64(4, RD(18) + RD(0)); if (t) { POLL(); goto L_002B5818; } }
L_002B5850:;
SET64(4, RD(18) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x2b5860); SET32(6, RW(29) + 104); JP_F_00138560(c);
SET32(4, RW(16) + 8);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b5870); SET32(6, RW(0) + 6); JP_F_001273D0(c);
 { POLL(); goto L_002B57D0; }
L_002B5878:;
wr8(c, (RW(29) + 104), (u8)RW(20)); { POLL(); goto L_002B5840; }
L_002B5880:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002B58A0(Ctx *c) { /* func_002B58A0 */
ENTER(0x2b58a0);
SET64(2, rd8(c, (RW(4) + 14))); return;
}

void JP_F_002B58B0(Ctx *c) { /* func_002B58B0 */
ENTER(0x2b58b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 14)));
SET64(16, RD(4) + RD(0));
{ int t = RD(3) != RD(0); wr8(c, (RW(4) + 9), (u8)RW(5)); if (t) goto L_002B58D4; }
L_002B58CC:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B5904;
L_002B58D4:;
SET64(31, 0x2b58dc); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002A7560(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002B5900; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b58f8); SET32(6, RW(16) + 8); JP_F_001384A0(c);
 { POLL(); goto L_002B58CC; }
L_002B5900:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B5904:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B5910(Ctx *c) { /* func_002B5910 */
ENTER(0x2b5910);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 14)));
SET64(16, RD(4) + RD(0));
{ int t = RD(3) != RD(0); wr8(c, (RW(4) + 8), (u8)RW(5)); if (t) goto L_002B5934; }
L_002B592C:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B5964;
L_002B5934:;
SET64(31, 0x2b593c); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002A7560(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002B5960; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b5958); SET32(6, RW(16) + 8); JP_F_001384A0(c);
 { POLL(); goto L_002B592C; }
L_002B5960:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B5964:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B5970(Ctx *c) { /* func_002B5970 */
ENTER(0x2b5970);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 14)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B5990; }
L_002B5988:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B59C4;
L_002B5990:;
SET32(4, RW(29) + 40);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b59a0); SET32(6, RW(0) + 6); JP_F_001273D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b59b4); SET32(6, RW(29) + 40); JP_F_001384A0(c);
SET64(3, RD(2) ^ 0x1);
SET64(3, RD(0) < RD(3));
wr8(c, (RW(16) + 14), (u8)RW(3)); { POLL(); goto L_002B5988; }
L_002B59C4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B59D0(Ctx *c) { /* func_002B59D0 */
ENTER(0x2b59d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 14)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B59F0; }
L_002B59E8:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B5A28;
L_002B59F0:;
SET64(31, 0x2b59f8); SET64(4, (s32)rd32(c, (RW(16) + 4))); JP_F_002A7560(c);
{ int t = RD(2) != RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002B5A08; }
L_002B5A00:;
wr8(c, (RW(16) + 14), (u8)RW(3)); { POLL(); goto L_002B59E8; }
L_002B5A08:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b5a1c); SET32(6, RW(16) + 8); JP_F_001384A0(c);
SET64(3, RD(2) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1); { POLL(); goto L_002B5A00; }
L_002B5A28:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B5A40(Ctx *c) { /* func_002B5A40 */
ENTER(0x2b5a40);
SET32(29, RW(29) + -48);
SET64(2, (s32)rd32(c, (RW(5) + 4)));
wr64(c, (RW(29) + 32), RD(31));
SET32(6, RW(0) + 6);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
wr32(c, (RW(4) + 4), RW(2));
SET32(5, RW(16) + 8);
SET64(31, 0x2b5a70); SET32(4, RW(17) + 8); JP_F_001272C8(c);
SET64(3, rd8(c, (RW(16) + 14)));
SET64(2, RD(17) + RD(0));
wr8(c, (RW(17) + 14), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B5A90(Ctx *c) { /* func_002B5A90 */
ENTER(0x2b5a90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002B5ACC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6864);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002B5AC8; }
SET64(31, 0x2b5ac8);  JP_F_001004B0(c);
L_002B5AC8:;
SET64(2, RD(16) + RD(0));
L_002B5ACC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B5AE0(Ctx *c) { /* func_002B5AE0 */
ENTER(0x2b5ae0);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 4), RW(0));
SET32(2, RW(2) + 6864);
wr8(c, (RW(4) + 14), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(2));
SET64(2, RD(4) + RD(0)); return;
}

void JP_F_002B5B00(Ctx *c) { /* func_002B5B00 */
ENTER(0x2b5b00);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + 6864);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 4), RW(5));
SET64(16, RD(4) + RD(0));
wr8(c, (RW(4) + 14), (u8)RW(0));
SET64(31, 0x2b5b28); wr32(c, (RW(4) + 0), RW(2)); JP_F_002B57A0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B5B40(Ctx *c) { /* func_002B5B40 */
ENTER(0x2b5b40);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET64(1, RSD(0) < RSD(5));
{ int t = RD(1) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002B5CF8; }
L_002B5B78:;
SET64(4, (s32)rd32(c, (RW(20) + 80)));
SET32(2, RW(18) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B5B94; }
SET32(2, RW(4) << 2); goto L_002B5B9C;
L_002B5B94:;
SET32(4, RW(5) - RW(18));
SET32(2, RW(4) << 2);
L_002B5B9C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(20) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(17, RW(2) >> 2);
SET64(4, RD(19) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(20) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b5bf0); wr64(c, (RW(20) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(20) + 40)));
mul_s(c, 0, 16, RSW(17), RSW(2));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b5c04); SET64(5, RD(18) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(16) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(19) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5c2c); SET64(7, RD(2) | 0x305); JP_F_002B1A50(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2b5c3c); SET32(16, RW(17) << 16); JP_F_002A5AA0(c);
SET64(3, rd8(c, (RW(20) + 42)));
mul_s(c, 0, 6, RSW(17), RSW(3));
SET64(5, RD(2) + RD(0));
SET64(2, (s64)(s32)0x6c000000);
SET64(4, RD(19) + RD(0));
SET64(3, RD(2) | 0x8004);
SET32(6, RW(6) << 3);
SET64(2, (s64)(s32)0x1000000);
SET64(8, RD(16) | RD(3));
SET64(31, 0x2b5c68); SET64(7, RD(2) | 0x105); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(20) + 43)));
mul_s(c, 0, 21, RSW(17), RSW(2));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b5c7c); SET64(5, RD(18) + RD(0)); JP_F_002A5A70(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(21) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(21) << 2);
SET64(2, RD(2) | 0xc005);
SET64(4, RD(19) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5ca4); SET64(7, RD(2) | 0x105); JP_F_002B1A50(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b5cb0); SET64(5, RD(18) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(6, RW(17) << 3);
SET64(2, (s64)(s32)0x7d000000);
SET64(4, RD(19) + RD(0));
SET64(3, RD(2) | 0xc001);
SET64(2, (s64)(s32)0x1000000);
SET64(8, RD(16) | RD(3));
SET64(31, 0x2b5cd4); SET64(7, RD(2) | 0x105); JP_F_002B1A50(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b5ce0); SET64(5, RD(19) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(20) + 80)));
SET64(5, rd16(c, (RW(20) + 28)));
SET32(18, RW(18) + RW(3));
SET64(3, RSD(18) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B5B78; } }
L_002B5CF8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002B5D20(Ctx *c) { /* func_002B5D20 */
ENTER(0x2b5d20);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B5D80; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B5D54; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B5D54; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B5D54; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B5DA0;
L_002B5D54:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29152)));
SET64(5, (s32)rd32(c, (RW(3) + -29656)));
SET64(8, (s32)rd32(c, (RW(28) + -29960)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -29872)));
SET64(31, 0x2b5d78); SET32(7, RW(0) + 28); JP_F_002A2C80(c);
 goto L_002B5D9C;
L_002B5D80:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b5d9c); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B5D9C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B5DA0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B5DB0(Ctx *c) { /* func_002B5DB0 */
ENTER(0x2b5db0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B5E04; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 6880);
SET32(2, RW(2) + 6920);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b5dec); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B4DB0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B5E08; }
SET64(31, 0x2b5e04); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B5E04:;
SET64(2, RD(17) + RD(0));
L_002B5E08:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B5E20(Ctx *c) { /* func_002B5E20 */
ENTER(0x2b5e20);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b5e44); SET64(16, RD(4) + RD(0)); JP_F_002B4E20(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6920);
SET32(3, RW(3) + 6880);
SET64(17, RD(18) & 0xffff);
wr32(c, (RW(16) + 64), RW(2));
SET32(2, RW(17) << 1);
wr32(c, (RW(16) + 0), RW(3));
SET32(6, RW(2) + RW(17));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 3);
SET64(31, 0x2b5e7c); SET32(8, RW(0) + 1); JP_F_002A5E50(c);
SET32(6, RW(17) << 1);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b5e94); SET32(8, RW(0) + 1); JP_F_002A5CD0(c);
SET32(7, RW(0) + 1);
SET64(6, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b5eac); SET64(8, RD(7) + RD(0)); JP_F_002A5C10(c);
SET64(2, (s64)(s32)0x900a0000);
SET64(3, RD(0) | 0x8000);
SET64(2, RD(2) | 0x4000);
SET64(5, RD(18) + RD(0));
SET64(4, RD(2) << 32);
SET64(4, RD(3) | RD(4));
SET32(2, RW(0) + 4);
SET64(3, RD(2) << 32);
wr64(c, (RW(16) + 48), RD(4));
SET64(2, (s64)(s32)0x24240000);
SET64(2, RD(2) | 0x2412);
SET64(2, RD(2) | RD(3));
wr64(c, (RW(16) + 56), RD(2));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b5ef0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B5F10(Ctx *c) { /* func_002B5F10 */
ENTER(0x2b5f10);
SET32(4, RW(4) + -64); { JP_F_002B5DB0(c); return; }
}

void JP_F_002B5F20(Ctx *c) { /* func_002B5F20 */
ENTER(0x2b5f20);
SET64(2, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(5, RD(2) + RD(0)); { JP_F_002A8710(c); return; }
}

void JP_F_002B5F30(Ctx *c) { /* func_002B5F30 */
ENTER(0x2b5f30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B5F78; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6944);
SET64(31, 0x2b5f60); wr32(c, (RW(17) + 32), RW(2)); JP_F_002B5FF0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B5F7C; }
SET64(31, 0x2b5f78); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B5F78:;
SET64(2, RD(17) + RD(0));
L_002B5F7C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B5F90(Ctx *c) { /* func_002B5F90 */
ENTER(0x2b5f90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b5fac); SET64(16, RD(6) + RD(0)); JP_F_002B6050(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 6944);
wr32(c, (RW(17) + 32), RW(2));
SET32(2, RW(0) + 1);
wr32(c, (RW(17) + 16), RW(2));
SET64(2, RD(17) + RD(0));
wr128(c, (RW(17) + 48) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B5FE0(Ctx *c) { /* func_002B5FE0 */
ENTER(0x2b5fe0);
SET64(2, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(5, RD(2) + RD(0)); { JP_F_002A87A0(c); return; }
}

void JP_F_002B5FF0(Ctx *c) { /* func_002B5FF0 */
ENTER(0x2b5ff0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6038; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 6976);
SET64(31, 0x2b6020); wr32(c, (RW(17) + 32), RW(2)); JP_F_002B6090(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B603C; }
SET64(31, 0x2b6038); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B6038:;
SET64(2, RD(17) + RD(0));
L_002B603C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B6050(Ctx *c) { /* func_002B6050 */
ENTER(0x2b6050);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b6064); SET64(16, RD(4) + RD(0)); JP_F_002B60E0(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 16), RW(0));
SET32(2, RW(2) + 6976);
wr32(c, (RW(16) + 32), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B6090(Ctx *c) { /* func_002B6090 */
ENTER(0x2b6090);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002B60CC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7008);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 32), RW(3)); if (t) goto L_002B60C8; }
SET64(31, 0x2b60c8);  JP_F_001004B0(c);
L_002B60C8:;
SET64(2, RD(16) + RD(0));
L_002B60CC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B60E0(Ctx *c) { /* func_002B60E0 */
ENTER(0x2b60e0);
rd128(c, (RW(5) + 0) & ~15u, &c->r[5]);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 7008);
SET32(3, RW(0) + -1);
wr32(c, (RW(4) + 32), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(3));
wr128(c, (RW(4) + 0) & ~15u, &c->r[5]); return;
}

void JP_F_002B6110(Ctx *c) { /* func_002B6110 */
ENTER(0x2b6110);
SET64(2, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(5, RD(2) + RD(0)); { JP_F_002A8690(c); return; }
}

void JP_F_002B6120(Ctx *c) { /* func_002B6120 */
ENTER(0x2b6120);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6168; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + 7040);
SET64(31, 0x2b6150); wr32(c, (RW(17) + 32), RW(2)); JP_F_002B5F30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B616C; }
SET64(31, 0x2b6168); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B6168:;
SET64(2, RD(17) + RD(0));
L_002B616C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B6180(Ctx *c) { /* func_002B6180 */
ENTER(0x2b6180);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2b619c); c->f[20].u = c->f[12].u; JP_F_002B5F90(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 7040);
wr32(c, (RW(16) + 32), RW(2));
wr32(c, (RW(16) + 64), c->f[20].u);
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 16), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void JP_F_002B61D0(Ctx *c) { /* func_002B61D0 */
ENTER(0x2b61d0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B631C; }
L_002B6208:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B6224; }
SET32(2, RW(4) << 2); goto L_002B622C;
L_002B6224:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B622C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b6280); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6294); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b62bc); SET64(7, RD(2) | 0x202); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b62c8); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc0d9);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b62f0); SET64(7, RD(2) | 0x101); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b62fc); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B6208; } }
L_002B631C:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B6340(Ctx *c) { /* func_002B6340 */
ENTER(0x2b6340);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B63A0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B6374; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B6374; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B6374; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B63C0;
L_002B6374:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29280)));
SET64(5, (s32)rd32(c, (RW(3) + -29736)));
SET64(8, (s32)rd32(c, (RW(28) + -30024)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30000)));
SET64(31, 0x2b6398); SET32(7, RW(0) + 106); JP_F_002A2C80(c);
 goto L_002B63BC;
L_002B63A0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b63bc); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B63BC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B63C0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B63D0(Ctx *c) { /* func_002B63D0 */
ENTER(0x2b63d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6424; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7072);
SET32(2, RW(2) + 7112);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b640c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B6428; }
SET64(31, 0x2b6424); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B6424:;
SET64(2, RD(17) + RD(0));
L_002B6428:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B6440(Ctx *c) { /* func_002B6440 */
ENTER(0x2b6440);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b645c); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 7072);
SET32(3, RW(3) + 7112);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(6, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b6490); SET32(8, RW(0) + 1); JP_F_002A5E50(c);
SET64(2, (s64)(s32)0x10020000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 4);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b64c0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b64d4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B64F0(Ctx *c) { /* func_002B64F0 */
ENTER(0x2b64f0);
SET32(4, RW(4) + -64); { JP_F_002B63D0(c); return; }
}

void JP_F_002B6500(Ctx *c) { /* func_002B6500 */
ENTER(0x2b6500);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B664C; }
L_002B6538:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B6554; }
SET32(2, RW(4) << 2); goto L_002B655C;
L_002B6554:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B655C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b65b0); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b65c4); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b65ec); SET64(7, RD(2) | 0x101); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b65f8); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b6620); SET64(7, RD(2) | 0x101); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b662c); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B6538; } }
L_002B664C:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B6670(Ctx *c) { /* func_002B6670 */
ENTER(0x2b6670);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B671C; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B66F0; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B66F0; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B66F0; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B66C4; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B66C4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B66C4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B673C;
L_002B66C4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29528)));
SET64(5, (s32)rd32(c, (RW(3) + -29808)));
SET64(8, (s32)rd32(c, (RW(28) + -30148)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30240)));
SET64(31, 0x2b66e8); SET32(7, RW(0) + 218); JP_F_002A2C80(c);
 goto L_002B6738;
L_002B66F0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29464)));
SET64(5, (s32)rd32(c, (RW(3) + -29808)));
SET64(8, (s32)rd32(c, (RW(28) + -30116)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30184)));
SET64(31, 0x2b6714); SET32(7, RW(0) + 198); JP_F_002A2C80(c);
 goto L_002B6738;
L_002B671C:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b6738); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B6738:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B673C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B6750(Ctx *c) { /* func_002B6750 */
ENTER(0x2b6750);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b6764); SET64(16, RD(4) + RD(0)); JP_F_002A5970(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x30020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B6790(Ctx *c) { /* func_002B6790 */
ENTER(0x2b6790);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b67a4); SET64(16, RD(4) + RD(0)); JP_F_002A59D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x30020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B67D0(Ctx *c) { /* func_002B67D0 */
ENTER(0x2b67d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6824; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7136);
SET32(2, RW(2) + 7176);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b680c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B6828; }
SET64(31, 0x2b6824); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B6824:;
SET64(2, RD(17) + RD(0));
L_002B6828:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B6840(Ctx *c) { /* func_002B6840 */
ENTER(0x2b6840);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b685c); SET64(16, RD(5) + RD(0)); JP_F_002B93D0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7136);
SET32(2, RW(2) + 7176);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(6, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b688c); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET64(2, (s64)(s32)0x10020000);
SET64(3, RD(0) | 0x8000);
SET64(4, RD(2) | 0x4000);
SET32(2, RW(0) + 4);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(4) << 32);
SET64(2, RD(3) | RD(2));
SET64(4, RD(17) + RD(0));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(2, RD(2) << 6);
SET64(2, RD(2) >> 53);
SET64(5, RD(2) << 32);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2b68cc); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b68e0); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b68f4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B6910(Ctx *c) { /* func_002B6910 */
ENTER(0x2b6910);
SET32(4, RW(4) + -64); { JP_F_002B67D0(c); return; }
}

void JP_F_002B6920(Ctx *c) { /* func_002B6920 */
ENTER(0x2b6920);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B6A6C; }
L_002B6958:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B6974; }
SET32(2, RW(4) << 2); goto L_002B697C;
L_002B6974:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B697C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b69d0); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b69e4); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b6a0c); SET64(7, RD(2) | 0x101); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6a18); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b6a40); SET64(7, RD(2) | 0x101); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6a4c); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B6958; } }
L_002B6A6C:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B6A90(Ctx *c) { /* func_002B6A90 */
ENTER(0x2b6a90);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B6AF0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B6AC4; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B6AC4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B6AC4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B6B10;
L_002B6AC4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29400)));
SET64(5, (s32)rd32(c, (RW(3) + -29808)));
SET64(8, (s32)rd32(c, (RW(28) + -30084)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30120)));
SET64(31, 0x2b6ae8); SET32(7, RW(0) + 218); JP_F_002A2C80(c);
 goto L_002B6B0C;
L_002B6AF0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b6b0c); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B6B0C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B6B10:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B6B20(Ctx *c) { /* func_002B6B20 */
ENTER(0x2b6b20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6B74; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7200);
SET32(2, RW(2) + 7240);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b6b5c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B6B78; }
SET64(31, 0x2b6b74); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B6B74:;
SET64(2, RD(17) + RD(0));
L_002B6B78:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B6B90(Ctx *c) { /* func_002B6B90 */
ENTER(0x2b6b90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b6bac); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7200);
SET32(2, RW(2) + 7240);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(6, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b6bdc); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET64(2, (s64)(s32)0x10020000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 4);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b6c0c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b6c20); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B6C40(Ctx *c) { /* func_002B6C40 */
ENTER(0x2b6c40);
SET32(4, RW(4) + -64); { JP_F_002B6B20(c); return; }
}

void JP_F_002B6C50(Ctx *c) { /* func_002B6C50 */
ENTER(0x2b6c50);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B6DD8; }
L_002B6C88:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B6CA4; }
SET32(2, RW(4) << 2); goto L_002B6CAC;
L_002B6CA4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B6CAC:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b6d00); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6d14); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b6d3c); SET64(7, RD(2) | 0x102); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6d50); SET64(5, RD(17) + RD(0)); JP_F_002A5A70(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b6d78); SET64(7, RD(2) | 0x102); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6d84); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b6dac); SET64(7, RD(2) | 0x102); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6db8); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B6C88; } }
L_002B6DD8:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B6E00(Ctx *c) { /* func_002B6E00 */
ENTER(0x2b6e00);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B6EAC; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B6E80; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B6E80; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B6E80; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B6E54; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B6E54; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B6E54; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B6ECC;
L_002B6E54:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29520)));
SET64(5, (s32)rd32(c, (RW(3) + -29800)));
SET64(8, (s32)rd32(c, (RW(28) + -30144)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30232)));
SET64(31, 0x2b6e78); SET32(7, RW(0) + 110); JP_F_002A2C80(c);
 goto L_002B6EC8;
L_002B6E80:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29456)));
SET64(5, (s32)rd32(c, (RW(3) + -29800)));
SET64(8, (s32)rd32(c, (RW(28) + -30112)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30176)));
SET64(31, 0x2b6ea4); SET32(7, RW(0) + 98); JP_F_002A2C80(c);
 goto L_002B6EC8;
L_002B6EAC:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b6ec8); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B6EC8:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B6ECC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B6EE0(Ctx *c) { /* func_002B6EE0 */
ENTER(0x2b6ee0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b6ef4); SET64(16, RD(4) + RD(0)); JP_F_002A5970(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x30020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B6F20(Ctx *c) { /* func_002B6F20 */
ENTER(0x2b6f20);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b6f34); SET64(16, RD(4) + RD(0)); JP_F_002A59D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x30020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B6F60(Ctx *c) { /* func_002B6F60 */
ENTER(0x2b6f60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6FB4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7264);
SET32(2, RW(2) + 7304);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b6f9c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B6FB8; }
SET64(31, 0x2b6fb4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B6FB4:;
SET64(2, RD(17) + RD(0));
L_002B6FB8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B6FD0(Ctx *c) { /* func_002B6FD0 */
ENTER(0x2b6fd0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b6ff0); SET64(16, RD(5) + RD(0)); JP_F_002B93D0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7264);
SET32(2, RW(2) + 7304);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b7024); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b703c); SET64(8, RD(7) + RD(0)); JP_F_002A5C10(c);
SET64(2, (s64)(s32)0x20060000);
SET64(3, RD(0) | 0x8000);
SET64(4, RD(2) | 0x4000);
SET32(2, RW(0) + 65);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(4) << 32);
SET64(2, RD(3) | RD(2));
SET64(4, RD(17) + RD(0));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(2, RD(2) << 6);
SET64(2, RD(2) >> 53);
SET64(5, RD(2) << 32);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2b707c); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b7090); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b70a4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B70C0(Ctx *c) { /* func_002B70C0 */
ENTER(0x2b70c0);
SET32(4, RW(4) + -64); { JP_F_002B6F60(c); return; }
}

void JP_F_002B70D0(Ctx *c) { /* func_002B70D0 */
ENTER(0x2b70d0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B7258; }
L_002B7108:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B7124; }
SET32(2, RW(4) << 2); goto L_002B712C;
L_002B7124:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B712C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b7180); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7194); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b71bc); SET64(7, RD(2) | 0x102); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b71d0); SET64(5, RD(17) + RD(0)); JP_F_002A5A70(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b71f8); SET64(7, RD(2) | 0x102); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7204); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b722c); SET64(7, RD(2) | 0x102); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7238); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B7108; } }
L_002B7258:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B7280(Ctx *c) { /* func_002B7280 */
ENTER(0x2b7280);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B72E0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B72B4; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B72B4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B72B4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B7300;
L_002B72B4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29392)));
SET64(5, (s32)rd32(c, (RW(3) + -29800)));
SET64(8, (s32)rd32(c, (RW(28) + -30080)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30112)));
SET64(31, 0x2b72d8); SET32(7, RW(0) + 110); JP_F_002A2C80(c);
 goto L_002B72FC;
L_002B72E0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b72fc); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B72FC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B7300:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B7310(Ctx *c) { /* func_002B7310 */
ENTER(0x2b7310);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B7364; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7328);
SET32(2, RW(2) + 7368);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b734c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B7368; }
SET64(31, 0x2b7364); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B7364:;
SET64(2, RD(17) + RD(0));
L_002B7368:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B7380(Ctx *c) { /* func_002B7380 */
ENTER(0x2b7380);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b73a0); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7328);
SET32(2, RW(2) + 7368);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b73d4); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b73ec); SET64(8, RD(7) + RD(0)); JP_F_002A5C10(c);
SET64(2, (s64)(s32)0x20060000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 65);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b741c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b7430); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B7450(Ctx *c) { /* func_002B7450 */
ENTER(0x2b7450);
SET32(4, RW(4) + -64); { JP_F_002B7310(c); return; }
}

void JP_F_002B7460(Ctx *c) { /* func_002B7460 */
ENTER(0x2b7460);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B75E8; }
L_002B7498:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B74B4; }
SET32(2, RW(4) << 2); goto L_002B74BC;
L_002B74B4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B74BC:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b7510); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7524); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b754c); SET64(7, RD(2) | 0x203); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7560); SET64(5, RD(17) + RD(0)); JP_F_002A5A70(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b7588); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7594); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc0d9);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b75bc); SET64(7, RD(2) | 0x101); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b75c8); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B7498; } }
L_002B75E8:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B7610(Ctx *c) { /* func_002B7610 */
ENTER(0x2b7610);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B7670; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B7644; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B7644; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B7644; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B7690;
L_002B7644:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29272)));
SET64(5, (s32)rd32(c, (RW(3) + -29728)));
SET64(8, (s32)rd32(c, (RW(28) + -30020)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -29992)));
SET64(31, 0x2b7668); SET32(7, RW(0) + 70); JP_F_002A2C80(c);
 goto L_002B768C;
L_002B7670:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b768c); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B768C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B7690:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B76A0(Ctx *c) { /* func_002B76A0 */
ENTER(0x2b76a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B76F4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7392);
SET32(2, RW(2) + 7432);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b76dc); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B76F8; }
SET64(31, 0x2b76f4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B76F4:;
SET64(2, RD(17) + RD(0));
L_002B76F8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B7710(Ctx *c) { /* func_002B7710 */
ENTER(0x2b7710);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b772c); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 7392);
SET32(3, RW(3) + 7432);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(6, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b7760); SET32(8, RW(0) + 1); JP_F_002A5E50(c);
SET32(7, RW(0) + 1);
SET64(6, RD(16) & 0xffff);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b7778); SET64(8, RD(7) + RD(0)); JP_F_002A5C10(c);
SET64(2, (s64)(s32)0x20060000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 65);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b77a8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b77bc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B77E0(Ctx *c) { /* func_002B77E0 */
ENTER(0x2b77e0);
SET32(4, RW(4) + -64); { JP_F_002B76A0(c); return; }
}

void JP_F_002B77F0(Ctx *c) { /* func_002B77F0 */
ENTER(0x2b77f0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B79B4; }
L_002B7828:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B7844; }
SET32(2, RW(4) << 2); goto L_002B784C;
L_002B7844:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B784C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b78a0); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b78b4); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b78dc); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b78f0); SET64(5, RD(17) + RD(0)); JP_F_002A5AA0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b7918); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b792c); SET64(5, RD(17) + RD(0)); JP_F_002A5A70(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b7954); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7960); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b7988); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7994); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B7828; } }
L_002B79B4:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B79E0(Ctx *c) { /* func_002B79E0 */
ENTER(0x2b79e0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B7A8C; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B7A60; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B7A60; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B7A60; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B7A34; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B7A34; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B7A34; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B7AAC;
L_002B7A34:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29576)));
SET64(5, (s32)rd32(c, (RW(3) + -29792)));
SET64(8, (s32)rd32(c, (RW(28) + -30172)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30296)));
SET64(31, 0x2b7a58); SET32(7, RW(0) + 70); JP_F_002A2C80(c);
 goto L_002B7AA8;
L_002B7A60:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29440)));
SET64(5, (s32)rd32(c, (RW(3) + -29792)));
SET64(8, (s32)rd32(c, (RW(28) + -30104)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30160)));
SET64(31, 0x2b7a84); SET32(7, RW(0) + 62); JP_F_002A2C80(c);
 goto L_002B7AA8;
L_002B7A8C:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b7aa8); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B7AA8:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B7AAC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B7AC0(Ctx *c) { /* func_002B7AC0 */
ENTER(0x2b7ac0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b7ad4); SET64(16, RD(4) + RD(0)); JP_F_002A5970(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x40020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B7B00(Ctx *c) { /* func_002B7B00 */
ENTER(0x2b7b00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b7b14); SET64(16, RD(4) + RD(0)); JP_F_002A59D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x40020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B7B40(Ctx *c) { /* func_002B7B40 */
ENTER(0x2b7b40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B7B94; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7456);
SET32(2, RW(2) + 7496);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b7b7c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B7B98; }
SET64(31, 0x2b7b94); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B7B94:;
SET64(2, RD(17) + RD(0));
L_002B7B98:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B7BB0(Ctx *c) { /* func_002B7BB0 */
ENTER(0x2b7bb0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b7bd0); SET64(16, RD(5) + RD(0)); JP_F_002B93D0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7456);
SET32(2, RW(2) + 7496);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b7c04); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b7c1c); SET64(8, RD(7) + RD(0)); JP_F_002A5CD0(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b7c34); SET64(8, RD(7) + RD(0)); JP_F_002A5C10(c);
SET64(2, (s64)(s32)0x300e0000);
SET64(3, RD(0) | 0x8000);
SET64(4, RD(2) | 0x4000);
SET32(2, RW(0) + 1042);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(4) << 32);
SET64(2, RD(3) | RD(2));
SET64(4, RD(17) + RD(0));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(2, RD(2) << 6);
SET64(2, RD(2) >> 53);
SET64(5, RD(2) << 32);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2b7c74); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b7c88); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b7c9c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B7CC0(Ctx *c) { /* func_002B7CC0 */
ENTER(0x2b7cc0);
SET32(4, RW(4) + -64); { JP_F_002B7B40(c); return; }
}

void JP_F_002B7CD0(Ctx *c) { /* func_002B7CD0 */
ENTER(0x2b7cd0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B7E94; }
L_002B7D08:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B7D24; }
SET32(2, RW(4) << 2); goto L_002B7D2C;
L_002B7D24:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B7D2C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b7d80); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7d94); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b7dbc); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7dd0); SET64(5, RD(17) + RD(0)); JP_F_002A5AA0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b7df8); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7e0c); SET64(5, RD(17) + RD(0)); JP_F_002A5A70(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b7e34); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7e40); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b7e68); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7e74); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B7D08; } }
L_002B7E94:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B7EC0(Ctx *c) { /* func_002B7EC0 */
ENTER(0x2b7ec0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B7F20; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B7EF4; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B7EF4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B7EF4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B7F40;
L_002B7EF4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29384)));
SET64(5, (s32)rd32(c, (RW(3) + -29792)));
SET64(8, (s32)rd32(c, (RW(28) + -30076)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30104)));
SET64(31, 0x2b7f18); SET32(7, RW(0) + 70); JP_F_002A2C80(c);
 goto L_002B7F3C;
L_002B7F20:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b7f3c); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B7F3C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B7F40:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B7F50(Ctx *c) { /* func_002B7F50 */
ENTER(0x2b7f50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B7FA4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7520);
SET32(2, RW(2) + 7560);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b7f8c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B7FA8; }
SET64(31, 0x2b7fa4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B7FA4:;
SET64(2, RD(17) + RD(0));
L_002B7FA8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B7FC0(Ctx *c) { /* func_002B7FC0 */
ENTER(0x2b7fc0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b7fe0); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7520);
SET32(2, RW(2) + 7560);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b8014); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b802c); SET64(8, RD(7) + RD(0)); JP_F_002A5CD0(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b8044); SET64(8, RD(7) + RD(0)); JP_F_002A5C10(c);
SET64(2, (s64)(s32)0x300e0000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 1042);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b8074); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b8088); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B80B0(Ctx *c) { /* func_002B80B0 */
ENTER(0x2b80b0);
SET32(4, RW(4) + -64); { JP_F_002B7F50(c); return; }
}

void JP_F_002B80C0(Ctx *c) { /* func_002B80C0 */
ENTER(0x2b80c0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B8284; }
L_002B80F8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B8114; }
SET32(2, RW(4) << 2); goto L_002B811C;
L_002B8114:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B811C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b8170); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8184); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b81ac); SET64(7, RD(2) | 0x204); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b81c0); SET64(5, RD(17) + RD(0)); JP_F_002A5AA0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b81e8); SET64(7, RD(2) | 0x104); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b81fc); SET64(5, RD(17) + RD(0)); JP_F_002A5A70(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc004);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8224); SET64(7, RD(2) | 0x104); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8230); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc0e1);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8258); SET64(7, RD(2) | 0x101); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8264); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B80F8; } }
L_002B8284:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B82B0(Ctx *c) { /* func_002B82B0 */
ENTER(0x2b82b0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B8310; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B82E4; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B82E4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B82E4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B8330;
L_002B82E4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29264)));
SET64(5, (s32)rd32(c, (RW(3) + -29720)));
SET64(8, (s32)rd32(c, (RW(28) + -30016)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -29984)));
SET64(31, 0x2b8308); SET32(7, RW(0) + 54); JP_F_002A2C80(c);
 goto L_002B832C;
L_002B8310:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b832c); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B832C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B8330:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B8340(Ctx *c) { /* func_002B8340 */
ENTER(0x2b8340);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B8394; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7584);
SET32(2, RW(2) + 7624);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b837c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B8398; }
SET64(31, 0x2b8394); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B8394:;
SET64(2, RD(17) + RD(0));
L_002B8398:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B83B0(Ctx *c) { /* func_002B83B0 */
ENTER(0x2b83b0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b83d0); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 7584);
SET32(3, RW(3) + 7624);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(6, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b8404); SET32(8, RW(0) + 1); JP_F_002A5E50(c);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b8420); SET64(8, RD(7) + RD(0)); JP_F_002A5CD0(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b8438); SET64(8, RD(7) + RD(0)); JP_F_002A5C10(c);
SET64(2, (s64)(s32)0x300e0000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 1042);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b8468); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b847c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B84A0(Ctx *c) { /* func_002B84A0 */
ENTER(0x2b84a0);
SET32(4, RW(4) + -64); { JP_F_002B8340(c); return; }
}

void JP_F_002B84B0(Ctx *c) { /* func_002B84B0 */
ENTER(0x2b84b0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B8674; }
L_002B84E8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B8504; }
SET32(2, RW(4) << 2); goto L_002B850C;
L_002B8504:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B850C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b8560); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8574); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b859c); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b85b0); SET64(5, RD(17) + RD(0)); JP_F_002A5AD0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b85d8); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b85ec); SET64(5, RD(17) + RD(0)); JP_F_002A5AA0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8614); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8620); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8648); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8654); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B84E8; } }
L_002B8674:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B86A0(Ctx *c) { /* func_002B86A0 */
ENTER(0x2b86a0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B874C; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B8720; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B8720; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B8720; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B86F4; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B86F4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B86F4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B876C;
L_002B86F4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29568)));
SET64(5, (s32)rd32(c, (RW(3) + -29768)));
SET64(8, (s32)rd32(c, (RW(28) + -30168)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30288)));
SET64(31, 0x2b8718); SET32(7, RW(0) + 70); JP_F_002A2C80(c);
 goto L_002B8768;
L_002B8720:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29416)));
SET64(5, (s32)rd32(c, (RW(3) + -29768)));
SET64(8, (s32)rd32(c, (RW(28) + -30092)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30136)));
SET64(31, 0x2b8744); SET32(7, RW(0) + 62); JP_F_002A2C80(c);
 goto L_002B8768;
L_002B874C:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b8768); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B8768:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B876C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B8780(Ctx *c) { /* func_002B8780 */
ENTER(0x2b8780);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b8794); SET64(16, RD(4) + RD(0)); JP_F_002A5970(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x40020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B87C0(Ctx *c) { /* func_002B87C0 */
ENTER(0x2b87c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b87d4); SET64(16, RD(4) + RD(0)); JP_F_002A59D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x40020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B8800(Ctx *c) { /* func_002B8800 */
ENTER(0x2b8800);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B8854; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7648);
SET32(2, RW(2) + 7688);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b883c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B8858; }
SET64(31, 0x2b8854); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B8854:;
SET64(2, RD(17) + RD(0));
L_002B8858:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B8870(Ctx *c) { /* func_002B8870 */
ENTER(0x2b8870);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b8890); SET64(16, RD(5) + RD(0)); JP_F_002B93D0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7648);
SET32(2, RW(2) + 7688);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b88c4); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b88dc); SET64(8, RD(7) + RD(0)); JP_F_002A5D90(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b88f4); SET64(8, RD(7) + RD(0)); JP_F_002A5CD0(c);
SET64(2, (s64)(s32)0x300e0000);
SET64(3, RD(0) | 0x8000);
SET64(4, RD(2) | 0x4000);
SET32(2, RW(0) + 1042);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(4) << 32);
SET64(2, RD(3) | RD(2));
SET64(4, RD(17) + RD(0));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(2, RD(2) << 6);
SET64(2, RD(2) >> 53);
SET64(5, RD(2) << 32);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2b8934); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b8948); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b895c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B8980(Ctx *c) { /* func_002B8980 */
ENTER(0x2b8980);
SET32(4, RW(4) + -64); { JP_F_002B8800(c); return; }
}

void JP_F_002B8990(Ctx *c) { /* func_002B8990 */
ENTER(0x2b8990);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B8B54; }
L_002B89C8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B89E4; }
SET32(2, RW(4) << 2); goto L_002B89EC;
L_002B89E4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B89EC:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b8a40); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8a54); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8a7c); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8a90); SET64(5, RD(17) + RD(0)); JP_F_002A5AD0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8ab8); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8acc); SET64(5, RD(17) + RD(0)); JP_F_002A5AA0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8af4); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8b00); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8b28); SET64(7, RD(2) | 0x103); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8b34); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B89C8; } }
L_002B8B54:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B8B80(Ctx *c) { /* func_002B8B80 */
ENTER(0x2b8b80);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B8BE0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B8BB4; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B8BB4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B8BB4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B8C00;
L_002B8BB4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29368)));
SET64(5, (s32)rd32(c, (RW(3) + -29768)));
SET64(8, (s32)rd32(c, (RW(28) + -30068)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30088)));
SET64(31, 0x2b8bd8); SET32(7, RW(0) + 70); JP_F_002A2C80(c);
 goto L_002B8BFC;
L_002B8BE0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b8bfc); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B8BFC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B8C00:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B8C10(Ctx *c) { /* func_002B8C10 */
ENTER(0x2b8c10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B8C64; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7712);
SET32(2, RW(2) + 7752);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b8c4c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B8C68; }
SET64(31, 0x2b8c64); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B8C64:;
SET64(2, RD(17) + RD(0));
L_002B8C68:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B8C80(Ctx *c) { /* func_002B8C80 */
ENTER(0x2b8c80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b8ca0); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7712);
SET32(2, RW(2) + 7752);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b8cd4); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b8cec); SET64(8, RD(7) + RD(0)); JP_F_002A5D90(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b8d04); SET64(8, RD(7) + RD(0)); JP_F_002A5CD0(c);
SET64(2, (s64)(s32)0x300e0000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 1042);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b8d34); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b8d48); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B8D70(Ctx *c) { /* func_002B8D70 */
ENTER(0x2b8d70);
SET32(4, RW(4) + -64); { JP_F_002B8C10(c); return; }
}

void JP_F_002B8D80(Ctx *c) { /* func_002B8D80 */
ENTER(0x2b8d80);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B8F4C; }
L_002B8DB8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B8DD4; }
SET32(2, RW(4) << 2); goto L_002B8DDC;
L_002B8DD4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B8DDC:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b8e30); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8e44); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8e6c); SET64(7, RD(2) | 0x205); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8e80); SET64(5, RD(17) + RD(0)); JP_F_002A5AD0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8ea8); SET64(7, RD(2) | 0x205); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8ebc); SET64(5, RD(17) + RD(0)); JP_F_002A5AA0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8005);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b8ee4); SET64(7, RD(2) | 0x105); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8ef0); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(9, (s32)rd32(c, (RW(19) + 212)));
SET64(5, RD(2) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(8, RW(16) << 16);
SET64(7, RD(2) | 0x101);
SET64(3, (s64)(s32)0x6d000000);
SET32(6, RW(16) << 3);
SET64(4, RD(18) + RD(0));
SET64(2, RD(9) | 0xc000);
SET64(2, RD(2) | RD(8));
SET64(31, 0x2b8f20); SET64(8, RD(2) | RD(3)); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b8f2c); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B8DB8; } }
L_002B8F4C:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B8F70(Ctx *c) { /* func_002B8F70 */
ENTER(0x2b8f70);
SET32(29, RW(29) + -32);
SET64(3, RD(0) | 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002B8FE0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B8FAC; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B8FAC; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B8FAC; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B9000;
L_002B8FAC:;
SET64(2, (s64)(s32)0x4c0000);
SET64(8, (s32)rd32(c, (RW(28) + -30008)));
SET64(5, (s32)rd32(c, (RW(2) + -29696)));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29248)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -29968)));
SET64(31, 0x2b8fd4); SET32(7, RW(0) + 46); JP_F_002A2C80(c);
SET32(3, RW(0) + 241);
wr32(c, (RW(16) + 212), RW(3)); goto L_002B8FFC;
L_002B8FE0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b8ffc); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B8FFC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B9000:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B9010(Ctx *c) { /* func_002B9010 */
ENTER(0x2b9010);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B9064; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7776);
SET32(2, RW(2) + 7816);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b904c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B9068; }
SET64(31, 0x2b9064); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B9064:;
SET64(2, RD(17) + RD(0));
L_002B9068:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B9080(Ctx *c) { /* func_002B9080 */
ENTER(0x2b9080);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b90a0); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 7776);
SET32(3, RW(3) + 7816);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(18, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b90d8); SET32(8, RW(0) + 1); JP_F_002A5E50(c);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b90f0); SET32(8, RW(0) + 1); JP_F_002A5D90(c);
SET32(7, RW(0) + 1);
SET64(6, RD(16) & 0xffff);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b9108); SET64(8, RD(7) + RD(0)); JP_F_002A5CD0(c);
SET64(2, (s64)(s32)0x300e0000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 1042);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b9138); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b914c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B9170(Ctx *c) { /* func_002B9170 */
ENTER(0x2b9170);
SET32(4, RW(4) + -64); { JP_F_002B9010(c); return; }
}

void JP_F_002B9180(Ctx *c) { /* func_002B9180 */
ENTER(0x2b9180);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 208)));
{ int t = RD(16) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002B91B0; }
L_002B91A8:;
SET64(31, rd64(c, (RW(29) + 64))); goto L_002B9224;
L_002B91B0:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2b91c4); SET64(7, (s64)(s32)0x10000000); JP_F_002B1B30(c);
SET32(5, RW(16) << 6);
SET64(2, (s64)(s32)0x6c000000);
SET32(3, RW(5) >> 4);
SET64(2, RD(2) | 0x23);
SET32(3, RW(3) << 16);
SET64(4, RD(17) + RD(0));
SET64(7, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b91ec); SET64(6, RD(2) | 0x101); JP_F_002B1B30(c);
SET64(1, RSD(0) < RSD(16));
{ int t = RD(1) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_002B9220; }
L_002B91F8:;
SET64(5, (s32)rd32(c, (RW(18) + 160)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b9208); SET32(6, RW(0) + 4); JP_F_002B1B80(c);
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(16));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002B91F8; } }
 { POLL(); goto L_002B91A8; }
L_002B9220:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002B9224:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002B9240(Ctx *c) { /* func_002B9240 */
ENTER(0x2b9240);
SET64(7, (s32)rd32(c, (RW(4) + 208)));
SET64(3, RSD(7) < (s64)12);
{ int t = RD(3) != RD(0); SET32(6, RW(7) + 1); if (t) goto L_002B9258; }
L_002B9250:;
 goto L_002B926C;
L_002B9258:;
SET32(3, RW(7) << 2);
wr32(c, (RW(4) + 208), RW(6));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 160), RW(5)); { POLL(); goto L_002B9250; }
L_002B926C:;
 return;
}

void JP_F_002B9280(Ctx *c) { /* func_002B9280 */
ENTER(0x2b9280);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002B92F0; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7840);
SET32(2, RW(2) + 7880);
wr32(c, (RW(16) + 0), RW(3));
{ int t = RD(16) == RD(0); wr32(c, (RW(16) + 64), RW(2)); if (t) goto L_002B92D8; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7904);
SET32(2, RW(2) + 7944);
wr32(c, (RW(16) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b92d8); wr32(c, (RW(16) + 64), RW(2)); JP_F_002A2CF0(c);
L_002B92D8:;
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002B92F4; }
SET64(31, 0x2b92f0); SET64(4, RD(16) + RD(0)); JP_F_001004B0(c);
L_002B92F0:;
SET64(2, RD(16) + RD(0));
L_002B92F4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B9310(Ctx *c) { /* func_002B9310 */
ENTER(0x2b9310);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b9324); SET64(16, RD(4) + RD(0)); JP_F_002A2D70(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(0));
SET32(2, RW(2) + 7840);
wr32(c, (RW(16) + 148), RW(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 208), RW(0));
SET32(2, RW(2) + 7880);
wr32(c, (RW(16) + 212), RW(0));
wr32(c, (RW(16) + 64), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B9360(Ctx *c) { /* func_002B9360 */
ENTER(0x2b9360);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B93B4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7904);
SET32(2, RW(2) + 7944);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b939c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002A2CF0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B93B8; }
SET64(31, 0x2b93b4); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B93B4:;
SET64(2, RD(17) + RD(0));
L_002B93B8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B93D0(Ctx *c) { /* func_002B93D0 */
ENTER(0x2b93d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b93e4); SET64(16, RD(4) + RD(0)); JP_F_002A2D70(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(0));
SET32(2, RW(2) + 7904);
wr32(c, (RW(16) + 148), RW(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 7944);
wr32(c, (RW(16) + 64), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B9420(Ctx *c) { /* func_002B9420 */
ENTER(0x2b9420);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B956C; }
L_002B9458:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B9474; }
SET32(2, RW(4) << 2); goto L_002B947C;
L_002B9474:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B947C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b94d0); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b94e4); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b950c); SET64(7, RD(2) | 0x101); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9518); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b9540); SET64(7, RD(2) | 0x101); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b954c); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B9458; } }
L_002B956C:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B9590(Ctx *c) { /* func_002B9590 */
ENTER(0x2b9590);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B963C; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B9610; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B9610; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B9610; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B95E4; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B95E4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B95E4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B965C;
L_002B95E4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29544)));
SET64(5, (s32)rd32(c, (RW(3) + -29808)));
SET64(8, (s32)rd32(c, (RW(28) + -30156)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30264)));
SET64(31, 0x2b9608); SET32(7, RW(0) + 110); JP_F_002A2C80(c);
 goto L_002B9658;
L_002B9610:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29424)));
SET64(5, (s32)rd32(c, (RW(3) + -29808)));
SET64(8, (s32)rd32(c, (RW(28) + -30096)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30144)));
SET64(31, 0x2b9634); SET32(7, RW(0) + 94); JP_F_002A2C80(c);
 goto L_002B9658;
L_002B963C:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b9658); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B9658:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B965C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B9670(Ctx *c) { /* func_002B9670 */
ENTER(0x2b9670);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b9684); SET64(16, RD(4) + RD(0)); JP_F_002A5970(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x40020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B96B0(Ctx *c) { /* func_002B96B0 */
ENTER(0x2b96b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b96c4); SET64(16, RD(4) + RD(0)); JP_F_002A59D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 52)));
SET64(3, (s64)(s32)0x40020000);
SET64(3, RD(3) | 0x8000);
SET64(4, RD(4) << 36);
SET64(4, RD(4) >> 36);
SET64(3, RD(4) | RD(3));
wr32(c, (RW(16) + 60), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B96F0(Ctx *c) { /* func_002B96F0 */
ENTER(0x2b96f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B9744; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7968);
SET32(2, RW(2) + 8008);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b972c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B9748; }
SET64(31, 0x2b9744); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B9744:;
SET64(2, RD(17) + RD(0));
L_002B9748:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B9760(Ctx *c) { /* func_002B9760 */
ENTER(0x2b9760);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b977c); SET64(16, RD(5) + RD(0)); JP_F_002B93D0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 7968);
SET32(2, RW(2) + 8008);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(6, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b97ac); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET64(2, (s64)(s32)0x300e0000);
SET64(3, RD(0) | 0x8000);
SET64(4, RD(2) | 0x4000);
SET32(2, RW(0) + 1042);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(4) << 32);
SET64(2, RD(3) | RD(2));
SET64(4, RD(17) + RD(0));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(2, RD(2) << 6);
SET64(2, RD(2) >> 53);
SET64(5, RD(2) << 32);
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2b97ec); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b9800); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b9814); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B9830(Ctx *c) { /* func_002B9830 */
ENTER(0x2b9830);
SET32(4, RW(4) + -64); { JP_F_002B96F0(c); return; }
}

void JP_F_002B9840(Ctx *c) { /* func_002B9840 */
ENTER(0x2b9840);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B98A0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B9874; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B9874; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B9874; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B98C0;
L_002B9874:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29320)));
SET64(5, (s32)rd32(c, (RW(3) + -29744)));
SET64(8, (s32)rd32(c, (RW(28) + -30044)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30040)));
SET64(31, 0x2b9898); SET32(7, RW(0) + 86); JP_F_002A2C80(c);
 goto L_002B98BC;
L_002B98A0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b98bc); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B98BC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B98C0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B98D0(Ctx *c) { /* func_002B98D0 */
ENTER(0x2b98d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B9924; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8032);
SET32(2, RW(2) + 8072);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b990c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9D30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B9928; }
SET64(31, 0x2b9924); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B9924:;
SET64(2, RD(17) + RD(0));
L_002B9928:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B9940(Ctx *c) { /* func_002B9940 */
ENTER(0x2b9940);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b9954); SET64(16, RD(4) + RD(0)); JP_F_002B9DA0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8032);
SET32(3, RW(3) + 8072);
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 64), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B9980(Ctx *c) { /* func_002B9980 */
ENTER(0x2b9980);
SET32(4, RW(4) + -64); { JP_F_002B98D0(c); return; }
}

void JP_F_002B9990(Ctx *c) { /* func_002B9990 */
ENTER(0x2b9990);
SET32(29, RW(29) + -32);
SET64(3, RD(0) | 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002B9A00; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B99CC; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B99CC; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B99CC; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B9A20;
L_002B99CC:;
SET64(2, (s64)(s32)0x4c0000);
SET64(8, (s32)rd32(c, (RW(28) + -29984)));
SET64(5, (s32)rd32(c, (RW(2) + -29672)));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29200)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -29920)));
SET64(31, 0x2b99f4); SET32(7, RW(0) + 54); JP_F_002A2C80(c);
SET32(3, RW(0) + 225);
wr32(c, (RW(16) + 212), RW(3)); goto L_002B9A1C;
L_002B9A00:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b9a1c); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B9A1C:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B9A20:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B9A30(Ctx *c) { /* func_002B9A30 */
ENTER(0x2b9a30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B9A84; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8096);
SET32(2, RW(2) + 8136);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b9a6c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002BA0D0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B9A88; }
SET64(31, 0x2b9a84); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B9A84:;
SET64(2, RD(17) + RD(0));
L_002B9A88:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B9AA0(Ctx *c) { /* func_002B9AA0 */
ENTER(0x2b9aa0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b9ab4); SET64(16, RD(4) + RD(0)); JP_F_002BA140(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8096);
SET32(3, RW(3) + 8136);
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 64), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002B9AE0(Ctx *c) { /* func_002B9AE0 */
ENTER(0x2b9ae0);
SET32(4, RW(4) + -64); { JP_F_002B9A30(c); return; }
}

void JP_F_002B9AF0(Ctx *c) { /* func_002B9AF0 */
ENTER(0x2b9af0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B9C78; }
L_002B9B28:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B9B44; }
SET32(2, RW(4) << 2); goto L_002B9B4C;
L_002B9B44:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B9B4C:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b9ba0); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9bb4); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b9bdc); SET64(7, RD(2) | 0x102); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9bf0); SET64(5, RD(17) + RD(0)); JP_F_002A5AD0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b9c18); SET64(7, RD(2) | 0x102); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9c24); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b9c4c); SET64(7, RD(2) | 0x102); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9c58); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B9B28; } }
L_002B9C78:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002B9CA0(Ctx *c) { /* func_002B9CA0 */
ENTER(0x2b9ca0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B9D00; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B9CD4; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B9CD4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B9CD4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B9D20;
L_002B9CD4:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29328)));
SET64(5, (s32)rd32(c, (RW(3) + -29744)));
SET64(8, (s32)rd32(c, (RW(28) + -30048)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30048)));
SET64(31, 0x2b9cf8); SET32(7, RW(0) + 86); JP_F_002A2C80(c);
 goto L_002B9D1C;
L_002B9D00:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b9d1c); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002B9D1C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B9D20:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002B9D30(Ctx *c) { /* func_002B9D30 */
ENTER(0x2b9d30);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B9D84; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8160);
SET32(2, RW(2) + 8200);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b9d6c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B9D88; }
SET64(31, 0x2b9d84); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002B9D84:;
SET64(2, RD(17) + RD(0));
L_002B9D88:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002B9DA0(Ctx *c) { /* func_002B9DA0 */
ENTER(0x2b9da0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b9dc0); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8160);
SET32(2, RW(2) + 8200);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b9df4); SET64(8, RD(7) + RD(0)); JP_F_002A5E50(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b9e0c); SET64(8, RD(7) + RD(0)); JP_F_002A5D90(c);
SET64(2, (s64)(s32)0x300e0000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 1042);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b9e3c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b9e50); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002B9E70(Ctx *c) { /* func_002B9E70 */
ENTER(0x2b9e70);
SET32(4, RW(4) + -64); { JP_F_002B9D30(c); return; }
}

void JP_F_002B9E80(Ctx *c) { /* func_002B9E80 */
ENTER(0x2b9e80);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, rd16(c, (RW(4) + 28)));
SET32(3, RW(5) + -2);
SET64(1, RSD(0) < RSD(3));
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002BA010; }
L_002B9EB8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B9ED4; }
SET32(2, RW(4) << 2); goto L_002B9EDC;
L_002B9ED4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B9EDC:;
SET64(3, RD(4) << 32);
SET32(2, RW(2) + -1);
SET64(3, RSD(3) >> 32);
SET32(2, RW(2) >> 4);
SET64(8, rd64(c, (RW(19) + 48)));
SET32(2, RW(2) + 1);
SET64(9, RD(3) & 0x7fff);
SET32(2, RW(2) << 4);
SET32(3, RW(0) + -32768);
SET32(16, RW(2) >> 2);
SET64(4, RD(18) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(5, RW(19) + 48);
SET64(7, RD(2) | 0x101);
SET32(6, RW(0) + 16);
SET64(2, (s64)(s32)0x6c010000);
SET64(3, RD(8) & RD(3));
SET64(8, RD(2) | 0x8000);
SET64(2, RD(3) | RD(9));
SET64(31, 0x2b9f30); wr64(c, (RW(19) + 48), RD(2)); JP_F_002B1AB0(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9f44); SET64(5, RD(17) + RD(0)); JP_F_002A5B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b9f6c); SET64(7, RD(2) | 0x204); JP_F_002B1A50(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9f80); SET64(5, RD(17) + RD(0)); JP_F_002A5AD0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b9fa8); SET64(7, RD(2) | 0x204); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9fb4); SET64(5, RD(17) + RD(0)); JP_F_002A5A50(c);
SET64(9, (s32)rd32(c, (RW(19) + 212)));
SET64(5, RD(2) + RD(0));
SET64(2, (s64)(s32)0x1000000);
SET32(8, RW(16) << 16);
SET64(7, RD(2) | 0x101);
SET64(3, (s64)(s32)0x6d000000);
SET32(6, RW(16) << 3);
SET64(4, RD(18) + RD(0));
SET64(2, RD(9) | 0xc000);
SET64(2, RD(2) | RD(8));
SET64(31, 0x2b9fe4); SET64(8, RD(2) | RD(3)); JP_F_002B1A50(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9ff0); SET64(5, RD(18) + RD(0)); JP_F_002A2C50(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B9EB8; } }
L_002BA010:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002BA030(Ctx *c) { /* func_002BA030 */
ENTER(0x2ba030);
SET32(29, RW(29) + -32);
SET64(3, RD(0) | 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002BA0A0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002BA06C; }
{ int t = RD(5) == RD(3);  if (t) goto L_002BA06C; }
{ int t = RD(5) == RD(0);  if (t) goto L_002BA06C; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002BA0C0;
L_002BA06C:;
SET64(2, (s64)(s32)0x4c0000);
SET64(8, (s32)rd32(c, (RW(28) + -29988)));
SET64(5, (s32)rd32(c, (RW(2) + -29672)));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29208)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -29928)));
SET64(31, 0x2ba094); SET32(7, RW(0) + 54); JP_F_002A2C80(c);
SET32(3, RW(0) + 225);
wr32(c, (RW(16) + 212), RW(3)); goto L_002BA0BC;
L_002BA0A0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2ba0bc); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002BA0BC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002BA0C0:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BA0D0(Ctx *c) { /* func_002BA0D0 */
ENTER(0x2ba0d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BA124; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8224);
SET32(2, RW(2) + 8264);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ba10c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9280(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002BA128; }
SET64(31, 0x2ba124); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BA124:;
SET64(2, RD(17) + RD(0));
L_002BA128:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BA140(Ctx *c) { /* func_002BA140 */
ENTER(0x2ba140);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2ba160); SET64(16, RD(5) + RD(0)); JP_F_002B9310(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8224);
SET32(3, RW(3) + 8264);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(18, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2ba198); SET32(8, RW(0) + 1); JP_F_002A5E50(c);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2ba1b0); SET32(8, RW(0) + 1); JP_F_002A5D90(c);
SET64(2, (s64)(s32)0x300e0000);
SET64(5, RD(0) | 0x8000);
SET64(3, RD(2) | 0x4000);
SET32(2, RW(0) + 1042);
wr64(c, (RW(17) + 56), RD(2));
SET64(2, RD(3) << 32);
SET64(2, RD(5) | RD(2));
wr64(c, (RW(17) + 48), RD(2));
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2ba1e0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2ba1f4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BA210(Ctx *c) { /* func_002BA210 */
ENTER(0x2ba210);
SET32(4, RW(4) + -64); { JP_F_002BA0D0(c); return; }
}

void JP_F_002BA220(Ctx *c) { /* func_002BA220 */
ENTER(0x2ba220);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002BA280; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002BA254; }
{ int t = RD(5) == RD(3);  if (t) goto L_002BA254; }
{ int t = RD(5) == RD(0);  if (t) goto L_002BA254; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002BA2A0;
L_002BA254:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29296)));
SET64(5, (s32)rd32(c, (RW(3) + -29744)));
SET64(8, (s32)rd32(c, (RW(28) + -30032)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -30016)));
SET64(31, 0x2ba278); SET32(7, RW(0) + 86); JP_F_002A2C80(c);
 goto L_002BA29C;
L_002BA280:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2ba29c); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002BA29C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002BA2A0:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002BA2B0(Ctx *c) { /* func_002BA2B0 */
ENTER(0x2ba2b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BA304; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8288);
SET32(2, RW(2) + 8328);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ba2ec); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9D30(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002BA308; }
SET64(31, 0x2ba304); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BA304:;
SET64(2, RD(17) + RD(0));
L_002BA308:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BA320(Ctx *c) { /* func_002BA320 */
ENTER(0x2ba320);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ba334); SET64(16, RD(4) + RD(0)); JP_F_002B9DA0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8288);
SET32(3, RW(3) + 8328);
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 64), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BA360(Ctx *c) { /* func_002BA360 */
ENTER(0x2ba360);
SET32(4, RW(4) + -64); { JP_F_002BA2B0(c); return; }
}

void JP_F_002BA370(Ctx *c) { /* func_002BA370 */
ENTER(0x2ba370);
SET32(29, RW(29) + -32);
SET64(3, RD(0) | 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002BA3E0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002BA3AC; }
{ int t = RD(5) == RD(3);  if (t) goto L_002BA3AC; }
{ int t = RD(5) == RD(0);  if (t) goto L_002BA3AC; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002BA400;
L_002BA3AC:;
SET64(2, (s64)(s32)0x4c0000);
SET64(8, (s32)rd32(c, (RW(28) + -29972)));
SET64(5, (s32)rd32(c, (RW(2) + -29672)));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29176)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -29896)));
SET64(31, 0x2ba3d4); SET32(7, RW(0) + 54); JP_F_002A2C80(c);
SET32(3, RW(0) + 225);
wr32(c, (RW(16) + 212), RW(3)); goto L_002BA3FC;
L_002BA3E0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2ba3fc); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002BA3FC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002BA400:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BA410(Ctx *c) { /* func_002BA410 */
ENTER(0x2ba410);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BA464; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8352);
SET32(2, RW(2) + 8392);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ba44c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002BA0D0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002BA468; }
SET64(31, 0x2ba464); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BA464:;
SET64(2, RD(17) + RD(0));
L_002BA468:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BA480(Ctx *c) { /* func_002BA480 */
ENTER(0x2ba480);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ba494); SET64(16, RD(4) + RD(0)); JP_F_002BA140(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8352);
SET32(3, RW(3) + 8392);
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 64), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BA4C0(Ctx *c) { /* func_002BA4C0 */
ENTER(0x2ba4c0);
SET32(4, RW(4) + -64); { JP_F_002BA410(c); return; }
}

void JP_F_002BA4D0(Ctx *c) { /* func_002BA4D0 */
ENTER(0x2ba4d0);
SET32(29, RW(29) + -64);
SET32(2, RW(0) + 27);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, rd64(c, (RW(4) + 48)));
SET64(16, RD(5) + RD(0));
wr32(c, (RW(29) + 56), RW(2));
wr32(c, (RW(29) + 52), RW(0));
wr32(c, (RW(29) + 60), RW(0));
SET64(2, RD(3) << 6);
SET64(4, (s64)(s32)0x540000);
SET64(2, RD(2) >> 53);
SET32(4, RW(4) + 1136);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET64(31, 0x2ba51c); wr32(c, (RW(29) + 48), RW(2)); JP_F_002B4F20(c);
SET64(2, (s64)(s32)0x1000000);
SET64(4, RD(16) + RD(0));
SET64(7, RD(2) | 0x101);
SET32(5, RW(29) + 48);
SET64(2, (s64)(s32)0x6c010000);
SET32(6, RW(0) + 16);
SET64(31, 0x2ba53c); SET64(8, RD(2) | 0x59); JP_F_002B1AB0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ba548); SET64(5, RD(16) + RD(0)); JP_F_002B8D80(c);
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2ba558); SET32(4, RW(4) + 1200); JP_F_002B4F20(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BA570(Ctx *c) { /* func_002BA570 */
ENTER(0x2ba570);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 221);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 212), RW(3));
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002BA5DC; }
{ int t = RD(5) == RD(3);  if (t) goto L_002BA5B0; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002BA5B0; }
{ int t = RD(5) == RD(0);  if (t) goto L_002BA5B0; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002BA5FC;
L_002BA5B0:;
SET64(2, (s64)(s32)0x4c0000);
SET64(3, (s64)(s32)0x4c0000);
SET64(6, (s32)rd32(c, (RW(2) + -29240)));
SET64(5, (s32)rd32(c, (RW(3) + -29696)));
SET64(8, (s32)rd32(c, (RW(28) + -30004)));
SET64(2, (s64)(s32)0x4c0000);
SET64(9, (s32)rd32(c, (RW(2) + -29960)));
SET64(31, 0x2ba5d4); SET32(7, RW(0) + 42); JP_F_002A2C80(c);
 goto L_002BA5F8;
L_002BA5DC:;
SET64(2, (s64)(s32)0x4c0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + -29840)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2ba5f8); SET64(6, RD(5) + RD(0)); JP_F_002A2C80(c);
L_002BA5F8:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002BA5FC:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002BA610(Ctx *c) { /* func_002BA610 */
ENTER(0x2ba610);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BA664; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8416);
SET32(2, RW(2) + 8456);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ba64c); wr32(c, (RW(17) + 64), RW(2)); JP_F_002B9010(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002BA668; }
SET64(31, 0x2ba664); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BA664:;
SET64(2, RD(17) + RD(0));
L_002BA668:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BA680(Ctx *c) { /* func_002BA680 */
ENTER(0x2ba680);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ba694); SET64(16, RD(4) + RD(0)); JP_F_002B9080(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8416);
SET32(3, RW(3) + 8456);
wr32(c, (RW(16) + 0), RW(2));
SET64(5, RD(0) | 0x8000);
SET64(2, (s64)(s32)0x400e0000);
wr32(c, (RW(16) + 64), RW(3));
SET64(2, RD(2) | 0x4000);
SET64(2, RD(2) << 32);
SET64(3, RD(5) | RD(2));
SET32(2, RW(0) + 16686);
wr64(c, (RW(16) + 48), RD(3));
wr64(c, (RW(16) + 56), RD(2));
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2ba6dc); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BA6F0(Ctx *c) { /* func_002BA6F0 */
ENTER(0x2ba6f0);
SET32(4, RW(4) + -64); { JP_F_002BA610(c); return; }
}

void JP_F_002BA700(Ctx *c) { /* func_002BA700 */
ENTER(0x2ba700);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2ba724); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 308)));
{ int t = RD(16) == RD(0);  if (t) goto L_002BA750; }
L_002BA730:;
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2ba744); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(16) != RD(0);  if (t) { POLL(); goto L_002BA730; } }
L_002BA750:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BA770(Ctx *c) { /* func_002BA770 */
ENTER(0x2ba770);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 304)));
SET64(31, 0x2ba790); SET64(16, RD(5) + RD(0)); JP_F_002A28E0(c);
SET32(4, RW(17) + 208);
SET64(31, 0x2ba79c); SET64(5, RD(16) + RD(0)); JP_F_002A2800(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BA7B0(Ctx *c) { /* func_002BA7B0 */
ENTER(0x2ba7b0);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) != RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002BA858; }
L_002BA7DC:;
SET64(3, (s32)rd32(c, (RW(18) + 140)));
SET64(3, RD(3) & 0x2);
{ int t = RD(3) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_002BA874; }
L_002BA7EC:;
SET64(3, (s32)rd32(c, (RW(18) + 140)));
SET64(3, RD(3) & 0x40);
{ int t = RD(3) != RD(0);  if (t) goto L_002BA8C4; }
wr32(c, (RW(18) + 304), RW(16));
SET64(3, (s32)rd32(c, (RW(18) + 132)));
L_002BA804:;
{ int t = RD(3) == RD(0);  if (t) goto L_002BA850; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(16, RW(3) + -1); if (t) goto L_002BA850; }
L_002BA81C:;
SET64(2, (s32)rd32(c, (RW(18) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2ba82c); SET64(5, RD(16) + RD(0)); JP_F_002ADD80(c);
SET64(25, (s32)rd32(c, (RW(2) + 144)));
SET64(4, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 304)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ba844); SET32(5, RW(18) + 64); rt_call(c, t); }
SET64(3, RD(16) + RD(0));
{ int t = RSD(3) > 0; SET32(16, RW(16) + -1); if (t) { POLL(); goto L_002BA81C; } }
L_002BA850:;
SET64(31, rd64(c, (RW(29) + 48))); goto L_002BA8D4;
L_002BA858:;
SET64(31, 0x2ba860);  JP_F_002A52D0(c);
SET64(4, (s32)rd32(c, (RW(18) + 140)));
SET32(3, RW(0) + -2);
SET64(3, RD(4) & RD(3));
wr32(c, (RW(18) + 140), RW(3)); { POLL(); goto L_002BA7DC; }
L_002BA874:;
SET32(4, RW(29) + 64);
SET64(31, 0x2ba880); SET64(5, RD(18) + RD(0)); JP_F_002AEAE0(c);
SET64(4, (s32)rd32(c, (RW(18) + 140)));
SET32(3, RW(0) + -3);
rd128(c, (RW(29) + 64) & ~15u, &c->r[8]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[7]);
rd128(c, (RW(29) + 96) & ~15u, &c->r[6]);
rd128(c, (RW(29) + 112) & ~15u, &c->r[5]);
SET64(3, RD(4) & RD(3));
wr128(c, (RW(18) + 64) & ~15u, &c->r[8]);
wr128(c, (RW(18) + 240) & ~15u, &c->r[8]);
wr128(c, (RW(18) + 80) & ~15u, &c->r[7]);
wr128(c, (RW(18) + 256) & ~15u, &c->r[7]);
wr128(c, (RW(18) + 96) & ~15u, &c->r[6]);
wr128(c, (RW(18) + 272) & ~15u, &c->r[6]);
wr32(c, (RW(18) + 140), RW(3));
wr128(c, (RW(18) + 112) & ~15u, &c->r[5]);
wr128(c, (RW(18) + 288) & ~15u, &c->r[5]); { POLL(); goto L_002BA7EC; }
L_002BA8C4:;
SET64(31, 0x2ba8cc); SET64(4, (s32)rd32(c, (RW(18) + 304))); JP_F_002A8610(c);
SET64(3, (s32)rd32(c, (RW(18) + 132))); { POLL(); goto L_002BA804; }
L_002BA8D4:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002BA8F0(Ctx *c) { /* func_002BA8F0 */
ENTER(0x2ba8f0);
{ int t = RD(5) == RD(0); wr32(c, (RW(4) + 304), RW(5)); if (t) goto L_002BA908; }
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) | 0x40);
wr32(c, (RW(4) + 140), RW(3)); goto L_002BA918;
L_002BA908:;
SET64(5, (s32)rd32(c, (RW(4) + 140)));
SET32(3, RW(0) + -65);
SET64(3, RD(5) & RD(3));
wr32(c, (RW(4) + 140), RW(3));
L_002BA918:;
 return;
}

void JP_F_002BA920(Ctx *c) { /* func_002BA920 */
ENTER(0x2ba920);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 308)));
{ int t = RD(4) == RD(0);  if (t) goto L_002BA948; }
SET64(31, 0x2ba944);  JP_F_002AE7E0(c);
wr32(c, (RW(16) + 308), RW(2));
L_002BA948:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BA960(Ctx *c) { /* func_002BA960 */
ENTER(0x2ba960);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 308)));
{ int t = RD(3) == RD(0);  if (t) goto L_002BA984; }
SET64(31, 0x2ba97c); SET64(4, RD(3) + RD(0)); JP_F_002AE870(c);
L_002BA97C:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_002BA98C;
L_002BA984:;
wr32(c, (RW(4) + 308), RW(5)); { POLL(); goto L_002BA97C; }
L_002BA98C:;
SET32(29, RW(29) + 16); return;
}

void JP_F_002BA9A0(Ctx *c) { /* func_002BA9A0 */
ENTER(0x2ba9a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) & 0x8);
{ int t = RD(3) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002BA9FC; }
SET64(4, (s32)rd32(c, (RW(17) + 308)));
{ int t = RD(4) == RD(0);  if (t) goto L_002BA9FC; }
{ int t = RD(4) == RD(0);  if (t) goto L_002BA9F8; }
L_002BA9D4:;
SET64(16, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) == RD(0); wr32(c, (RW(4) + 4), RW(0)); if (t) goto L_002BA9F0; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ba9f0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002BA9F0:;
{ int t = RD(16) != RD(0); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_002BA9D4; } }
L_002BA9F8:;
wr32(c, (RW(17) + 308), RW(0));
L_002BA9FC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BAA10(Ctx *c) { /* func_002BAA10 */
ENTER(0x2baa10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BAA6C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8480);
wr32(c, (RW(17) + 144), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2baa48);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2baa54); SET64(5, RD(0) + RD(0)); JP_F_002A5360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002BAA70; }
SET64(31, 0x2baa6c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BAA6C:;
SET64(2, RD(17) + RD(0));
L_002BAA70:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BAA90(Ctx *c) { /* func_002BAA90 */
ENTER(0x2baa90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2baaac); SET64(16, RD(5) + RD(0)); JP_F_002A53C0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 208);
SET32(2, RW(2) + 8480);
SET64(31, 0x2baac0); wr32(c, (RW(17) + 144), RW(2)); JP_F_002A2890(c);
SET64(3, (s32)rd32(c, (RW(17) + 140)));
SET32(4, RW(0) + 8);
if (RD(16) == 0) SET64(4, RD(0));
wr32(c, (RW(17) + 304), RW(0));
wr32(c, (RW(17) + 308), RW(0));
SET64(2, RD(17) + RD(0));
SET64(3, RD(3) | RD(4));
wr32(c, (RW(17) + 140), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BAB00(Ctx *c) { /* func_002BAB00 */
ENTER(0x2bab00);
SET32(29, RW(29) + -16);
rd128(c, (RW(4) + 256) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 0), RW(0));
wr32(c, (RW(29) + 4), RW(0));
wr32(c, (RW(29) + 8), RW(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr32(c, (RW(29) + 12), c->f[12].u);
rd128(c, (RW(29) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 256) & ~15u, &c->r[3]);
SET32(29, RW(29) + 16); return;
}

void JP_F_002BAB30(Ctx *c) { /* func_002BAB30 */
ENTER(0x2bab30);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bab40); SET64(4, (s32)rd32(c, (RW(4) + 576))); JP_F_002A56F0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BAB50(Ctx *c) { /* func_002BAB50 */
ENTER(0x2bab50);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2bab60); SET64(4, (s32)rd32(c, (RW(4) + 576))); JP_F_002A5740(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BAB70(Ctx *c) { /* func_002BAB70 */
ENTER(0x2bab70);
wr32(c, (RW(4) + 496), RW(5));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
wr32(c, (RW(4) + 544), RW(3)); return;
}

void JP_F_002BAB80(Ctx *c) { /* func_002BAB80 */
ENTER(0x2bab80);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd8(c, (RW(4) + 8)));
{ int t = RD(3) != RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002BABEC; }
SET64(4, (s32)rd32(c, (RW(18) + 496)));
if (RD(4) == RD(0)) { SET32(4, RW(18) + 352); goto L_002BABC8; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2babc4);  rt_call(c, t); }
SET32(4, RW(18) + 352);
L_002BABC8:;
SET64(31, 0x2babd0); SET64(5, RD(17) + RD(0)); JP_F_002B3E90(c);
SET32(4, RW(18) + 448);
SET64(31, 0x2babdc); SET64(5, RD(17) + RD(0)); JP_F_002B4210(c);
SET32(4, RW(18) + 32);
SET64(5, RD(17) + RD(0));
SET64(31, 0x2babec); SET64(6, RD(16) + RD(0)); JP_F_002BA700(c);
L_002BABEC:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BAC10(Ctx *c) { /* func_002BAC10 */
ENTER(0x2bac10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 580)));
{ int t = RD(4) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BAC48; }
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002BAC3C; }
SET32(5, RW(5) + 32);
L_002BAC3C:;
SET64(31, 0x2bac44);  JP_F_00243880(c);
wr32(c, (RW(17) + 580), RW(0));
L_002BAC48:;
if (RD(16) != RD(0)) { SET64(5, RD(17) + RD(0)); goto L_002BAC60; }
SET64(31, 0x2bac58);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(5, RD(17) + RD(0));
L_002BAC60:;
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002BAC70; }
SET32(5, RW(17) + 32);
SET64(4, RD(16) + RD(0));
L_002BAC70:;
SET64(31, 0x2bac78);  JP_F_002A6160(c);
SET64(31, 0x2bac80); SET64(4, RD(17) + RD(0)); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002BACA4; }
SET32(2, RW(0) + 2);
SET64(31, 0x2bac98); wr32(c, (RW(17) + 0), RW(2)); JP_F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(17) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
L_002BACA4:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BACC0(Ctx *c) { /* func_002BACC0 */
ENTER(0x2bacc0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(6) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BACF0; }
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + 1264);
wr32(c, (RW(17) + 580), RW(2)); goto L_002BACF4;
L_002BACF0:;
wr32(c, (RW(17) + 580), RW(6));
L_002BACF4:;
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002BAD00; }
SET32(5, RW(17) + 32);
L_002BAD00:;
SET64(31, 0x2bad08); SET64(4, (s32)rd32(c, (RW(17) + 580))); JP_F_002438D0(c);
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002BAD20; }
SET64(31, 0x2bad18);  JP_F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002BAD20:;
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(18, RD(17) + RD(0)); goto L_002BADA8; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(18, RD(17) + RD(0)); goto L_002BAD78; }
if (RD(4) == RD(0)) { SET64(18, RD(17) + RD(0)); goto L_002BAD48; }
wr8(c, (RW(17) + 8), (u8)RW(0)); goto L_002BADD4;
L_002BAD48:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002BAD58; }
SET32(18, RW(17) + 32);
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002BAD58:;
SET64(31, 0x2bad60); SET32(5, RW(0) + 1); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2bad70); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_002BADD0;
L_002BAD78:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002BAD88; }
SET32(18, RW(17) + 32);
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002BAD88:;
SET64(31, 0x2bad90); SET32(5, RW(0) + 2); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2bada0); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
 goto L_002BADD0;
L_002BADA8:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002BADB8; }
SET32(18, RW(17) + 32);
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002BADB8:;
SET64(31, 0x2badc0); SET64(5, RD(0) + RD(0)); JP_F_002ADD80(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2badd0); SET64(5, RD(18) + RD(0)); JP_F_002ADFE0(c);
L_002BADD0:;
wr8(c, (RW(17) + 8), (u8)RW(0));
L_002BADD4:;
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BAE00(Ctx *c) { /* func_002BAE00 */
ENTER(0x2bae00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 576)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002BAE40; }
SET64(31, 0x2bae20); SET32(4, RW(16) + 32); JP_F_002BA920(c);
SET64(4, (s32)rd32(c, (RW(16) + 576)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 576), RW(0)); goto L_002BAE40; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bae3c); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 576), RW(0));
L_002BAE40:;
wr32(c, (RW(16) + 580), RW(0));
wr32(c, (RW(16) + 496), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BAE60(Ctx *c) { /* func_002BAE60 */
ENTER(0x2bae60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2bae7c); SET32(4, RW(0) + 48); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002BAE90; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2bae90); SET64(5, RD(0) + RD(0)); JP_F_002A58A0(c);
L_002BAE90:;
SET64(5, RD(16) + RD(0));
SET32(4, RW(17) + 32);
SET64(31, 0x2baea0); wr32(c, (RW(17) + 576), RW(16)); JP_F_002BA960(c);
SET64(3, (s64)(s32)0x3f800000);
SET32(4, RW(17) + 512);
wr32(c, (RW(29) + 48), RW(3));
wr32(c, (RW(29) + 52), RW(3));
wr32(c, (RW(29) + 56), RW(3));
wr32(c, (RW(29) + 60), RW(3));
rd128(c, (RW(29) + 48) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 512) & ~15u, &c->r[3]);
wr32(c, (RW(17) + 528), RW(0));
SET64(3, (s32)rd32(c, (RW(17) + 576)));
wr32(c, (RW(3) + 32), RW(4));
wr32(c, (RW(17) + 580), RW(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BAEF0(Ctx *c) { /* func_002BAEF0 */
ENTER(0x2baef0);
SET32(29, RW(29) + -48);
SET32(7, RW(0) + 3);
wr64(c, (RW(29) + 32), RD(31));
SET64(8, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(6, rd16(c, (RW(4) + 116)));
SET64(5, rd16(c, (RW(4) + 122)));
SET64(3, rd16(c, (RW(4) + 118)));
SET64(2, (s32)rd32(c, (RW(4) + 124)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 5, RSW(5), RSW(6));
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(3, RW(3) << 4);
SET64(31, 0x2baf38); SET32(5, RW(2) + RW(3)); JP_F_002A5E50(c);
SET64(3, rd16(c, (RW(17) + 122)));
SET64(4, RD(17) + RD(0));
SET64(6, rd16(c, (RW(17) + 116)));
SET32(7, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(17) + 128)));
SET64(8, RD(0) + RD(0));
SET32(3, RSW(3) >> 1);
SET64(3, RD(3) & 0x1);
mul_s(c, 0, 3, RSW(3), RSW(6));
SET32(3, RW(3) << 4);
SET64(31, 0x2baf68); SET32(5, RW(2) + RW(3)); JP_F_002A5CD0(c);
SET64(5, rd16(c, (RW(17) + 122)));
SET64(4, RD(17) + RD(0));
SET64(3, rd16(c, (RW(17) + 112)));
SET32(7, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(8, RD(0) + RD(0));
SET32(5, RSW(5) >> 2);
SET64(6, rd16(c, (RW(17) + 116)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET32(3, RW(3) << 2);
SET64(31, 0x2baf9c); SET32(5, RW(2) + RW(3)); JP_F_002A5C10(c);
SET64(5, rd16(c, (RW(17) + 122)));
SET64(4, RD(17) + RD(0));
SET64(3, rd16(c, (RW(17) + 114)));
SET32(7, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 136)));
SET64(8, RD(0) + RD(0));
SET32(5, RSW(5) >> 3);
SET64(6, rd16(c, (RW(17) + 116)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET32(3, RW(3) << 3);
SET64(31, 0x2bafd0); SET32(5, RW(2) + RW(3)); JP_F_002A5B30(c);
SET64(2, rd16(c, (RW(17) + 122)));
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2bafe4); wr16(c, (RW(17) + 120), (u16)RW(2)); JP_F_002B5B40(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BB000(Ctx *c) { /* func_002BB000 */
ENTER(0x2bb000);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BB094; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8640);
SET32(3, RW(3) + 8680);
wr32(c, (RW(17) + 0), RW(2));
SET32(2, RW(17) + 112);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 64), RW(3)); if (t) goto L_002BB070; }
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002BB074; }
wr32(c, (RW(17) + 124), RW(0));
wr32(c, (RW(17) + 128), RW(0));
wr32(c, (RW(17) + 132), RW(0));
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2bb05c); SET64(4, (s32)rd32(c, (RW(17) + 140))); JP_F_001004B0(c);
wr32(c, (RW(17) + 140), RW(0));
wr16(c, (RW(17) + 116), (u16)RW(0));
wr16(c, (RW(17) + 118), (u16)RW(0));
wr16(c, (RW(17) + 120), (u16)RW(0));
wr16(c, (RW(17) + 122), (u16)RW(0));
L_002BB070:;
SET64(4, RD(17) + RD(0));
L_002BB074:;
SET64(31, 0x2bb07c); SET64(5, RD(0) + RD(0)); JP_F_002B5DB0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BB098; }
SET64(31, 0x2bb094); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BB094:;
SET64(2, RD(17) + RD(0));
L_002BB098:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BB0B0(Ctx *c) { /* func_002BB0B0 */
ENTER(0x2bb0b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2bb0d0); SET64(5, RD(0) + RD(0)); JP_F_002B5E20(c);
SET64(5, RD(17) + RD(0));
SET32(4, RW(16) + 112);
SET64(31, 0x2bb0e0); SET32(6, RW(0) + 3); JP_F_002BBCC0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8640);
SET32(2, RW(2) + 8680);
wr32(c, (RW(16) + 0), RW(3));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 64), RW(2));
SET32(7, RW(0) + 3);
SET64(5, rd16(c, (RW(16) + 122)));
SET64(8, RD(0) + RD(0));
SET64(6, rd16(c, (RW(16) + 116)));
SET64(3, rd16(c, (RW(16) + 118)));
SET64(5, RD(5) & 0x1);
SET64(2, (s32)rd32(c, (RW(16) + 124)));
mul_s(c, 0, 5, RSW(5), RSW(6));
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(3, RW(3) << 4);
SET64(31, 0x2bb12c); SET32(5, RW(2) + RW(3)); JP_F_002A5E50(c);
SET64(3, rd16(c, (RW(16) + 122)));
SET64(4, RD(16) + RD(0));
SET64(6, rd16(c, (RW(16) + 116)));
SET32(7, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(16) + 128)));
SET64(8, RD(0) + RD(0));
SET32(3, RSW(3) >> 1);
SET64(3, RD(3) & 0x1);
mul_s(c, 0, 3, RSW(3), RSW(6));
SET32(3, RW(3) << 4);
SET64(31, 0x2bb15c); SET32(5, RW(2) + RW(3)); JP_F_002A5CD0(c);
SET64(5, rd16(c, (RW(16) + 122)));
SET64(4, RD(16) + RD(0));
SET64(3, rd16(c, (RW(16) + 112)));
SET32(7, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(16) + 132)));
SET64(8, RD(0) + RD(0));
SET32(5, RSW(5) >> 2);
SET64(6, rd16(c, (RW(16) + 116)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET32(3, RW(3) << 2);
SET64(31, 0x2bb190); SET32(5, RW(2) + RW(3)); JP_F_002A5C10(c);
SET64(5, rd16(c, (RW(16) + 122)));
SET64(4, RD(16) + RD(0));
SET64(3, rd16(c, (RW(16) + 114)));
SET32(7, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(16) + 136)));
SET64(8, RD(0) + RD(0));
SET32(5, RSW(5) >> 3);
SET64(6, rd16(c, (RW(16) + 116)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET32(3, RW(3) << 3);
SET64(31, 0x2bb1c4); SET32(5, RW(2) + RW(3)); JP_F_002A5B30(c);
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(5, rd16(c, (RW(16) + 116)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2bb1d8); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BB1F0(Ctx *c) { /* func_002BB1F0 */
ENTER(0x2bb1f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BB258; }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002BB244; }
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
SET64(31, 0x2bb22c); SET64(4, (s32)rd32(c, (RW(17) + 28))); JP_F_001004B0(c);
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 4), (u16)RW(0));
wr16(c, (RW(17) + 6), (u16)RW(0));
wr16(c, (RW(17) + 8), (u16)RW(0));
wr16(c, (RW(17) + 10), (u16)RW(0));
SET64(2, RD(16) << 48);
L_002BB244:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BB25C; }
SET64(31, 0x2bb258); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BB258:;
SET64(2, RD(17) + RD(0));
L_002BB25C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BB270(Ctx *c) { /* func_002BB270 */
ENTER(0x2bb270);
SET32(29, RW(29) + -48);
SET32(7, RW(0) + 2);
wr64(c, (RW(29) + 32), RD(31));
SET64(8, RD(0) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(6, rd16(c, (RW(4) + 116)));
SET64(5, rd16(c, (RW(4) + 122)));
SET64(3, rd16(c, (RW(4) + 118)));
SET64(2, (s32)rd32(c, (RW(4) + 124)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 5, RSW(5), RSW(6));
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(3, RW(3) << 4);
SET64(31, 0x2bb2b8); SET32(5, RW(2) + RW(3)); JP_F_002A5E50(c);
SET64(3, rd16(c, (RW(17) + 122)));
SET64(4, RD(17) + RD(0));
SET64(6, rd16(c, (RW(17) + 116)));
SET32(7, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(17) + 128)));
SET64(8, RD(0) + RD(0));
SET32(3, RSW(3) >> 1);
SET64(3, RD(3) & 0x1);
mul_s(c, 0, 3, RSW(3), RSW(6));
SET32(3, RW(3) << 4);
SET64(31, 0x2bb2e8); SET32(5, RW(2) + RW(3)); JP_F_002A5CD0(c);
SET64(5, rd16(c, (RW(17) + 122)));
SET64(4, RD(17) + RD(0));
SET64(3, rd16(c, (RW(17) + 112)));
SET32(7, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 132)));
SET64(8, RD(0) + RD(0));
SET32(5, RSW(5) >> 2);
SET64(6, rd16(c, (RW(17) + 116)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET32(3, RW(3) << 2);
SET64(31, 0x2bb31c); SET32(5, RW(2) + RW(3)); JP_F_002A5C10(c);
SET64(5, rd16(c, (RW(17) + 122)));
SET64(4, RD(17) + RD(0));
SET64(3, rd16(c, (RW(17) + 114)));
SET32(7, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(17) + 136)));
SET64(8, RD(0) + RD(0));
SET32(5, RSW(5) >> 3);
SET64(6, rd16(c, (RW(17) + 116)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET32(3, RW(3) << 3);
SET64(31, 0x2bb350); SET32(5, RW(2) + RW(3)); JP_F_002A5B30(c);
SET64(2, rd16(c, (RW(17) + 122)));
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2bb364); wr16(c, (RW(17) + 120), (u16)RW(2)); JP_F_002B4B40(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BB380(Ctx *c) { /* func_002BB380 */
ENTER(0x2bb380);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BB40C; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8704);
SET32(3, RW(3) + 8744);
wr32(c, (RW(17) + 0), RW(2));
SET32(2, RW(17) + 112);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 64), RW(3)); if (t) goto L_002BB3E8; }
wr32(c, (RW(17) + 124), RW(0));
wr32(c, (RW(17) + 128), RW(0));
wr32(c, (RW(17) + 132), RW(0));
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2bb3d4); SET64(4, (s32)rd32(c, (RW(17) + 140))); JP_F_001004B0(c);
wr32(c, (RW(17) + 140), RW(0));
wr16(c, (RW(17) + 116), (u16)RW(0));
wr16(c, (RW(17) + 118), (u16)RW(0));
wr16(c, (RW(17) + 120), (u16)RW(0));
wr16(c, (RW(17) + 122), (u16)RW(0));
L_002BB3E8:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2bb3f4); SET64(5, RD(0) + RD(0)); JP_F_002B4DB0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BB410; }
SET64(31, 0x2bb40c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BB40C:;
SET64(2, RD(17) + RD(0));
L_002BB410:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BB430(Ctx *c) { /* func_002BB430 */
ENTER(0x2bb430);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2bb450); SET64(5, RD(0) + RD(0)); JP_F_002B4E20(c);
SET64(5, RD(17) + RD(0));
SET32(4, RW(16) + 112);
SET64(31, 0x2bb460); SET32(6, RW(0) + 2); JP_F_002BBCC0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + 8704);
SET32(2, RW(2) + 8744);
wr32(c, (RW(16) + 0), RW(3));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(16) + 64), RW(2));
SET32(7, RW(0) + 2);
SET64(5, rd16(c, (RW(16) + 122)));
SET64(8, RD(0) + RD(0));
SET64(6, rd16(c, (RW(16) + 116)));
SET64(3, rd16(c, (RW(16) + 118)));
SET64(5, RD(5) & 0x1);
SET64(2, (s32)rd32(c, (RW(16) + 124)));
mul_s(c, 0, 5, RSW(5), RSW(6));
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(3, RW(3) << 4);
SET64(31, 0x2bb4ac); SET32(5, RW(2) + RW(3)); JP_F_002A5E50(c);
SET64(3, rd16(c, (RW(16) + 122)));
SET64(4, RD(16) + RD(0));
SET64(6, rd16(c, (RW(16) + 116)));
SET32(7, RW(0) + 2);
SET64(2, (s32)rd32(c, (RW(16) + 128)));
SET64(8, RD(0) + RD(0));
SET32(3, RSW(3) >> 1);
SET64(3, RD(3) & 0x1);
mul_s(c, 0, 3, RSW(3), RSW(6));
SET32(3, RW(3) << 4);
SET64(31, 0x2bb4dc); SET32(5, RW(2) + RW(3)); JP_F_002A5CD0(c);
SET64(5, rd16(c, (RW(16) + 122)));
SET64(4, RD(16) + RD(0));
SET64(3, rd16(c, (RW(16) + 112)));
SET32(7, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(16) + 132)));
SET64(8, RD(0) + RD(0));
SET32(5, RSW(5) >> 2);
SET64(6, rd16(c, (RW(16) + 116)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET32(3, RW(3) << 2);
SET64(31, 0x2bb510); SET32(5, RW(2) + RW(3)); JP_F_002A5C10(c);
SET64(5, rd16(c, (RW(16) + 122)));
SET64(4, RD(16) + RD(0));
SET64(3, rd16(c, (RW(16) + 114)));
SET32(7, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(16) + 136)));
SET64(8, RD(0) + RD(0));
SET32(5, RSW(5) >> 3);
SET64(6, rd16(c, (RW(16) + 116)));
SET64(5, RD(5) & 0x1);
mul_s(c, 0, 3, RSW(5), RSW(3));
SET32(3, RW(3) << 3);
SET64(31, 0x2bb544); SET32(5, RW(2) + RW(3)); JP_F_002A5B30(c);
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(5, rd16(c, (RW(16) + 116)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2bb558); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BB570(Ctx *c) { /* func_002BB570 */
ENTER(0x2bb570);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(3, rd16(c, (RW(4) + 8)));
SET64(2, rd16(c, (RW(4) + 10)));
SET64(3, RD(3) & 0x1);
SET64(2, RD(2) & 0x1);
{ int t = RD(3) != RD(2); SET64(16, RD(6) + RD(0)); if (t) goto L_002BB5FC; }
SET64(2, rd16(c, (RW(18) + 10)));
SET64(2, RD(2) ^ 0x1);
wr16(c, (RW(18) + 10), (u16)RW(2));
SET64(4, rd16(c, (RW(18) + 10)));
SET64(6, rd16(c, (RW(18) + 4)));
SET64(3, rd16(c, (RW(18) + 8)));
SET64(4, RD(4) & 0x1);
SET64(7, rd16(c, (RW(18) + 6)));
mul_s(c, 0, 4, RSW(4), RSW(6));
SET32(2, RW(6) << 4);
SET64(3, RD(3) & 0x1);
SET64(5, (s32)rd32(c, (RW(18) + 12)));
mul_s(c, 1, 3, RSW(3), RSW(6));
mul_s(c, 0, 4, RSW(7), RSW(4));
mul_s(c, 1, 6, RSW(7), RSW(2));
mul_s(c, 0, 2, RSW(7), RSW(3));
SET32(3, RW(4) << 4);
SET32(2, RW(2) << 4);
SET32(4, RW(5) + RW(3));
SET64(31, 0x2bb5fc); SET32(5, RW(5) + RW(2)); JP_F_00127218(c);
L_002BB5FC:;
SET64(31, 0x2bb604); c->f[12].u = rd32(c, (RW(16) + 0)); JP_F_0011F450(c);
c->f[12].u = rd32(c, (RW(16) + 0));
SET64(31, 0x2bb610); c->f[20].u = c->f[0].u; JP_F_0011F6F0(c);
SET64(6, rd16(c, (RW(18) + 10)));
c->f[1].u = c->f[0].u ^ 0x80000000u;
SET64(5, rd16(c, (RW(18) + 4)));
SET64(7, rd16(c, (RW(18) + 6)));
SET64(6, RD(6) & 0x1);
SET64(4, (s32)rd32(c, (RW(18) + 12)));
mul_s(c, 0, 5, RSW(6), RSW(5));
mul_s(c, 1, 3, RSW(17), RSW(7));
SET32(3, RW(3) + 2);
SET32(3, RW(3) << 4);
mul_s(c, 0, 5, RSW(7), RSW(5));
SET32(5, RW(5) << 4);
SET32(4, RW(4) + RW(5));
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + 0), c->f[20].u);
wr32(c, (RW(3) + 4), c->f[0].u);
wr32(c, (RW(3) + 8), c->f[1].u);
wr32(c, (RW(3) + 12), c->f[20].u);
SET64(31, rd64(c, (RW(29) + 64)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 48) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002BB680(Ctx *c) { /* func_002BB680 */
ENTER(0x2bb680);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd16(c, (RW(4) + 10)));
SET64(5, rd16(c, (RW(4) + 8)));
SET32(3, RSW(3) >> 3);
SET32(4, RSW(5) >> 3);
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) & 0x1);
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002BB70C; }
SET64(2, rd16(c, (RW(18) + 10)));
SET64(2, RD(2) ^ 0x8);
wr16(c, (RW(18) + 10), (u16)RW(2));
SET64(4, rd16(c, (RW(18) + 10)));
SET64(3, rd16(c, (RW(18) + 8)));
SET64(5, rd16(c, (RW(18) + 2)));
SET32(4, RSW(4) >> 3);
SET64(2, rd16(c, (RW(18) + 4)));
SET64(4, RD(4) & 0x1);
SET32(3, RSW(3) >> 3);
mul_s(c, 0, 4, RSW(4), RSW(5));
SET64(3, RD(3) & 0x1);
SET64(7, (s32)rd32(c, (RW(18) + 24)));
mul_s(c, 1, 3, RSW(3), RSW(5));
SET32(6, RW(2) << 3);
SET32(2, RW(3) << 3);
SET32(5, RW(7) + RW(2));
SET32(2, RW(4) << 3);
SET64(31, 0x2bb70c); SET32(4, RW(7) + RW(2)); JP_F_00127218(c);
L_002BB70C:;
SET64(3, rd8(c, (RW(16) + 0)));
if (RD(3) == RD(0)) { SET64(3, RD(0) | 0x8000); goto L_002BB71C; }
SET64(3, RD(0) + RD(0));
L_002BB71C:;
SET64(7, rd16(c, (RW(18) + 10)));
SET32(4, RW(17) << 3);
SET64(6, rd16(c, (RW(18) + 2)));
SET64(3, RD(3) & 0x8000);
SET64(5, (s32)rd32(c, (RW(18) + 24)));
SET32(7, RSW(7) >> 3);
SET64(7, RD(7) & 0x1);
mul_s(c, 0, 6, RSW(7), RSW(6));
SET32(6, RW(6) << 3);
SET32(5, RW(5) + RW(6));
SET32(5, RW(5) + RW(4));
SET64(4, (s16)rd16(c, (RW(5) + 6)));
SET64(4, RD(4) & 0x7fff);
SET64(3, RD(3) | RD(4));
wr16(c, (RW(5) + 6), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BB770(Ctx *c) { /* func_002BB770 */
ENTER(0x2bb770);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd16(c, (RW(4) + 10)));
SET64(5, rd16(c, (RW(4) + 8)));
SET32(3, RSW(3) >> 1);
SET32(4, RSW(5) >> 1);
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) & 0x1);
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002BB7F8; }
SET64(2, rd16(c, (RW(18) + 10)));
SET64(2, RD(2) ^ 0x2);
wr16(c, (RW(18) + 10), (u16)RW(2));
SET64(3, rd16(c, (RW(18) + 10)));
SET64(5, rd16(c, (RW(18) + 4)));
SET64(2, rd16(c, (RW(18) + 8)));
SET32(3, RSW(3) >> 1);
SET64(4, (s32)rd32(c, (RW(18) + 16)));
SET64(3, RD(3) & 0x1);
SET32(6, RW(5) << 4);
SET32(2, RSW(2) >> 1);
SET64(2, RD(2) & 0x1);
mul_s(c, 1, 2, RSW(2), RSW(5));
mul_s(c, 0, 3, RSW(3), RSW(5));
SET32(2, RW(2) << 4);
SET32(5, RW(4) + RW(2));
SET32(2, RW(3) << 4);
SET64(31, 0x2bb7f8); SET32(4, RW(4) + RW(2)); JP_F_00127218(c);
L_002BB7F8:;
SET64(6, rd16(c, (RW(18) + 10)));
SET32(3, RW(17) << 4);
SET64(5, rd16(c, (RW(18) + 4)));
SET64(4, (s32)rd32(c, (RW(18) + 16)));
SET32(6, RSW(6) >> 1);
rd128(c, (RW(16) + 0) & ~15u, &c->r[7]);
SET64(6, RD(6) & 0x1);
mul_s(c, 0, 5, RSW(6), RSW(5));
SET32(5, RW(5) << 4);
SET32(4, RW(4) + RW(5));
SET32(3, RW(4) + RW(3));
wr128(c, (RW(3) + 0) & ~15u, &c->r[7]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BB840(Ctx *c) { /* func_002BB840 */
ENTER(0x2bb840);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd16(c, (RW(4) + 10)));
SET64(5, rd16(c, (RW(4) + 8)));
SET64(3, RD(3) & 0x1);
SET64(4, RD(5) & 0x1);
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002BB8C8; }
SET64(2, rd16(c, (RW(18) + 10)));
SET64(2, RD(2) ^ 0x1);
wr16(c, (RW(18) + 10), (u16)RW(2));
SET64(4, rd16(c, (RW(18) + 10)));
SET64(6, rd16(c, (RW(18) + 4)));
SET64(3, rd16(c, (RW(18) + 8)));
SET64(4, RD(4) & 0x1);
SET64(7, rd16(c, (RW(18) + 6)));
mul_s(c, 0, 4, RSW(4), RSW(6));
SET32(2, RW(6) << 4);
SET64(3, RD(3) & 0x1);
SET64(5, (s32)rd32(c, (RW(18) + 12)));
mul_s(c, 1, 3, RSW(3), RSW(6));
mul_s(c, 0, 4, RSW(7), RSW(4));
mul_s(c, 1, 6, RSW(7), RSW(2));
mul_s(c, 0, 2, RSW(7), RSW(3));
SET32(3, RW(4) << 4);
SET32(2, RW(2) << 4);
SET32(4, RW(5) + RW(3));
SET64(31, 0x2bb8c8); SET32(5, RW(5) + RW(2)); JP_F_00127218(c);
L_002BB8C8:;
c->f[0].u = rd32(c, (RW(16) + 0));
SET64(3, (s64)(s32)0x40000000);
SET64(6, rd16(c, (RW(18) + 10)));
c->f[1].u = RW(3);
SET64(7, rd16(c, (RW(18) + 6)));
c->f[0].u = c->f[0].u ^ 0x80000000u;
SET64(5, rd16(c, (RW(18) + 4)));
c->f[0].f = fpu_div(F(0), F(1));
SET64(6, RD(6) & 0x1);
mul_s(c, 1, 3, RSW(17), RSW(7));
SET64(4, (s32)rd32(c, (RW(18) + 12)));
mul_s(c, 0, 5, RSW(6), RSW(5));
SET32(3, RW(3) + 1);
SET32(3, RW(3) << 4);
mul_s(c, 0, 5, RSW(7), RSW(5));
SET32(5, RW(5) << 4);
SET32(4, RW(4) + RW(5));
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + 0), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 4));
c->f[0].u = c->f[0].u ^ 0x80000000u;
c->f[0].f = fpu_div(F(0), F(1));
wr32(c, (RW(3) + 4), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 0));
c->f[0].f = fpu_div(F(0), F(1));
wr32(c, (RW(3) + 8), c->f[0].u);
c->f[0].u = rd32(c, (RW(16) + 4));
c->f[0].f = fpu_div(F(0), F(1));
wr32(c, (RW(3) + 12), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BB960(Ctx *c) { /* func_002BB960 */
ENTER(0x2bb960);
SET32(29, RW(29) + -16);
SET64(9, rd16(c, (RW(5) + 6)));
SET64(3, (s64)(s32)0x40000000);
SET64(8, rd16(c, (RW(5) + 10)));
c->f[2].u = RW(3);
SET64(7, rd16(c, (RW(5) + 4)));
mul_s(c, 1, 3, RSW(6), RSW(9));
wr32(c, (RW(29) + 8), RW(0));
SET64(6, RD(8) & 0x1);
SET32(3, RW(3) + 1);
mul_s(c, 0, 6, RSW(6), RSW(7));
SET64(5, (s32)rd32(c, (RW(5) + 12)));
SET32(3, RW(3) << 4);
wr32(c, (RW(29) + 12), RW(0));
mul_s(c, 0, 6, RSW(9), RSW(6));
SET32(6, RW(6) << 4);
SET32(5, RW(5) + RW(6));
SET32(3, RW(5) + RW(3));
c->f[4].u = rd32(c, (RW(3) + 8));
c->f[3].u = rd32(c, (RW(3) + 0));
c->f[1].u = rd32(c, (RW(3) + 12));
c->f[0].u = rd32(c, (RW(3) + 4));
c->f[3].f = fpu(F(4) - F(3));
c->f[0].f = fpu(F(1) - F(0));
c->f[1].f = fpu_div(F(3), F(2));
c->f[0].f = fpu_div(F(0), F(2));
wr32(c, (RW(29) + 8), c->f[1].u);
wr32(c, (RW(29) + 12), c->f[0].u);
SET64(3, rd64(c, (RW(29) + 8)));
wr64(c, (RW(4) + 0), RD(3));
SET32(29, RW(29) + 16); return;
}

void JP_F_002BB9E0(Ctx *c) { /* func_002BB9E0 */
ENTER(0x2bb9e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd16(c, (RW(4) + 10)));
SET64(5, rd16(c, (RW(4) + 8)));
SET32(3, RSW(3) >> 2);
SET32(4, RSW(5) >> 2);
SET64(3, RD(3) & 0x1);
SET64(4, RD(4) & 0x1);
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002BBA6C; }
SET64(2, rd16(c, (RW(18) + 10)));
SET64(2, RD(2) ^ 0x4);
wr16(c, (RW(18) + 10), (u16)RW(2));
SET64(4, rd16(c, (RW(18) + 10)));
SET64(3, rd16(c, (RW(18) + 8)));
SET64(5, rd16(c, (RW(18) + 0)));
SET32(4, RSW(4) >> 2);
SET64(2, rd16(c, (RW(18) + 4)));
SET64(4, RD(4) & 0x1);
SET32(3, RSW(3) >> 2);
mul_s(c, 0, 4, RSW(4), RSW(5));
SET64(3, RD(3) & 0x1);
SET64(7, (s32)rd32(c, (RW(18) + 20)));
mul_s(c, 1, 3, RSW(3), RSW(5));
SET32(6, RW(2) << 2);
SET32(2, RW(3) << 2);
SET32(5, RW(7) + RW(2));
SET32(2, RW(4) << 2);
SET64(31, 0x2bba6c); SET32(4, RW(7) + RW(2)); JP_F_00127218(c);
L_002BBA6C:;
SET64(6, rd16(c, (RW(18) + 10)));
SET32(3, RW(17) << 2);
SET64(5, rd16(c, (RW(18) + 0)));
SET64(4, (s32)rd32(c, (RW(18) + 20)));
SET32(6, RSW(6) >> 2);
SET64(7, (s32)rd32(c, (RW(16) + 0)));
SET64(6, RD(6) & 0x1);
mul_s(c, 0, 5, RSW(6), RSW(5));
SET32(5, RW(5) << 2);
SET32(4, RW(4) + RW(5));
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + 0), RW(7));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BBAC0(Ctx *c) { /* func_002BBAC0 */
ENTER(0x2bbac0);
SET64(7, rd16(c, (RW(5) + 10)));
SET32(3, RW(6) << 2);
SET64(6, rd16(c, (RW(5) + 0)));
SET32(7, RSW(7) >> 2);
SET64(7, RD(7) & 0x1);
SET64(5, (s32)rd32(c, (RW(5) + 20)));
mul_s(c, 0, 6, RSW(7), RSW(6));
SET32(6, RW(6) << 2);
SET32(5, RW(5) + RW(6));
SET32(3, RW(5) + RW(3));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr32(c, (RW(4) + 0), RW(3)); return;
}

void JP_F_002BBB00(Ctx *c) { /* func_002BBB00 */
ENTER(0x2bbb00);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd16(c, (RW(4) + 10)));
SET64(5, rd16(c, (RW(4) + 8)));
SET64(3, RD(3) & 0x1);
SET64(4, RD(5) & 0x1);
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002BBB88; }
SET64(2, rd16(c, (RW(18) + 10)));
SET64(2, RD(2) ^ 0x1);
wr16(c, (RW(18) + 10), (u16)RW(2));
SET64(4, rd16(c, (RW(18) + 10)));
SET64(6, rd16(c, (RW(18) + 4)));
SET64(3, rd16(c, (RW(18) + 8)));
SET64(4, RD(4) & 0x1);
SET64(7, rd16(c, (RW(18) + 6)));
mul_s(c, 0, 4, RSW(4), RSW(6));
SET32(2, RW(6) << 4);
SET64(3, RD(3) & 0x1);
SET64(5, (s32)rd32(c, (RW(18) + 12)));
mul_s(c, 1, 3, RSW(3), RSW(6));
mul_s(c, 0, 4, RSW(7), RSW(4));
mul_s(c, 1, 6, RSW(7), RSW(2));
mul_s(c, 0, 2, RSW(7), RSW(3));
SET32(3, RW(4) << 4);
SET32(2, RW(2) << 4);
SET32(4, RW(5) + RW(3));
SET64(31, 0x2bbb88); SET32(5, RW(5) + RW(2)); JP_F_00127218(c);
L_002BBB88:;
SET64(6, rd16(c, (RW(18) + 10)));
c->f[2].u = rd32(c, (RW(16) + 0));
SET64(5, rd16(c, (RW(18) + 4)));
c->f[1].u = rd32(c, (RW(16) + 4));
SET64(7, rd16(c, (RW(18) + 6)));
c->f[0].u = rd32(c, (RW(16) + 8));
SET64(6, RD(6) & 0x1);
SET64(4, (s32)rd32(c, (RW(18) + 12)));
mul_s(c, 0, 5, RSW(6), RSW(5));
mul_s(c, 1, 3, RSW(17), RSW(7));
SET32(3, RW(3) << 4);
mul_s(c, 0, 5, RSW(7), RSW(5));
SET32(5, RW(5) << 4);
SET32(4, RW(4) + RW(5));
SET32(3, RW(4) + RW(3));
wr32(c, (RW(3) + 0), c->f[2].u);
wr32(c, (RW(3) + 4), c->f[1].u);
wr32(c, (RW(3) + 8), c->f[0].u);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BBBF0(Ctx *c) { /* func_002BBBF0 */
ENTER(0x2bbbf0);
SET64(9, rd16(c, (RW(5) + 6)));
SET64(8, rd16(c, (RW(5) + 10)));
SET64(7, rd16(c, (RW(5) + 4)));
mul_s(c, 1, 3, RSW(6), RSW(9));
SET64(6, RD(8) & 0x1);
SET32(3, RW(3) << 4);
mul_s(c, 0, 6, RSW(6), RSW(7));
SET64(5, (s32)rd32(c, (RW(5) + 12)));
mul_s(c, 0, 6, RSW(9), RSW(6));
SET32(6, RW(6) << 4);
SET32(5, RW(5) + RW(6));
SET32(3, RW(5) + RW(3));
c->f[2].u = rd32(c, (RW(3) + 0));
c->f[1].u = rd32(c, (RW(3) + 4));
c->f[0].u = rd32(c, (RW(3) + 8));
wr32(c, (RW(4) + 0), c->f[2].u);
wr32(c, (RW(4) + 4), c->f[1].u);
wr32(c, (RW(4) + 8), c->f[0].u); return;
}

void JP_F_002BBC40(Ctx *c) { /* func_002BBC40 */
ENTER(0x2bbc40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BBC9C; }
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
SET64(31, 0x2bbc74); SET64(4, (s32)rd32(c, (RW(17) + 28))); JP_F_001004B0(c);
wr32(c, (RW(17) + 28), RW(0));
SET64(2, RD(16) << 48);
wr16(c, (RW(17) + 4), (u16)RW(0));
SET64(2, RSD(2) >> 48);
wr16(c, (RW(17) + 6), (u16)RW(0));
wr16(c, (RW(17) + 8), (u16)RW(0));
{ int t = RSD(2) <= 0; wr16(c, (RW(17) + 10), (u16)RW(0)); if (t) goto L_002BBC9C; }
SET64(31, 0x2bbc9c); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BBC9C:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BBCC0(Ctx *c) { /* func_002BBCC0 */
ENTER(0x2bbcc0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 28), RW(0));
wr16(c, (RW(4) + 4), (u16)RW(5));
wr16(c, (RW(4) + 6), (u16)RW(6));
wr16(c, (RW(4) + 8), (u16)RW(0));
wr16(c, (RW(4) + 10), (u16)RW(0));
SET64(2, rd16(c, (RW(4) + 4)));
SET32(3, RW(2) + 3);
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 2); if (t) goto L_002BBD08; }
SET32(2, RW(3) + 3);
SET32(2, RSW(2) >> 2);
L_002BBD08:;
SET32(2, RW(2) << 2);
wr16(c, (RW(19) + 0), (u16)RW(2));
SET64(2, rd16(c, (RW(19) + 4)));
SET32(3, RW(2) + 1);
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002BBD28; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002BBD28:;
SET32(2, RW(2) << 1);
wr16(c, (RW(19) + 2), (u16)RW(2));
SET64(4, rd16(c, (RW(19) + 4)));
SET64(2, rd16(c, (RW(19) + 6)));
SET32(3, RW(4) << 2);
mul_s(c, 0, 4, RSW(4), RSW(2));
SET32(2, RSW(3) >> 1);
{ int t = RSD(3) >= 0; SET32(18, RW(4) << 5); if (t) goto L_002BBD54; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002BBD54:;
SET32(2, RW(2) << 4);
SET64(3, rd16(c, (RW(19) + 0)));
SET32(17, RW(18) + RW(2));
SET64(2, rd16(c, (RW(19) + 2)));
SET32(3, RW(3) << 3);
SET32(16, RW(3) + RW(17));
SET32(2, RW(2) << 4);
SET64(31, 0x2bbd78); SET32(4, RW(2) + RW(16)); JP_F_00100530(c);
wr32(c, (RW(19) + 28), RW(2));
wr32(c, (RW(19) + 12), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET32(2, RW(2) + RW(18));
wr32(c, (RW(19) + 16), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET32(2, RW(2) + RW(17));
wr32(c, (RW(19) + 20), RW(2));
SET64(2, (s32)rd32(c, (RW(19) + 28)));
SET32(2, RW(2) + RW(16));
wr32(c, (RW(19) + 24), RW(2));
SET64(2, rd16(c, (RW(19) + 4)));
SET32(2, RW(2) << 1);
{ int t = RSD(2) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002BBDE8; }
SET64(4, RD(0) + RD(0));
L_002BBDB8:;
SET64(2, (s32)rd32(c, (RW(19) + 24)));
SET32(5, RW(5) + 1);
SET32(3, RW(2) + RW(4));
SET64(2, (s16)rd16(c, (RW(3) + 6)));
SET64(2, RD(2) & 0x7fff);
SET64(2, RD(2) | 0x8000);
wr16(c, (RW(3) + 6), (u16)RW(2));
SET64(2, rd16(c, (RW(19) + 4)));
SET32(2, RW(2) << 1);
SET64(2, RSD(5) < RSD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 8); if (t) { POLL(); goto L_002BBDB8; } }
L_002BBDE8:;
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002BBE10(Ctx *c) { /* func_002BBE10 */
ENTER(0x2bbe10);
SET32(4, RW(4) + -64); { JP_F_002BB380(c); return; }
}

void JP_F_002BBE20(Ctx *c) { /* func_002BBE20 */
ENTER(0x2bbe20);
SET32(4, RW(4) + -64); { JP_F_002BB000(c); return; }
}

void JP_F_002BBE30(Ctx *c) { /* func_002BBE30 */
ENTER(0x2bbe30);
SET32(4, RW(4) + -32); { JP_F_002BAB80(c); return; }
}

void JP_F_002BBE40(Ctx *c) { /* func_002BBE40 */
ENTER(0x2bbe40);
SET32(4, RW(4) + -32); { JP_F_0015AB80(c); return; }
}

void JP_F_002BBE50(Ctx *c) { /* func_002BBE50 */
ENTER(0x2bbe50);
SET32(4, RW(4) + -352); { JP_F_0015AB80(c); return; }
}

void JP_F_002BBE60(Ctx *c) { /* func_002BBE60 */
ENTER(0x2bbe60);
SET32(4, RW(4) + -448); { JP_F_0015AB80(c); return; }
}

void JP_F_002BBE70(Ctx *c) { /* func_002BBE70 */
ENTER(0x2bbe70);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
SET64(22, RD(7) + RD(0));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET32(21, RW(0) + 20);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(4, RW(0) + 32);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(31, 0x2bbeb0); SET64(16, RD(5) + RD(0)); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002BBEC0; }
SET64(31, 0x2bbec0); SET64(4, RD(18) + RD(0)); JP_F_001509B0(c);
L_002BBEC0:;
SET64(17, RD(17) & 0xffff);
SET64(16, RD(16) & 0xffff);
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(7, RW(0) + 20);
SET32(8, RW(0) + 1);
SET64(31, 0x2bbee4); wr32(c, (RW(20) + 0), RW(18)); JP_F_00150650(c);
SET64(31, 0x2bbeec); SET32(4, RW(0) + 64); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002BBEFC; }
SET64(31, 0x2bbefc); SET64(4, RD(18) + RD(0)); JP_F_00150480(c);
L_002BBEFC:;
wr32(c, (RW(20) + 4), RW(18));
SET64(4, RD(18) + RD(0));
SET64(6, (s32)rd32(c, (RW(20) + 0)));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x2bbf18); SET64(8, RD(0) + RD(0)); JP_F_0014FC00(c);
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(7, RD(21) + RD(0));
SET64(8, RD(21) + RD(0));
SET64(31, 0x2bbf34); SET64(9, RD(0) + RD(0)); JP_F_0014FCD0(c);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(5, RW(0) + 1);
SET64(6, RD(5) + RD(0));
SET64(18, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x2bbf4c); SET32(4, RW(18) + 32); JP_F_002B4600(c);
SET32(4, RW(18) + 32);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2bbf64); SET64(8, RD(0) + RD(0)); JP_F_002B45A0(c);
SET32(2, RW(0) + 19);
SET32(19, RW(0) + 1);
{ int t = RD(21) == RD(2); SET64(18, RD(0) + RD(0)); if (t) goto L_002BBF80; }
SET32(2, RW(0) + 27);
if (RD(21) != RD(2)) { SET32(2, RW(0) + 20); goto L_002BBF8C; }
L_002BBF80:;
SET32(18, RW(0) + 256);
SET32(19, RW(0) + 1);
SET32(2, RW(0) + 20);
L_002BBF8C:;
if (RD(21) == RD(2)) { SET32(18, RW(0) + 16); goto L_002BBFB0; }
SET32(2, RW(0) + 36);
{ int t = RD(21) == RD(2);  if (t) goto L_002BBFAC; }
SET32(2, RW(0) + 44);
{ int t = RD(21) != RD(2);  if (t) goto L_002BBFB4; }
L_002BBFAC:;
SET32(18, RW(0) + 16);
L_002BBFB0:;
SET64(19, RD(0) + RD(0));
L_002BBFB4:;
if (RD(18) == RD(0)) { SET32(4, RW(0) + 3136); goto L_002BC0A4; }
SET64(31, 0x2bbfc4); SET32(4, RW(18) << 2); JP_F_00100530(c);
wr32(c, (RW(20) + 16), RW(2));
{ int t = RSD(18) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002BC058; }
SET64(4, RD(0) + RD(0));
SET64(3, RD(0) + RD(0));
{ int t = RSD(18) >= 0; SET32(2, RSW(18) >> 1); if (t) goto L_002BBFE8; }
SET32(2, RW(18) + 1);
SET32(2, RSW(2) >> 1);
L_002BBFE8:;
SET64(7, (s64)(s32)0x80000000);
L_002BBFEC:;
SET64(6, (s32)rd32(c, (RW(20) + 16)));
SET64(1, RSD(2) < RSD(5));
SET32(6, RW(6) + RW(4));
{ int t = RD(1) != RD(0); wr32(c, (RW(6) + 0), RW(0)); if (t) goto L_002BC028; }
div_s(c, 0, RSW(3), RSW(2));
SET64(6, (s32)rd32(c, (RW(20) + 16)));
SET32(8, RW(6) + RW(4));
SET64(6, (s32)rd32(c, (RW(8) + 0)));
SET64(9, c->lo.d[0]);
SET32(9, RW(9) << 24);
SET64(6, RD(6) | RD(9));
wr32(c, (RW(8) + 0), RW(6)); goto L_002BC040;
L_002BC028:;
SET64(6, (s32)rd32(c, (RW(20) + 16)));
SET32(8, RW(6) + RW(4));
SET64(6, (s32)rd32(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(7));
wr32(c, (RW(8) + 0), RW(6));
L_002BC040:;
SET32(5, RW(5) + 1);
SET64(6, RSD(5) < RSD(18));
SET32(4, RW(4) + 4);
{ int t = RD(6) != RD(0); SET32(3, RW(3) + 128); if (t) { POLL(); goto L_002BBFEC; } }
L_002BC058:;
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(5, RD(19) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2bc06c); SET64(7, RD(0) + RD(0)); JP_F_0014FC20(c);
SET64(5, (s32)rd32(c, (RW(20) + 16)));
SET64(31, 0x2bc078); SET64(4, (s32)rd32(c, (RW(20) + 4))); JP_F_0014F8B0(c);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(3, RW(0) + 1);
SET64(31, 0x2bc088); wr8(c, (RW(2) + 56), (u8)RW(3)); JP_F_00139590(c);
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(2, (s32)rd32(c, (RW(2) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2bc0a0); SET64(5, (s32)rd32(c, (RW(2) + 236))); rt_call(c, t); }
SET32(4, RW(0) + 3136);
L_002BC0A4:;
SET64(31, 0x2bc0ac);  JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002BC0C4; }
SET64(5, (s32)rd32(c, (RW(28) + -29932)));
SET64(6, RD(22) + RD(0));
SET64(31, 0x2bc0c4); SET64(4, RD(18) + RD(0)); JP_F_0023CBE0(c);
L_002BC0C4:;
wr32(c, (RW(20) + 8), RW(18));
wr32(c, (RW(29) + 136), RW(16));
wr32(c, (RW(29) + 140), RW(17));
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
SET64(4, (s32)rd32(c, (RW(20) + 8)));
SET64(6, (s32)rd32(c, (RW(20) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2bc0f0); SET32(5, RW(29) + 128); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 8)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 236)));
wr8(c, (RW(2) + 324), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(20) + 8)));
SET64(31, 0x2bc10c); SET64(5, RD(0) + RD(0)); JP_F_001630B0(c);
SET64(31, 0x2bc114); SET32(4, RW(0) + 496); JP_F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002BC16C; }
SET32(5, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2bc130); SET64(7, RD(5) + RD(0)); JP_F_002A6630(c);
SET32(16, RW(17) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(16) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2bc148); wr32(c, (RW(17) + 240), RW(4)); JP_F_002AE1F0(c);
SET64(31, 0x2bc150); SET32(4, RW(16) + 32); JP_F_002A88F0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 240), RW(16));
SET32(2, RW(2) + -3920);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 144), RW(2));
SET64(31, 0x2bc16c); SET32(5, RW(17) + 272); JP_F_002A6520(c);
L_002BC16C:;
wr32(c, (RW(20) + 12), RW(17));
SET64(2, (s32)rd32(c, (RW(20) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2bc184); SET64(5, RD(17) + RD(0)); JP_F_002ADFE0(c);
SET64(31, rd64(c, (RW(29) + 112)));
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void JP_F_002BC1B0(Ctx *c) { /* func_002BC1B0 */
ENTER(0x2bc1b0);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(0) < RD(2)); return;
}

void JP_F_002BC1C0(Ctx *c) { /* func_002BC1C0 */
ENTER(0x2bc1c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002BC208; }
SET64(5, (s32)rd32(c, (RW(16) + 12)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_002BC1F0; }
SET64(31, 0x2bc1ec); SET64(4, (s32)rd32(c, (RW(2) + 560))); JP_F_002ADE40(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_002BC1F0:;
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2bc200);  rt_call(c, t); }
SET64(31, 0x2bc208); SET64(4, (s32)rd32(c, (RW(16) + 8))); JP_F_00163040(c);
L_002BC208:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002BC228; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bc224); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_002BC228:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_002BC248; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bc244); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_002BC248:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_002BC268; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bc264); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_002BC268:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 12), RW(0)); goto L_002BC288; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2bc284); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 12), RW(0));
L_002BC288:;
SET64(31, 0x2bc290); SET64(4, (s32)rd32(c, (RW(16) + 16))); JP_F_001004B0(c);
wr32(c, (RW(16) + 16), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void JP_F_002BC2B0(Ctx *c) { /* func_002BC2B0 */
ENTER(0x2bc2b0);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8760);
wr32(c, (RW(4) + 20), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0)); return;
}

void JP_F_002BC2E0(Ctx *c) { /* func_002BC2E0 */
ENTER(0x2bc2e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BC324; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + 8760);
SET64(31, 0x2bc30c); wr32(c, (RW(17) + 20), RW(2)); JP_F_002BC1C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002BC328; }
SET64(31, 0x2bc324); SET64(4, RD(17) + RD(0)); JP_F_001004B0(c);
L_002BC324:;
SET64(2, RD(17) + RD(0));
L_002BC328:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BC340(Ctx *c) { /* func_002BC340 */
ENTER(0x2bc340);
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3)); return;
}

void JP_F_002BC360(Ctx *c) { /* func_002BC360 */
ENTER(0x2bc360);
SET64(2, RD(0) + RD(0)); return;
}

void JP_F_002BC370(Ctx *c) { /* func_002BC370 */
ENTER(0x2bc370);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(31, 0x2bc390); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_001649C0(c);
SET64(3, rd16(c, (RW(18) + 418)));
{ int t = RD(3) == RD(0);  if (t) goto L_002BC5B8; }
SET64(31, 0x2bc3a4); SET64(4, RD(18) + RD(0)); JP_F_002BC900(c);
SET64(2, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 160), RW(0));
wr32(c, (RW(29) + 172), RW(2));
SET32(4, RW(29) + 160);
SET64(2, (s64)(s32)0xbf800000);
wr32(c, (RW(29) + 164), RW(0));
c->f[3].u = RW(2);
wr32(c, (RW(29) + 168), RW(0));
rd128(c, (RW(18) + 448) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[2]);
c->f[2].u = rd32(c, (RW(29) + 160));
c->f[1].u = rd32(c, (RW(29) + 164));
c->f[0].u = rd32(c, (RW(29) + 168));
c->f[2].f = fpu(F(2) * F(3));
c->f[1].f = fpu(F(1) * F(3));
c->f[0].f = fpu(F(0) * F(3));
wr32(c, (RW(29) + 160), c->f[2].u);
wr32(c, (RW(29) + 164), c->f[1].u);
SET64(31, 0x2bc3f4); wr32(c, (RW(29) + 168), c->f[0].u); JP_F_002B0360(c);
SET64(3, rd16(c, (RW(18) + 418)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002BC5B8; }
SET64(3, RD(17) & 0xffff);
L_002BC404:;
SET32(3, RW(3) << 2);
SET32(16, RW(18) + RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 428)));
{ int t = RD(3) == RD(0);  if (t) goto L_002BC5A0; }
SET64(19, (s32)rd32(c, (RW(3) + 912)));
{ int t = RD(19) == RD(0);  if (t) goto L_002BC5A0; }
SET64(31, 0x2bc42c); SET64(4, (s32)rd32(c, (RW(19) + 256))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002BC5A0; }
SET64(4, (s32)rd32(c, (RW(19) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2bc44c);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002BC5A0; }
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -4252)));
SET64(31, 0x2bc464); SET64(4, RD(19) + RD(0)); JP_F_001520D0(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2bc470); SET64(5, RD(2) & 0xffff); JP_F_001520B0(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(3));
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
rd128(c, (RW(2) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x2bc49c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002BC4F8; }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET32(4, RW(29) + 128);
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 212)));
{ u32 t = RW(25); SET64(31, 0x2bc4bc); SET32(6, RW(29) + 144); rt_call(c, t); }
rd128(c, (RW(29) + 128) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0xbf800000);
c->f[3].u = RW(2);
SET32(4, RW(29) + 160);
wr128(c, (RW(29) + 160) & ~15u, &c->r[3]);
c->f[2].u = rd32(c, (RW(29) + 160));
c->f[1].u = rd32(c, (RW(29) + 164));
c->f[0].u = rd32(c, (RW(29) + 168));
c->f[2].f = fpu(F(2) * F(3));
c->f[1].f = fpu(F(1) * F(3));
c->f[0].f = fpu(F(0) * F(3));
wr32(c, (RW(29) + 160), c->f[2].u);
wr32(c, (RW(29) + 164), c->f[1].u);
SET64(31, 0x2bc4f8); wr32(c, (RW(29) + 168), c->f[0].u); JP_F_002B0360(c);
L_002BC4F8:;
SET64(4, RD(18) + RD(0));
SET32(5, RW(29) + 144);
SET64(31, 0x2bc508); SET64(6, RD(17) + RD(0)); JP_F_002BC5E0(c);
SET64(2, (s64)(s32)0x461c0000);
SET32(4, RW(29) + 80);
SET64(2, RD(2) | 0x4000);
c->f[12].u = RW(2);
SET64(31, 0x2bc520); SET32(5, RW(29) + 160); JP_F_002AFF20(c);
SET64(2, (s64)(s32)0x3f800000);
SET64(16, (s32)rd32(c, (RW(16) + 420)));
wr32(c, (RW(29) + 108), RW(2));
c->f[4].u = rd32(c, (RW(29) + 144));
wr32(c, (RW(29) + 124), RW(2));
c->f[3].u = rd32(c, (RW(29) + 148));
rd128(c, (RW(29) + 80) & ~15u, &c->r[2]);
c->f[1].u = rd32(c, (RW(29) + 152));
wr32(c, (RW(29) + 96), RW(0));
SET64(4, RD(16) + RD(0));
wr32(c, (RW(29) + 100), RW(0));
wr32(c, (RW(29) + 104), RW(0));
wr128(c, (RW(29) + 96) & ~15u, &c->r[2]);
c->f[0].u = rd32(c, (RW(29) + 96));
c->f[2].u = rd32(c, (RW(29) + 100));
c->f[4].f = fpu(F(4) - F(0));
c->f[0].u = rd32(c, (RW(29) + 104));
c->f[2].f = fpu(F(3) - F(2));
c->f[0].f = fpu(F(1) - F(0));
wr32(c, (RW(29) + 112), c->f[4].u);
wr32(c, (RW(29) + 116), c->f[2].u);
SET64(31, 0x2bc57c); wr32(c, (RW(29) + 120), c->f[0].u); JP_F_002BC1B0(c);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET32(4, RW(3) + 784);
wr128(c, (RW(3) + 800) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 816) & ~15u, &c->r[2]);
SET64(31, 0x2bc59c); wr32(c, (RW(3) + 832), RW(0)); JP_F_0015DAB0(c);
L_002BC5A0:;
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(18) + 418)));
SET64(3, RSD(17) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, RD(17) & 0xffff); { POLL(); goto L_002BC404; } }
L_002BC5B8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void JP_F_002BC5E0(Ctx *c) { /* func_002BC5E0 */
ENTER(0x2bc5e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
SET32(7, RW(29) + 56);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x2bc604); SET32(6, RW(29) + 60); JP_F_001695D0(c);
SET64(5, rd16(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(6, rd16(c, (RW(29) + 56)));
SET64(31, 0x2bc618); SET64(7, RD(16) + RD(0)); JP_F_002BC750(c);
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(4, RD(17) + RD(0));
SET64(5, rd16(c, (RW(29) + 60)));
SET64(7, RD(16) + RD(0));
SET32(2, RW(2) + 1);
SET64(31, 0x2bc634); SET64(6, RD(2) & 0xffff); JP_F_002BC750(c);
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(4, RD(17) + RD(0));
SET64(5, rd16(c, (RW(29) + 60)));
SET64(7, RD(16) + RD(0));
SET32(2, RW(2) + -1);
SET64(31, 0x2bc650); SET64(6, RD(2) & 0xffff); JP_F_002BC750(c);
SET64(2, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(6, rd16(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(2, RW(2) + 1);
SET64(31, 0x2bc66c); SET64(5, RD(2) & 0xffff); JP_F_002BC750(c);
SET64(2, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(6, rd16(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(2, RW(2) + -1);
SET64(31, 0x2bc688); SET64(5, RD(2) & 0xffff); JP_F_002BC750(c);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(3, RW(3) + 1);
SET32(2, RW(2) + 1);
SET64(5, RD(3) & 0xffff);
SET64(31, 0x2bc6ac); SET64(6, RD(2) & 0xffff); JP_F_002BC750(c);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(3, RW(3) + -1);
SET32(2, RW(2) + -1);
SET64(5, RD(3) & 0xffff);
SET64(31, 0x2bc6d0); SET64(6, RD(2) & 0xffff); JP_F_002BC750(c);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(3, RW(3) + 1);
SET32(2, RW(2) + -1);
SET64(5, RD(3) & 0xffff);
SET64(31, 0x2bc6f4); SET64(6, RD(2) & 0xffff); JP_F_002BC750(c);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(3, RW(3) + -1);
SET32(2, RW(2) + 1);
SET64(5, RD(3) & 0xffff);
SET64(31, 0x2bc718); SET64(6, RD(2) & 0xffff); JP_F_002BC750(c);
SET64(3, (s32)rd32(c, (RW(17) + 388)));
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002BC73C; }
SET64(4, (s32)rd32(c, (RW(17) + 388)));
SET64(6, RD(16) & 0xffff);
SET64(31, 0x2bc738); SET64(5, RD(0) + RD(0)); JP_F_0016C200(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_002BC73C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void JP_F_002BC750(Ctx *c) { /* func_002BC750 */
ENTER(0x2bc750);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 112), RD(31));
wr128(c, (RW(29) + 96) & ~15u, &c->r[22]);
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(6) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(7) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) & 0xffff);
SET64(3, rd16(c, (RW(4) + 288)));
SET64(1, RSD(17) < RSD(3));
{ int t = RD(1) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002BC7AC; }
SET64(3, rd16(c, (RW(21) + 290)));
SET64(4, RD(20) & 0xffff);
SET64(1, RSD(4) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002BC7AC; }
SET64(5, RD(0) + (s64)1);
L_002BC7AC:;
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 112))); goto L_002BC8DC; }
SET64(2, RD(19) & 0xffff);
SET32(22, RW(2) << 2);
SET32(2, RW(22) + RW(21));
SET64(18, (s32)rd32(c, (RW(2) + 420)));
if (RD(18) == RD(0)) { SET64(4, rd16(c, (RW(21) + 288))); goto L_002BC8A4; }
SET64(31, 0x2bc7d4); SET64(4, RD(18) + RD(0)); JP_F_002BC1B0(c);
SET64(3, rd16(c, (RW(21) + 288)));
SET64(16, RD(20) & 0xffff);
SET64(2, (s32)rd32(c, (RW(21) + 300)));
mul_s(c, 0, 3, RSW(16), RSW(3));
SET32(4, RW(17) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 320)));
{ int t = RD(4) == RD(0); SET64(5, (s32)rd32(c, (RW(18) + 4))); if (t) goto L_002BC81C; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2bc81c); SET64(6, RD(19) & 0xffff); rt_call(c, t); }
L_002BC81C:;
SET64(31, 0x2bc824); SET64(4, RD(18) + RD(0)); JP_F_002BC1B0(c);
SET64(3, rd16(c, (RW(21) + 288)));
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(2, (s32)rd32(c, (RW(21) + 300)));
mul_s(c, 0, 3, RSW(16), RSW(3));
SET32(5, RW(4) + 1280);
SET32(4, RW(17) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET32(2, RW(2) + RW(3));
SET64(4, (s32)rd32(c, (RW(2) + 320)));
if (RD(4) == RD(0)) { SET64(3, rd16(c, (RW(21) + 288))); goto L_002BC86C; }
SET64(31, 0x2bc868); SET64(6, RD(19) & 0xffff); JP_F_001F0F20(c);
SET64(3, rd16(c, (RW(21) + 288)));
L_002BC86C:;
SET32(2, RW(22) + RW(21));
c->f[12].u = rd32(c, (RW(2) + 436));
SET64(5, RD(19) & 0xffff);
mul_s(c, 0, 3, RSW(16), RSW(3));
SET64(2, (s32)rd32(c, (RW(21) + 300)));
SET32(4, RW(17) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x2bc8a0); SET32(4, RW(2) + RW(3)); JP_F_0016CA00(c);
SET64(4, rd16(c, (RW(21) + 288)));
L_002BC8A4:;
SET64(3, RD(20) & 0xffff);
SET64(2, (s32)rd32(c, (RW(21) + 300)));
SET64(6, RD(19) & 0xffff);
SET64(5, RD(0) + RD(0));
mul_s(c, 0, 3, RSW(3), RSW(4));
SET32(4, RW(17) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x2bc8d8); SET32(4, RW(2) + RW(3)); JP_F_0016CA30(c);
SET64(31, rd64(c, (RW(29) + 112)));
L_002BC8DC:;
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void JP_F_002BC900(Ctx *c) { /* func_002BC900 */
ENTER(0x2bc900);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
SET64(21, RD(4) + RD(0));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd16(c, (RW(4) + 290)));
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_002BC9F0; }
SET64(4, rd16(c, (RW(21) + 288)));
L_002BC934:;
{ int t = RSD(4) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002BC9D8; }
SET64(16, RD(20) & 0xffff);
L_002BC940:;
SET64(17, RD(19) & 0xffff);
SET64(1, RSD(17) < RSD(4));
{ int t = RD(1) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002BC968; }
SET64(3, rd16(c, (RW(21) + 290)));
SET64(1, RSD(16) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002BC968; }
SET64(5, RD(0) + (s64)1);
L_002BC968:;
{ int t = RD(5) == RD(0);  if (t) goto L_002BC9C0; }
SET64(18, RD(0) + RD(0));
L_002BC978:;
SET64(3, rd16(c, (RW(21) + 288)));
SET64(2, (s32)rd32(c, (RW(21) + 300)));
SET64(6, RD(18) & 0xffff);
SET32(5, RW(0) + 1);
mul_s(c, 0, 3, RSW(16), RSW(3));
SET32(4, RW(17) + RW(3));
SET32(3, RW(4) << 3);
SET32(4, RW(3) - RW(4));
SET32(3, RW(4) << 2);
SET32(3, RW(3) - RW(4));
SET32(3, RW(3) << 4);
SET64(31, 0x2bc9ac); SET32(4, RW(2) + RW(3)); JP_F_0016CA30(c);
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002BC978; } }
L_002BC9C0:;
SET64(4, rd16(c, (RW(21) + 288)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(4));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002BC940; } }
L_002BC9D8:;
SET64(3, rd16(c, (RW(21) + 290)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(21) + 288))); { POLL(); goto L_002BC934; } }
L_002BC9F0:;
SET64(3, (s32)rd32(c, (RW(21) + 388)));
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_002BCA28; }
SET64(16, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(21) + 388)));
L_002BCA08:;
SET64(6, RD(16) & 0xffff);
SET64(31, 0x2bca14); SET32(5, RW(0) + 1); JP_F_0016C200(c);
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, RSD(16) < (s64)2);
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 388))); { POLL(); goto L_002BCA08; } }
L_002BCA28:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void JP_F_002BCA50(Ctx *c) { /* func_002BCA50 */
ENTER(0x2bca50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2bca68); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_001691F0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(17) + 418))); goto L_002BCA7C; }
SET64(2, RD(0) + RD(0)); goto L_002BCAEC;
L_002BCA7C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002BCAE8; }
SET64(2, rd16(c, (RW(17) + 418)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002BCAE8; }
SET64(2, RD(16) & 0xffff);
L_002BCA94:;
SET32(2, RW(2) << 2);
SET32(2, RW(17) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + 428)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(17) + 418))); goto L_002BCAD0; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2bcab8);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002BCACC; }
SET64(2, RD(0) + RD(0)); goto L_002BCAEC;
L_002BCACC:;
SET64(2, rd16(c, (RW(17) + 418)));
L_002BCAD0:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(16) & 0xffff); { POLL(); goto L_002BCA94; } }
L_002BCAE8:;
SET32(2, RW(0) + 1);
L_002BCAEC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void JP_F_002BCB00(Ctx *c) { /* func_002BCB00 */
ENTER(0x2bcb00);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2bcb20); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00168B00(c);
SET64(3, rd16(c, (RW(17) + 418)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002BCBB8; }
SET64(3, rd16(c, (RW(17) + 418)));
L_002BCB30:;
{ int t = RD(3) == RD(0);  if (t) goto L_002BCBA0; }
SET64(2, RD(16) & 0xffff);
SET32(2, RW(2) << 2);
SET32(18, RW(17) + RW(2));
SET64(19, (s32)rd32(c, (RW(18) + 420)));
SET64(31, 0x2bcb50); SET64(4, RD(19) + RD(0)); JP_F_002BC1B0(c);
SET64(4, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2bcb64);  rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 428)));
{ int t = RD(18) == RD(0);  if (t) goto L_002BCBA0; }
SET64(31, 0x2bcb78); SET64(4, (s32)rd32(c, (RW(18) + 256))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002BCBA0; }
SET64(31, 0x2bcb8c); SET64(4, RD(19) + RD(0)); JP_F_002BC1B0(c);
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(5, (s32)rd32(c, (RW(19) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2bcba0); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
L_002BCBA0:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(17) + 418)));
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, rd16(c, (RW(17) + 418))); { POLL(); goto L_002BCB30; } }
L_002BCBB8:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void JP_F_002BCBE0(Ctx *c) { /* func_002BCBE0 */
ENTER(0x2bcbe0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2bcc04); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); JP_F_00168E80(c);
SET64(3, rd16(c, (RW(19) + 418)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002BCCE0; }
SET64(2, (s64)(s32)0x4c0000);
c->f[0].u = rd32(c, (RW(2) + -7560));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
SET64(2, rd16(c, (RW(19) + 418)));
L_002BCC24:;
{ int t = RD(2) == RD(0);  if (t) goto L_002BCC98; }
SET64(2, RD(18) & 0xffff);
SET32(2, RW(2) << 2);
SET32(20, RW(19) + RW(2));
SET64(17, (s32)rd32(c, (RW(20) + 420)));
SET64(31, 0x2bcc44); SET64(4, RD(17) + RD(0)); JP_F_002BC1B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2bcc58);  rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 428)));
{ int t = RD(20) == RD(0);  if (t) goto L_002BCC98; }
SET64(31, 0x2bcc6c); SET64(4, (s32)rd32(c, (RW(20) + 256))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_002BCC98; }
SET64(31, 0x2bcc80); SET64(4, RD(17) + RD(0)); JP_F_002BC1B0(c);
SET64(25, (s32)rd32(c, (RW(20) + 276)));
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2bcc98); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
L_002BCC98:;
SET64(2, RD(18) & 0xffff);
SET32(2, RW(2) << 2);
SET32(2, RW(19) + RW(2));
SET64(17, (s32)rd32(c, (RW(2) + 420)));
SET64(31, 0x2bccb0); SET64(4, RD(17) + RD(0)); JP_F_002BC1B0(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2bccc4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 418)));
SET32(4, RW(18) + 1);
SET64(18, RD(4) & 0xffff);
SET64(3, RSD(18) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, rd16(c, (RW(19) + 418))); { POLL(); goto L_002BCC24; } }
L_002BCCE0:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void JP_F_002BCD00(Ctx *c) { /* func_002BCD00 */
ENTER(0x2bcd00);
SET32(29, RW(29) + -64);
SET64(3, RD(5) & 0xffff);
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(3) << 2);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(5, RW(3) + RW(4));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(5) + 428)));
{ int t = RD(3) == RD(0); SET32(16, RW(5) + 428); if (t) goto L_002BCD94; }
SET64(3, rd16(c, (RW(4) + 418)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002BCD98; }
SET64(18, (s32)rd32(c, (RW(5) + 420)));
SET64(31, 0x2bcd44); SET64(4, RD(18) + RD(0)); JP_F_002BC1B0(c);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2bcd58);  rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(17) == RD(0);  if (t) goto L_002BCD94; }
SET64(31, 0x2bcd6c); SET64(4, (s32)rd32(c, (RW(17) + 256))); JP_F_00141B90(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002BCD94; }
SET64(31, 0x2bcd80); SET64(4, RD(18) + RD(0)); JP_F_002BC1B0(c);
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(5, (s32)rd32(c, (RW(18) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2bcd94); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_002BCD94:;
wr32(c, (RW(16) + 0), RW(0));
L_002BCD98:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

