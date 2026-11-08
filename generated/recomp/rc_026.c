#include "r5900.h"
#include "functab.h"

void F_002ABFE0(Ctx *c) { /* func_002ABFE0 */
ENTER(0x2abfe0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2abffc); c->f[20].u = c->f[12].u; F_0011F6F0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x2ac008); c->f[20].u = c->f[0].u; F_0011F450(c);
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

void F_002AC040(Ctx *c) { /* func_002AC040 */
ENTER(0x2ac040);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ac05c); c->f[20].u = c->f[12].u; F_0011F6F0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x2ac068); c->f[20].u = c->f[0].u; F_0011F450(c);
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

void F_002AC0A0(Ctx *c) { /* func_002AC0A0 */
ENTER(0x2ac0a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ac0bc); c->f[20].u = c->f[12].u; F_0011F6F0(c);
c->f[12].u = c->f[20].u;
SET64(31, 0x2ac0c8); c->f[20].u = c->f[0].u; F_0011F450(c);
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

void F_002AC100(Ctx *c) { /* func_002AC100 */
ENTER(0x2ac100);
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

void F_002AC130(Ctx *c) { /* func_002AC130 */
ENTER(0x2ac130);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ac144); SET64(16, RD(4) + RD(0)); F_001186A0(c);
vu0_exec(c, 0x4be4033d);
vu0_exec(c, 0x4be5233d);
vu0_exec(c, 0x4be62b3d);
wr128(c, (RW(16) + 48) & ~15u, (GPR *)&c->vf[0]);
wr128(c, (RW(16) + 32) & ~15u, (GPR *)&c->vf[4]);
wr128(c, (RW(16) + 16) & ~15u, (GPR *)&c->vf[5]);
SET64(31, 0x2ac164); wr128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AC180(Ctx *c) { /* func_002AC180 */
ENTER(0x2ac180);
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

void F_002AC1F0(Ctx *c) { /* func_002AC1F0 */
ENTER(0x2ac1f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002AC22C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -21088);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002AC228; }
SET64(31, 0x2ac228);  F_001004B0(c);
L_002AC228:;
SET64(2, RD(16) + RD(0));
L_002AC22C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AC240(Ctx *c) { /* func_002AC240 */
ENTER(0x2ac240);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -21088);
wr32(c, (RW(4) + 0), RW(2));
SET64(2, RD(4) + RD(0)); return;
}

void F_002AC260(Ctx *c) { /* func_002AC260 */
ENTER(0x2ac260);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RSD(6) <= 0; wr32(c, (RW(4) + 0), RW(7)); if (t) goto L_002AC2DC; }
SET64(1, RSD(6) < (s64)7);
{ int t = RD(1) == RD(0); SET32(2, RW(6) << 2); if (t) goto L_002AC2D0; }
SET32(2, RW(6) << 2);
SET32(2, RW(18) + RW(2));
SET32(17, RW(2) + -4);
SET64(1, RD(18) < RD(17));
{ int t = RD(1) == RD(0); SET64(2, RD(19) + RD(0)); if (t) goto L_002AC2E0; }
L_002AC2AC:;
SET64(2, RD(18) < RD(17));
{ int t = RD(2) != RD(0); SET64(16, RD(18) + RD(0)); if (t) goto L_002AC2E8; }
L_002AC2B8:;
SET32(17, RW(17) + -4);
SET64(1, RD(18) < RD(17));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_002AC2AC; } }
 goto L_002AC2DC;
L_002AC2D0:;
SET32(2, RW(18) + RW(2));
SET64(31, 0x2ac2dc); SET32(6, RW(2) + -4); F_002AC350(c);
L_002AC2DC:;
SET64(2, RD(19) + RD(0));
L_002AC2E0:;
 goto L_002AC328;
L_002AC2E8:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s32)rd32(c, (RW(19) + 0)));
{ u32 t = RW(2); SET64(31, 0x2ac2f8); SET64(4, (s32)rd32(c, (RW(16) + 0))); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AC310; }
SET64(3, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(16) + 4), RW(2));
wr32(c, (RW(16) + 0), RW(3));
L_002AC310:;
SET32(16, RW(16) + 4);
SET64(2, RD(16) < RD(17));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002AC2E8; } }
 { POLL(); goto L_002AC2B8; }
L_002AC328:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002AC350(Ctx *c) { /* func_002AC350 */
ENTER(0x2ac350);
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
{ int t = RSD(2) >= 0; SET32(3, RSW(2) >> 2); if (t) goto L_002AC39C; }
SET32(2, RW(2) + 3);
SET32(3, RSW(2) >> 2);
L_002AC39C:;
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002AC3AC; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002AC3AC:;
SET32(2, RW(2) << 2);
SET64(23, (s32)rd32(c, (RW(20) + 0)));
SET32(30, RW(20) + RW(2));
SET64(22, (s32)rd32(c, (RW(19) + 0)));
SET64(18, (s32)rd32(c, (RW(30) + 0)));
SET32(17, RW(20) + 4);
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET32(16, RW(19) + -4);
SET64(4, RD(23) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2ac3d8); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AC430; }
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(4, RD(18) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2ac3f0); SET64(5, RD(22) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AC480; }
wr32(c, (RW(20) + 0), RW(22));
wr32(c, (RW(19) + 0), RW(23));
L_002AC400:;
SET64(3, RD(17) < RD(19));
L_002AC404:;
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) != RD(0); SET64(3, RD(20) < RD(16)); if (t) goto L_002AC4BC; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2ac420); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) > 0;  if (t) goto L_002AC4B8; }
SET32(17, RW(17) + 4); { POLL(); goto L_002AC400; }
L_002AC430:;
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(4, RD(18) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2ac440); SET64(5, RD(22) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0; SET64(3, RD(17) < RD(19)); if (t) { POLL(); goto L_002AC404; } }
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(4, RD(23) + RD(0));
SET64(5, RD(22) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2ac45c); wr32(c, (RW(19) + 0), RW(18)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AC474; }
wr32(c, (RW(30) + 0), RW(23));
SET64(18, RD(23) + RD(0));
wr32(c, (RW(20) + 0), RW(22)); { POLL(); goto L_002AC400; }
L_002AC474:;
wr32(c, (RW(30) + 0), RW(22));
SET64(18, RD(22) + RD(0)); { POLL(); goto L_002AC400; }
L_002AC480:;
SET64(2, (s32)rd32(c, (RW(21) + 0)));
SET64(4, RD(23) + RD(0));
SET64(5, RD(22) + RD(0));
{ u32 t = RW(2); SET64(31, 0x2ac494); wr32(c, (RW(20) + 0), RW(18)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AC4AC; }
wr32(c, (RW(30) + 0), RW(22));
SET64(18, RD(22) + RD(0));
wr32(c, (RW(19) + 0), RW(23)); { POLL(); goto L_002AC400; }
L_002AC4AC:;
wr32(c, (RW(30) + 0), RW(23));
SET64(18, RD(23) + RD(0)); { POLL(); goto L_002AC400; }
L_002AC4B8:;
SET64(3, RD(20) < RD(16));
L_002AC4BC:;
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002AC4E8; }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2ac4d8); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) > 0;  if (t) goto L_002AC4E8; }
SET32(16, RW(16) + -4); { POLL(); goto L_002AC4B8; }
L_002AC4E8:;
SET64(3, RD(17) < RD(16));
{ int t = RD(3) != RD(0);  if (t) goto L_002AC540; }
SET64(1, RD(20) < RD(16));
L_002AC4F8:;
{ int t = RD(1) == RD(0); SET64(1, RD(17) < RD(19)); if (t) goto L_002AC5F4; }
SET32(3, RW(20) + 24);
SET64(3, RD(3) < RD(16));
{ int t = RD(3) != RD(0);  if (t) goto L_002AC5E0; }
SET64(1, RD(20) < RD(16));
{ int t = RD(1) == RD(0);  if (t) goto L_002AC5F0; }
L_002AC51C:;
SET64(3, RD(20) < RD(16));
{ int t = RD(3) != RD(0); SET64(18, RD(20) + RD(0)); if (t) goto L_002AC640; }
L_002AC528:;
SET32(16, RW(16) + -4);
SET64(1, RD(20) < RD(16));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_002AC51C; } }
 goto L_002AC5F0;
L_002AC540:;
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET32(17, RW(17) + 4);
L_002AC554:;
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2ac564); SET64(5, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AC5B0; }
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2ac57c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AC5B8; }
L_002AC588:;
SET64(1, RD(17) < RD(16));
{ int t = RD(1) == RD(0); SET64(1, RD(20) < RD(16)); if (t) { POLL(); goto L_002AC4F8; } }
SET64(3, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(17) + 0)));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(17) + 0), RW(3));
SET32(17, RW(17) + 4); { POLL(); goto L_002AC554; }
L_002AC5B0:;
SET32(17, RW(17) + 4); { POLL(); goto L_002AC554; }
L_002AC5B8:;
SET32(16, RW(16) + -4);
SET64(5, (s32)rd32(c, (RW(16) + 0)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2ac5cc); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) { POLL(); goto L_002AC5B8; } }
 { POLL(); goto L_002AC588; }
L_002AC5E0:;
SET64(5, RD(20) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2ac5f0); SET64(4, RD(21) + RD(0)); F_002AC350(c);
L_002AC5F0:;
SET64(1, RD(17) < RD(19));
L_002AC5F4:;
{ int t = RD(1) == RD(0);  if (t) goto L_002AC6D8; }
SET32(3, RW(17) + 24);
SET64(3, RD(3) < RD(19));
{ int t = RD(3) != RD(0);  if (t) goto L_002AC680; }
SET64(1, RD(17) < RD(19));
{ int t = RD(1) == RD(0);  if (t) goto L_002AC6D8; }
L_002AC618:;
SET64(3, RD(17) < RD(19));
{ int t = RD(3) != RD(0); SET64(16, RD(17) + RD(0)); if (t) goto L_002AC698; }
L_002AC628:;
SET32(19, RW(19) + -4);
SET64(1, RD(17) < RD(19));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_002AC618; } }
 goto L_002AC690;
L_002AC640:;
SET64(5, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2ac650); SET64(4, (s32)rd32(c, (RW(18) + 0))); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AC668; }
SET64(4, (s32)rd32(c, (RW(18) + 4)));
SET64(3, (s32)rd32(c, (RW(18) + 0)));
wr32(c, (RW(18) + 4), RW(3));
wr32(c, (RW(18) + 0), RW(4));
L_002AC668:;
SET32(18, RW(18) + 4);
SET64(3, RD(18) < RD(16));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002AC640; } }
 { POLL(); goto L_002AC528; }
L_002AC680:;
SET64(4, RD(21) + RD(0));
SET64(5, RD(17) + RD(0));
SET64(31, 0x2ac690); SET64(6, RD(19) + RD(0)); F_002AC350(c);
L_002AC690:;
 goto L_002AC6D8;
L_002AC698:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
SET64(2, (s32)rd32(c, (RW(21) + 0)));
{ u32 t = RW(2); SET64(31, 0x2ac6a8); SET64(4, (s32)rd32(c, (RW(16) + 0))); rt_call(c, t); }
{ int t = RSD(2) <= 0;  if (t) goto L_002AC6C0; }
SET64(4, (s32)rd32(c, (RW(16) + 4)));
SET64(3, (s32)rd32(c, (RW(16) + 0)));
wr32(c, (RW(16) + 4), RW(3));
wr32(c, (RW(16) + 0), RW(4));
L_002AC6C0:;
SET32(16, RW(16) + 4);
SET64(3, RD(16) < RD(19));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002AC698; } }
 { POLL(); goto L_002AC628; }
L_002AC6D8:;
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

void F_002AC710(Ctx *c) { /* func_002AC710 */
ENTER(0x2ac710);
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
SET64(31, 0x2ac76c); SET32(5, RW(29) + 144); F_002AD270(c);
c->f[1].u = RW(0);
c->fcc = F(0) < F(1);
{ int t = c->fcc; SET64(2, (s64)(s32)0xbf800000); if (t) goto L_002AC7B8; }
SET64(3, (s64)(s32)0x3f800000);
L_002AC784:;
c->f[1].u = RW(3);
c->fcc = F(0) < F(1);
{ int t = c->fcc; c->f[12].u = c->f[0].u; if (t) goto L_002AC7E4; }
L_002AC798:;
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(16) + 0), RW(0));
wr32(c, (RW(16) + 12), RW(3));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 8), RW(0));
rd128(c, (RW(29) + 160) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_002AC870;
L_002AC7B8:;
SET32(4, RW(29) + 128);
c->f[12].u = RW(2);
SET64(31, 0x2ac7c8); SET32(5, RW(29) + 144); F_002ACD50(c);
rd128(c, (RW(29) + 128) & ~15u, &c->r[2]);
SET32(4, RW(29) + 160);
SET32(5, RW(29) + 144);
SET64(31, 0x2ac7dc); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); F_002AD270(c);
SET64(3, (s64)(s32)0x3f800000); { POLL(); goto L_002AC784; }
L_002AC7E4:;
SET64(31, 0x2ac7ec);  F_0011F880(c);
c->f[20].u = c->f[0].u;
c->f[21].f = fpu(F(20) * F(21));
SET64(31, 0x2ac7fc); c->f[12].f = fpu(F(20) - F(21)); F_0011F6F0(c);
c->f[12].u = c->f[0].u;
SET32(4, RW(29) + 112);
SET64(31, 0x2ac80c); SET32(5, RW(29) + 160); F_002ACD50(c);
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
c->f[12].u = c->f[21].u;
SET64(31, 0x2ac81c); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); F_0011F6F0(c);
c->f[12].u = c->f[0].u;
SET32(4, RW(29) + 96);
SET64(31, 0x2ac82c); SET32(5, RW(29) + 144); F_002ACD50(c);
rd128(c, (RW(29) + 96) & ~15u, &c->r[2]);
SET32(4, RW(29) + 48);
SET32(5, RW(29) + 160);
SET32(6, RW(29) + 144);
SET64(31, 0x2ac844); wr128(c, (RW(29) + 144) & ~15u, &c->r[2]); F_002ACDC0(c);
rd128(c, (RW(29) + 48) & ~15u, &c->r[2]);
c->f[12].u = c->f[20].u;
SET64(31, 0x2ac854); wr128(c, (RW(29) + 160) & ~15u, &c->r[2]); F_0011F6F0(c);
c->f[12].u = c->f[0].u;
SET32(4, RW(29) + 64);
SET64(31, 0x2ac864); SET32(5, RW(29) + 160); F_002ACCE0(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(29) + 160) & ~15u, &c->r[3]); { POLL(); goto L_002AC798; }
L_002AC870:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[21].u = rd32(c, (RW(29) + 4));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 176); return;
}

void F_002AC890(Ctx *c) { /* func_002AC890 */
ENTER(0x2ac890);
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

void F_002AC9A0(Ctx *c) { /* func_002AC9A0 */
ENTER(0x2ac9a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ac9b8); wr32(c, (RW(29) + 0), c->f[20].u); F_001186A0(c);
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
SET64(31, 0x2ac9e8);  F_001186F8(c);
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_002ACA00(Ctx *c) { /* func_002ACA00 */
ENTER(0x2aca00);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(2, RD(16) < RD(5));
{ int t = RD(2) != RD(0);  if (t) goto L_002ACA50; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(1, RD(5) < RD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_002ACA5C; }
L_002ACA2C:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
SET64(2, (s32)rd32(c, (RW(4) + 4)));
SET64(1, RD(5) < RD(2));
{ int t = RD(1) != RD(0);  if (t) { POLL(); goto L_002ACA2C; } }
 goto L_002ACA5C;
L_002ACA50:;
wr32(c, (RW(5) + 4), RW(16));
SET64(2, RD(5) + RD(0)); goto L_002ACA68;
L_002ACA5C:;
SET64(31, 0x2aca64);  F_002AB740(c);
SET64(2, RD(16) + RD(0));
L_002ACA68:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002ACA80(Ctx *c) { /* func_002ACA80 */
ENTER(0x2aca80);
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
SET64(31, 0x2acacc); SET32(16, RW(29) + 168); F_001186A0(c);
SET64(3, (s32)c->f[20].u);
SET32(2, RW(29) + 160);
if (5) memcpy(&c->vf[5], &c->r[3], 16);
rd128(c, (RW(21) + 0) & ~15u, (GPR *)&c->vf[4]);
vu0_exec(c, 0x4bc520d8);
vu0_exec(c, 0x4bc2197c);
SET64(31, 0x2acaec); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[2]); F_001186F8(c);
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
SET64(31, 0x2acb54); wr32(c, (RW(16) + 0), RW(2)); F_001186A0(c);
SET64(3, (s64)(s32)0x4b0000);
SET64(2, (s64)(s32)0x4b0000);
SET64(4, RD(18) + RD(0));
SET32(6, RW(29) + 128);
SET32(5, RW(29) + 144);
SET32(3, RW(3) + 10016);
SET32(2, RW(2) + 10000);
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
SET64(31, 0x2acbec); wr128(c, (RW(5) + 0) & ~15u, (GPR *)&c->vf[3]); F_001186F8(c);
SET64(9, RD(0) + RD(0));
SET32(8, RW(29) + 128);
SET64(7, RD(20) + RD(0));
SET32(6, RW(29) + 144);
SET64(5, RD(19) + RD(0));
L_002ACC00:;
SET64(4, (s32)rd32(c, (RW(18) + 0)));
SET64(3, RD(4) & 0x2);
{ int t = RD(3) == RD(0); SET64(3, RD(4) & 0x4); if (t) goto L_002ACC48; }
{ int t = RD(3) == RD(0);  if (t) goto L_002ACC30; }
c->f[1].u = rd32(c, (RW(8) + 0));
c->f[0].u = rd32(c, (RW(6) + 0));
c->f[1].u = c->f[1].u ^ 0x80000000u;
wr32(c, (RW(7) + 0), c->f[1].u);
wr32(c, (RW(5) + 0), c->f[0].u); goto L_002ACC80;
L_002ACC30:;
c->f[1].u = rd32(c, (RW(8) + 0));
c->f[0].u = rd32(c, (RW(6) + 0));
wr32(c, (RW(7) + 0), c->f[1].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(5) + 0), c->f[0].u); goto L_002ACC80;
L_002ACC48:;
SET64(3, RD(4) & 0x4);
{ int t = RD(3) == RD(0);  if (t) goto L_002ACC70; }
c->f[1].u = rd32(c, (RW(6) + 0));
c->f[0].u = rd32(c, (RW(8) + 0));
c->f[1].u = c->f[1].u ^ 0x80000000u;
wr32(c, (RW(7) + 0), c->f[1].u);
c->f[0].u = c->f[0].u ^ 0x80000000u;
wr32(c, (RW(5) + 0), c->f[0].u); goto L_002ACC80;
L_002ACC70:;
c->f[1].u = rd32(c, (RW(6) + 0));
c->f[0].u = rd32(c, (RW(8) + 0));
wr32(c, (RW(7) + 0), c->f[1].u);
wr32(c, (RW(5) + 0), c->f[0].u);
L_002ACC80:;
SET32(9, RW(9) + 1);
SET64(3, RSD(9) < (s64)3);
SET32(18, RW(18) + 4);
SET32(8, RW(8) + 4);
SET32(7, RW(7) + 4);
SET32(6, RW(6) + 4);
{ int t = RD(3) != RD(0); SET32(5, RW(5) + 4); if (t) { POLL(); goto L_002ACC00; } }
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

void F_002ACCE0(Ctx *c) { /* func_002ACCE0 */
ENTER(0x2acce0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2acd04); c->f[20].u = c->f[12].u; F_001186A0(c);
SET64(3, (s32)c->f[20].u);
SET32(2, RW(29) + 64);
if (4) memcpy(&c->vf[4], &c->r[3], 16);
vu0_exec(c, 0x4a6403bc);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4be0299c);
SET64(31, 0x2acd28); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002ACD50(Ctx *c) { /* func_002ACD50 */
ENTER(0x2acd50);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2acd74); c->f[20].u = c->f[12].u; F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
SET64(3, (s32)c->f[20].u);
if (5) memcpy(&c->vf[5], &c->r[3], 16);
vu0_exec(c, 0x4be52198);
SET64(31, 0x2acd94); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002ACDC0(Ctx *c) { /* func_002ACDC0 */
ENTER(0x2acdc0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2acde4); SET64(16, RD(6) + RD(0)); F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521a8);
SET64(31, 0x2acdfc); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002ACE20(Ctx *c) { /* func_002ACE20 */
ENTER(0x2ace20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2ace3c); SET64(16, RD(5) + RD(0)); F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
rd128(c, (RW(16) + 16) & ~15u, (GPR *)&c->vf[6]);
rd128(c, (RW(16) + 32) & ~15u, (GPR *)&c->vf[7]);
rd128(c, (RW(16) + 48) & ~15u, (GPR *)&c->vf[8]);
vu0_exec(c, 0x4be429bc);
vu0_exec(c, 0x4be430bd);
vu0_exec(c, 0x4be438be);
vu0_exec(c, 0x4be4424b);
SET64(31, 0x2ace68); wr128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[9]); F_001186F8(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002ACE80(Ctx *c) { /* func_002ACE80 */
ENTER(0x2ace80);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2acea4); SET64(16, RD(6) + RD(0)); F_001186A0(c);
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
SET64(31, 0x2aced4); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[9]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002ACF00(Ctx *c) { /* func_002ACF00 */
ENTER(0x2acf00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2acf1c); c->f[20].u = c->f[12].u; F_001186A0(c);
SET64(2, (s32)c->f[20].u);
if (4) memcpy(&c->vf[4], &c->r[2], 16);
vu0_exec(c, 0x4a6403bc);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4be0299c);
SET64(31, 0x2acf40); wr128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_002ACF60(Ctx *c) { /* func_002ACF60 */
ENTER(0x2acf60);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2acf84); c->f[20].u = c->f[12].u; F_001186A0(c);
SET64(3, (s32)c->f[20].u);
SET32(2, RW(29) + 64);
if (4) memcpy(&c->vf[4], &c->r[3], 16);
vu0_exec(c, 0x4a6403bc);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4be0299c);
SET64(31, 0x2acfa8); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002ACFD0(Ctx *c) { /* func_002ACFD0 */
ENTER(0x2acfd0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(5) + RD(0));
SET64(31, 0x2acff4); c->f[20].u = c->f[12].u; F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
SET64(3, (s32)c->f[20].u);
if (5) memcpy(&c->vf[5], &c->r[3], 16);
vu0_exec(c, 0x4be52198);
SET64(31, 0x2ad014); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(17) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002AD040(Ctx *c) { /* func_002AD040 */
ENTER(0x2ad040);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2ad064); SET64(16, RD(6) + RD(0)); F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521ac);
SET64(31, 0x2ad07c); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002AD0A0(Ctx *c) { /* func_002AD0A0 */
ENTER(0x2ad0a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2ad0bc); SET64(16, RD(5) + RD(0)); F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521a8);
SET64(31, 0x2ad0d0); wr128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AD0F0(Ctx *c) { /* func_002AD0F0 */
ENTER(0x2ad0f0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2ad114); SET64(16, RD(6) + RD(0)); F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521a8);
SET64(31, 0x2ad12c); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002AD150(Ctx *c) { /* func_002AD150 */
ENTER(0x2ad150);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2ad16c); SET64(16, RD(5) + RD(0)); F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521aa);
SET64(31, 0x2ad180); wr128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AD1A0(Ctx *c) { /* func_002AD1A0 */
ENTER(0x2ad1a0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2ad1c4); SET64(16, RD(6) + RD(0)); F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521aa);
SET64(31, 0x2ad1dc); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002AD200(Ctx *c) { /* func_002AD200 */
ENTER(0x2ad200);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2ad224); SET64(16, RD(6) + RD(0)); F_001186A0(c);
SET32(2, RW(29) + 64);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4bc522fe);
vu0_exec(c, 0x4bc429ae);
vu0_exec(c, 0x4a26033c);
SET64(31, 0x2ad244); wr128(c, (RW(2) + 0) & ~15u, (GPR *)&c->vf[6]); F_001186F8(c);
rd128(c, (RW(29) + 64) & ~15u, &c->r[3]);
wr128(c, (RW(18) + 0) & ~15u, &c->r[3]);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002AD270(Ctx *c) { /* func_002AD270 */
ENTER(0x2ad270);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2ad290); wr32(c, (RW(29) + 0), c->f[20].u); F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4be521aa);
vu0_exec(c, 0x4b063181);
vu0_exec(c, 0x4b063182);
vu0_exec(c, 0x4b063183);
memcpy(&c->r[2], &c->vf[6], 16);
c->f[20].u = RW(2);
SET64(31, 0x2ad2b8);  F_001186F8(c);
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002AD2E0(Ctx *c) { /* func_002AD2E0 */
ENTER(0x2ad2e0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
SET64(31, 0x2ad300); wr32(c, (RW(29) + 0), c->f[20].u); F_001186A0(c);
rd128(c, (RW(17) + 0) & ~15u, (GPR *)&c->vf[4]);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[5]);
vu0_exec(c, 0x4bc521aa);
vu0_exec(c, 0x4b063181);
vu0_exec(c, 0x4b063182);
memcpy(&c->r[2], &c->vf[6], 16);
c->f[20].u = RW(2);
SET64(31, 0x2ad324);  F_001186F8(c);
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[17]);
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002AD340(Ctx *c) { /* func_002AD340 */
ENTER(0x2ad340);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ad358); wr32(c, (RW(29) + 0), c->f[20].u); F_001186A0(c);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
vu0_exec(c, 0x4bc4216a);
vu0_exec(c, 0x4b052941);
vu0_exec(c, 0x4b052942);
vu0_exec(c, 0x4a0503bd);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4b0001a0);
memcpy(&c->r[2], &c->vf[6], 16);
c->f[20].u = RW(2);
SET64(31, 0x2ad384);  F_001186F8(c);
c->f[0].u = c->f[20].u;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_002AD3A0(Ctx *c) { /* func_002AD3A0 */
ENTER(0x2ad3a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 4), c->f[21].u);
SET64(16, RD(4) + RD(0));
wr32(c, (RW(29) + 0), c->f[20].u);
c->f[21].u = c->f[12].u;
SET64(31, 0x2ad3c4); c->f[20].u = c->f[13].u; F_001186A0(c);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
SET64(2, (s32)c->f[21].u);
if (5) memcpy(&c->vf[5], &c->r[2], 16);
SET64(2, (s32)c->f[20].u);
if (6) memcpy(&c->vf[6], &c->r[2], 16);
vu0_exec(c, 0x4be521d0);
vu0_exec(c, 0x4be63a14);
SET64(31, 0x2ad3f0); wr128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[8]); F_001186F8(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
c->f[21].u = rd32(c, (RW(29) + 4));
c->f[20].u = rd32(c, (RW(29) + 0));
SET32(29, RW(29) + 48); return;
}

void F_002AD410(Ctx *c) { /* func_002AD410 */
ENTER(0x2ad410);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ad424); SET64(16, RD(4) + RD(0)); F_001186A0(c);
rd128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]);
vu0_exec(c, 0x4bc4216a);
vu0_exec(c, 0x4b052941);
vu0_exec(c, 0x4b052942);
vu0_exec(c, 0x4a6503be);
vu0_exec(c, 0x4a0003bf);
vu0_exec(c, 0x4bc0211c);
SET64(31, 0x2ad448); wr128(c, (RW(16) + 0) & ~15u, (GPR *)&c->vf[4]); F_001186F8(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AD460(Ctx *c) { /* func_002AD460 */
ENTER(0x2ad460);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002AD49C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -21072);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 8), RW(3)); if (t) goto L_002AD498; }
SET64(31, 0x2ad498);  F_001004B0(c);
L_002AD498:;
SET64(2, RD(16) + RD(0));
L_002AD49C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AD4B0(Ctx *c) { /* func_002AD4B0 */
ENTER(0x2ad4b0);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(0) + 4);
SET32(2, RW(2) + -21072);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 8), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(3)); return;
}

void F_002AD4D0(Ctx *c) { /* func_002AD4D0 */
ENTER(0x2ad4d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 4)));
{ int t = RSD(2) < 0; SET64(17, RD(4) + RD(0)); if (t) goto L_002AD4F4; }
L_002AD4EC:;
SET64(2, (s32)rd32(c, (RW(17) + 4))); goto L_002AD59C;
L_002AD4F4:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ad504); SET64(16, RD(0) + RD(0)); rt_call(c, t); }
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3); SET32(4, RW(0) + 12); if (t) goto L_002AD548; }
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 12); if (t) goto L_002AD520; }
SET64(25, (s32)rd32(c, (RW(16) + 0))); goto L_002AD56C;
L_002AD520:;
SET64(31, 0x2ad528);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002AD540; }
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ad53c); SET64(5, RD(17) + RD(0)); F_0029DE20(c);
SET64(16, RD(2) + RD(0));
L_002AD540:;
 goto L_002AD568;
L_002AD548:;
SET64(31, 0x2ad550);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002AD568; }
SET64(4, RD(2) + RD(0));
SET64(31, 0x2ad564); SET64(5, RD(17) + RD(0)); F_0029D980(c);
SET64(16, RD(2) + RD(0));
L_002AD568:;
SET64(25, (s32)rd32(c, (RW(16) + 0)));
L_002AD56C:;
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2ad578); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
{ int t = RD(16) == RD(0); wr32(c, (RW(17) + 4), RW(2)); if (t) { POLL(); goto L_002AD4EC; } }
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ad594); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002AD4EC; }
L_002AD59C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AD5B0(Ctx *c) { /* func_002AD5B0 */
ENTER(0x2ad5b0);
SET64(2, (s32)rd32(c, (RW(4) + 0))); return;
}

void F_002AD5C0(Ctx *c) { /* func_002AD5C0 */
ENTER(0x2ad5c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AD608; }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -21008);
SET64(31, 0x2ad5f0); wr32(c, (RW(17) + 8), RW(2)); F_00100430(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AD60C; }
SET64(31, 0x2ad608); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002AD608:;
SET64(2, RD(17) + RD(0));
L_002AD60C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AD620(Ctx *c) { /* func_002AD620 */
ENTER(0x2ad620);
SET32(29, RW(29) + -48);
SET64(3, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 32), RD(31));
SET32(3, RW(3) + -21008);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(2, RW(0) + -1);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(5) + RD(0));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 8), RW(3));
{ int t = RD(16) == RD(0); wr32(c, (RW(4) + 4), RW(2)); if (t) goto L_002AD674; }
SET64(31, 0x2ad65c); SET64(4, RD(16) + RD(0)); F_0012A4D8(c);
SET64(31, 0x2ad664); SET32(4, RW(2) + 1); F_00100530(c);
SET64(5, RD(16) + RD(0));
wr32(c, (RW(17) + 0), RW(2));
SET64(31, 0x2ad674); SET64(4, RD(2) + RD(0)); F_0012A3C0(c);
L_002AD674:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AD690(Ctx *c) { /* func_002AD690 */
ENTER(0x2ad690);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002AD6CC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -21040);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002AD6C8; }
SET64(31, 0x2ad6c8);  F_001004B0(c);
L_002AD6C8:;
SET64(2, RD(16) + RD(0));
L_002AD6CC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AD6E0(Ctx *c) { /* func_002AD6E0 */
ENTER(0x2ad6e0);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -21040);
wr32(c, (RW(4) + 0), RW(2));
SET64(2, RD(4) + RD(0)); return;
}

void F_002AD700(Ctx *c) { /* func_002AD700 */
ENTER(0x2ad700);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 148)));
SET64(3, RD(3) & 0x6);
{ int t = RD(3) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AD724; }
L_002AD71C:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002AD75C;
L_002AD724:;
SET64(3, (s32)rd32(c, (RW(4) + 148)));
SET32(2, RW(0) + -3);
SET64(2, RD(3) & RD(2));
wr32(c, (RW(4) + 148), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ad744);  rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2ad754); SET32(4, RW(4) + -26296); F_002B19D0(c);
 { POLL(); goto L_002AD71C; }
L_002AD75C:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AD770(Ctx *c) { /* func_002AD770 */
ENTER(0x2ad770);
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
{ int t = RD(7) == RD(0); SET64(16, RD(8) + RD(0)); if (t) goto L_002AD874; }
SET64(3, (s32)rd32(c, (RW(19) + 140)));
SET32(2, RW(0) + 10);
SET64(4, (s32)rd32(c, (RW(19) + 144)));
SET64(7, (s16)rd16(c, (RW(28) + -31454)));
SET64(6, (s16)rd16(c, (RW(28) + -31452)));
SET64(5, (s16)rd16(c, (RW(28) + -31450)));
SET64(8, (s16)rd16(c, (RW(28) + -31456)));
SET32(3, RW(3) << 2);
SET32(4, RW(4) << 1);
SET32(3, RW(3) + RW(29));
SET32(9, RW(4) + RW(3));
wr16(c, (RW(29) + 122), (u16)RW(7));
wr16(c, (RW(29) + 124), (u16)RW(6));
wr16(c, (RW(29) + 126), (u16)RW(5));
SET64(7, (s16)rd16(c, (RW(28) + -31448)));
SET64(6, (s16)rd16(c, (RW(28) + -31446)));
SET64(5, (s16)rd16(c, (RW(28) + -31444)));
SET64(4, (s16)rd16(c, (RW(28) + -31442)));
wr16(c, (RW(29) + 120), (u16)RW(8));
SET64(3, (s32)rd32(c, (RW(19) + 136)));
wr16(c, (RW(29) + 112), (u16)RW(7));
wr16(c, (RW(29) + 114), (u16)RW(6));
wr16(c, (RW(29) + 116), (u16)RW(5));
wr16(c, (RW(29) + 118), (u16)RW(4));
SET64(4, rd16(c, (RW(9) + 112)));
{ int t = RD(3) == RD(2); SET64(8, rd16(c, (RW(9) + 120))); if (t) goto L_002AD834; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_002AD834; }
{ int t = RD(3) == RD(0);  if (t) goto L_002AD828; }
SET64(20, RD(0) + RD(0)); goto L_002AD83C;
L_002AD828:;
mul_s(c, 0, 2, RSW(8), RSW(4));
SET32(20, RW(2) << 2); goto L_002AD83C;
L_002AD834:;
mul_s(c, 0, 2, RSW(8), RSW(4));
SET32(20, RW(2) << 1);
L_002AD83C:;
SET64(31, 0x2ad844); SET32(4, RW(0) + 20); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002AD858; }
SET64(5, RD(20) + RD(0));
SET64(31, 0x2ad858); SET32(6, RW(0) + 128); F_002AB430(c);
L_002AD858:;
wr32(c, (RW(19) + 132), RW(2));
SET64(5, RD(17) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x2ad86c); SET64(6, RD(20) + RD(0)); F_00127218(c);
SET64(2, (s32)rd32(c, (RW(19) + 132)));
SET64(17, (s32)rd32(c, (RW(2) + 4)));
L_002AD874:;
SET64(2, (s32)rd32(c, (RW(19) + 140)));
SET64(5, RD(17) + RD(0));
SET64(6, (s16)rd16(c, (RW(28) + -31442)));
SET64(4, RD(19) + RD(0));
SET64(3, (s32)rd32(c, (RW(19) + 144)));
SET32(9, RW(29) + 96);
SET64(10, (s16)rd16(c, (RW(28) + -31448)));
SET64(8, (s16)rd16(c, (RW(28) + -31446)));
SET64(7, (s16)rd16(c, (RW(28) + -31444)));
SET32(2, RW(2) << 2);
SET64(11, (s16)rd16(c, (RW(28) + -31456)));
wr16(c, (RW(29) + 134), (u16)RW(6));
SET32(2, RW(2) + RW(29));
SET32(3, RW(3) << 1);
wr32(c, (RW(29) + 96), RW(0));
wr16(c, (RW(29) + 128), (u16)RW(10));
SET32(6, RW(3) + RW(2));
wr16(c, (RW(29) + 130), (u16)RW(8));
wr16(c, (RW(29) + 132), (u16)RW(7));
SET64(10, (s16)rd16(c, (RW(28) + -31454)));
SET64(8, (s16)rd16(c, (RW(28) + -31452)));
SET64(7, (s16)rd16(c, (RW(28) + -31450)));
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
SET64(31, 0x2ad918); SET32(7, RW(2) + 1); F_002B09B0(c);
{ int t = RD(18) == RD(0);  if (t) goto L_002AD964; }
SET64(25, (s32)rd32(c, (RW(19) + 8)));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ad934); SET64(4, RD(19) + RD(0)); rt_call(c, t); }
L_002AD934:;
{ int t = RD(16) == RD(0);  if (t) goto L_002AD94C; }
SET64(2, (s32)rd32(c, (RW(19) + 148)));
SET64(2, RD(2) | 0x4);
wr32(c, (RW(19) + 148), RW(2)); goto L_002AD95C;
L_002AD94C:;
SET64(3, (s32)rd32(c, (RW(19) + 148)));
SET32(2, RW(0) + -5);
SET64(2, RD(3) & RD(2));
wr32(c, (RW(19) + 148), RW(2));
L_002AD95C:;
SET64(2, RD(0) + RD(0)); goto L_002AD974;
L_002AD964:;
SET64(2, (s32)rd32(c, (RW(19) + 148)));
SET64(2, RD(2) | 0x2);
wr32(c, (RW(19) + 148), RW(2)); { POLL(); goto L_002AD934; }
L_002AD974:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void F_002AD9A0(Ctx *c) { /* func_002AD9A0 */
ENTER(0x2ad9a0);
 return;
}

void F_002AD9B0(Ctx *c) { /* func_002AD9B0 */
ENTER(0x2ad9b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 128)));
{ int t = RD(4) == RD(0);  if (t) goto L_002AD9FC; }
SET64(2, (s32)rd32(c, (RW(16) + 148)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002AD9F4; }
{ int t = RD(4) == RD(0);  if (t) goto L_002AD9F4; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ad9f4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AD9F4:;
wr32(c, (RW(16) + 128), RW(0));
wr32(c, (RW(16) + 148), RW(0));
L_002AD9FC:;
SET64(4, (s32)rd32(c, (RW(16) + 132)));
{ int t = RD(4) == RD(0);  if (t) goto L_002ADA24; }
{ int t = RD(4) == RD(0);  if (t) goto L_002ADA20; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ada20); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002ADA20:;
wr32(c, (RW(16) + 132), RW(0));
L_002ADA24:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002ADA40(Ctx *c) { /* func_002ADA40 */
ENTER(0x2ada40);
SET64(2, (s32)rd32(c, (RW(4) + 128)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002ADA74; }
SET64(2, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_002ADA70; }
SET64(3, (s32)rd32(c, (RW(4) + 148)));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 128), RW(5));
SET64(3, RD(3) | 0x1);
wr32(c, (RW(4) + 148), RW(3)); goto L_002ADA74;
L_002ADA70:;
SET64(2, RD(0) + RD(0));
L_002ADA74:;
 return;
}

void F_002ADA80(Ctx *c) { /* func_002ADA80 */
ENTER(0x2ada80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 128)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002ADAA0; }
L_002ADA98:;
SET64(2, RD(0) + RD(0)); goto L_002ADADC;
L_002ADAA0:;
SET64(31, 0x2adaa8); SET32(4, RW(0) + 24); F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002ADAC8; }
SET64(5, (s32)rd32(c, (RW(16) + 140)));
SET64(4, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(16) + 144)));
SET64(7, (s32)rd32(c, (RW(16) + 136)));
SET64(31, 0x2adac8); SET64(8, RD(0) + RD(0)); F_002AFC80(c);
L_002ADAC8:;
wr32(c, (RW(16) + 128), RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_002ADA98; } }
SET32(2, RW(0) + 1);
L_002ADADC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002ADAF0(Ctx *c) { /* func_002ADAF0 */
ENTER(0x2adaf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002ADB4C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20976);
wr32(c, (RW(17) + 152), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2adb28);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2adb34); SET32(5, RW(0) + -1); F_002B0B60(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002ADB50; }
SET64(31, 0x2adb4c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002ADB4C:;
SET64(2, RD(17) + RD(0));
L_002ADB50:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002ADB70(Ctx *c) { /* func_002ADB70 */
ENTER(0x2adb70);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + -20976);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(16, RD(7) + RD(0));
SET64(31, 0x2adba8); wr32(c, (RW(4) + 152), RW(2)); F_002B0BC0(c);
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

void F_002ADBE0(Ctx *c) { /* func_002ADBE0 */
ENTER(0x2adbe0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 68)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002ADC50; }
{ int t = RSD(2) <= 0; SET32(18, RW(2) + -1); if (t) goto L_002ADC50; }
L_002ADC0C:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(31, 0x2adc18); SET64(5, RD(0) + RD(0)); F_002AAE30(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x2adc24); SET64(4, RD(17) + RD(0)); F_00240B60(c);
{ int t = RD(2) == RD(0); SET64(5, RD(2) + RD(0)); if (t) goto L_002ADC38; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2adc38); SET64(6, RD(0) + RD(0)); F_002AE9C0(c);
L_002ADC38:;
SET64(4, (s32)rd32(c, (RW(16) + 76)));
SET64(31, 0x2adc44); SET64(5, RD(17) + RD(0)); F_002AAEF0(c);
SET64(2, RD(18) + RD(0));
{ int t = RSD(2) > 0; SET32(18, RW(18) + -1); if (t) { POLL(); goto L_002ADC0C; } }
L_002ADC50:;
SET64(31, 0x2adc58); SET64(4, RD(16) + RD(0)); F_002AE8B0(c);
SET64(31, 0x2adc60); SET64(4, RD(16) + RD(0)); F_00240B60(c);
SET64(17, RD(2) + RD(0));
SET64(31, 0x2adc6c); SET64(4, RD(0) + RD(0)); F_0010F8E0(c);
SET64(4, (s32)rd32(c, (RW(16) + 104)));
SET64(31, 0x2adc78); SET64(5, RD(17) + RD(0)); F_00106138(c);
SET64(3, (s64)(s32)0x10000000);
SET64(3, (s32)rd32(c, (RW(3) + 0)));
wr16(c, (RW(16) + 108), (u16)RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002ADCA0(Ctx *c) { /* func_002ADCA0 */
ENTER(0x2adca0);
SET64(3, (s64)(s32)0x10000000);
SET64(5, rd16(c, (RW(4) + 108)));
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(2, RD(0) + RD(0));
SET32(3, RW(3) - RW(5));
wr16(c, (RW(4) + 110), (u16)RW(3)); return;
}

void F_002ADCC0(Ctx *c) { /* func_002ADCC0 */
ENTER(0x2adcc0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(4, (s32)rd32(c, (RW(28) + -30040)));
{ int t = RD(4) == RD(0);  if (t) goto L_002ADCF0; }
{ int t = RD(4) == RD(0);  if (t) goto L_002ADCEC; }
SET64(25, (s32)rd32(c, (RW(4) + 52)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2adcec); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002ADCEC:;
wr32(c, (RW(28) + -30040), RW(0));
L_002ADCF0:;
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002ADD00(Ctx *c) { /* func_002ADD00 */
ENTER(0x2add00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -30040)));
{ int t = RD(2) == RD(0); SET32(4, RW(0) + 112); if (t) goto L_002ADD24; }
SET64(2, RD(0) + RD(0)); goto L_002ADDDC;
L_002ADD24:;
SET64(31, 0x2add2c);  F_00100670(c);
{ int t = RD(2) != RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002ADD40; }
wr32(c, (RW(28) + -30040), RW(16));
L_002ADD38:;
SET64(2, RD(16) + RD(0)); goto L_002ADDDC;
L_002ADD40:;
SET64(4, RD(16) + RD(0));
SET64(31, 0x2add4c); SET32(5, RW(0) + 64); F_002AECD0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -21232);
SET32(17, RW(16) + 68);
wr32(c, (RW(16) + 64), RW(2));
SET32(3, RW(3) + -20928);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 52), RW(3));
SET32(2, RW(2) + -20916);
SET32(4, RW(17) + 12);
wr32(c, (RW(16) + 64), RW(2));
SET32(5, RW(0) + 64);
wr32(c, (RW(16) + 68), RW(4));
SET32(6, RW(0) + 4);
SET64(31, 0x2add8c); wr32(c, (RW(16) + 76), RW(4)); F_002AB2A0(c);
wr32(c, (RW(17) + 4), RW(0));
SET32(4, RW(0) + 1);
SET64(31, 0x2add9c); wr16(c, (RW(16) + 110), (u16)RW(0)); F_00105E08(c);
wr32(c, (RW(16) + 104), RW(2));
SET64(3, RD(0) + (s64)64);
SET64(6, (s32)rd32(c, (RW(16) + 104)));
SET32(2, RW(0) + -65);
SET64(5, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(6) + 0)));
SET64(2, RD(4) & RD(2));
SET64(2, RD(2) | RD(3));
{ int t = RD(16) == RD(0); wr32(c, (RW(6) + 0), RW(2)); if (t) goto L_002ADDC8; }
SET32(5, RW(16) + 64);
L_002ADDC8:;
SET64(4, (s32)rd32(c, (RW(28) + -30048)));
SET64(31, 0x2addd4); SET64(6, RD(0) + RD(0)); F_002A8A80(c);
wr32(c, (RW(28) + -30040), RW(16)); { POLL(); goto L_002ADD38; }
L_002ADDDC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002ADDF0(Ctx *c) { /* func_002ADDF0 */
ENTER(0x2addf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002ADE74; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20928);
SET32(2, RW(2) + -20916);
wr32(c, (RW(16) + 52), RW(3));
SET64(5, RD(16) + RD(0));
{ int t = RD(16) == RD(0); wr32(c, (RW(16) + 64), RW(2)); if (t) goto L_002ADE30; }
SET32(5, RW(5) + 64);
L_002ADE30:;
SET64(31, 0x2ade38); SET64(4, (s32)rd32(c, (RW(28) + -30048))); F_002A8A00(c);
SET32(2, RW(16) + 68);
{ int t = RD(2) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002ADE54; }
SET32(4, RW(16) + 80);
SET64(31, 0x2ade50); SET64(5, RD(0) + RD(0)); F_002AB240(c);
SET64(4, RD(16) + RD(0));
L_002ADE54:;
SET64(31, 0x2ade5c); SET64(5, RD(0) + RD(0)); F_002AEC70(c);
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002ADE78; }
SET64(31, 0x2ade74); SET64(4, RD(16) + RD(0)); F_001004B0(c);
L_002ADE74:;
SET64(2, RD(16) + RD(0));
L_002ADE78:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002ADE90(Ctx *c) { /* func_002ADE90 */
ENTER(0x2ade90);
SET32(4, RW(4) + -64); { F_002ADCA0(c); return; }
}

void F_002ADEA0(Ctx *c) { /* func_002ADEA0 */
ENTER(0x2adea0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002ADF2C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20896);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 52), RW(2)); if (t) goto L_002ADF14; }
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 208);
SET32(2, RW(2) + -20864);
SET32(5, RW(0) + -1);
SET64(31, 0x2adee4); wr32(c, (RW(17) + 52), RW(2)); F_002A76F0(c);
SET32(4, RW(17) + 160);
SET64(31, 0x2adef0); SET32(5, RW(0) + -1); F_002B1500(c);
SET32(4, RW(17) + 112);
SET64(31, 0x2adefc); SET32(5, RW(0) + -1); F_002B13D0(c);
SET32(4, RW(17) + 64);
SET64(31, 0x2adf08); SET32(5, RW(0) + -1); F_002B13D0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2adf14); SET64(5, RD(0) + RD(0)); F_002AEC70(c);
L_002ADF14:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002ADF30; }
SET64(31, 0x2adf2c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002ADF2C:;
SET64(2, RD(17) + RD(0));
L_002ADF30:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002ADF50(Ctx *c) { /* func_002ADF50 */
ENTER(0x2adf50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2adf64); SET64(16, RD(4) + RD(0)); F_002AE770(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -20896);
wr32(c, (RW(16) + 52), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002ADF90(Ctx *c) { /* func_002ADF90 */
ENTER(0x2adf90);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, (s64)(s32)0x540000);
SET64(2, (s32)rd32(c, (RW(28) + -30040)));
SET32(17, RW(17) + -26272);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
SET32(2, RW(3) << 2);
SET32(2, RW(2) + RW(3));
SET32(2, RW(2) << 3);
{ int t = RD(3) == RD(0); SET32(16, RW(17) + RW(2)); if (t) goto L_002ADFCC; }
SET32(4, RW(17) + 336); goto L_002ADFD0;
L_002ADFCC:;
SET32(4, RW(17) + 96);
L_002ADFD0:;
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
SET64(31, 0x2ae008); SET64(7, RSD(7) >> 48); F_00105C08(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ae014); SET32(5, RW(17) + 560); F_0010FF58(c);
SET64(31, 0x2ae01c); SET64(4, RD(16) + RD(0)); F_00104B48(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AE030(Ctx *c) { /* func_002AE030 */
ENTER(0x2ae030);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AE0C4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20880);
SET64(31, 0x2ae05c); wr32(c, (RW(17) + 52), RW(2)); F_002AED70(c);
{ int t = RD(17) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002AE0B0; }
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 208);
SET32(2, RW(2) + -20864);
SET32(5, RW(0) + -1);
SET64(31, 0x2ae07c); wr32(c, (RW(17) + 52), RW(2)); F_002A76F0(c);
SET32(4, RW(17) + 160);
SET64(31, 0x2ae088); SET32(5, RW(0) + -1); F_002B1500(c);
SET32(4, RW(17) + 112);
SET64(31, 0x2ae094); SET32(5, RW(0) + -1); F_002B13D0(c);
SET32(4, RW(17) + 64);
SET64(31, 0x2ae0a0); SET32(5, RW(0) + -1); F_002B13D0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ae0ac); SET64(5, RD(0) + RD(0)); F_002AEC70(c);
SET64(2, RD(16) << 48);
L_002AE0B0:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AE0C8; }
SET64(31, 0x2ae0c4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002AE0C4:;
SET64(2, RD(17) + RD(0));
L_002AE0C8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AE0E0(Ctx *c) { /* func_002AE0E0 */
ENTER(0x2ae0e0);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
SET64(20, RD(4) + RD(0));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET32(5, RW(0) + 4096);
SET64(31, 0x2ae10c); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_002AE770(c);
SET64(4, (s32)rd32(c, (RW(19) + 8)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20880);
SET64(5, (s32)rd32(c, (RW(19) + 12)));
wr32(c, (RW(20) + 52), RW(2));
SET32(3, RW(0) + 4096);
SET64(6, (s32)rd32(c, (RW(19) + 32)));
SET64(7, (s32)rd32(c, (RW(19) + 36)));
SET32(2, RW(3) - RW(4));
SET32(2, RSW(2) >> 1);
wr32(c, (RW(28) + -30032), RW(2));
SET32(2, RW(3) - RW(5));
SET32(2, RSW(2) >> 1);
SET64(31, 0x2ae148); wr32(c, (RW(28) + -30028), RW(2)); F_002AEE00(c);
SET64(18, (s64)(s32)0x540000);
SET64(17, RD(0) + RD(0));
SET32(18, RW(18) + -26272);
SET64(16, RD(18) + RD(0));
L_002AE158:;
SET64(5, (s16)rd16(c, (RW(19) + 32)));
SET64(6, (s16)rd16(c, (RW(19) + 8)));
SET64(7, (s16)rd16(c, (RW(19) + 12)));
SET64(8, (s16)rd16(c, (RW(19) + 40)));
SET64(9, (s16)rd16(c, (RW(19) + 44)));
SET64(31, 0x2ae174); SET64(4, RD(16) + RD(0)); F_001047D0(c);
SET32(17, RW(17) + 1);
SET64(2, RSD(17) < (s64)2);
{ int t = RD(2) != RD(0); SET32(16, RW(16) + 40); if (t) { POLL(); goto L_002AE158; } }
SET64(5, (s16)rd16(c, (RW(19) + 32)));
SET32(4, RW(18) + 96);
SET64(6, (s16)rd16(c, (RW(19) + 8)));
SET64(7, (s16)rd16(c, (RW(19) + 12)));
SET64(9, (s16)rd16(c, (RW(19) + 36)));
SET64(31, 0x2ae1a0); SET32(8, RW(0) + 2); F_00104CD0(c);
SET64(5, (s16)rd16(c, (RW(19) + 32)));
SET64(16, RD(2) + RD(0));
SET64(6, (s16)rd16(c, (RW(19) + 8)));
SET32(4, RW(18) + 336);
SET64(7, (s16)rd16(c, (RW(19) + 12)));
SET64(9, (s16)rd16(c, (RW(19) + 36)));
SET64(31, 0x2ae1c0); SET32(8, RW(0) + 2); F_00104CD0(c);
SET64(3, (s64)(s32)0x10000000);
SET64(6, RD(16) << 32);
SET64(4, RD(3) << 32);
SET64(2, RD(2) << 32);
SET64(3, RD(0) | 0x8000);
SET64(6, RSD(6) >> 32);
SET64(5, RD(3) | RD(4));
SET64(8, (s32)rd32(c, (RW(28) + -30024)));
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

void F_002AE300(Ctx *c) { /* func_002AE300 */
ENTER(0x2ae300);
SET32(29, RW(29) + -32);
SET64(3, (s64)(s32)0x540000);
wr64(c, (RW(29) + 16), RD(31));
SET32(3, RW(3) + -26272);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -30040)));
SET64(2, (s32)rd32(c, (RW(2) + 40)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002AE32C; }
SET32(6, RW(3) + 320); goto L_002AE330;
L_002AE32C:;
SET32(6, RW(3) + 80);
L_002AE330:;
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
SET64(31, 0x2ae364); SET64(8, RD(3) | RD(2)); F_002AEB00(c);
SET64(25, (s32)rd32(c, (RW(16) + 168)));
SET32(4, RW(16) + 160);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ae378); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AE390(Ctx *c) { /* func_002AE390 */
ENTER(0x2ae390);
SET32(29, RW(29) + -144);
wr64(c, (RW(29) + 96), RD(31));
wr128(c, (RW(29) + 80) & ~15u, &c->r[21]);
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(28) + -30040)));
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 68)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2ae3c8); SET64(5, RD(16) + RD(0)); F_002AB090(c);
SET64(25, (s32)rd32(c, (RW(16) + 52)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 12)));
{ u32 t = RW(25); SET64(31, 0x2ae3dc); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd8(c, (RW(16) + 324)));
{ int t = RD(3) == RD(0);  if (t) goto L_002AE4D4; }
SET64(25, (s32)rd32(c, (RW(16) + 72)));
SET32(4, RW(16) + 64);
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ae3fc); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
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
{ int t = RSD(21) <= 0; wr32(c, (RW(18) + 0), RW(21)); if (t) goto L_002AE4B0; }
{ int t = RSD(21) >= 0; SET32(20, RSW(21) >> 6); if (t) goto L_002AE448; }
SET32(2, RW(21) + 63);
SET32(20, RSW(2) >> 6);
L_002AE448:;
SET32(19, RW(29) + 120);
L_002AE44C:;
{ int t = RD(20) == RD(0); SET64(2, RD(21) & 0x3f); if (t) goto L_002AE45C; }
SET32(2, RW(0) + 64); goto L_002AE470;
L_002AE45C:;
{ int t = RSD(21) >= 0;  if (t) goto L_002AE470; }
{ int t = RD(2) == RD(0);  if (t) goto L_002AE470; }
SET32(2, RW(2) + -64);
L_002AE470:;
wr32(c, (RW(18) + 0), RW(2));
SET32(4, RW(16) + 208);
SET64(3, rd64(c, (RW(29) + 112)));
SET64(2, rd64(c, (RW(19) + 0)));
wr64(c, (RW(16) + 272), RD(3));
wr64(c, (RW(16) + 280), RD(2));
SET64(25, (s32)rd32(c, (RW(16) + 216)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ae498); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(29) + 112)));
SET32(21, RW(21) + -64);
SET32(20, RW(20) + -1);
SET32(2, RW(2) + 64);
{ int t = RSD(21) > 0; wr32(c, (RW(29) + 112), RW(2)); if (t) { POLL(); goto L_002AE44C; } }
L_002AE4B0:;
SET64(2, rd64(c, (RW(17) + 0)));
SET32(4, RW(16) + 112);
SET64(3, rd64(c, (RW(29) + 128)));
wr64(c, (RW(16) + 280), RD(2));
wr64(c, (RW(16) + 272), RD(3));
SET64(25, (s32)rd32(c, (RW(16) + 120)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ae4d4); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_002AE4D4:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 144); return;
}

void F_002AE500(Ctx *c) { /* func_002AE500 */
ENTER(0x2ae500);
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
SET64(31, 0x2ae53c); SET32(4, RW(4) + 208); F_002A7610(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_002AE550(Ctx *c) { /* func_002AE550 */
ENTER(0x2ae550);
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
SET32(6, RW(3) + -1); { F_002B14C0(c); return; }
}

void F_002AE590(Ctx *c) { /* func_002AE590 */
ENTER(0x2ae590);
SET64(6, (s32)rd32(c, (RW(5) + 0)));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET64(7, (s32)rd32(c, (RW(28) + -30032)));
SET64(5, (s32)rd32(c, (RW(28) + -30028)));
SET32(6, RW(7) + RW(6));
SET32(6, RW(6) << 4);
wr32(c, (RW(4) + 288), RW(6));
SET32(3, RW(5) + RW(3));
SET32(3, RW(3) << 4);
wr32(c, (RW(4) + 292), RW(3)); return;
}

void F_002AE5C0(Ctx *c) { /* func_002AE5C0 */
ENTER(0x2ae5c0);
SET32(29, RW(29) + -160);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2ae5d8); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_001046B8(c);
SET64(31, 0x2ae5e0); SET32(4, RW(0) + 1); F_00105E30(c);
SET64(31, 0x2ae5e8);  F_00107BC0(c);
SET64(31, 0x2ae5f0); SET64(4, (s64)(s32)0x40000); F_00100530(c);
SET64(18, RD(2) + RD(0));
SET64(4, RD(0) + RD(0));
SET64(3, RD(18) + RD(0));
L_002AE5FC:;
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
{ int t = RD(2) != RD(0); SET32(3, RW(3) + 128); if (t) { POLL(); goto L_002AE5FC; } }
SET64(17, RD(0) + RD(0));
SET64(16, RD(0) + RD(0));
L_002AE634:;
{ int t = RSD(16) >= 0; SET32(2, RSW(16) >> 6); if (t) goto L_002AE644; }
SET32(2, RW(16) + 63);
SET32(2, RSW(2) >> 6);
L_002AE644:;
SET64(5, RD(2) << 48);
SET32(4, RW(29) + 64);
SET64(5, RSD(5) >> 48);
SET32(6, RW(0) + 1);
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET32(10, RW(0) + 64);
SET64(31, 0x2ae66c); SET32(11, RW(0) + 1024); F_001051D0(c);
SET64(31, 0x2ae674); SET64(4, RD(0) + RD(0)); F_0010F8E0(c);
SET32(4, RW(29) + 64);
SET64(31, 0x2ae680); SET64(5, RD(18) + RD(0)); F_001053B8(c);
SET64(4, RD(0) + RD(0));
SET64(31, 0x2ae68c); SET64(5, RD(0) + RD(0)); F_00104EB8(c);
SET64(2, (s64)(s32)0x10000);
SET32(17, RW(17) + 1);
SET32(16, RW(16) + RW(2));
SET64(2, RSD(17) < (s64)16);
{ int t = RD(2) != RD(0); SET64(4, RD(18) + RD(0)); if (t) { POLL(); goto L_002AE634; } }
SET64(31, 0x2ae6ac);  F_00100430(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 160); return;
}

void F_002AE6D0(Ctx *c) { /* func_002AE6D0 */
ENTER(0x2ae6d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AE74C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 208);
SET32(2, RW(2) + -20864);
SET32(5, RW(0) + -1);
SET64(31, 0x2ae704); wr32(c, (RW(17) + 52), RW(2)); F_002A76F0(c);
SET32(4, RW(17) + 160);
SET64(31, 0x2ae710); SET32(5, RW(0) + -1); F_002B1500(c);
SET32(4, RW(17) + 112);
SET64(31, 0x2ae71c); SET32(5, RW(0) + -1); F_002B13D0(c);
SET32(4, RW(17) + 64);
SET64(31, 0x2ae728); SET32(5, RW(0) + -1); F_002B13D0(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2ae734); SET64(5, RD(0) + RD(0)); F_002AEC70(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AE750; }
SET64(31, 0x2ae74c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002AE74C:;
SET64(2, RD(17) + RD(0));
L_002AE750:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AE770(Ctx *c) { /* func_002AE770 */
ENTER(0x2ae770);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ae784); SET64(16, RD(4) + RD(0)); F_002AECD0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(16) + 64);
SET32(2, RW(2) + -20864);
SET64(31, 0x2ae798); wr32(c, (RW(16) + 52), RW(2)); F_002B1430(c);
SET64(31, 0x2ae7a0); SET32(4, RW(16) + 112); F_002B1430(c);
SET32(4, RW(16) + 160);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2ae7b8); SET64(8, RD(0) + RD(0)); F_002B1560(c);
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
SET64(31, 0x2ae7f0); wr32(c, (RW(29) + 44), RW(0)); F_002A7760(c);
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
SET64(31, 0x2ae834); wr8(c, (RW(16) + 323), (u8)RW(0)); F_002B1350(c);
SET32(4, RW(16) + 64);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ae844); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 64);
SET64(31, 0x2ae854); SET64(6, RD(5) + RD(0)); F_002B12E0(c);
SET32(4, RW(16) + 208);
SET64(31, 0x2ae860); SET32(5, RW(16) + 320); F_002A7670(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 112);
SET32(6, RW(0) + 5);
SET32(7, RW(0) + 128);
SET64(31, 0x2ae878); SET64(8, RD(5) + RD(0)); F_002B1350(c);
SET32(4, RW(16) + 112);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2ae888); SET64(6, RD(0) + RD(0)); F_002B1310(c);
SET32(4, RW(16) + 112);
SET32(5, RW(0) + 1);
SET64(31, 0x2ae898); SET32(6, RW(0) + 2); F_002B12E0(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002AE8B0(Ctx *c) { /* func_002AE8B0 */
ENTER(0x2ae8b0);
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

void F_002AE940(Ctx *c) { /* func_002AE940 */
ENTER(0x2ae940);
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
{ int t = RSD(8) <= 0; wr32(c, (RW(4) + 32), RW(3)); if (t) goto L_002AE9B0; }
L_002AE98C:;
SET64(7, (s32)rd32(c, (RW(4) + 32)));
SET64(3, RD(9) + RD(0));
rd128(c, (RW(5) + 0) & ~15u, &c->r[8]);
SET32(9, RW(9) + -1);
SET32(6, RW(7) + 16);
wr32(c, (RW(4) + 32), RW(6));
SET32(5, RW(5) + 16);
{ int t = RSD(3) > 0; wr128(c, (RW(7) + 0) & ~15u, &c->r[8]); if (t) { POLL(); goto L_002AE98C; } }
L_002AE9B0:;
 return;
}

void F_002AE9C0(Ctx *c) { /* func_002AE9C0 */
ENTER(0x2ae9c0);
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

void F_002AEA10(Ctx *c) { /* func_002AEA10 */
ENTER(0x2aea10);
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
{ int t = RD(1) != RD(0); wr64(c, (RW(3) + 0), RD(5)); if (t) goto L_002AEA50; }
SET64(3, RD(0) + RD(0)); goto L_002AEA54;
L_002AEA50:;
SET32(3, RW(6) >> 3);
L_002AEA54:;
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

void F_002AEA90(Ctx *c) { /* func_002AEA90 */
ENTER(0x2aea90);
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

void F_002AEB00(Ctx *c) { /* func_002AEB00 */
ENTER(0x2aeb00);
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

void F_002AEB60(Ctx *c) { /* func_002AEB60 */
ENTER(0x2aeb60);
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
{ int t = RSD(9) <= 0; wr32(c, (RW(4) + 32), RW(3)); if (t) goto L_002AEBD8; }
L_002AEBB0:;
SET64(7, (s32)rd32(c, (RW(4) + 32)));
SET64(3, RD(10) + RD(0));
rd128(c, (RW(5) + 0) & ~15u, &c->r[8]);
SET32(10, RW(10) + -1);
SET32(6, RW(7) + 16);
wr32(c, (RW(4) + 32), RW(6));
SET32(5, RW(5) + 16);
{ int t = RSD(3) > 0; wr128(c, (RW(7) + 0) & ~15u, &c->r[8]); if (t) { POLL(); goto L_002AEBB0; } }
L_002AEBD8:;
 return;
}

void F_002AEBE0(Ctx *c) { /* func_002AEBE0 */
ENTER(0x2aebe0);
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

void F_002AEC30(Ctx *c) { /* func_002AEC30 */
ENTER(0x2aec30);
SET64(3, RD(6) + RD(0));
{ int t = RSD(3) <= 0; SET32(6, RW(3) + -1); if (t) goto L_002AEC60; }
L_002AEC3C:;
SET64(8, (s32)rd32(c, (RW(4) + 32)));
SET64(3, RD(6) + RD(0));
rd128(c, (RW(5) + 0) & ~15u, &c->r[9]);
SET32(6, RW(6) + -1);
SET32(7, RW(8) + 16);
wr32(c, (RW(4) + 32), RW(7));
SET32(5, RW(5) + 16);
{ int t = RSD(3) > 0; wr128(c, (RW(8) + 0) & ~15u, &c->r[9]); if (t) { POLL(); goto L_002AEC3C; } }
L_002AEC60:;
 return;
}

void F_002AEC70(Ctx *c) { /* func_002AEC70 */
ENTER(0x2aec70);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AECB8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(5, RW(0) + -1);
SET32(2, RW(2) + -20848);
SET64(31, 0x2aeca0); wr32(c, (RW(17) + 52), RW(2)); F_002AB360(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AECBC; }
SET64(31, 0x2aecb8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002AECB8:;
SET64(2, RD(17) + RD(0));
L_002AECBC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AECD0(Ctx *c) { /* func_002AECD0 */
ENTER(0x2aecd0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + -20848);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(3, RW(5) + 7);
wr32(c, (RW(4) + 52), RW(2));
SET64(16, RD(4) + RD(0));
SET32(2, RW(0) + -8);
SET32(6, RW(0) + 128);
SET64(2, RD(3) & RD(2));
SET64(31, 0x2aed04); SET32(5, RW(2) << 5); F_002AB430(c);
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

void F_002AED70(Ctx *c) { /* func_002AED70 */
ENTER(0x2aed70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(28) + -30024)));
{ int t = RD(16) == RD(0);  if (t) goto L_002AEDF0; }
{ int t = RD(16) == RD(0);  if (t) goto L_002AEDEC; }
SET64(4, (s32)rd32(c, (RW(16) + 8)));
{ int t = RD(4) == RD(0);  if (t) goto L_002AEDAC; }
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2aedac); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AEDAC:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(4) == RD(0);  if (t) goto L_002AEDC8; }
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2aedc8); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AEDC8:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(4) == RD(0);  if (t) goto L_002AEDE4; }
SET64(25, (s32)rd32(c, (RW(4) + 64)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2aede4); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AEDE4:;
SET64(31, 0x2aedec); SET64(4, RD(16) + RD(0)); F_001004B0(c);
L_002AEDEC:;
wr32(c, (RW(28) + -30024), RW(0));
L_002AEDF0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AEE00(Ctx *c) { /* func_002AEE00 */
ENTER(0x2aee00);
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
SET64(3, (s32)rd32(c, (RW(28) + -30024)));
{ int t = RD(3) == RD(0); SET64(16, RD(7) + RD(0)); if (t) goto L_002AEE3C; }
L_002AEE34:;
SET64(31, rd64(c, (RW(29) + 80))); goto L_002AEEC8;
L_002AEE3C:;
SET64(31, 0x2aee44); SET32(4, RW(0) + 12); F_00100670(c);
SET64(20, RD(2) + RD(0));
{ int t = RD(20) == RD(0); SET32(4, RW(0) + 80); if (t) goto L_002AEEC0; }
SET64(31, 0x2aee58);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(7, RD(16) + RD(0)); if (t) goto L_002AEE70; }
SET64(4, RD(2) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x2aee70); SET64(6, RD(18) + RD(0)); F_002AEF80(c);
L_002AEE70:;
wr32(c, (RW(20) + 8), RW(2));
SET64(31, 0x2aee7c); SET32(4, RW(0) + 80); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(4, RD(2) + RD(0)); if (t) goto L_002AEE94; }
SET64(5, RD(19) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2aee94); SET64(7, RD(17) + RD(0)); F_002AF130(c);
L_002AEE94:;
wr32(c, (RW(20) + 0), RW(2));
SET64(31, 0x2aeea0); SET32(4, RW(0) + 80); F_00100670(c);
SET64(4, RD(2) + RD(0));
{ int t = RD(4) == RD(0); SET64(5, RD(19) + RD(0)); if (t) goto L_002AEEBC; }
SET64(6, RD(18) + RD(0));
SET64(31, 0x2aeeb8); SET64(7, RD(17) + RD(0)); F_002AF130(c);
SET64(4, RD(2) + RD(0));
L_002AEEBC:;
wr32(c, (RW(20) + 4), RW(4));
L_002AEEC0:;
wr32(c, (RW(28) + -30024), RW(20)); { POLL(); goto L_002AEE34; }
L_002AEEC8:;
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

static void B_002AEEF0(Ctx *c, u32 entry) { /* func_002AEEF0 */
ENTER(entry);
switch (entry) { case 0x2aef00: goto L_002AEF00; }
L_002AEEF0:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25);  switch (t) { case 0x2aeef0: goto L_002AEEF0; case 0x2aef00: goto L_002AEF00; default: rt_jump(c, t); return; } }
L_002AEF00:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AEF5C; }
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20832);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + -25664);
SET64(31, 0x2aef38); wr32(c, (RW(17) + 64), RW(2)); F_002B0560(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2aef44); SET32(5, RW(0) + -1); F_002B1AE0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AEF60; }
SET64(31, 0x2aef5c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002AEF5C:;
SET64(2, RD(17) + RD(0));
L_002AEF60:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_002AEEF0(Ctx *c) { B_002AEEF0(c, 0x2aeef0); }
void F_002AEF00(Ctx *c) { B_002AEEF0(c, 0x2aef00); }

void F_002AEF80(Ctx *c) { /* func_002AEF80 */
ENTER(0x2aef80);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + -20832);
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
SET64(31, 0x2aefc4); SET64(7, RD(0) + RD(0)); F_002B1B40(c);
SET32(2, RW(0) + 58);
wr32(c, (RW(19) + 52), RW(16));
SET64(6, RD(0) + RD(0));
SET64(4, RD(0) + RD(0));
{ int t = RD(16) == RD(2); SET64(5, RD(0) + RD(0)); if (t) goto L_002AF014; }
SET32(2, RW(0) + 50);
{ int t = RD(16) == RD(2); SET32(2, RW(0) + 49); if (t) goto L_002AF014; }
{ int t = RD(16) == RD(2);  if (t) goto L_002AF004; }
SET32(2, RW(0) + 48);
{ int t = RD(16) == RD(2);  if (t) goto L_002AF004; }
SET32(2, RW(17) + -1); goto L_002AF024;
L_002AF004:;
SET32(6, RW(0) + 6);
SET32(4, RW(0) + 5);
SET64(5, RD(0) + RD(0)); goto L_002AF020;
L_002AF014:;
SET32(6, RW(0) + 6);
SET32(5, RW(0) + 1);
SET64(4, RD(6) + RD(0));
L_002AF020:;
SET32(2, RW(17) + -1);
L_002AF024:;
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
SET32(4, RW(4) + -25664);
SET64(7, RD(16) + RD(0));
SET64(31, 0x2af064); SET32(5, RSW(2) >> (RW(5) & 31)); F_002B0600(c);
wr32(c, (RW(19) + 48), RW(2));
SET64(6, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(4, RD(19) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2af080); SET32(5, RSW(2) >> 11); F_002B1AB0(c);
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

static void B_002AF0A0(Ctx *c, u32 entry) { /* func_002AF0A0 */
ENTER(entry);
switch (entry) { case 0x2af0b0: goto L_002AF0B0; }
L_002AF0A0:;
SET64(25, (s32)rd32(c, (RW(4) + 8)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25);  switch (t) { case 0x2af0a0: goto L_002AF0A0; case 0x2af0b0: goto L_002AF0B0; default: rt_jump(c, t); return; } }
L_002AF0B0:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AF10C; }
SET64(5, (s32)rd32(c, (RW(17) + 48)));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20816);
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + -25664);
SET64(31, 0x2af0e8); wr32(c, (RW(17) + 64), RW(2)); F_002B0560(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2af0f4); SET32(5, RW(0) + -1); F_002B0E10(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AF110; }
SET64(31, 0x2af10c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002AF10C:;
SET64(2, RD(17) + RD(0));
L_002AF110:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_002AF0A0(Ctx *c) { B_002AF0A0(c, 0x2af0a0); }
void F_002AF0B0(Ctx *c) { B_002AF0A0(c, 0x2af0b0); }

void F_002AF130(Ctx *c) { /* func_002AF130 */
ENTER(0x2af130);
SET32(29, RW(29) + -80);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 64), RD(31));
SET32(2, RW(2) + -20816);
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
SET64(31, 0x2af178); SET64(7, RD(0) + RD(0)); F_002B0E70(c);
SET32(3, RW(0) + 58);
wr32(c, (RW(19) + 52), RW(16));
SET64(6, RD(0) + RD(0));
SET64(5, RD(0) + RD(0));
{ int t = RD(16) == RD(3); SET64(2, RD(0) + RD(0)); if (t) goto L_002AF1EC; }
SET32(3, RW(0) + 50);
{ int t = RD(16) == RD(3); SET32(3, RW(0) + 10); if (t) goto L_002AF1EC; }
{ int t = RD(16) == RD(3);  if (t) goto L_002AF1EC; }
SET32(3, RW(0) + 2);
{ int t = RD(16) == RD(3); SET32(3, RW(0) + 49); if (t) goto L_002AF1EC; }
{ int t = RD(16) == RD(3);  if (t) goto L_002AF1DC; }
SET32(3, RW(0) + 48);
{ int t = RD(16) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_002AF1DC; }
{ int t = RD(16) == RD(3);  if (t) goto L_002AF1DC; }
{ int t = RD(16) == RD(0);  if (t) goto L_002AF1DC; }
SET32(3, RW(17) + -1); goto L_002AF1FC;
L_002AF1DC:;
SET32(6, RW(0) + 6);
SET32(5, RW(0) + 5);
SET64(2, RD(0) + RD(0)); goto L_002AF1F8;
L_002AF1EC:;
SET32(6, RW(0) + 6);
SET32(2, RW(0) + 1);
SET64(5, RD(6) + RD(0));
L_002AF1F8:;
SET32(3, RW(17) + -1);
L_002AF1FC:;
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
SET64(31, 0x2af23c); SET32(4, RW(4) + -25664); F_002B0600(c);
wr32(c, (RW(19) + 48), RW(2));
SET64(7, RD(16) + RD(0));
SET64(3, (s32)rd32(c, (RW(2) + 12)));
SET64(4, RD(19) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(2, (s32)rd32(c, (RW(19) + 56)));
SET32(5, RSW(3) >> 11);
SET32(2, RW(2) + -1);
SET32(2, RSW(2) >> 6);
SET64(31, 0x2af268); SET32(6, RW(2) + 1); F_002B0DD0(c);
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002AF290(Ctx *c) { /* func_002AF290 */
ENTER(0x2af290);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 252)));
SET64(2, RD(2) & 0x6);
{ int t = RD(2) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AF2EC; }
SET64(4, (s32)rd32(c, (RW(17) + 244)));
L_002AF2B8:;
{ int t = RD(4) == RD(0);  if (t) goto L_002AF2D0; }
SET64(25, (s32)rd32(c, (RW(4) + 152)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2af2d0); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
L_002AF2D0:;
SET64(25, (s32)rd32(c, (RW(17) + 40)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2af2e4); SET32(4, RW(17) + 32); rt_call(c, t); }
SET64(31, rd64(c, (RW(29) + 32))); goto L_002AF324;
L_002AF2EC:;
SET64(3, (s32)rd32(c, (RW(17) + 252)));
SET32(2, RW(0) + -3);
SET64(2, RD(3) & RD(2));
wr32(c, (RW(17) + 252), RW(2));
SET64(25, (s32)rd32(c, (RW(17) + 120)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2af30c); SET32(4, RW(17) + 112); rt_call(c, t); }
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2af31c); SET32(4, RW(4) + -25696); F_002B19D0(c);
SET64(4, (s32)rd32(c, (RW(17) + 244))); { POLL(); goto L_002AF2B8; }
L_002AF324:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AF340(Ctx *c) { /* func_002AF340 */
ENTER(0x2af340);
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
{ int t = RD(7) == RD(0); SET64(16, RD(8) + RD(0)); if (t) goto L_002AF49C; }
SET64(3, (s32)rd32(c, (RW(19) + 12)));
SET32(2, RW(0) + 36);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF434; }
SET32(2, RW(0) + 44);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF434; }
SET32(2, RW(0) + 20);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF434; }
SET32(2, RW(0) + 27);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF424; }
SET32(2, RW(0) + 19);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF424; }
SET32(2, RW(0) + 10);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF410; }
SET32(2, RW(0) + 2);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF410; }
SET32(2, RW(0) + 49);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF3FC; }
SET32(2, RW(0) + 48);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF3FC; }
SET32(2, RW(0) + 1);
{ int t = RD(3) == RD(2);  if (t) goto L_002AF3FC; }
{ int t = RD(3) == RD(0);  if (t) goto L_002AF3FC; }
SET64(20, RD(0) + RD(0)); goto L_002AF45C;
L_002AF3FC:;
SET64(3, (s16)rd16(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(19) + 2)));
mul_s(c, 0, 2, RSW(3), RSW(2));
SET32(20, RW(2) << 2); goto L_002AF45C;
L_002AF410:;
SET64(3, (s16)rd16(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(19) + 2)));
mul_s(c, 0, 2, RSW(3), RSW(2));
SET32(20, RW(2) << 1); goto L_002AF45C;
L_002AF424:;
SET64(3, (s16)rd16(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(19) + 2)));
mul_s(c, 0, 20, RSW(3), RSW(2)); goto L_002AF45C;
L_002AF434:;
SET64(3, (s16)rd16(c, (RW(19) + 0)));
SET64(2, (s16)rd16(c, (RW(19) + 2)));
mul_s(c, 0, 2, RSW(3), RSW(2));
{ int t = RSD(2) >= 0; SET32(20, RSW(2) >> 1); if (t) goto L_002AF45C; }
SET32(2, RW(2) + 1);
SET32(20, RSW(2) >> 1);
SET32(4, RW(0) + 20); goto L_002AF460;
SET64(20, RD(0) + RD(0));
L_002AF45C:;
SET32(4, RW(0) + 20);
L_002AF460:;
SET64(31, 0x2af468);  F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002AF480; }
SET64(4, RD(2) + RD(0));
SET64(5, RD(20) + RD(0));
SET64(31, 0x2af480); SET32(6, RW(0) + 128); F_002AB430(c);
L_002AF480:;
wr32(c, (RW(19) + 248), RW(2));
SET64(5, RD(17) + RD(0));
SET64(4, (s32)rd32(c, (RW(2) + 4)));
SET64(31, 0x2af494); SET64(6, RD(20) + RD(0)); F_00127218(c);
SET64(2, (s32)rd32(c, (RW(19) + 248)));
SET64(17, (s32)rd32(c, (RW(2) + 4)));
L_002AF49C:;
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
SET64(31, 0x2af4dc); SET32(6, RSW(2) >> 6); F_002B09B0(c);
{ int t = RD(18) == RD(0);  if (t) goto L_002AF528; }
SET64(25, (s32)rd32(c, (RW(19) + 120)));
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2af4f8); SET32(4, RW(19) + 112); rt_call(c, t); }
L_002AF4F8:;
{ int t = RD(16) == RD(0);  if (t) goto L_002AF510; }
SET64(2, (s32)rd32(c, (RW(19) + 252)));
SET64(2, RD(2) | 0x4);
wr32(c, (RW(19) + 252), RW(2)); goto L_002AF520;
L_002AF510:;
SET64(3, (s32)rd32(c, (RW(19) + 252)));
SET32(2, RW(0) + -5);
SET64(2, RD(3) & RD(2));
wr32(c, (RW(19) + 252), RW(2));
L_002AF520:;
SET64(2, RD(0) + RD(0)); goto L_002AF538;
L_002AF528:;
SET64(2, (s32)rd32(c, (RW(19) + 252)));
SET64(2, RD(2) | 0x2);
wr32(c, (RW(19) + 252), RW(2)); { POLL(); goto L_002AF4F8; }
L_002AF538:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002AF560(Ctx *c) { /* func_002AF560 */
ENTER(0x2af560);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 240)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002AF64C; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(8, RW(0) + 31);
SET64(4, (s64)(s32)0x80000000);
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(3, (s16)rd16(c, (RW(16) + 0)));
SET32(5, RSW(2) >> 6);
L_002AF590:;
SET64(2, RD(3) & RD(4));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002AF5C4; }
SET64(1, RD(4) < RD(3));
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002AF5BC; }
SET32(2, RW(0) + 1); goto L_002AF5BC;
SET64(2, RD(0) + RD(0));
L_002AF5BC:;
SET32(8, RW(8) + RW(2)); goto L_002AF5D0;
L_002AF5C4:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0); SET32(8, RW(8) + -1); if (t) { POLL(); goto L_002AF590; } }
L_002AF5D0:;
SET64(1, RSD(8) < (s64)11);
{ int t = RD(1) != RD(0);  if (t) goto L_002AF5E0; }
SET32(8, RW(0) + 10);
L_002AF5E0:;
SET64(3, (s16)rd16(c, (RW(16) + 2)));
SET32(9, RW(0) + 31);
SET64(4, (s64)(s32)0x80000000);
L_002AF5EC:;
SET64(2, RD(3) & RD(4));
SET64(2, RD(0) < RD(2));
SET64(2, RD(2) ^ 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002AF620; }
SET64(1, RD(4) < RD(3));
{ int t = RD(1) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002AF618; }
SET32(2, RW(0) + 1); goto L_002AF618;
SET64(2, RD(0) + RD(0));
L_002AF618:;
SET32(9, RW(9) + RW(2)); goto L_002AF630;
L_002AF620:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0); SET32(9, RW(9) + -1); if (t) { POLL(); goto L_002AF5EC; } }
L_002AF630:;
SET64(1, RSD(9) < (s64)11);
{ int t = RD(1) != RD(0); SET64(6, (s16)rd16(c, (RW(16) + 4))); if (t) goto L_002AF640; }
SET32(9, RW(0) + 10);
L_002AF640:;
SET64(7, (s32)rd32(c, (RW(16) + 12)));
SET64(31, 0x2af64c); SET32(4, RW(16) + 32); F_002B1880(c);
L_002AF64C:;
SET64(5, (s32)rd32(c, (RW(16) + 244)));
{ int t = RD(5) == RD(0); SET32(4, RW(16) + 32); if (t) goto L_002AF694; }
SET64(3, (s32)rd32(c, (RW(5) + 128)));
{ int t = RD(3) == RD(0);  if (t) goto L_002AF6B4; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET32(4, RW(16) + 32);
SET64(6, (s32)rd32(c, (RW(5) + 136)));
SET64(8, RD(0) + RD(0));
SET64(7, (s32)rd32(c, (RW(5) + 144)));
SET32(9, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x2af688); SET32(5, RSW(2) >> 6); F_002B17C0(c);
L_002AF688:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002AF6B8;
SET32(4, RW(16) + 32);
L_002AF694:;
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(8, RD(0) + RD(0));
SET64(31, 0x2af6ac); SET32(9, RW(0) + 1); F_002B17C0(c);
 { POLL(); goto L_002AF688; }
L_002AF6B4:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002AF6B8:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AF6D0(Ctx *c) { /* func_002AF6D0 */
ENTER(0x2af6d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 240)));
{ int t = RD(4) == RD(0);  if (t) goto L_002AF71C; }
SET64(2, (s32)rd32(c, (RW(16) + 252)));
SET64(2, RD(2) & 0x1);
{ int t = RD(2) != RD(0);  if (t) goto L_002AF714; }
{ int t = RD(4) == RD(0);  if (t) goto L_002AF714; }
SET64(25, (s32)rd32(c, (RW(4) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2af714); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AF714:;
wr32(c, (RW(16) + 240), RW(0));
wr32(c, (RW(16) + 252), RW(0));
L_002AF71C:;
SET64(4, (s32)rd32(c, (RW(16) + 248)));
{ int t = RD(4) == RD(0);  if (t) goto L_002AF744; }
{ int t = RD(4) == RD(0);  if (t) goto L_002AF740; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2af740); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002AF740:;
wr32(c, (RW(16) + 248), RW(0));
L_002AF744:;
SET64(31, rd64(c, (RW(29) + 16)));
SET32(2, RW(0) + 1);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AF760(Ctx *c) { /* func_002AF760 */
ENTER(0x2af760);
SET64(2, (s32)rd32(c, (RW(4) + 240)));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002AF794; }
SET64(2, (s32)rd32(c, (RW(5) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_002AF790; }
SET64(3, (s32)rd32(c, (RW(4) + 252)));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 240), RW(5));
SET64(3, RD(3) | 0x1);
wr32(c, (RW(4) + 252), RW(3)); goto L_002AF794;
L_002AF790:;
SET64(2, RD(0) + RD(0));
L_002AF794:;
 return;
}

void F_002AF7A0(Ctx *c) { /* func_002AF7A0 */
ENTER(0x2af7a0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 240)));
{ int t = RD(2) == RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002AF7D0; }
L_002AF7C8:;
SET64(2, RD(0) + RD(0)); goto L_002AF80C;
L_002AF7D0:;
SET64(31, 0x2af7d8); SET32(4, RW(0) + 28); F_00100670(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002AF7F8; }
SET64(7, (s32)rd32(c, (RW(18) + 12)));
SET64(5, RD(17) + RD(0));
SET64(6, RD(16) + RD(0));
SET64(4, RD(2) + RD(0));
SET64(31, 0x2af7f8); SET64(8, RD(0) + RD(0)); F_002AFE30(c);
L_002AF7F8:;
wr32(c, (RW(18) + 240), RW(2));
SET64(2, (s32)rd32(c, (RW(2) + 0)));
{ int t = RD(2) == RD(0);  if (t) { POLL(); goto L_002AF7C8; } }
SET32(2, RW(0) + 1);
L_002AF80C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

static void B_002AF830(Ctx *c, u32 entry) { /* func_002AF830 */
ENTER(entry);
switch (entry) { case 0x2af850: goto L_002AF850; }
wr32(c, (RW(4) + 244), RW(5));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25);  switch (t) { case 0x2af850: goto L_002AF850; default: rt_jump(c, t); return; } }
L_002AF850:;
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AF8CC; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20800);
wr32(c, (RW(17) + 20), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2af888);  rt_call(c, t); }
SET32(4, RW(17) + 112);
SET64(31, 0x2af894); SET32(5, RW(0) + -1); F_002B0B60(c);
SET32(4, RW(17) + 32);
SET64(31, 0x2af8a0); SET32(5, RW(0) + -1); F_002B18F0(c);
{ int t = RD(17) == RD(0); SET64(2, RD(16) << 48); if (t) goto L_002AF8B8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20760);
wr32(c, (RW(17) + 20), RW(2));
SET64(2, RD(16) << 48);
L_002AF8B8:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AF8D0; }
SET64(31, 0x2af8cc); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002AF8CC:;
SET64(2, RD(17) + RD(0));
L_002AF8D0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}
void F_002AF830(Ctx *c) { B_002AF830(c, 0x2af830); }
void F_002AF850(Ctx *c) { B_002AF830(c, 0x2af850); }

void F_002AF8F0(Ctx *c) { /* func_002AF8F0 */
ENTER(0x2af8f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2af904); SET64(16, RD(4) + RD(0)); F_002AF9F0(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(16) + 32);
SET32(2, RW(2) + -20800);
SET64(31, 0x2af918); wr32(c, (RW(16) + 20), RW(2)); F_002B1950(c);
SET64(31, 0x2af920); SET32(4, RW(16) + 112); F_002B0BC0(c);
SET32(4, RW(16) + 32);
SET32(5, RW(0) + 1);
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
wr32(c, (RW(16) + 240), RW(0));
wr32(c, (RW(16) + 244), RW(0));
wr32(c, (RW(16) + 248), RW(0));
SET64(31, 0x2af944); wr32(c, (RW(16) + 252), RW(0)); F_002B1760(c);
SET32(4, RW(16) + 32);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2af954); SET64(6, RD(0) + RD(0)); F_002B1720(c);
SET32(4, RW(16) + 32);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2af964); SET32(6, RW(0) + 1); F_002B16E0(c);
SET32(5, RW(0) + 1);
SET32(4, RW(16) + 32);
SET64(31, 0x2af974); SET64(6, RD(5) + RD(0)); F_002B16B0(c);
SET32(4, RW(16) + 32);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2af98c); SET64(8, RD(0) + RD(0)); F_002B1650(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AF9A0(Ctx *c) { /* func_002AF9A0 */
ENTER(0x2af9a0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002AF9DC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20760);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 20), RW(3)); if (t) goto L_002AF9D8; }
SET64(31, 0x2af9d8);  F_001004B0(c);
L_002AF9D8:;
SET64(2, RD(16) + RD(0));
L_002AF9DC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AF9F0(Ctx *c) { /* func_002AF9F0 */
ENTER(0x2af9f0);
SET64(2, (s64)(s32)0x4e0000);
wr16(c, (RW(4) + 2), (u16)RW(6));
SET32(2, RW(2) + -20760);
wr16(c, (RW(4) + 0), (u16)RW(5));
wr32(c, (RW(4) + 20), RW(2));
wr32(c, (RW(4) + 12), RW(7));
{ int t = RD(8) != RD(0); wr32(c, (RW(4) + 16), RW(8)); if (t) goto L_002AFB14; }
SET32(2, RW(0) + 20);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 19); if (t) goto L_002AFAB4; }
{ int t = RD(7) == RD(2);  if (t) goto L_002AFA80; }
SET32(2, RW(0) + 2);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 1); if (t) goto L_002AFA5C; }
{ int t = RD(7) == RD(2);  if (t) goto L_002AFA48; }
{ int t = RD(7) == RD(0);  if (t) goto L_002AFA48; }
SET64(3, (s16)rd16(c, (RW(4) + 0))); goto L_002AFAE8;
L_002AFA48:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
SET64(2, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 6), (u16)RW(3));
wr16(c, (RW(4) + 8), (u16)RW(2)); goto L_002AFAE4;
L_002AFA5C:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002AFA70; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002AFA70:;
wr16(c, (RW(4) + 6), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 8), (u16)RW(2)); goto L_002AFAE4;
L_002AFA80:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002AFA94; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002AFA94:;
SET64(3, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 6), (u16)RW(2));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002AFAAC; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002AFAAC:;
wr16(c, (RW(4) + 8), (u16)RW(2)); goto L_002AFAE4;
L_002AFAB4:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 2); if (t) goto L_002AFAC8; }
SET32(2, RW(3) + 3);
SET32(2, RSW(2) >> 2);
L_002AFAC8:;
SET64(3, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 6), (u16)RW(2));
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002AFAE0; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002AFAE0:;
wr16(c, (RW(4) + 8), (u16)RW(2));
L_002AFAE4:;
SET64(3, (s16)rd16(c, (RW(4) + 0)));
L_002AFAE8:;
SET64(2, (s16)rd16(c, (RW(4) + 6)));
SET32(3, RW(3) + -1);
SET32(2, RW(2) + -1);
SET32(3, RSW(3) >> 6);
SET32(2, RSW(2) >> 6);
SET32(3, RW(3) + 1);
SET32(2, RW(2) + 1);
wr16(c, (RW(4) + 4), (u16)RW(3));
wr16(c, (RW(4) + 10), (u16)RW(2));
L_002AFB0C:;
SET64(2, RD(4) + RD(0)); goto L_002AFBF4;
L_002AFB14:;
SET64(6, (s16)rd16(c, (RW(4) + 0)));
SET32(2, RW(0) + 36);
SET64(3, (s16)rd16(c, (RW(4) + 2)));
wr16(c, (RW(4) + 6), (u16)RW(6));
{ int t = RD(7) == RD(2); wr16(c, (RW(4) + 8), (u16)RW(3)); if (t) goto L_002AFBC4; }
SET32(2, RW(0) + 44);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 20); if (t) goto L_002AFBC4; }
{ int t = RD(7) == RD(2);  if (t) goto L_002AFBC4; }
SET32(2, RW(0) + 27);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 19); if (t) goto L_002AFBC4; }
{ int t = RD(7) == RD(2);  if (t) goto L_002AFBC4; }
SET32(2, RW(0) + 58);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 50); if (t) goto L_002AFBAC; }
{ int t = RD(7) == RD(2);  if (t) goto L_002AFBAC; }
SET32(2, RW(0) + 10);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 2); if (t) goto L_002AFBAC; }
{ int t = RD(7) == RD(2);  if (t) goto L_002AFBAC; }
SET32(2, RW(0) + 49);
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 48); if (t) goto L_002AFBAC; }
{ int t = RD(7) == RD(2);  if (t) goto L_002AFBAC; }
SET32(2, RW(0) + 1);
{ int t = RD(7) == RD(2);  if (t) goto L_002AFBAC; }
{ int t = RD(7) == RD(0);  if (t) goto L_002AFBAC; }
SET32(2, RW(5) + -1); goto L_002AFBDC;
L_002AFBAC:;
SET64(2, (s16)rd16(c, (RW(4) + 0)));
SET32(2, RW(2) + -1);
SET32(2, RSW(2) >> 6);
SET32(2, RW(2) + 1);
SET32(5, RW(2) << 6); goto L_002AFBD8;
L_002AFBC4:;
SET64(2, (s16)rd16(c, (RW(4) + 0)));
SET32(2, RW(2) + -1);
SET32(2, RSW(2) >> 7);
SET32(2, RW(2) + 1);
SET32(5, RW(2) << 7);
L_002AFBD8:;
SET32(2, RW(5) + -1);
L_002AFBDC:;
SET32(2, RSW(2) >> 6);
SET32(2, RW(2) + 1);
wr16(c, (RW(4) + 4), (u16)RW(2));
SET64(2, (s16)rd16(c, (RW(4) + 4)));
wr16(c, (RW(4) + 10), (u16)RW(2)); { POLL(); goto L_002AFB0C; }
L_002AFBF4:;
 return;
}

void F_002AFC00(Ctx *c) { /* func_002AFC00 */
ENTER(0x2afc00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AFC48; }
SET64(2, rd8(c, (RW(17) + 16)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20744);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 20), RW(3)); if (t) goto L_002AFC54; }
SET64(2, RD(16) << 48);
L_002AFC34:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AFC4C; }
SET64(31, 0x2afc48); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002AFC48:;
SET64(2, RD(17) + RD(0));
L_002AFC4C:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002AFC6C;
L_002AFC54:;
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2afc64); SET32(4, RW(4) + -25664); F_002B0560(c);
SET64(2, RD(16) << 48); { POLL(); goto L_002AFC34; }
L_002AFC6C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AFC80(Ctx *c) { /* func_002AFC80 */
ENTER(0x2afc80);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + -20744);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(9, RD(0) + RD(0));
wr32(c, (RW(4) + 20), RW(2));
SET64(16, RD(4) + RD(0));
SET64(2, RD(0) < RD(8));
wr32(c, (RW(4) + 4), RW(7));
{ int t = RD(6) == RD(0); wr8(c, (RW(4) + 16), (u8)RW(2)); if (t) goto L_002AFD08; }
SET32(2, RW(0) + 1);
{ int t = RD(6) != RD(2);  if (t) goto L_002AFCF0; }
{ int t = RD(5) == RD(0);  if (t) goto L_002AFD5C; }
{ int t = RD(5) != RD(2);  if (t) goto L_002AFCD8; }
wr32(c, (RW(16) + 12), RW(2));
SET32(2, RW(0) + 256);
wr32(c, (RW(16) + 8), RW(2));
L_002AFCD8:;
SET32(2, RW(0) + 2);
{ int t = RD(7) == RD(2);  if (t) goto L_002AFCEC; }
SET64(2, rd8(c, (RW(16) + 16))); goto L_002AFCF4;
L_002AFCEC:;
SET32(9, RW(0) + 1);
L_002AFCF0:;
SET64(2, rd8(c, (RW(16) + 16)));
L_002AFCF4:;
{ int t = RD(2) == RD(0);  if (t) goto L_002AFD6C; }
wr32(c, (RW(16) + 0), RW(8));
L_002AFD00:;
SET64(2, RD(16) + RD(0)); goto L_002AFDA0;
L_002AFD08:;
{ int t = RD(5) == RD(0); SET32(3, RW(0) + 8); if (t) goto L_002AFD4C; }
SET32(2, RW(0) + 1);
{ int t = RD(5) != RD(2); SET32(2, RW(0) + 10); if (t) goto L_002AFD2C; }
SET32(2, RW(0) + 16);
wr32(c, (RW(16) + 8), RW(2));
wr32(c, (RW(16) + 12), RW(2));
L_002AFD28:;
SET32(2, RW(0) + 10);
L_002AFD2C:;
{ int t = RD(7) == RD(2); SET32(2, RW(0) + 2); if (t) goto L_002AFD44; }
{ int t = RD(7) == RD(2);  if (t) goto L_002AFD44; }
if (RD(7) == 0) SET64(9, RD(0)); { POLL(); goto L_002AFCF0; }
L_002AFD44:;
SET32(9, RW(0) + 1); { POLL(); goto L_002AFCF0; }
L_002AFD4C:;
SET32(2, RW(0) + 2);
wr32(c, (RW(16) + 8), RW(3));
wr32(c, (RW(16) + 12), RW(2)); { POLL(); goto L_002AFD28; }
L_002AFD5C:;
wr32(c, (RW(16) + 12), RW(2));
SET32(2, RW(0) + 16);
wr32(c, (RW(16) + 8), RW(2)); { POLL(); goto L_002AFCD8; }
L_002AFD6C:;
SET64(3, (s32)rd32(c, (RW(16) + 8)));
SET64(2, (s32)rd32(c, (RW(16) + 12)));
mul_s(c, 0, 3, RSW(3), RSW(2));
SET64(4, (s64)(s32)0x540000);
SET32(4, RW(4) + -25664);
SET32(6, RW(0) + 6);
SET32(3, RSW(3) >> (RW(9) & 31));
SET32(2, RW(0) + -64);
SET32(3, RW(3) + 63);
SET64(31, 0x2afd98); SET64(5, RD(3) & RD(2)); F_002B0600(c);
wr32(c, (RW(16) + 0), RW(2)); { POLL(); goto L_002AFD00; }
L_002AFDA0:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002AFDB0(Ctx *c) { /* func_002AFDB0 */
ENTER(0x2afdb0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002AFDF8; }
SET64(2, rd8(c, (RW(17) + 20)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20728);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 24), RW(3)); if (t) goto L_002AFE04; }
SET64(2, RD(16) << 48);
L_002AFDE4:;
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002AFDFC; }
SET64(31, 0x2afdf8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002AFDF8:;
SET64(2, RD(17) + RD(0));
L_002AFDFC:;
SET64(31, rd64(c, (RW(29) + 32))); goto L_002AFE1C;
L_002AFE04:;
SET64(5, (s32)rd32(c, (RW(17) + 0)));
SET64(4, (s64)(s32)0x540000);
SET64(31, 0x2afe14); SET32(4, RW(4) + -25664); F_002B0560(c);
SET64(2, RD(16) << 48); { POLL(); goto L_002AFDE4; }
L_002AFE1C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002AFE30(Ctx *c) { /* func_002AFE30 */
ENTER(0x2afe30);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + -20728);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(9, RW(0) + 36);
wr32(c, (RW(4) + 24), RW(2));
SET64(16, RD(4) + RD(0));
SET64(2, RD(0) < RD(8));
wr32(c, (RW(4) + 4), RW(7));
wr8(c, (RW(4) + 20), (u8)RW(2));
SET64(3, RD(0) + RD(0));
SET64(4, RD(0) + RD(0));
{ int t = RD(7) == RD(9); SET64(2, RD(0) + RD(0)); if (t) goto L_002AFF1C; }
SET32(9, RW(0) + 44);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 20); if (t) goto L_002AFF1C; }
{ int t = RD(7) == RD(9);  if (t) goto L_002AFF1C; }
SET32(9, RW(0) + 27);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 19); if (t) goto L_002AFF0C; }
{ int t = RD(7) == RD(9);  if (t) goto L_002AFF0C; }
SET32(9, RW(0) + 58);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 50); if (t) goto L_002AFEFC; }
{ int t = RD(7) == RD(9);  if (t) goto L_002AFEFC; }
SET32(9, RW(0) + 10);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 2); if (t) goto L_002AFEFC; }
{ int t = RD(7) == RD(9);  if (t) goto L_002AFEFC; }
SET32(9, RW(0) + 49);
{ int t = RD(7) == RD(9); SET32(9, RW(0) + 48); if (t) goto L_002AFEEC; }
{ int t = RD(7) == RD(9);  if (t) goto L_002AFEEC; }
SET32(9, RW(0) + 1);
{ int t = RD(7) == RD(9);  if (t) goto L_002AFEEC; }
{ int t = RD(7) == RD(0);  if (t) goto L_002AFEEC; }
SET32(9, RW(5) + -1); goto L_002AFF2C;
L_002AFEEC:;
SET32(4, RW(0) + 6);
SET32(3, RW(0) + 5);
SET64(2, RD(0) + RD(0)); goto L_002AFF28;
L_002AFEFC:;
SET32(4, RW(0) + 6);
SET32(2, RW(0) + 1);
SET64(3, RD(4) + RD(0)); goto L_002AFF28;
L_002AFF0C:;
SET32(4, RW(0) + 7);
SET32(3, RW(0) + 6);
SET32(2, RW(0) + 2); goto L_002AFF28;
L_002AFF1C:;
SET32(4, RW(0) + 7);
SET32(2, RW(0) + 3);
SET64(3, RD(4) + RD(0));
L_002AFF28:;
SET32(9, RW(5) + -1);
L_002AFF2C:;
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
{ int t = RD(3) == RD(0); wr32(c, (RW(16) + 12), RW(5)); if (t) goto L_002AFF68; }
wr32(c, (RW(16) + 0), RW(8));
L_002AFF60:;
SET64(2, RD(16) + RD(0)); goto L_002AFF94;
L_002AFF68:;
mul_s(c, 0, 5, RSW(4), RSW(5));
SET32(3, RW(0) + -64);
SET32(6, RW(0) + 6);
SET32(2, RSW(5) >> (RW(2) & 31));
SET64(4, (s64)(s32)0x540000);
SET32(2, RW(2) + 63);
SET32(4, RW(4) + -25664);
SET64(31, 0x2aff8c); SET64(5, RD(2) & RD(3)); F_002B0600(c);
wr32(c, (RW(16) + 0), RW(2)); { POLL(); goto L_002AFF60; }
L_002AFF94:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

static void B_002AFFB0(Ctx *c, u32 entry) { /* func_002AFFB0 */
ENTER(entry);
switch (entry) { case 0x2b0000: goto L_002B0000; case 0x2b0018: goto L_002B0018; case 0x2b001c: goto L_002B001C; case 0x2b0020: goto L_002B0020; case 0x2b0024: goto L_002B0024; case 0x2b0028: goto L_002B0028; case 0x2b002c: goto L_002B002C; case 0x2b0034: goto L_002B0034; case 0x2b0038: goto L_002B0038; case 0x2b0044: goto L_002B0044; }
SET32(2, RW(0) + 44);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0xf0000000); if (t) goto L_002B006C; }
SET32(2, RW(0) + 36);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0xf000000); if (t) goto L_002B0064; }
SET32(2, RW(0) + 27);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0xff000000); if (t) goto L_002B005C; }
SET32(2, RW(0) + 49);
{ int t = RD(4) == RD(2); SET64(2, (s64)(s32)0xff0000); if (t) goto L_002B0054; }
SET32(2, RW(0) + 1);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 58); if (t) goto L_002B0050; }
{ int t = RD(4) == RD(2);  if (t) goto L_002B0044; }
SET32(2, RW(0) + 50);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + -1); if (t) goto L_002B0048; }
L_002B0000:;
SET32(2, RW(0) + 48);
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 20); if (t) goto L_002B0044; }
{ int t = RD(4) == RD(2);  if (t) goto L_002B0044; }
SET32(2, RW(0) + 19);
L_002B0018:;
{ int t = RD(4) == RD(2); SET32(2, RW(0) + 10); if (t) goto L_002B0044; }
if (0) { L_002B001C:; SET32(2, RW(0) + 10); }
L_002B0020:;
{ int t = RD(4) == RD(2);  if (t) goto L_002B0044; }
if (0) { L_002B0024:;  }
L_002B0028:;
SET32(2, RW(0) + 2);
L_002B002C:;
{ int t = RD(4) == RD(2);  if (t) goto L_002B0044; }
L_002B0034:;
{ int t = RD(4) == RD(0);  if (t) goto L_002B0044; }
if (0) { L_002B0038:;  }
SET64(2, RD(0) + RD(0)); goto L_002B006C;
L_002B0044:;
SET32(2, RW(0) + -1);
L_002B0048:;
 goto L_002B006C;
L_002B0050:;
SET64(2, (s64)(s32)0xff0000);
L_002B0054:;
SET64(2, RD(2) | 0xffff); goto L_002B006C;
L_002B005C:;
 goto L_002B006C;
L_002B0064:;
 goto L_002B006C;
L_002B006C:;
 return;
}
void F_002AFFB0(Ctx *c) { B_002AFFB0(c, 0x2affb0); }
void F_002B0000(Ctx *c) { B_002AFFB0(c, 0x2b0000); }
void F_002B0018(Ctx *c) { B_002AFFB0(c, 0x2b0018); }
void F_002B001C(Ctx *c) { B_002AFFB0(c, 0x2b001c); }
void F_002B0020(Ctx *c) { B_002AFFB0(c, 0x2b0020); }
void F_002B0024(Ctx *c) { B_002AFFB0(c, 0x2b0024); }
void F_002B0028(Ctx *c) { B_002AFFB0(c, 0x2b0028); }
void F_002B002C(Ctx *c) { B_002AFFB0(c, 0x2b002c); }
void F_002B0034(Ctx *c) { B_002AFFB0(c, 0x2b0034); }
void F_002B0038(Ctx *c) { B_002AFFB0(c, 0x2b0038); }
void F_002B0044(Ctx *c) { B_002AFFB0(c, 0x2b0044); }

void F_002B0080(Ctx *c) { /* func_002B0080 */
ENTER(0x2b0080);
SET64(3, (s32)rd32(c, (RW(4) + 16)));
SET64(3, ~(RD(3) | RD(0)));
wr32(c, (RW(4) + 16), RW(3)); return;
}

void F_002B0090(Ctx *c) { /* func_002B0090 */
ENTER(0x2b0090);
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
{ int t = RD(2) == RD(0); SET64(19, RD(7) + RD(0)); if (t) goto L_002B00DC; }
SET32(18, RW(4) - RW(2)); goto L_002B00E0;
L_002B00DC:;
SET64(18, RD(0) + RD(0));
L_002B00E0:;
SET64(4, RD(19) + RD(0));
{ int t = RD(19) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002B0110; }
L_002B00EC:;
SET64(2, RD(4) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_002B0100; }
SET32(3, RW(3) + 1);
L_002B0100:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_002B00EC; } }
L_002B0110:;
SET32(2, RW(0) + 32);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 17, RSW(5), RSW(2));
SET64(31, 0x2b0128); SET32(4, RW(0) + 20); F_00100670(c);
{ int t = RD(2) != RD(0); SET64(20, RD(2) + RD(0)); if (t) goto L_002B01A0; }
L_002B0130:;
SET64(2, (s32)rd32(c, (RW(21) + 16)));
SET64(3, RD(0) + RD(0));
SET64(16, RD(2) | RD(19));
{ int t = RD(16) == RD(0); SET64(4, RD(16) + RD(0)); if (t) goto L_002B0168; }
L_002B0144:;
SET64(2, RD(4) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_002B0158; }
SET32(3, RW(3) + 1);
L_002B0158:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_002B0144; } }
L_002B0168:;
SET32(2, RW(0) + 32);
SET32(2, RW(2) - RW(3));
{ int t = RSD(2) > 0; SET32(4, RW(0) + 20); if (t) goto L_002B01DC; }
L_002B0178:;
{ int t = RD(18) == RD(0);  if (t) goto L_002B0298; }
SET64(2, (s32)rd32(c, (RW(21) + 8)));
SET32(17, RW(18) + RW(17));
SET64(2, RSD(17) < RSD(2));
{ int t = RD(2) != RD(0); SET32(4, RW(0) + 20); if (t) goto L_002B0230; }
L_002B0194:;
wr32(c, (RW(21) + 8), RW(18));
L_002B0198:;
SET64(2, RD(20) + RD(0)); goto L_002B02B4;
L_002B01A0:;
SET64(2, (s32)rd32(c, (RW(21) + 12)));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b01b0); SET32(16, RW(2) + RW(18)); F_002AC240(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -20992);
SET32(2, RW(2) + -28120);
wr32(c, (RW(20) + 0), RW(3));
wr32(c, (RW(20) + 4), RW(0));
wr32(c, (RW(20) + 0), RW(2));
wr32(c, (RW(20) + 8), RW(17));
wr32(c, (RW(20) + 12), RW(16));
wr32(c, (RW(20) + 16), RW(19)); { POLL(); goto L_002B0130; }
L_002B01DC:;
SET64(31, 0x2b01e4);  F_00100670(c);
{ int t = RD(2) != RD(0); SET64(19, RD(2) + RD(0)); if (t) goto L_002B01F4; }
L_002B01EC:;
wr32(c, (RW(20) + 4), RW(19)); { POLL(); goto L_002B0178; }
L_002B01F4:;
SET64(2, (s32)rd32(c, (RW(21) + 12)));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b0204); SET32(22, RW(2) + RW(18)); F_002AC240(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -20992);
SET32(2, RW(2) + -28120);
wr32(c, (RW(19) + 0), RW(3));
wr32(c, (RW(19) + 4), RW(0));
wr32(c, (RW(19) + 0), RW(2));
wr32(c, (RW(19) + 8), RW(17));
wr32(c, (RW(19) + 12), RW(22));
wr32(c, (RW(19) + 16), RW(16)); { POLL(); goto L_002B01EC; }
L_002B0230:;
SET64(31, 0x2b0238);  F_00100670(c);
{ int t = RD(2) != RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002B0250; }
L_002B0240:;
SET64(2, (s32)rd32(c, (RW(21) + 4)));
wr32(c, (RW(16) + 4), RW(2));
wr32(c, (RW(21) + 4), RW(16)); { POLL(); goto L_002B0194; }
L_002B0250:;
SET64(3, (s32)rd32(c, (RW(21) + 12)));
SET64(4, RD(16) + RD(0));
SET64(2, (s32)rd32(c, (RW(21) + 8)));
SET64(19, (s32)rd32(c, (RW(21) + 16)));
SET32(22, RW(3) + RW(17));
SET64(31, 0x2b026c); SET32(17, RW(2) - RW(17)); F_002AC240(c);
SET64(3, (s64)(s32)0x4d0000);
SET64(2, (s64)(s32)0x4d0000);
SET32(3, RW(3) + -20992);
SET32(2, RW(2) + -28120);
wr32(c, (RW(16) + 0), RW(3));
wr32(c, (RW(16) + 4), RW(0));
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 8), RW(17));
wr32(c, (RW(16) + 12), RW(22));
wr32(c, (RW(16) + 16), RW(19)); { POLL(); goto L_002B0240; }
L_002B0298:;
SET64(3, (s32)rd32(c, (RW(21) + 12)));
SET64(2, (s32)rd32(c, (RW(21) + 8)));
SET32(3, RW(3) + RW(17));
SET32(2, RW(2) - RW(17));
wr32(c, (RW(21) + 12), RW(3));
wr32(c, (RW(21) + 8), RW(2)); { POLL(); goto L_002B0198; }
L_002B02B4:;
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

static void B_002B02E0(Ctx *c, u32 entry) { /* func_002B02E0 */
ENTER(entry);
switch (entry) { case 0x2b0320: goto L_002B0320; }
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET64(2, (s64)(s32)0x100000);
div_s(c, 0, RSW(2), RSW(3));
SET64(4, (s32)rd32(c, (RW(4) + 16)));
SET64(5, c->lo.d[0]);
{ int t = RD(4) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002B0320; }
L_002B0300:;
SET64(2, RD(4) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_002B0310; }
SET32(3, RW(3) + 1);
L_002B0310:;
SET32(4, RW(4) >> 1);
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_002B0300; } }
L_002B0320:;
SET32(3, RW(3) << 20);
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 5); if (t) goto L_002B0334; }
SET32(2, RW(3) + 31);
SET32(2, RSW(2) >> 5);
L_002B0334:;
SET32(2, RW(5) + RW(2)); return;
}
void F_002B02E0(Ctx *c) { B_002B02E0(c, 0x2b02e0); }
void F_002B0320(Ctx *c) { B_002B02E0(c, 0x2b0320); }

void F_002B0340(Ctx *c) { /* func_002B0340 */
ENTER(0x2b0340);
SET32(2, RW(0) + 1);
SET32(6, RW(2) << (RW(6) & 31));
SET64(2, (s32)rd32(c, (RW(4) + 12)));
SET32(3, RW(6) + -1);
SET64(2, RD(2) & RD(3));
{ int t = RD(2) == RD(0);  if (t) goto L_002B0364; }
SET32(6, RW(6) - RW(2)); goto L_002B0368;
L_002B0364:;
SET64(6, RD(0) + RD(0));
L_002B0368:;
SET64(8, RD(7) + RD(0));
{ int t = RD(7) == RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002B0398; }
L_002B0374:;
SET64(2, RD(8) & 0x1);
{ int t = RD(2) == RD(0);  if (t) goto L_002B0388; }
SET32(3, RW(3) + 1);
L_002B0388:;
SET32(8, RW(8) >> 1);
{ int t = RD(8) != RD(0);  if (t) { POLL(); goto L_002B0374; } }
L_002B0398:;
SET32(2, RW(0) + 32);
div_s(c, 0, RSW(2), RSW(3));
SET64(2, c->lo.d[0]);
mul_s(c, 0, 3, RSW(5), RSW(2));
SET64(2, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) - RW(6));
SET64(2, RSD(2) < RSD(3));
{ int t = RD(2) != RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B03D8; }
SET64(2, (s32)rd32(c, (RW(4) + 16)));
SET64(2, RD(2) & RD(7));
{ int t = RD(2) != RD(0); SET32(2, RW(0) + 1); if (t) goto L_002B03D4; }
 goto L_002B03D8;
L_002B03D4:;
SET64(2, RD(0) + RD(0));
L_002B03D8:;
 return;
}

void F_002B03E0(Ctx *c) { /* func_002B03E0 */
ENTER(0x2b03e0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(9, (s32)rd32(c, (RW(5) + 12)));
SET64(8, (s32)rd32(c, (RW(4) + 12)));
{ int t = RD(8) == RD(9);  if (t) goto L_002B0450; }
L_002B03F8:;
SET64(7, (s32)rd32(c, (RW(4) + 8)));
SET32(3, RW(8) + RW(7));
{ int t = RD(3) != RD(9);  if (t) goto L_002B049C; }
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
{ int t = RD(6) != RD(3);  if (t) goto L_002B049C; }
SET64(6, (s32)rd32(c, (RW(5) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET32(6, RW(7) + RW(6));
wr32(c, (RW(4) + 8), RW(6));
wr32(c, (RW(4) + 4), RW(3));
{ int t = RD(5) == RD(0); wr32(c, (RW(5) + 4), RW(0)); if (t) goto L_002B04A4; }
SET64(25, (s32)rd32(c, (RW(5) + 0)));
SET64(4, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b0448); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B0448:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B04A8;
L_002B0450:;
SET64(6, (s32)rd32(c, (RW(4) + 8)));
SET64(3, (s32)rd32(c, (RW(5) + 8)));
{ int t = RD(6) != RD(3);  if (t) { POLL(); goto L_002B03F8; } }
SET64(7, (s32)rd32(c, (RW(5) + 16)));
SET64(3, (s32)rd32(c, (RW(5) + 4)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
wr32(c, (RW(4) + 4), RW(3));
SET64(6, RD(6) & RD(7));
wr32(c, (RW(5) + 4), RW(0));
{ int t = RD(5) == RD(0); wr32(c, (RW(4) + 16), RW(6)); if (t) goto L_002B04A4; }
SET64(25, (s32)rd32(c, (RW(5) + 0)));
SET64(4, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b0494); SET32(5, RW(0) + 1); rt_call(c, t); }
 { POLL(); goto L_002B0448; }
L_002B049C:;
wr32(c, (RW(4) + 4), RW(5)); { POLL(); goto L_002B0448; }
L_002B04A4:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B04A8:;
SET32(29, RW(29) + 16); return;
}

void F_002B04B0(Ctx *c) { /* func_002B04B0 */
ENTER(0x2b04b0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(6) + RD(0));
SET64(31, 0x2b04dc); SET64(16, RD(7) + RD(0)); F_002AC240(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(19) + 8), RW(18));
SET32(2, RW(2) + -28120);
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

void F_002B0520(Ctx *c) { /* func_002B0520 */
ENTER(0x2b0520);
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B0550; }
L_002B052C:;
SET64(3, (s32)rd32(c, (RW(4) + 16)));
{ int t = RD(3) != RD(0);  if (t) goto L_002B0540; }
SET64(3, (s32)rd32(c, (RW(4) + 8)));
SET32(2, RW(2) + RW(3));
L_002B0540:;
SET64(4, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) != RD(0);  if (t) { POLL(); goto L_002B052C; } }
L_002B0550:;
 return;
}

void F_002B0560(Ctx *c) { /* func_002B0560 */
ENTER(0x2b0560);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(17, RD(5) + RD(0));
SET32(4, RW(28) + -30056);
SET64(31, 0x2b0584); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_002A8700(c);
SET64(16, (s32)rd32(c, (RW(18) + 4)));
SET64(2, (s32)rd32(c, (RW(17) + 12)));
L_002B058C:;
SET64(3, RD(0) < RD(16));
SET64(3, RD(3) ^ 0x1);
{ int t = RD(3) != RD(0);  if (t) goto L_002B05B8; }
SET64(3, (s32)rd32(c, (RW(16) + 12)));
SET64(1, RSD(3) < RSD(2));
{ int t = RD(1) == RD(0);  if (t) goto L_002B05B8; }
SET64(18, RD(16) + RD(0));
SET64(16, (s32)rd32(c, (RW(16) + 4))); { POLL(); goto L_002B058C; }
L_002B05B8:;
SET64(31, 0x2b05c0); SET64(4, RD(17) + RD(0)); F_002B0080(c);
{ int t = RD(16) == RD(0); SET64(4, RD(18) + RD(0)); if (t) goto L_002B05D8; }
SET64(5, RD(16) + RD(0));
SET64(31, 0x2b05d4); SET64(4, RD(17) + RD(0)); F_002B03E0(c);
SET64(4, RD(18) + RD(0));
L_002B05D8:;
SET64(31, 0x2b05e0); SET64(5, RD(17) + RD(0)); F_002B03E0(c);
SET64(31, 0x2b05e8); SET32(4, RW(28) + -30056); F_002A86B0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B0600(Ctx *c) { /* func_002B0600 */
ENTER(0x2b0600);
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
SET32(4, RW(28) + -30056);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b0640); SET64(16, RD(7) + RD(0)); F_002A8700(c);
SET64(4, RD(16) + RD(0));
SET64(18, RD(0) + RD(0));
SET64(23, RD(0) + RD(0));
SET64(31, 0x2b0654); SET64(17, RD(20) + RD(0)); F_002AFFB0(c);
SET64(22, RD(2) + RD(0));
SET64(2, (s32)rd32(c, (RW(20) + 4)));
{ int t = RD(2) != RD(0);  if (t) goto L_002B06C4; }
L_002B0664:;
{ int t = RD(18) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002B06B0; }
SET64(5, RD(19) + RD(0));
SET64(6, RD(21) + RD(0));
SET64(7, RD(22) + RD(0));
SET64(31, 0x2b0680); SET64(4, RD(18) + RD(0)); F_002B0090(c);
SET64(16, RD(2) + RD(0));
{ int t = RD(16) == RD(0); SET32(4, RW(28) + -30056); if (t) goto L_002B06B4; }
SET64(2, (s32)rd32(c, (RW(18) + 8)));
{ int t = RD(2) == RD(0);  if (t) goto L_002B0730; }
L_002B0698:;
SET64(5, (s32)rd32(c, (RW(16) + 4)));
L_002B069C:;
{ int t = RD(5) == RD(0); SET64(4, RD(23) + RD(0)); if (t) goto L_002B06B0; }
SET64(31, 0x2b06ac);  F_002AB740(c);
wr32(c, (RW(16) + 4), RW(0));
L_002B06B0:;
SET32(4, RW(28) + -30056);
L_002B06B4:;
SET64(31, 0x2b06bc);  F_002A86B0(c);
SET64(2, RD(16) + RD(0)); goto L_002B0760;
L_002B06C4:;
SET64(23, RD(17) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(17, (s32)rd32(c, (RW(17) + 4)));
SET64(6, RD(21) + RD(0));
SET64(7, RD(22) + RD(0));
SET64(31, 0x2b06e0); SET64(4, RD(17) + RD(0)); F_002B0340(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002B0710; }
{ int t = RD(18) == RD(0); SET64(4, RD(17) + RD(0)); if (t) goto L_002B0724; }
SET64(31, 0x2b06f8);  F_002B02E0(c);
SET64(16, RD(2) + RD(0));
SET64(31, 0x2b0704); SET64(4, RD(18) + RD(0)); F_002B02E0(c);
SET64(1, RSD(2) < RSD(16));
{ int t = RD(1) != RD(0);  if (t) goto L_002B0724; }
L_002B0710:;
SET64(2, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002B06C4; } }
 { POLL(); goto L_002B0664; }
L_002B0724:;
SET64(18, RD(17) + RD(0)); { POLL(); goto L_002B0710; }
L_002B0730:;
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b073c); SET64(5, RD(18) + RD(0)); F_002AB890(c);
{ int t = RD(18) == RD(0);  if (t) { POLL(); goto L_002B0698; } }
SET64(25, (s32)rd32(c, (RW(18) + 0)));
SET64(4, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b0758); SET32(5, RW(0) + 1); rt_call(c, t); }
SET64(5, (s32)rd32(c, (RW(16) + 4))); { POLL(); goto L_002B069C; }
L_002B0760:;
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

void F_002B0790(Ctx *c) { /* func_002B0790 */
ENTER(0x2b0790);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B07E8; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20712);
{ int t = RD(17) == RD(0); wr32(c, (RW(17) + 0), RW(2)); if (t) goto L_002B07D0; }
SET64(2, (s64)(s32)0x4d0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -28120);
SET64(31, 0x2b07d0); wr32(c, (RW(17) + 0), RW(2)); F_002AB970(c);
L_002B07D0:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B07EC; }
SET64(31, 0x2b07e8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B07E8:;
SET64(2, RD(17) + RD(0));
L_002B07EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B0800(Ctx *c) { /* func_002B0800 */
ENTER(0x2b0800);
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
SET64(31, 0x2b0848); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_002AEB60(c);
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
SET64(31, 0x2b087c); SET64(8, RD(3) | RD(2)); F_002AEB00(c);
SET64(6, (s32)rd32(c, (RW(21) + 116)));
SET64(1, RD(0) | 0x8000);
SET64(1, RSD(6) < RSD(1));
{ int t = RD(1) != RD(0);  if (t) goto L_002B0980; }
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
{ int t = RD(1) == RD(0);  if (t) goto L_002B0980; }
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x51000000);
SET64(2, rd64(c, (RW(2) + 10032)));
SET64(4, RD(2) & 0x7fff);
SET64(2, RD(4) << 32);
SET64(16, RD(4) << 4);
SET64(2, RSD(2) >> 32);
SET64(17, RD(2) | RD(3));
SET32(22, RW(2) << 4);
L_002B0904:;
SET64(5, (s64)(s32)0x4b0000);
SET64(2, (s64)(s32)0x50000000);
SET64(4, RD(20) + RD(0));
SET32(5, RW(5) + 10032);
SET32(6, RW(0) + 16);
SET64(7, (s64)(s32)0x13000000);
SET64(31, 0x2b0924); SET64(8, RD(2) | 0x1); F_002AEB00(c);
SET64(6, RD(16) << 32);
SET64(4, RD(20) + RD(0));
SET64(6, RSD(6) >> 32);
SET64(5, RD(19) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2b0940); SET64(8, RD(17) + RD(0)); F_002AEB00(c);
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
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B0904; } }
L_002B0980:;
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

void F_002B09B0(Ctx *c) { /* func_002B09B0 */
ENTER(0x2b09b0);
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
{ int t = RD(8) == RD(3); wr32(c, (RW(4) + 116), RW(5)); if (t) goto L_002B0AD8; }
SET32(3, RW(0) + 44);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 20); if (t) goto L_002B0AD8; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B0AD8; }
SET32(3, RW(0) + 27);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 19); if (t) goto L_002B0AF0; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B0AF0; }
SET32(3, RW(0) + 58);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 50); if (t) goto L_002B0AC8; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B0AC8; }
SET32(3, RW(0) + 10);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 2); if (t) goto L_002B0AC8; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B0AC8; }
SET32(3, RW(0) + 49);
{ int t = RD(8) == RD(3); SET32(3, RW(0) + 1); if (t) goto L_002B0AB4; }
{ int t = RD(8) == RD(3);  if (t) goto L_002B0AB4; }
SET32(3, RW(0) + 48);
{ int t = RD(8) == RD(3);  if (t) goto L_002B0AA4; }
{ int t = RD(8) == RD(0);  if (t) goto L_002B0AA4; }
SET64(7, (s32)rd32(c, (RW(4) + 116))); goto L_002B0AF4;
L_002B0AA4:;
SET64(3, (s32)rd32(c, (RW(4) + 116)));
SET32(3, RW(3) << 2);
wr32(c, (RW(4) + 116), RW(3)); goto L_002B0AF0;
L_002B0AB4:;
SET64(5, (s32)rd32(c, (RW(4) + 116)));
SET32(3, RW(5) << 1);
SET32(3, RW(3) + RW(5));
wr32(c, (RW(4) + 116), RW(3)); goto L_002B0AF0;
L_002B0AC8:;
SET64(3, (s32)rd32(c, (RW(4) + 116)));
SET32(3, RW(3) << 1);
wr32(c, (RW(4) + 116), RW(3)); goto L_002B0AF0;
L_002B0AD8:;
SET64(5, (s32)rd32(c, (RW(4) + 116)));
{ int t = RSD(5) >= 0; SET32(3, RSW(5) >> 1); if (t) goto L_002B0AEC; }
SET32(3, RW(5) + 1);
SET32(3, RSW(3) >> 1);
L_002B0AEC:;
wr32(c, (RW(4) + 116), RW(3));
L_002B0AF0:;
SET64(7, (s32)rd32(c, (RW(4) + 116)));
L_002B0AF4:;
SET64(1, RD(0) | 0x8000);
SET64(6, rd64(c, (RW(4) + 96)));
SET32(3, RW(0) + -32768);
SET64(5, RD(7) & 0x7fff);
SET64(1, RSD(7) < RSD(1));
SET64(3, RD(6) & RD(3));
SET64(3, RD(3) | RD(5));
{ int t = RD(1) != RD(0); wr64(c, (RW(4) + 96), RD(3)); if (t) goto L_002B0B58; }
SET32(3, RW(0) + 32767);
div_s(c, 0, RSW(7), RSW(3));
SET64(5, c->hi.d[0]);
{ int t = RD(5) != RD(0);  if (t) goto L_002B0B38; }
SET64(5, RD(3) + RD(0));
SET32(3, RW(7) + -32767);
wr32(c, (RW(4) + 116), RW(3));
L_002B0B38:;
SET64(6, rd64(c, (RW(4) + 96)));
SET64(3, RD(5) << 32);
SET64(3, RSD(3) >> 32);
SET64(5, RD(3) & 0x7fff);
SET32(3, RW(0) + -32768);
SET64(3, RD(6) & RD(3));
SET64(3, RD(3) | RD(5));
wr64(c, (RW(4) + 96), RD(3));
L_002B0B58:;
 return;
}

void F_002B0B60(Ctx *c) { /* func_002B0B60 */
ENTER(0x2b0b60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B0BA8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20688);
SET64(31, 0x2b0b90); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B0BAC; }
SET64(31, 0x2b0ba8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B0BA8:;
SET64(2, RD(17) + RD(0));
L_002B0BAC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B0BC0(Ctx *c) { /* func_002B0BC0 */
ENTER(0x2b0bc0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b0bd4); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 112), RW(0));
SET32(2, RW(2) + -20688);
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

void F_002B0C50(Ctx *c) { /* func_002B0C50 */
ENTER(0x2b0c50);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { F_002AEB60(c); return; }
}

void F_002B0C70(Ctx *c) { /* func_002B0C70 */
ENTER(0x2b0c70);
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

void F_002B0CA0(Ctx *c) { /* func_002B0CA0 */
ENTER(0x2b0ca0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B0CE8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20656);
SET64(31, 0x2b0cd0); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B0CEC; }
SET64(31, 0x2b0ce8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B0CE8:;
SET64(2, RD(17) + RD(0));
L_002B0CEC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B0D00(Ctx *c) { /* func_002B0D00 */
ENTER(0x2b0d00);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
SET64(31, 0x2b0d2c); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
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
SET32(3, RW(3) + -20656);
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

void F_002B0DB0(Ctx *c) { /* func_002B0DB0 */
ENTER(0x2b0db0);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { F_002AEB60(c); return; }
}

void F_002B0DD0(Ctx *c) { /* func_002B0DD0 */
ENTER(0x2b0dd0);
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

void F_002B0E10(Ctx *c) { /* func_002B0E10 */
ENTER(0x2b0e10);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B0E58; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20624);
SET64(31, 0x2b0e40); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B0E5C; }
SET64(31, 0x2b0e58); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B0E58:;
SET64(2, RD(17) + RD(0));
L_002B0E5C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B0E70(Ctx *c) { /* func_002B0E70 */
ENTER(0x2b0e70);
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
SET64(31, 0x2b0ea4); SET64(16, RD(8) + RD(0)); F_002AD4B0(c);
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
SET32(4, RW(4) + -20624);
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

void F_002B0F40(Ctx *c) { /* func_002B0F40 */
ENTER(0x2b0f40);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 80);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x5); { F_002AEB60(c); return; }
}

void F_002B0F60(Ctx *c) { /* func_002B0F60 */
ENTER(0x2b0f60);
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

void F_002B0F90(Ctx *c) { /* func_002B0F90 */
ENTER(0x2b0f90);
SET64(3, RD(5) << 32);
SET64(3, RSD(3) >> 32);
wr64(c, (RW(4) + 80), RD(3)); return;
}

void F_002B0FA0(Ctx *c) { /* func_002B0FA0 */
ENTER(0x2b0fa0);
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

void F_002B0FF0(Ctx *c) { /* func_002B0FF0 */
ENTER(0x2b0ff0);
SET32(7, RW(5) + 16);
SET32(6, RW(4) + 16);
SET64(5, RD(0) + RD(0));
L_002B0FFC:;
rd128(c, (RW(7) + 0) & ~15u, &c->r[3]);
SET32(5, RW(5) + 1);
SET64(2, RD(5) < (u64)(s64)5);
wr128(c, (RW(6) + 0) & ~15u, &c->r[3]);
SET32(7, RW(7) + 16);
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 16); if (t) { POLL(); goto L_002B0FFC; } }
SET64(2, RD(4) + RD(0)); return;
}

void F_002B1020(Ctx *c) { /* func_002B1020 */
ENTER(0x2b1020);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1068; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20592);
SET64(31, 0x2b1050); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B106C; }
SET64(31, 0x2b1068); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B1068:;
SET64(2, RD(17) + RD(0));
L_002B106C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B1080(Ctx *c) { /* func_002B1080 */
ENTER(0x2b1080);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b1094); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, RD(0) | 0x8004);
SET32(2, RW(2) + -20592);
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

void F_002B1110(Ctx *c) { /* func_002B1110 */
ENTER(0x2b1110);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 80);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x5); { F_002AEB60(c); return; }
}

void F_002B1130(Ctx *c) { /* func_002B1130 */
ENTER(0x2b1130);
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

void F_002B11E0(Ctx *c) { /* func_002B11E0 */
ENTER(0x2b11e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1228; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20560);
SET64(31, 0x2b1210); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B122C; }
SET64(31, 0x2b1228); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B1228:;
SET64(2, RD(17) + RD(0));
L_002B122C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B1240(Ctx *c) { /* func_002B1240 */
ENTER(0x2b1240);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b1254); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
SET64(2, (s64)(s32)0x10000000);
SET64(3, (s64)(s32)0x4e0000);
SET64(4, RD(2) << 32);
SET32(3, RW(3) + -20560);
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

void F_002B12C0(Ctx *c) { /* func_002B12C0 */
ENTER(0x2b12c0);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { F_002AEB60(c); return; }
}

void F_002B12E0(Ctx *c) { /* func_002B12E0 */
ENTER(0x2b12e0);
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

void F_002B1310(Ctx *c) { /* func_002B1310 */
ENTER(0x2b1310);
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

void F_002B1350(Ctx *c) { /* func_002B1350 */
ENTER(0x2b1350);
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

void F_002B13A0(Ctx *c) { /* func_002B13A0 */
ENTER(0x2b13a0);
SET32(7, RW(5) + 16);
SET32(6, RW(4) + 16);
SET64(5, RD(0) + RD(0));
L_002B13AC:;
rd128(c, (RW(7) + 0) & ~15u, &c->r[3]);
SET32(5, RW(5) + 1);
SET64(2, RD(5) < (u64)(s64)2);
wr128(c, (RW(6) + 0) & ~15u, &c->r[3]);
SET32(7, RW(7) + 16);
{ int t = RD(2) != RD(0); SET32(6, RW(6) + 16); if (t) { POLL(); goto L_002B13AC; } }
SET64(2, RD(4) + RD(0)); return;
}

void F_002B13D0(Ctx *c) { /* func_002B13D0 */
ENTER(0x2b13d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1418; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20528);
SET64(31, 0x2b1400); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B141C; }
SET64(31, 0x2b1418); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B1418:;
SET64(2, RD(17) + RD(0));
L_002B141C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B1430(Ctx *c) { /* func_002B1430 */
ENTER(0x2b1430);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b1444); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
SET64(2, (s64)(s32)0x10000000);
SET64(3, (s64)(s32)0x4e0000);
SET64(4, RD(2) << 32);
SET32(3, RW(3) + -20528);
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

void F_002B14A0(Ctx *c) { /* func_002B14A0 */
ENTER(0x2b14a0);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { F_002AEB60(c); return; }
}

void F_002B14C0(Ctx *c) { /* func_002B14C0 */
ENTER(0x2b14c0);
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

void F_002B1500(Ctx *c) { /* func_002B1500 */
ENTER(0x2b1500);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1548; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20496);
SET64(31, 0x2b1530); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B154C; }
SET64(31, 0x2b1548); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B1548:;
SET64(2, RD(17) + RD(0));
L_002B154C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B1560(Ctx *c) { /* func_002B1560 */
ENTER(0x2b1560);
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
SET64(31, 0x2b1594); SET64(16, RD(8) + RD(0)); F_002AD4B0(c);
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
SET32(4, RW(4) + -20496);
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

void F_002B1630(Ctx *c) { /* func_002B1630 */
ENTER(0x2b1630);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 64);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x4); { F_002AEB60(c); return; }
}

void F_002B1650(Ctx *c) { /* func_002B1650 */
ENTER(0x2b1650);
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

void F_002B16B0(Ctx *c) { /* func_002B16B0 */
ENTER(0x2b16b0);
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

void F_002B16E0(Ctx *c) { /* func_002B16E0 */
ENTER(0x2b16e0);
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

void F_002B1720(Ctx *c) { /* func_002B1720 */
ENTER(0x2b1720);
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

void F_002B1760(Ctx *c) { /* func_002B1760 */
ENTER(0x2b1760);
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

void F_002B17C0(Ctx *c) { /* func_002B17C0 */
ENTER(0x2b17c0);
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

void F_002B1840(Ctx *c) { /* func_002B1840 */
ENTER(0x2b1840);
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

void F_002B1880(Ctx *c) { /* func_002B1880 */
ENTER(0x2b1880);
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

void F_002B18F0(Ctx *c) { /* func_002B18F0 */
ENTER(0x2b18f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1938; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20464);
SET64(31, 0x2b1920); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B193C; }
SET64(31, 0x2b1938); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B1938:;
SET64(2, RD(17) + RD(0));
L_002B193C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B1950(Ctx *c) { /* func_002B1950 */
ENTER(0x2b1950);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b1964); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(16) + 32), RD(0));
SET32(2, RW(2) + -20464);
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

void F_002B19D0(Ctx *c) { /* func_002B19D0 */
ENTER(0x2b19d0);
SET64(4, RD(5) + RD(0));
SET64(2, (s64)(s32)0x50000000);
SET64(5, (s64)(s32)0x4b0000);
SET32(6, RW(0) + 32);
SET32(5, RW(5) + 10048);
SET64(7, (s64)(s32)0x13000000);
SET64(8, RD(2) | 0x2); { F_002AEB00(c); return; }
}

void F_002B19F0(Ctx *c) { /* func_002B19F0 */
ENTER(0x2b19f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1A38; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20432);
SET64(31, 0x2b1a20); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B1A3C; }
SET64(31, 0x2b1a38); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B1A38:;
SET64(2, RD(17) + RD(0));
L_002B1A3C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B1A50(Ctx *c) { /* func_002B1A50 */
ENTER(0x2b1a50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b1a64); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RD(16) + RD(0));
SET32(3, RW(3) + -20432);
wr32(c, (RW(16) + 8), RW(3));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B1A90(Ctx *c) { /* func_002B1A90 */
ENTER(0x2b1a90);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { F_002AEB60(c); return; }
}

void F_002B1AB0(Ctx *c) { /* func_002B1AB0 */
ENTER(0x2b1ab0);
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

void F_002B1AE0(Ctx *c) { /* func_002B1AE0 */
ENTER(0x2b1ae0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1B28; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20400);
SET64(31, 0x2b1b10); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B1B2C; }
SET64(31, 0x2b1b28); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B1B28:;
SET64(2, RD(17) + RD(0));
L_002B1B2C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B1B40(Ctx *c) { /* func_002B1B40 */
ENTER(0x2b1b40);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(5) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(6) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(7) + RD(0));
SET64(31, 0x2b1b6c); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
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
SET32(3, RW(3) + -20400);
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

void F_002B1BF0(Ctx *c) { /* func_002B1BF0 */
ENTER(0x2b1bf0);
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
{ int t = RD(1) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002B1DA8; }
L_002B1C28:;
SET64(4, (s32)rd32(c, (RW(20) + 80)));
SET32(2, RW(18) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B1C44; }
SET32(2, RW(4) << 2); goto L_002B1C4C;
L_002B1C44:;
SET32(4, RW(5) - RW(18));
SET32(2, RW(4) << 2);
L_002B1C4C:;
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
SET64(31, 0x2b1ca0); wr64(c, (RW(20) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(20) + 40)));
mul_s(c, 0, 16, RSW(17), RSW(2));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b1cb4); SET64(5, RD(18) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(16) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(19) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b1cdc); SET64(7, RD(2) | 0x204); F_002AEB00(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2b1cec); SET32(16, RW(17) << 16); F_002A2B50(c);
SET64(3, rd8(c, (RW(20) + 42)));
mul_s(c, 0, 6, RSW(17), RSW(3));
SET64(5, RD(2) + RD(0));
SET64(2, (s64)(s32)0x6c000000);
SET64(4, RD(19) + RD(0));
SET64(3, RD(2) | 0x8003);
SET32(6, RW(6) << 3);
SET64(2, (s64)(s32)0x1000000);
SET64(8, RD(16) | RD(3));
SET64(31, 0x2b1d18); SET64(7, RD(2) | 0x104); F_002AEB00(c);
SET64(2, rd8(c, (RW(20) + 43)));
mul_s(c, 0, 21, RSW(17), RSW(2));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b1d2c); SET64(5, RD(18) + RD(0)); F_002A2B20(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(21) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(21) << 2);
SET64(2, RD(2) | 0xc004);
SET64(4, RD(19) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b1d54); SET64(7, RD(2) | 0x104); F_002AEB00(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b1d60); SET64(5, RD(18) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(6, RW(17) << 3);
SET64(2, (s64)(s32)0x7d000000);
SET64(4, RD(19) + RD(0));
SET64(3, RD(2) | 0xc001);
SET64(2, (s64)(s32)0x1000000);
SET64(8, RD(16) | RD(3));
SET64(31, 0x2b1d84); SET64(7, RD(2) | 0x104); F_002AEB00(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b1d90); SET64(5, RD(19) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(20) + 80)));
SET64(5, rd16(c, (RW(20) + 28)));
SET32(18, RW(18) + RW(3));
SET64(3, RSD(18) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B1C28; } }
L_002B1DA8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002B1DD0(Ctx *c) { /* func_002B1DD0 */
ENTER(0x2b1dd0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B1E30; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B1E04; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B1E04; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B1E04; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B1E50;
L_002B1E04:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9688)));
SET64(5, (s32)rd32(c, (RW(3) + 9184)));
SET64(8, (s32)rd32(c, (RW(28) + -30092)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8968)));
SET64(31, 0x2b1e28); SET32(7, RW(0) + 48); F_0029FD30(c);
 goto L_002B1E4C;
L_002B1E30:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b1e4c); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B1E4C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B1E50:;
SET32(29, RW(29) + 16); return;
}

void F_002B1E60(Ctx *c) { /* func_002B1E60 */
ENTER(0x2b1e60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B1EB4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20368);
SET32(2, RW(2) + -20328);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b1e9c); wr32(c, (RW(17) + 64), RW(2)); F_0029FDA0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B1EB8; }
SET64(31, 0x2b1eb4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B1EB4:;
SET64(2, RD(17) + RD(0));
L_002B1EB8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B1ED0(Ctx *c) { /* func_002B1ED0 */
ENTER(0x2b1ed0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b1ef0); SET64(16, RD(5) + RD(0)); F_0029FE20(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20368);
SET32(3, RW(3) + -20328);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(18, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b1f28); SET32(8, RW(0) + 1); F_002A2F00(c);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b1f40); SET32(8, RW(0) + 1); F_002A2D80(c);
SET32(7, RW(0) + 1);
SET64(6, RD(16) & 0xffff);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b1f58); SET64(8, RD(7) + RD(0)); F_002A2CC0(c);
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
{ u32 t = RW(25); SET64(31, 0x2b1f8c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b1fa0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B1FC0(Ctx *c) { /* func_002B1FC0 */
ENTER(0x2b1fc0);
SET32(4, RW(4) + -64); { F_002B1E60(c); return; }
}

void F_002B1FD0(Ctx *c) { /* func_002B1FD0 */
ENTER(0x2b1fd0);
SET64(2, RD(4) + RD(0));
SET32(6, RW(0) + 32);
SET64(4, RD(5) + RD(0));
SET64(7, (s64)(s32)0x13000000);
SET32(5, RW(2) + 16);
SET64(2, (s64)(s32)0x50000000);
SET64(8, RD(2) | 0x2); { F_002AEB60(c); return; }
}

void F_002B1FF0(Ctx *c) { /* func_002B1FF0 */
ENTER(0x2b1ff0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B2038; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20304);
SET64(31, 0x2b2020); wr32(c, (RW(17) + 8), RW(2)); F_002AD460(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B203C; }
SET64(31, 0x2b2038); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B2038:;
SET64(2, RD(17) + RD(0));
L_002B203C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B2050(Ctx *c) { /* func_002B2050 */
ENTER(0x2b2050);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(31, 0x2b206c); SET64(16, RD(4) + RD(0)); F_002AD4B0(c);
SET64(2, RD(17) << 32);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, RSD(2) >> 32);
SET32(3, RW(3) + -20304);
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

void F_002B20C0(Ctx *c) { /* func_002B20C0 */
ENTER(0x2b20c0);
SET32(29, RW(29) + -96);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(4, rd16(c, (RW(3) + 0)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B20F0; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B2108;
L_002B20F0:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B2108:;
c->fcc = F(12) <= F(0);
{ int t = c->fcc;  if (t) goto L_002B2308; }
SET64(7, (s32)rd32(c, (RW(5) + 8)));
SET32(4, RW(7) << 1);
SET32(4, RW(4) + RW(3));
SET64(4, rd16(c, (RW(4) + -2)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B2138; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B2150;
L_002B2138:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B2150:;
c->fcc = F(0) <= F(12);
{ int t = c->fcc; SET32(9, RW(7) + -1); if (t) goto L_002B2318; }
SET64(1, RSD(9) < RSD(0));
{ int t = RD(1) != RD(0); SET64(10, RD(0) + RD(0)); if (t) goto L_002B2260; }
SET64(8, (s32)rd32(c, (RW(5) + 4)));
SET32(2, RW(10) + RW(9));
L_002B2170:;
SET32(2, RSW(2) >> 1);
SET32(7, RW(2) << 1);
SET32(4, RW(8) + RW(7));
SET64(4, rd16(c, (RW(4) + 0)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B2194; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B21AC;
L_002B2194:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B21AC:;
c->fcc = F(12) < F(0);
{ int t = c->fcc; SET32(4, RW(8) + RW(7)); if (t) goto L_002B2204; }
SET32(4, RW(8) + RW(7));
SET64(4, rd16(c, (RW(4) + 2)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B21D4; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B21EC;
L_002B21D4:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B21EC:;
c->fcc = F(12) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002B2200; }
SET32(4, RW(2) << 1); goto L_002B2268;
L_002B2200:;
SET32(4, RW(8) + RW(7));
L_002B2204:;
SET64(4, rd16(c, (RW(4) + 0)));
{ int t = RSD(4) < 0; SET32(6, RW(4) >> 1); if (t) goto L_002B221C; }
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B2234;
L_002B221C:;
SET64(4, RD(4) & 0x1);
SET64(6, RD(6) | RD(4));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B2234:;
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002B2248; }
SET64(9, RD(2) + RD(0)); goto L_002B2250;
L_002B2248:;
SET64(10, RD(2) + RD(0));
L_002B2250:;
SET64(1, RSD(9) < RSD(10));
{ int t = RD(1) == RD(0); SET32(2, RW(10) + RW(9)); if (t) { POLL(); goto L_002B2170; } }
L_002B2260:;
SET32(2, RW(0) + -1);
SET32(4, RW(2) << 1);
L_002B2268:;
SET32(3, RW(3) + RW(4));
SET64(6, rd16(c, (RW(3) + 0)));
SET64(3, rd16(c, (RW(3) + 2)));
SET32(3, RW(3) - RW(6));
c->f[0].u = RW(3);
{ int t = RSD(6) < 0; c->f[1].f = (f32)(s32)c->f[0].u; if (t) goto L_002B2290; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B22AC;
L_002B2290:;
SET32(4, RW(6) >> 1);
SET64(3, RD(6) & 0x1);
SET64(4, RD(4) | RD(3));
c->f[0].u = RW(4);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B22AC:;
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
SET64(31, 0x2b22e0); wr128(c, (RW(29) + 80) & ~15u, &c->r[2]); F_002AD040(c);
c->f[12].u = c->f[20].u;
SET32(4, RW(29) + 64);
SET64(31, 0x2b22f0); SET32(5, RW(29) + 48); F_002ACFD0(c);
SET32(4, RW(29) + 80);
SET64(31, 0x2b22fc); SET32(5, RW(29) + 64); F_002AD0A0(c);
rd128(c, (RW(29) + 80) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_002B2330;
L_002B2308:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
rd128(c, (RW(3) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]); goto L_002B2330;
L_002B2318:;
SET64(3, (s32)rd32(c, (RW(5) + 0)));
SET32(4, RW(7) + -1);
SET32(4, RW(4) << 4);
SET32(3, RW(3) + RW(4));
rd128(c, (RW(3) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(16) + 0) & ~15u, &c->r[3]);
L_002B2330:;
SET64(31, rd64(c, (RW(29) + 32)));
c->f[20].u = rd32(c, (RW(29) + 0));
rd128(c, (RW(29) + 16) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B2350(Ctx *c) { /* func_002B2350 */
ENTER(0x2b2350);
SET32(29, RW(29) + -48);
SET64(3, (s32)rd32(c, (RW(5) + 4)));
wr64(c, (RW(29) + 0), RD(31));
SET64(6, rd16(c, (RW(3) + 0)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B2374; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B238C;
L_002B2374:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B238C:;
c->fcc = F(12) <= F(0);
{ int t = c->fcc;  if (t) goto L_002B259C; }
SET64(8, (s32)rd32(c, (RW(5) + 8)));
SET32(6, RW(8) << 1);
SET32(6, RW(6) + RW(3));
SET64(6, rd16(c, (RW(6) + -2)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B23BC; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B23D4;
L_002B23BC:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B23D4:;
c->fcc = F(0) <= F(12);
{ int t = c->fcc; SET32(10, RW(8) + -1); if (t) goto L_002B25C0; }
SET64(1, RSD(10) < RSD(0));
{ int t = RD(1) != RD(0); SET64(11, RD(0) + RD(0)); if (t) goto L_002B24E8; }
SET64(9, (s32)rd32(c, (RW(5) + 4)));
SET32(2, RW(11) + RW(10));
L_002B23F4:;
SET32(2, RSW(2) >> 1);
SET32(8, RW(2) << 1);
SET32(6, RW(9) + RW(8));
SET64(6, rd16(c, (RW(6) + 0)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B2418; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B2430;
L_002B2418:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B2430:;
c->fcc = F(12) < F(0);
{ int t = c->fcc; SET32(6, RW(9) + RW(8)); if (t) goto L_002B2488; }
SET32(6, RW(9) + RW(8));
SET64(6, rd16(c, (RW(6) + 2)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B2458; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B2470;
L_002B2458:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B2470:;
c->fcc = F(12) <= F(0);
{ int t = !c->fcc;  if (t) goto L_002B2484; }
SET32(6, RW(2) << 1); goto L_002B24F0;
L_002B2484:;
SET32(6, RW(9) + RW(8));
L_002B2488:;
SET64(6, rd16(c, (RW(6) + 0)));
{ int t = RSD(6) < 0; SET32(7, RW(6) >> 1); if (t) goto L_002B24A0; }
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B24B8;
L_002B24A0:;
SET64(6, RD(6) & 0x1);
SET64(7, RD(7) | RD(6));
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B24B8:;
c->fcc = F(12) < F(0);
{ int t = !c->fcc;  if (t) goto L_002B24D0; }
SET64(10, RD(2) + RD(0)); goto L_002B24D8;
L_002B24D0:;
SET64(11, RD(2) + RD(0));
L_002B24D8:;
SET64(1, RSD(10) < RSD(11));
{ int t = RD(1) == RD(0); SET32(2, RW(11) + RW(10)); if (t) { POLL(); goto L_002B23F4; } }
L_002B24E8:;
SET32(2, RW(0) + -1);
SET32(6, RW(2) << 1);
L_002B24F0:;
SET32(3, RW(3) + RW(6));
SET64(7, rd16(c, (RW(3) + 0)));
SET64(3, rd16(c, (RW(3) + 2)));
SET32(3, RW(3) - RW(7));
c->f[0].u = RW(3);
{ int t = RSD(7) < 0; c->f[1].f = (f32)(s32)c->f[0].u; if (t) goto L_002B2518; }
c->f[0].u = RW(7);
c->f[0].f = (f32)(s32)c->f[0].u; goto L_002B2534;
L_002B2518:;
SET32(6, RW(7) >> 1);
SET64(3, RD(7) & 0x1);
SET64(6, RD(6) | RD(3));
c->f[0].u = RW(6);
c->f[0].f = (f32)(s32)c->f[0].u;
c->f[0].f = fpu(F(0) + F(0));
L_002B2534:;
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
SET64(31, 0x2b2594); wr128(c, (RW(29) + 32) & ~15u, &c->r[2]); F_002AC710(c);
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B25F0;
L_002B259C:;
SET64(5, (s32)rd32(c, (RW(5) + 0)));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 12), RW(3));
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); goto L_002B25EC;
L_002B25C0:;
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
L_002B25EC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B25F0:;
SET32(29, RW(29) + 48); return;
}

void F_002B2600(Ctx *c) { /* func_002B2600 */
ENTER(0x2b2600);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(2) == RD(0); SET64(2, RD(0) + RD(0)); if (t) goto L_002B2614; }
 goto L_002B2628;
L_002B2614:;
wr32(c, (RW(4) + 0), RW(5));
SET32(2, RW(0) + 1);
wr32(c, (RW(4) + 4), RW(6));
wr32(c, (RW(4) + 8), RW(7));
wr8(c, (RW(4) + 12), (u8)RW(8));
L_002B2628:;
 return;
}

void F_002B2630(Ctx *c) { /* func_002B2630 */
ENTER(0x2b2630);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B26AC; }
SET64(2, rd8(c, (RW(17) + 12)));
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20272);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 16), RW(3)); if (t) goto L_002B2694; }
SET64(2, (s32)rd32(c, (RW(17) + 0)));
{ int t = RD(2) == RD(0);  if (t) goto L_002B267C; }
{ int t = RD(2) == RD(0); SET32(4, RW(2) + -16); if (t) goto L_002B267C; }
SET64(31, 0x2b267c);  F_00100430(c);
L_002B267C:;
SET64(4, (s32)rd32(c, (RW(17) + 4)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B2690; }
SET64(31, 0x2b2690);  F_00100430(c);
L_002B2690:;
wr8(c, (RW(17) + 12), (u8)RW(0));
L_002B2694:;
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(17) + 8), RW(0)); if (t) goto L_002B26AC; }
SET64(31, 0x2b26ac); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B26AC:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B26D0(Ctx *c) { /* func_002B26D0 */
ENTER(0x2b26d0);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 0), RW(0));
SET32(2, RW(2) + -20272);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 16), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 8), RW(0));
wr8(c, (RW(4) + 12), (u8)RW(0)); return;
}

void F_002B2700(Ctx *c) { /* func_002B2700 */
ENTER(0x2b2700);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(4, (s32)rd32(c, (RW(4) + 32)));
{ int t = RD(4) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002B2734; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b2734);  rt_call(c, t); }
L_002B2734:;
SET64(3, (s32)rd32(c, (RW(18) + 36)));
{ int t = RD(3) == RD(0);  if (t) goto L_002B2790; }
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(1, RSD(0) < RSD(2));
{ int t = RD(1) == RD(0); SET64(16, RD(0) + RD(0)); if (t) goto L_002B2790; }
L_002B2754:;
SET64(4, (s32)rd32(c, (RW(3) + 0)));
SET64(31, 0x2b2760); SET64(5, RD(16) + RD(0)); F_002AAE30(c);
SET64(25, (s32)rd32(c, (RW(2) + 8)));
SET64(4, RD(2) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b2774); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(3, (s32)rd32(c, (RW(18) + 36)));
SET32(16, RW(16) + 1);
SET64(2, (s32)rd32(c, (RW(3) + 0)));
SET64(2, (s32)rd32(c, (RW(2) + 16)));
SET64(2, RSD(16) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002B2754; } }
L_002B2790:;
SET64(4, RD(18) + RD(0));
SET64(31, 0x2b279c); SET64(5, RD(17) + RD(0)); F_0029F7D0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B27C0(Ctx *c) { /* func_002B27C0 */
ENTER(0x2b27c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002B27FC; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20240);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 48), RW(3)); if (t) goto L_002B27F8; }
SET64(31, 0x2b27f8);  F_001004B0(c);
L_002B27F8:;
SET64(2, RD(16) + RD(0));
L_002B27FC:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B2810(Ctx *c) { /* func_002B2810 */
ENTER(0x2b2810);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + -20240);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2b2830); wr32(c, (RW(4) + 48), RW(2)); F_0029F890(c);
wr32(c, (RW(16) + 32), RW(0));
SET64(2, RD(16) + RD(0));
wr32(c, (RW(16) + 36), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B2850(Ctx *c) { /* func_002B2850 */
ENTER(0x2b2850);
SET32(29, RW(29) + -112);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2b2878); SET64(4, (s32)rd32(c, (RW(4) + 4))); F_002A4610(c);
{ int t = RD(2) != RD(0);  if (t) goto L_002B2888; }
L_002B2880:;
 goto L_002B2930;
L_002B2888:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET32(4, RW(29) + 104);
SET64(5, (s8)rd8(c, (RW(28) + -31440)));
SET64(18, (s32)rd32(c, (RW(2) + 44)));
SET64(19, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b28a4); SET32(6, RW(0) + 6); F_001273D0(c);
SET32(6, RW(0) + -1);
SET64(4, RD(18) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x2b28b8); SET64(7, RD(6) + RD(0)); F_00138070(c);
SET32(20, RW(2) + -1);
{ int t = RSD(20) < 0; SET32(17, RW(29) + 105); if (t) goto L_002B2900; }
SET64(4, RD(18) + RD(0));
L_002B28C8:;
SET64(5, RD(19) + RD(0));
SET64(6, RD(20) + RD(0));
SET64(31, 0x2b28d8); SET32(7, RW(0) + 3); F_00138070(c);
{ int t = RD(2) == RD(0); SET32(3, RW(0) + 1); if (t) goto L_002B2928; }
{ int t = RD(2) != RD(3);  if (t) goto L_002B28F0; }
wr8(c, (RW(17) + 0), (u8)RW(20));
L_002B28F0:;
SET32(20, RW(20) + -1);
{ int t = RSD(20) >= 0; SET64(4, RD(18) + RD(0)); if (t) { POLL(); goto L_002B28C8; } }
L_002B2900:;
SET64(4, RD(18) + RD(0));
SET64(5, RD(19) + RD(0));
SET64(31, 0x2b2910); SET32(6, RW(29) + 104); F_00138560(c);
SET32(4, RW(16) + 8);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b2920); SET32(6, RW(0) + 6); F_001273D0(c);
 { POLL(); goto L_002B2880; }
L_002B2928:;
wr8(c, (RW(29) + 104), (u8)RW(20)); { POLL(); goto L_002B28F0; }
L_002B2930:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002B2950(Ctx *c) { /* func_002B2950 */
ENTER(0x2b2950);
SET64(2, rd8(c, (RW(4) + 14))); return;
}

void F_002B2960(Ctx *c) { /* func_002B2960 */
ENTER(0x2b2960);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 14)));
SET64(16, RD(4) + RD(0));
{ int t = RD(3) != RD(0); wr8(c, (RW(4) + 9), (u8)RW(5)); if (t) goto L_002B2984; }
L_002B297C:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B29B4;
L_002B2984:;
SET64(31, 0x2b298c); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002A4610(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002B29B0; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b29a8); SET32(6, RW(16) + 8); F_001384A0(c);
 { POLL(); goto L_002B297C; }
L_002B29B0:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B29B4:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B29C0(Ctx *c) { /* func_002B29C0 */
ENTER(0x2b29c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 14)));
SET64(16, RD(4) + RD(0));
{ int t = RD(3) != RD(0); wr8(c, (RW(4) + 8), (u8)RW(5)); if (t) goto L_002B29E4; }
L_002B29DC:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B2A14;
L_002B29E4:;
SET64(31, 0x2b29ec); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002A4610(c);
{ int t = RD(2) == RD(0);  if (t) goto L_002B2A10; }
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b2a08); SET32(6, RW(16) + 8); F_001384A0(c);
 { POLL(); goto L_002B29DC; }
L_002B2A10:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B2A14:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B2A20(Ctx *c) { /* func_002B2A20 */
ENTER(0x2b2a20);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 14)));
{ int t = RD(3) != RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B2A40; }
L_002B2A38:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B2A74;
L_002B2A40:;
SET32(4, RW(29) + 40);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b2a50); SET32(6, RW(0) + 6); F_001273D0(c);
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b2a64); SET32(6, RW(29) + 40); F_001384A0(c);
SET64(3, RD(2) ^ 0x1);
SET64(3, RD(0) < RD(3));
wr8(c, (RW(16) + 14), (u8)RW(3)); { POLL(); goto L_002B2A38; }
L_002B2A74:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B2A80(Ctx *c) { /* func_002B2A80 */
ENTER(0x2b2a80);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, rd8(c, (RW(4) + 14)));
{ int t = RD(3) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B2AA0; }
L_002B2A98:;
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B2AD8;
L_002B2AA0:;
SET64(31, 0x2b2aa8); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_002A4610(c);
{ int t = RD(2) != RD(0); SET64(3, RD(0) + RD(0)); if (t) goto L_002B2AB8; }
L_002B2AB0:;
wr8(c, (RW(16) + 14), (u8)RW(3)); { POLL(); goto L_002B2A98; }
L_002B2AB8:;
SET64(2, (s32)rd32(c, (RW(16) + 4)));
SET64(4, (s32)rd32(c, (RW(2) + 44)));
SET64(5, (s32)rd32(c, (RW(2) + 48)));
SET64(31, 0x2b2acc); SET32(6, RW(16) + 8); F_001384A0(c);
SET64(3, RD(2) ^ 0x1);
SET64(3, RD(3) < (u64)(s64)1); { POLL(); goto L_002B2AB0; }
L_002B2AD8:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B2AF0(Ctx *c) { /* func_002B2AF0 */
ENTER(0x2b2af0);
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
SET64(31, 0x2b2b20); SET32(4, RW(17) + 8); F_001272C8(c);
SET64(3, rd8(c, (RW(16) + 14)));
SET64(2, RD(17) + RD(0));
wr8(c, (RW(17) + 14), (u8)RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B2B40(Ctx *c) { /* func_002B2B40 */
ENTER(0x2b2b40);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002B2B7C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20224);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 0), RW(3)); if (t) goto L_002B2B78; }
SET64(31, 0x2b2b78);  F_001004B0(c);
L_002B2B78:;
SET64(2, RD(16) + RD(0));
L_002B2B7C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B2B90(Ctx *c) { /* func_002B2B90 */
ENTER(0x2b2b90);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(4) + 4), RW(0));
SET32(2, RW(2) + -20224);
wr8(c, (RW(4) + 14), (u8)RW(0));
wr32(c, (RW(4) + 0), RW(2));
SET64(2, RD(4) + RD(0)); return;
}

void F_002B2BB0(Ctx *c) { /* func_002B2BB0 */
ENTER(0x2b2bb0);
SET32(29, RW(29) + -32);
SET64(2, (s64)(s32)0x4e0000);
wr64(c, (RW(29) + 16), RD(31));
SET32(2, RW(2) + -20224);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
wr32(c, (RW(4) + 4), RW(5));
SET64(16, RD(4) + RD(0));
wr8(c, (RW(4) + 14), (u8)RW(0));
SET64(31, 0x2b2bd8); wr32(c, (RW(4) + 0), RW(2)); F_002B2850(c);
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B2BF0(Ctx *c) { /* func_002B2BF0 */
ENTER(0x2b2bf0);
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
{ int t = RD(1) == RD(0); SET64(18, RD(0) + RD(0)); if (t) goto L_002B2DA8; }
L_002B2C28:;
SET64(4, (s32)rd32(c, (RW(20) + 80)));
SET32(2, RW(18) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B2C44; }
SET32(2, RW(4) << 2); goto L_002B2C4C;
L_002B2C44:;
SET32(4, RW(5) - RW(18));
SET32(2, RW(4) << 2);
L_002B2C4C:;
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
SET64(31, 0x2b2ca0); wr64(c, (RW(20) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(20) + 40)));
mul_s(c, 0, 16, RSW(17), RSW(2));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b2cb4); SET64(5, RD(18) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(16) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(19) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b2cdc); SET64(7, RD(2) | 0x305); F_002AEB00(c);
SET64(4, RD(20) + RD(0));
SET64(5, RD(18) + RD(0));
SET64(31, 0x2b2cec); SET32(16, RW(17) << 16); F_002A2B50(c);
SET64(3, rd8(c, (RW(20) + 42)));
mul_s(c, 0, 6, RSW(17), RSW(3));
SET64(5, RD(2) + RD(0));
SET64(2, (s64)(s32)0x6c000000);
SET64(4, RD(19) + RD(0));
SET64(3, RD(2) | 0x8004);
SET32(6, RW(6) << 3);
SET64(2, (s64)(s32)0x1000000);
SET64(8, RD(16) | RD(3));
SET64(31, 0x2b2d18); SET64(7, RD(2) | 0x105); F_002AEB00(c);
SET64(2, rd8(c, (RW(20) + 43)));
mul_s(c, 0, 21, RSW(17), RSW(2));
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b2d2c); SET64(5, RD(18) + RD(0)); F_002A2B20(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(21) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(21) << 2);
SET64(2, RD(2) | 0xc005);
SET64(4, RD(19) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b2d54); SET64(7, RD(2) | 0x105); F_002AEB00(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b2d60); SET64(5, RD(18) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(6, RW(17) << 3);
SET64(2, (s64)(s32)0x7d000000);
SET64(4, RD(19) + RD(0));
SET64(3, RD(2) | 0xc001);
SET64(2, (s64)(s32)0x1000000);
SET64(8, RD(16) | RD(3));
SET64(31, 0x2b2d84); SET64(7, RD(2) | 0x105); F_002AEB00(c);
SET64(4, RD(20) + RD(0));
SET64(31, 0x2b2d90); SET64(5, RD(19) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(20) + 80)));
SET64(5, rd16(c, (RW(20) + 28)));
SET32(18, RW(18) + RW(3));
SET64(3, RSD(18) < RSD(5));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B2C28; } }
L_002B2DA8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002B2DD0(Ctx *c) { /* func_002B2DD0 */
ENTER(0x2b2dd0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B2E30; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B2E04; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B2E04; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B2E04; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B2E50;
L_002B2E04:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9696)));
SET64(5, (s32)rd32(c, (RW(3) + 9192)));
SET64(8, (s32)rd32(c, (RW(28) + -30088)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8976)));
SET64(31, 0x2b2e28); SET32(7, RW(0) + 28); F_0029FD30(c);
 goto L_002B2E4C;
L_002B2E30:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b2e4c); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B2E4C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B2E50:;
SET32(29, RW(29) + 16); return;
}

void F_002B2E60(Ctx *c) { /* func_002B2E60 */
ENTER(0x2b2e60);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B2EB4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20208);
SET32(2, RW(2) + -20168);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b2e9c); wr32(c, (RW(17) + 64), RW(2)); F_002B1E60(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B2EB8; }
SET64(31, 0x2b2eb4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B2EB4:;
SET64(2, RD(17) + RD(0));
L_002B2EB8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B2ED0(Ctx *c) { /* func_002B2ED0 */
ENTER(0x2b2ed0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(5) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b2ef4); SET64(16, RD(4) + RD(0)); F_002B1ED0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20168);
SET32(3, RW(3) + -20208);
SET64(17, RD(18) & 0xffff);
wr32(c, (RW(16) + 64), RW(2));
SET32(2, RW(17) << 1);
wr32(c, (RW(16) + 0), RW(3));
SET32(6, RW(2) + RW(17));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 3);
SET64(31, 0x2b2f2c); SET32(8, RW(0) + 1); F_002A2F00(c);
SET32(6, RW(17) << 1);
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b2f44); SET32(8, RW(0) + 1); F_002A2D80(c);
SET32(7, RW(0) + 1);
SET64(6, RD(17) + RD(0));
SET64(4, RD(16) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b2f5c); SET64(8, RD(7) + RD(0)); F_002A2CC0(c);
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
{ u32 t = RW(25); SET64(31, 0x2b2fa0); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B2FC0(Ctx *c) { /* func_002B2FC0 */
ENTER(0x2b2fc0);
SET32(4, RW(4) + -64); { F_002B2E60(c); return; }
}

void F_002B2FD0(Ctx *c) { /* func_002B2FD0 */
ENTER(0x2b2fd0);
SET64(2, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(5, RD(2) + RD(0)); { F_002A57C0(c); return; }
}

void F_002B2FE0(Ctx *c) { /* func_002B2FE0 */
ENTER(0x2b2fe0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B3028; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20144);
SET64(31, 0x2b3010); wr32(c, (RW(17) + 32), RW(2)); F_002B30A0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B302C; }
SET64(31, 0x2b3028); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B3028:;
SET64(2, RD(17) + RD(0));
L_002B302C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B3040(Ctx *c) { /* func_002B3040 */
ENTER(0x2b3040);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b305c); SET64(16, RD(6) + RD(0)); F_002B3100(c);
rd128(c, (RW(16) + 0) & ~15u, &c->r[3]);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20144);
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

void F_002B3090(Ctx *c) { /* func_002B3090 */
ENTER(0x2b3090);
SET64(2, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(5, RD(2) + RD(0)); { F_002A5850(c); return; }
}

void F_002B30A0(Ctx *c) { /* func_002B30A0 */
ENTER(0x2b30a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B30E8; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20112);
SET64(31, 0x2b30d0); wr32(c, (RW(17) + 32), RW(2)); F_002B3140(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B30EC; }
SET64(31, 0x2b30e8); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B30E8:;
SET64(2, RD(17) + RD(0));
L_002B30EC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B3100(Ctx *c) { /* func_002B3100 */
ENTER(0x2b3100);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b3114); SET64(16, RD(4) + RD(0)); F_002B3190(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 16), RW(0));
SET32(2, RW(2) + -20112);
wr32(c, (RW(16) + 32), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B3140(Ctx *c) { /* func_002B3140 */
ENTER(0x2b3140);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(2, RD(16) + RD(0)); if (t) goto L_002B317C; }
SET64(2, RD(5) << 48);
SET64(3, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20080);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; wr32(c, (RW(16) + 32), RW(3)); if (t) goto L_002B3178; }
SET64(31, 0x2b3178);  F_001004B0(c);
L_002B3178:;
SET64(2, RD(16) + RD(0));
L_002B317C:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B3190(Ctx *c) { /* func_002B3190 */
ENTER(0x2b3190);
rd128(c, (RW(5) + 0) & ~15u, &c->r[5]);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20080);
SET32(3, RW(0) + -1);
wr32(c, (RW(4) + 32), RW(2));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 16), RW(3));
wr128(c, (RW(4) + 0) & ~15u, &c->r[5]); return;
}

void F_002B31C0(Ctx *c) { /* func_002B31C0 */
ENTER(0x2b31c0);
SET64(2, RD(4) + RD(0));
SET64(4, RD(5) + RD(0));
SET64(5, RD(2) + RD(0)); { F_002A5740(c); return; }
}

void F_002B31D0(Ctx *c) { /* func_002B31D0 */
ENTER(0x2b31d0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B3218; }
SET64(2, (s64)(s32)0x4e0000);
SET64(5, RD(0) + RD(0));
SET32(2, RW(2) + -20048);
SET64(31, 0x2b3200); wr32(c, (RW(17) + 32), RW(2)); F_002B2FE0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B321C; }
SET64(31, 0x2b3218); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B3218:;
SET64(2, RD(17) + RD(0));
L_002B321C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B3230(Ctx *c) { /* func_002B3230 */
ENTER(0x2b3230);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[16]);
wr32(c, (RW(29) + 0), c->f[20].u);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2b324c); c->f[20].u = c->f[12].u; F_002B3040(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20048);
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

void F_002B3280(Ctx *c) { /* func_002B3280 */
ENTER(0x2b3280);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B33CC; }
L_002B32B8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B32D4; }
SET32(2, RW(4) << 2); goto L_002B32DC;
L_002B32D4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B32DC:;
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
SET64(31, 0x2b3330); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3344); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b336c); SET64(7, RD(2) | 0x202); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3378); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc0d9);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b33a0); SET64(7, RD(2) | 0x101); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b33ac); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B32B8; } }
L_002B33CC:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B33F0(Ctx *c) { /* func_002B33F0 */
ENTER(0x2b33f0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B3450; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B3424; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B3424; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B3424; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B3470;
L_002B3424:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9568)));
SET64(5, (s32)rd32(c, (RW(3) + 9112)));
SET64(8, (s32)rd32(c, (RW(28) + -30152)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8848)));
SET64(31, 0x2b3448); SET32(7, RW(0) + 106); F_0029FD30(c);
 goto L_002B346C;
L_002B3450:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b346c); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B346C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B3470:;
SET32(29, RW(29) + 16); return;
}

void F_002B3480(Ctx *c) { /* func_002B3480 */
ENTER(0x2b3480);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B34D4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -20016);
SET32(2, RW(2) + -19976);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b34bc); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B34D8; }
SET64(31, 0x2b34d4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B34D4:;
SET64(2, RD(17) + RD(0));
L_002B34D8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B34F0(Ctx *c) { /* func_002B34F0 */
ENTER(0x2b34f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b350c); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -20016);
SET32(3, RW(3) + -19976);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(6, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b3540); SET32(8, RW(0) + 1); F_002A2F00(c);
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
{ u32 t = RW(25); SET64(31, 0x2b3570); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b3584); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B35A0(Ctx *c) { /* func_002B35A0 */
ENTER(0x2b35a0);
SET32(4, RW(4) + -64); { F_002B3480(c); return; }
}

void F_002B35B0(Ctx *c) { /* func_002B35B0 */
ENTER(0x2b35b0);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B36FC; }
L_002B35E8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B3604; }
SET32(2, RW(4) << 2); goto L_002B360C;
L_002B3604:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B360C:;
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
SET64(31, 0x2b3660); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3674); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b369c); SET64(7, RD(2) | 0x101); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b36a8); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b36d0); SET64(7, RD(2) | 0x101); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b36dc); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B35E8; } }
L_002B36FC:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B3720(Ctx *c) { /* func_002B3720 */
ENTER(0x2b3720);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B37CC; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B37A0; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B37A0; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B37A0; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B3774; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B3774; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B3774; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B37EC;
L_002B3774:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9320)));
SET64(5, (s32)rd32(c, (RW(3) + 9040)));
SET64(8, (s32)rd32(c, (RW(28) + -30276)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8608)));
SET64(31, 0x2b3798); SET32(7, RW(0) + 218); F_0029FD30(c);
 goto L_002B37E8;
L_002B37A0:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9384)));
SET64(5, (s32)rd32(c, (RW(3) + 9040)));
SET64(8, (s32)rd32(c, (RW(28) + -30244)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8664)));
SET64(31, 0x2b37c4); SET32(7, RW(0) + 198); F_0029FD30(c);
 goto L_002B37E8;
L_002B37CC:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b37e8); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B37E8:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B37EC:;
SET32(29, RW(29) + 16); return;
}

void F_002B3800(Ctx *c) { /* func_002B3800 */
ENTER(0x2b3800);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b3814); SET64(16, RD(4) + RD(0)); F_002A2A20(c);
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

void F_002B3840(Ctx *c) { /* func_002B3840 */
ENTER(0x2b3840);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b3854); SET64(16, RD(4) + RD(0)); F_002A2A80(c);
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

void F_002B3880(Ctx *c) { /* func_002B3880 */
ENTER(0x2b3880);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B38D4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19952);
SET32(2, RW(2) + -19912);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b38bc); wr32(c, (RW(17) + 64), RW(2)); F_002B6410(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B38D8; }
SET64(31, 0x2b38d4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B38D4:;
SET64(2, RD(17) + RD(0));
L_002B38D8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B38F0(Ctx *c) { /* func_002B38F0 */
ENTER(0x2b38f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b390c); SET64(16, RD(5) + RD(0)); F_002B6480(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19952);
SET32(2, RW(2) + -19912);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(6, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b393c); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
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
{ u32 t = RW(25); SET64(31, 0x2b397c); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b3990); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b39a4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B39C0(Ctx *c) { /* func_002B39C0 */
ENTER(0x2b39c0);
SET32(4, RW(4) + -64); { F_002B3880(c); return; }
}

void F_002B39D0(Ctx *c) { /* func_002B39D0 */
ENTER(0x2b39d0);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B3B1C; }
L_002B3A08:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B3A24; }
SET32(2, RW(4) << 2); goto L_002B3A2C;
L_002B3A24:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B3A2C:;
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
SET64(31, 0x2b3a80); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3a94); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b3abc); SET64(7, RD(2) | 0x101); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3ac8); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b3af0); SET64(7, RD(2) | 0x101); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3afc); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B3A08; } }
L_002B3B1C:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B3B40(Ctx *c) { /* func_002B3B40 */
ENTER(0x2b3b40);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B3BA0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B3B74; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B3B74; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B3B74; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B3BC0;
L_002B3B74:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9448)));
SET64(5, (s32)rd32(c, (RW(3) + 9040)));
SET64(8, (s32)rd32(c, (RW(28) + -30212)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8728)));
SET64(31, 0x2b3b98); SET32(7, RW(0) + 218); F_0029FD30(c);
 goto L_002B3BBC;
L_002B3BA0:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b3bbc); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B3BBC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B3BC0:;
SET32(29, RW(29) + 16); return;
}

void F_002B3BD0(Ctx *c) { /* func_002B3BD0 */
ENTER(0x2b3bd0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B3C24; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19888);
SET32(2, RW(2) + -19848);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b3c0c); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B3C28; }
SET64(31, 0x2b3c24); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B3C24:;
SET64(2, RD(17) + RD(0));
L_002B3C28:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B3C40(Ctx *c) { /* func_002B3C40 */
ENTER(0x2b3c40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b3c5c); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19888);
SET32(2, RW(2) + -19848);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(6, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b3c8c); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
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
{ u32 t = RW(25); SET64(31, 0x2b3cbc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b3cd0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B3CF0(Ctx *c) { /* func_002B3CF0 */
ENTER(0x2b3cf0);
SET32(4, RW(4) + -64); { F_002B3BD0(c); return; }
}

void F_002B3D00(Ctx *c) { /* func_002B3D00 */
ENTER(0x2b3d00);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B3E88; }
L_002B3D38:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B3D54; }
SET32(2, RW(4) << 2); goto L_002B3D5C;
L_002B3D54:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B3D5C:;
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
SET64(31, 0x2b3db0); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3dc4); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b3dec); SET64(7, RD(2) | 0x102); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3e00); SET64(5, RD(17) + RD(0)); F_002A2B20(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b3e28); SET64(7, RD(2) | 0x102); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3e34); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b3e5c); SET64(7, RD(2) | 0x102); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b3e68); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B3D38; } }
L_002B3E88:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B3EB0(Ctx *c) { /* func_002B3EB0 */
ENTER(0x2b3eb0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B3F5C; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B3F30; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B3F30; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B3F30; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B3F04; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B3F04; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B3F04; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B3F7C;
L_002B3F04:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9328)));
SET64(5, (s32)rd32(c, (RW(3) + 9048)));
SET64(8, (s32)rd32(c, (RW(28) + -30272)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8616)));
SET64(31, 0x2b3f28); SET32(7, RW(0) + 110); F_0029FD30(c);
 goto L_002B3F78;
L_002B3F30:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9392)));
SET64(5, (s32)rd32(c, (RW(3) + 9048)));
SET64(8, (s32)rd32(c, (RW(28) + -30240)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8672)));
SET64(31, 0x2b3f54); SET32(7, RW(0) + 98); F_0029FD30(c);
 goto L_002B3F78;
L_002B3F5C:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b3f78); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B3F78:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B3F7C:;
SET32(29, RW(29) + 16); return;
}

void F_002B3F90(Ctx *c) { /* func_002B3F90 */
ENTER(0x2b3f90);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b3fa4); SET64(16, RD(4) + RD(0)); F_002A2A20(c);
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

void F_002B3FD0(Ctx *c) { /* func_002B3FD0 */
ENTER(0x2b3fd0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b3fe4); SET64(16, RD(4) + RD(0)); F_002A2A80(c);
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

void F_002B4010(Ctx *c) { /* func_002B4010 */
ENTER(0x2b4010);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4064; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19824);
SET32(2, RW(2) + -19784);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b404c); wr32(c, (RW(17) + 64), RW(2)); F_002B6410(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B4068; }
SET64(31, 0x2b4064); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B4064:;
SET64(2, RD(17) + RD(0));
L_002B4068:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B4080(Ctx *c) { /* func_002B4080 */
ENTER(0x2b4080);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b40a0); SET64(16, RD(5) + RD(0)); F_002B6480(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19824);
SET32(2, RW(2) + -19784);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b40d4); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b40ec); SET64(8, RD(7) + RD(0)); F_002A2CC0(c);
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
{ u32 t = RW(25); SET64(31, 0x2b412c); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b4140); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b4154); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B4170(Ctx *c) { /* func_002B4170 */
ENTER(0x2b4170);
SET32(4, RW(4) + -64); { F_002B4010(c); return; }
}

void F_002B4180(Ctx *c) { /* func_002B4180 */
ENTER(0x2b4180);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B4308; }
L_002B41B8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B41D4; }
SET32(2, RW(4) << 2); goto L_002B41DC;
L_002B41D4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B41DC:;
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
SET64(31, 0x2b4230); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4244); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b426c); SET64(7, RD(2) | 0x102); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4280); SET64(5, RD(17) + RD(0)); F_002A2B20(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b42a8); SET64(7, RD(2) | 0x102); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b42b4); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b42dc); SET64(7, RD(2) | 0x102); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b42e8); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B41B8; } }
L_002B4308:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B4330(Ctx *c) { /* func_002B4330 */
ENTER(0x2b4330);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B4390; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B4364; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B4364; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B4364; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B43B0;
L_002B4364:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9456)));
SET64(5, (s32)rd32(c, (RW(3) + 9048)));
SET64(8, (s32)rd32(c, (RW(28) + -30208)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8736)));
SET64(31, 0x2b4388); SET32(7, RW(0) + 110); F_0029FD30(c);
 goto L_002B43AC;
L_002B4390:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b43ac); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B43AC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B43B0:;
SET32(29, RW(29) + 16); return;
}

void F_002B43C0(Ctx *c) { /* func_002B43C0 */
ENTER(0x2b43c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4414; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19760);
SET32(2, RW(2) + -19720);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b43fc); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B4418; }
SET64(31, 0x2b4414); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B4414:;
SET64(2, RD(17) + RD(0));
L_002B4418:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B4430(Ctx *c) { /* func_002B4430 */
ENTER(0x2b4430);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b4450); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19760);
SET32(2, RW(2) + -19720);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b4484); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b449c); SET64(8, RD(7) + RD(0)); F_002A2CC0(c);
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
{ u32 t = RW(25); SET64(31, 0x2b44cc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b44e0); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B4500(Ctx *c) { /* func_002B4500 */
ENTER(0x2b4500);
SET32(4, RW(4) + -64); { F_002B43C0(c); return; }
}

void F_002B4510(Ctx *c) { /* func_002B4510 */
ENTER(0x2b4510);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B4698; }
L_002B4548:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B4564; }
SET32(2, RW(4) << 2); goto L_002B456C;
L_002B4564:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B456C:;
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
SET64(31, 0x2b45c0); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b45d4); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b45fc); SET64(7, RD(2) | 0x203); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4610); SET64(5, RD(17) + RD(0)); F_002A2B20(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b4638); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4644); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc0d9);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b466c); SET64(7, RD(2) | 0x101); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4678); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B4548; } }
L_002B4698:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B46C0(Ctx *c) { /* func_002B46C0 */
ENTER(0x2b46c0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B4720; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B46F4; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B46F4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B46F4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B4740;
L_002B46F4:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9576)));
SET64(5, (s32)rd32(c, (RW(3) + 9120)));
SET64(8, (s32)rd32(c, (RW(28) + -30148)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8856)));
SET64(31, 0x2b4718); SET32(7, RW(0) + 70); F_0029FD30(c);
 goto L_002B473C;
L_002B4720:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b473c); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B473C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B4740:;
SET32(29, RW(29) + 16); return;
}

void F_002B4750(Ctx *c) { /* func_002B4750 */
ENTER(0x2b4750);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B47A4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19696);
SET32(2, RW(2) + -19656);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b478c); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B47A8; }
SET64(31, 0x2b47a4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B47A4:;
SET64(2, RD(17) + RD(0));
L_002B47A8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B47C0(Ctx *c) { /* func_002B47C0 */
ENTER(0x2b47c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b47dc); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -19696);
SET32(3, RW(3) + -19656);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(6, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b4810); SET32(8, RW(0) + 1); F_002A2F00(c);
SET32(7, RW(0) + 1);
SET64(6, RD(16) & 0xffff);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b4828); SET64(8, RD(7) + RD(0)); F_002A2CC0(c);
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
{ u32 t = RW(25); SET64(31, 0x2b4858); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b486c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B4890(Ctx *c) { /* func_002B4890 */
ENTER(0x2b4890);
SET32(4, RW(4) + -64); { F_002B4750(c); return; }
}

void F_002B48A0(Ctx *c) { /* func_002B48A0 */
ENTER(0x2b48a0);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B4A64; }
L_002B48D8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B48F4; }
SET32(2, RW(4) << 2); goto L_002B48FC;
L_002B48F4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B48FC:;
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
SET64(31, 0x2b4950); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4964); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b498c); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b49a0); SET64(5, RD(17) + RD(0)); F_002A2B50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b49c8); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b49dc); SET64(5, RD(17) + RD(0)); F_002A2B20(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b4a04); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4a10); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b4a38); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4a44); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B48D8; } }
L_002B4A64:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B4A90(Ctx *c) { /* func_002B4A90 */
ENTER(0x2b4a90);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B4B3C; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B4B10; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B4B10; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B4B10; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B4AE4; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B4AE4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B4AE4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B4B5C;
L_002B4AE4:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9272)));
SET64(5, (s32)rd32(c, (RW(3) + 9056)));
SET64(8, (s32)rd32(c, (RW(28) + -30300)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8552)));
SET64(31, 0x2b4b08); SET32(7, RW(0) + 70); F_0029FD30(c);
 goto L_002B4B58;
L_002B4B10:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9408)));
SET64(5, (s32)rd32(c, (RW(3) + 9056)));
SET64(8, (s32)rd32(c, (RW(28) + -30232)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8688)));
SET64(31, 0x2b4b34); SET32(7, RW(0) + 62); F_0029FD30(c);
 goto L_002B4B58;
L_002B4B3C:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b4b58); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B4B58:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B4B5C:;
SET32(29, RW(29) + 16); return;
}

void F_002B4B70(Ctx *c) { /* func_002B4B70 */
ENTER(0x2b4b70);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b4b84); SET64(16, RD(4) + RD(0)); F_002A2A20(c);
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

void F_002B4BB0(Ctx *c) { /* func_002B4BB0 */
ENTER(0x2b4bb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b4bc4); SET64(16, RD(4) + RD(0)); F_002A2A80(c);
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

void F_002B4BF0(Ctx *c) { /* func_002B4BF0 */
ENTER(0x2b4bf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B4C44; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19632);
SET32(2, RW(2) + -19592);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b4c2c); wr32(c, (RW(17) + 64), RW(2)); F_002B6410(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B4C48; }
SET64(31, 0x2b4c44); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B4C44:;
SET64(2, RD(17) + RD(0));
L_002B4C48:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B4C60(Ctx *c) { /* func_002B4C60 */
ENTER(0x2b4c60);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b4c80); SET64(16, RD(5) + RD(0)); F_002B6480(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19632);
SET32(2, RW(2) + -19592);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b4cb4); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b4ccc); SET64(8, RD(7) + RD(0)); F_002A2D80(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b4ce4); SET64(8, RD(7) + RD(0)); F_002A2CC0(c);
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
{ u32 t = RW(25); SET64(31, 0x2b4d24); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b4d38); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b4d4c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B4D70(Ctx *c) { /* func_002B4D70 */
ENTER(0x2b4d70);
SET32(4, RW(4) + -64); { F_002B4BF0(c); return; }
}

void F_002B4D80(Ctx *c) { /* func_002B4D80 */
ENTER(0x2b4d80);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B4F44; }
L_002B4DB8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B4DD4; }
SET32(2, RW(4) << 2); goto L_002B4DDC;
L_002B4DD4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B4DDC:;
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
SET64(31, 0x2b4e30); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4e44); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b4e6c); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4e80); SET64(5, RD(17) + RD(0)); F_002A2B50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b4ea8); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4ebc); SET64(5, RD(17) + RD(0)); F_002A2B20(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b4ee4); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4ef0); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b4f18); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b4f24); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B4DB8; } }
L_002B4F44:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B4F70(Ctx *c) { /* func_002B4F70 */
ENTER(0x2b4f70);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B4FD0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B4FA4; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B4FA4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B4FA4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B4FF0;
L_002B4FA4:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9464)));
SET64(5, (s32)rd32(c, (RW(3) + 9056)));
SET64(8, (s32)rd32(c, (RW(28) + -30204)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8744)));
SET64(31, 0x2b4fc8); SET32(7, RW(0) + 70); F_0029FD30(c);
 goto L_002B4FEC;
L_002B4FD0:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b4fec); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B4FEC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B4FF0:;
SET32(29, RW(29) + 16); return;
}

void F_002B5000(Ctx *c) { /* func_002B5000 */
ENTER(0x2b5000);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B5054; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19568);
SET32(2, RW(2) + -19528);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b503c); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B5058; }
SET64(31, 0x2b5054); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B5054:;
SET64(2, RD(17) + RD(0));
L_002B5058:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B5070(Ctx *c) { /* func_002B5070 */
ENTER(0x2b5070);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b5090); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19568);
SET32(2, RW(2) + -19528);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b50c4); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b50dc); SET64(8, RD(7) + RD(0)); F_002A2D80(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b50f4); SET64(8, RD(7) + RD(0)); F_002A2CC0(c);
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
{ u32 t = RW(25); SET64(31, 0x2b5124); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b5138); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B5160(Ctx *c) { /* func_002B5160 */
ENTER(0x2b5160);
SET32(4, RW(4) + -64); { F_002B5000(c); return; }
}

void F_002B5170(Ctx *c) { /* func_002B5170 */
ENTER(0x2b5170);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B5334; }
L_002B51A8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B51C4; }
SET32(2, RW(4) << 2); goto L_002B51CC;
L_002B51C4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B51CC:;
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
SET64(31, 0x2b5220); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5234); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b525c); SET64(7, RD(2) | 0x204); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5270); SET64(5, RD(17) + RD(0)); F_002A2B50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5298); SET64(7, RD(2) | 0x104); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 43)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b52ac); SET64(5, RD(17) + RD(0)); F_002A2B20(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6e000000);
SET32(6, RW(20) << 2);
SET64(2, RD(2) | 0xc004);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b52d4); SET64(7, RD(2) | 0x104); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b52e0); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc0e1);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5308); SET64(7, RD(2) | 0x101); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5314); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B51A8; } }
L_002B5334:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B5360(Ctx *c) { /* func_002B5360 */
ENTER(0x2b5360);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B53C0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B5394; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B5394; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B5394; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B53E0;
L_002B5394:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9584)));
SET64(5, (s32)rd32(c, (RW(3) + 9128)));
SET64(8, (s32)rd32(c, (RW(28) + -30144)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8864)));
SET64(31, 0x2b53b8); SET32(7, RW(0) + 54); F_0029FD30(c);
 goto L_002B53DC;
L_002B53C0:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b53dc); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B53DC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B53E0:;
SET32(29, RW(29) + 16); return;
}

void F_002B53F0(Ctx *c) { /* func_002B53F0 */
ENTER(0x2b53f0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B5444; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19504);
SET32(2, RW(2) + -19464);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b542c); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B5448; }
SET64(31, 0x2b5444); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B5444:;
SET64(2, RD(17) + RD(0));
L_002B5448:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B5460(Ctx *c) { /* func_002B5460 */
ENTER(0x2b5460);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b5480); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -19504);
SET32(3, RW(3) + -19464);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(6, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b54b4); SET32(8, RW(0) + 1); F_002A2F00(c);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b54d0); SET64(8, RD(7) + RD(0)); F_002A2D80(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b54e8); SET64(8, RD(7) + RD(0)); F_002A2CC0(c);
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
{ u32 t = RW(25); SET64(31, 0x2b5518); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b552c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B5550(Ctx *c) { /* func_002B5550 */
ENTER(0x2b5550);
SET32(4, RW(4) + -64); { F_002B53F0(c); return; }
}

void F_002B5560(Ctx *c) { /* func_002B5560 */
ENTER(0x2b5560);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B5724; }
L_002B5598:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B55B4; }
SET32(2, RW(4) << 2); goto L_002B55BC;
L_002B55B4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B55BC:;
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
SET64(31, 0x2b5610); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5624); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b564c); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5660); SET64(5, RD(17) + RD(0)); F_002A2B80(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5688); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b569c); SET64(5, RD(17) + RD(0)); F_002A2B50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b56c4); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b56d0); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b56f8); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5704); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B5598; } }
L_002B5724:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B5750(Ctx *c) { /* func_002B5750 */
ENTER(0x2b5750);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B57FC; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B57D0; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B57D0; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B57D0; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B57A4; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B57A4; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B57A4; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B581C;
L_002B57A4:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9280)));
SET64(5, (s32)rd32(c, (RW(3) + 9080)));
SET64(8, (s32)rd32(c, (RW(28) + -30296)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8560)));
SET64(31, 0x2b57c8); SET32(7, RW(0) + 70); F_0029FD30(c);
 goto L_002B5818;
L_002B57D0:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9432)));
SET64(5, (s32)rd32(c, (RW(3) + 9080)));
SET64(8, (s32)rd32(c, (RW(28) + -30220)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8712)));
SET64(31, 0x2b57f4); SET32(7, RW(0) + 62); F_0029FD30(c);
 goto L_002B5818;
L_002B57FC:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b5818); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B5818:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B581C:;
SET32(29, RW(29) + 16); return;
}

void F_002B5830(Ctx *c) { /* func_002B5830 */
ENTER(0x2b5830);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b5844); SET64(16, RD(4) + RD(0)); F_002A2A20(c);
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

void F_002B5870(Ctx *c) { /* func_002B5870 */
ENTER(0x2b5870);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b5884); SET64(16, RD(4) + RD(0)); F_002A2A80(c);
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

void F_002B58B0(Ctx *c) { /* func_002B58B0 */
ENTER(0x2b58b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B5904; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19440);
SET32(2, RW(2) + -19400);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b58ec); wr32(c, (RW(17) + 64), RW(2)); F_002B6410(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B5908; }
SET64(31, 0x2b5904); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B5904:;
SET64(2, RD(17) + RD(0));
L_002B5908:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B5920(Ctx *c) { /* func_002B5920 */
ENTER(0x2b5920);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b5940); SET64(16, RD(5) + RD(0)); F_002B6480(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19440);
SET32(2, RW(2) + -19400);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b5974); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b598c); SET64(8, RD(7) + RD(0)); F_002A2E40(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b59a4); SET64(8, RD(7) + RD(0)); F_002A2D80(c);
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
{ u32 t = RW(25); SET64(31, 0x2b59e4); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b59f8); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b5a0c); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B5A30(Ctx *c) { /* func_002B5A30 */
ENTER(0x2b5a30);
SET32(4, RW(4) + -64); { F_002B58B0(c); return; }
}

void F_002B5A40(Ctx *c) { /* func_002B5A40 */
ENTER(0x2b5a40);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B5C04; }
L_002B5A78:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B5A94; }
SET32(2, RW(4) << 2); goto L_002B5A9C;
L_002B5A94:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B5A9C:;
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
SET64(31, 0x2b5af0); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5b04); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5b2c); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5b40); SET64(5, RD(17) + RD(0)); F_002A2B80(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5b68); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5b7c); SET64(5, RD(17) + RD(0)); F_002A2B50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5ba4); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5bb0); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5bd8); SET64(7, RD(2) | 0x103); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5be4); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B5A78; } }
L_002B5C04:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B5C30(Ctx *c) { /* func_002B5C30 */
ENTER(0x2b5c30);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B5C90; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B5C64; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B5C64; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B5C64; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B5CB0;
L_002B5C64:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9480)));
SET64(5, (s32)rd32(c, (RW(3) + 9080)));
SET64(8, (s32)rd32(c, (RW(28) + -30196)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8760)));
SET64(31, 0x2b5c88); SET32(7, RW(0) + 70); F_0029FD30(c);
 goto L_002B5CAC;
L_002B5C90:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b5cac); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B5CAC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B5CB0:;
SET32(29, RW(29) + 16); return;
}

void F_002B5CC0(Ctx *c) { /* func_002B5CC0 */
ENTER(0x2b5cc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B5D14; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19376);
SET32(2, RW(2) + -19336);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b5cfc); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B5D18; }
SET64(31, 0x2b5d14); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B5D14:;
SET64(2, RD(17) + RD(0));
L_002B5D18:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B5D30(Ctx *c) { /* func_002B5D30 */
ENTER(0x2b5d30);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b5d50); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19376);
SET32(2, RW(2) + -19336);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b5d84); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
SET32(7, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b5d9c); SET64(8, RD(7) + RD(0)); F_002A2E40(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b5db4); SET64(8, RD(7) + RD(0)); F_002A2D80(c);
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
{ u32 t = RW(25); SET64(31, 0x2b5de4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b5df8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B5E20(Ctx *c) { /* func_002B5E20 */
ENTER(0x2b5e20);
SET32(4, RW(4) + -64); { F_002B5CC0(c); return; }
}

void F_002B5E30(Ctx *c) { /* func_002B5E30 */
ENTER(0x2b5e30);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B5FFC; }
L_002B5E68:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B5E84; }
SET32(2, RW(4) << 2); goto L_002B5E8C;
L_002B5E84:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B5E8C:;
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
SET64(31, 0x2b5ee0); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5ef4); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5f1c); SET64(7, RD(2) | 0x205); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5f30); SET64(5, RD(17) + RD(0)); F_002A2B80(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5f58); SET64(7, RD(2) | 0x205); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 42)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5f6c); SET64(5, RD(17) + RD(0)); F_002A2B50(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x64000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8005);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b5f94); SET64(7, RD(2) | 0x105); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5fa0); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
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
SET64(31, 0x2b5fd0); SET64(8, RD(2) | RD(3)); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b5fdc); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B5E68; } }
L_002B5FFC:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B6020(Ctx *c) { /* func_002B6020 */
ENTER(0x2b6020);
SET32(29, RW(29) + -32);
SET64(3, RD(0) | 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002B6090; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B605C; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B605C; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B605C; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B60B0;
L_002B605C:;
SET64(2, (s64)(s32)0x4b0000);
SET64(8, (s32)rd32(c, (RW(28) + -30136)));
SET64(5, (s32)rd32(c, (RW(2) + 9152)));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9600)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8880)));
SET64(31, 0x2b6084); SET32(7, RW(0) + 46); F_0029FD30(c);
SET32(3, RW(0) + 241);
wr32(c, (RW(16) + 212), RW(3)); goto L_002B60AC;
L_002B6090:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b60ac); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B60AC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B60B0:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B60C0(Ctx *c) { /* func_002B60C0 */
ENTER(0x2b60c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6114; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19312);
SET32(2, RW(2) + -19272);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b60fc); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B6118; }
SET64(31, 0x2b6114); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B6114:;
SET64(2, RD(17) + RD(0));
L_002B6118:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B6130(Ctx *c) { /* func_002B6130 */
ENTER(0x2b6130);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b6150); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -19312);
SET32(3, RW(3) + -19272);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(18, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b6188); SET32(8, RW(0) + 1); F_002A2F00(c);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b61a0); SET32(8, RW(0) + 1); F_002A2E40(c);
SET32(7, RW(0) + 1);
SET64(6, RD(16) & 0xffff);
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b61b8); SET64(8, RD(7) + RD(0)); F_002A2D80(c);
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
{ u32 t = RW(25); SET64(31, 0x2b61e8); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b61fc); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B6220(Ctx *c) { /* func_002B6220 */
ENTER(0x2b6220);
SET32(4, RW(4) + -64); { F_002B60C0(c); return; }
}

void F_002B6230(Ctx *c) { /* func_002B6230 */
ENTER(0x2b6230);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, (s32)rd32(c, (RW(4) + 208)));
{ int t = RD(16) != RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002B6260; }
L_002B6258:;
SET64(31, rd64(c, (RW(29) + 64))); goto L_002B62D4;
L_002B6260:;
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2b6274); SET64(7, (s64)(s32)0x10000000); F_002AEBE0(c);
SET32(5, RW(16) << 6);
SET64(2, (s64)(s32)0x6c000000);
SET32(3, RW(5) >> 4);
SET64(2, RD(2) | 0x23);
SET32(3, RW(3) << 16);
SET64(4, RD(17) + RD(0));
SET64(7, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b629c); SET64(6, RD(2) | 0x101); F_002AEBE0(c);
SET64(1, RSD(0) < RSD(16));
{ int t = RD(1) == RD(0); SET64(19, RD(0) + RD(0)); if (t) goto L_002B62D0; }
L_002B62A8:;
SET64(5, (s32)rd32(c, (RW(18) + 160)));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b62b8); SET32(6, RW(0) + 4); F_002AEC30(c);
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(16));
{ int t = RD(3) != RD(0); SET32(18, RW(18) + 4); if (t) { POLL(); goto L_002B62A8; } }
 { POLL(); goto L_002B6258; }
L_002B62D0:;
SET64(31, rd64(c, (RW(29) + 64)));
L_002B62D4:;
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002B62F0(Ctx *c) { /* func_002B62F0 */
ENTER(0x2b62f0);
SET64(7, (s32)rd32(c, (RW(4) + 208)));
SET64(3, RSD(7) < (s64)12);
{ int t = RD(3) != RD(0); SET32(6, RW(7) + 1); if (t) goto L_002B6308; }
L_002B6300:;
 goto L_002B631C;
L_002B6308:;
SET32(3, RW(7) << 2);
wr32(c, (RW(4) + 208), RW(6));
SET32(3, RW(3) + RW(4));
wr32(c, (RW(3) + 160), RW(5)); { POLL(); goto L_002B6300; }
L_002B631C:;
 return;
}

void F_002B6330(Ctx *c) { /* func_002B6330 */
ENTER(0x2b6330);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
{ int t = RD(16) == RD(0); SET64(17, RD(5) + RD(0)); if (t) goto L_002B63A0; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19248);
SET32(2, RW(2) + -19208);
wr32(c, (RW(16) + 0), RW(3));
{ int t = RD(16) == RD(0); wr32(c, (RW(16) + 64), RW(2)); if (t) goto L_002B6388; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19184);
SET32(2, RW(2) + -19144);
wr32(c, (RW(16) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b6388); wr32(c, (RW(16) + 64), RW(2)); F_0029FDA0(c);
L_002B6388:;
SET64(2, RD(17) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(16) + RD(0)); if (t) goto L_002B63A4; }
SET64(31, 0x2b63a0); SET64(4, RD(16) + RD(0)); F_001004B0(c);
L_002B63A0:;
SET64(2, RD(16) + RD(0));
L_002B63A4:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B63C0(Ctx *c) { /* func_002B63C0 */
ENTER(0x2b63c0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b63d4); SET64(16, RD(4) + RD(0)); F_0029FE20(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(0));
SET32(2, RW(2) + -19248);
wr32(c, (RW(16) + 148), RW(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 208), RW(0));
SET32(2, RW(2) + -19208);
wr32(c, (RW(16) + 212), RW(0));
wr32(c, (RW(16) + 64), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B6410(Ctx *c) { /* func_002B6410 */
ENTER(0x2b6410);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6464; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19184);
SET32(2, RW(2) + -19144);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b644c); wr32(c, (RW(17) + 64), RW(2)); F_0029FDA0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B6468; }
SET64(31, 0x2b6464); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B6464:;
SET64(2, RD(17) + RD(0));
L_002B6468:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B6480(Ctx *c) { /* func_002B6480 */
ENTER(0x2b6480);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b6494); SET64(16, RD(4) + RD(0)); F_0029FE20(c);
SET64(2, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 144), RW(0));
SET32(2, RW(2) + -19184);
wr32(c, (RW(16) + 148), RW(0));
wr32(c, (RW(16) + 0), RW(2));
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -19144);
wr32(c, (RW(16) + 64), RW(2));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B64D0(Ctx *c) { /* func_002B64D0 */
ENTER(0x2b64d0);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B661C; }
L_002B6508:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B6524; }
SET32(2, RW(4) << 2); goto L_002B652C;
L_002B6524:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B652C:;
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
SET64(31, 0x2b6580); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6594); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b65bc); SET64(7, RD(2) | 0x101); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b65c8); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b65f0); SET64(7, RD(2) | 0x101); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b65fc); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B6508; } }
L_002B661C:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B6640(Ctx *c) { /* func_002B6640 */
ENTER(0x2b6640);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B66EC; }
SET64(3, RD(0) | 0x8003);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8002); if (t) goto L_002B66C0; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B66C0; }
SET32(3, RW(0) + 1);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B66C0; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B6694; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B6694; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B6694; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B670C;
L_002B6694:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9304)));
SET64(5, (s32)rd32(c, (RW(3) + 9040)));
SET64(8, (s32)rd32(c, (RW(28) + -30284)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8584)));
SET64(31, 0x2b66b8); SET32(7, RW(0) + 110); F_0029FD30(c);
 goto L_002B6708;
L_002B66C0:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9424)));
SET64(5, (s32)rd32(c, (RW(3) + 9040)));
SET64(8, (s32)rd32(c, (RW(28) + -30224)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8704)));
SET64(31, 0x2b66e4); SET32(7, RW(0) + 94); F_0029FD30(c);
 goto L_002B6708;
L_002B66EC:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b6708); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B6708:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B670C:;
SET32(29, RW(29) + 16); return;
}

void F_002B6720(Ctx *c) { /* func_002B6720 */
ENTER(0x2b6720);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b6734); SET64(16, RD(4) + RD(0)); F_002A2A20(c);
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

void F_002B6760(Ctx *c) { /* func_002B6760 */
ENTER(0x2b6760);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b6774); SET64(16, RD(4) + RD(0)); F_002A2A80(c);
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

void F_002B67A0(Ctx *c) { /* func_002B67A0 */
ENTER(0x2b67a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B67F4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19120);
SET32(2, RW(2) + -19080);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b67dc); wr32(c, (RW(17) + 64), RW(2)); F_002B6410(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B67F8; }
SET64(31, 0x2b67f4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B67F4:;
SET64(2, RD(17) + RD(0));
L_002B67F8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B6810(Ctx *c) { /* func_002B6810 */
ENTER(0x2b6810);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b682c); SET64(16, RD(5) + RD(0)); F_002B6480(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19120);
SET32(2, RW(2) + -19080);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(6, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(2));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b685c); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
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
{ u32 t = RW(25); SET64(31, 0x2b689c); SET64(5, RSD(5) >> 32); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(4, RD(17) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b68b0); SET64(5, RD(0) | 0x8000); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b68c4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B68E0(Ctx *c) { /* func_002B68E0 */
ENTER(0x2b68e0);
SET32(4, RW(4) + -64); { F_002B67A0(c); return; }
}

void F_002B68F0(Ctx *c) { /* func_002B68F0 */
ENTER(0x2b68f0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B6950; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B6924; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B6924; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B6924; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B6970;
L_002B6924:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9528)));
SET64(5, (s32)rd32(c, (RW(3) + 9104)));
SET64(8, (s32)rd32(c, (RW(28) + -30172)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8808)));
SET64(31, 0x2b6948); SET32(7, RW(0) + 86); F_0029FD30(c);
 goto L_002B696C;
L_002B6950:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b696c); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B696C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B6970:;
SET32(29, RW(29) + 16); return;
}

void F_002B6980(Ctx *c) { /* func_002B6980 */
ENTER(0x2b6980);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B69D4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -19056);
SET32(2, RW(2) + -19016);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b69bc); wr32(c, (RW(17) + 64), RW(2)); F_002B6DE0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B69D8; }
SET64(31, 0x2b69d4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B69D4:;
SET64(2, RD(17) + RD(0));
L_002B69D8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B69F0(Ctx *c) { /* func_002B69F0 */
ENTER(0x2b69f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b6a04); SET64(16, RD(4) + RD(0)); F_002B6E50(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -19056);
SET32(3, RW(3) + -19016);
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 64), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B6A30(Ctx *c) { /* func_002B6A30 */
ENTER(0x2b6a30);
SET32(4, RW(4) + -64); { F_002B6980(c); return; }
}

void F_002B6A40(Ctx *c) { /* func_002B6A40 */
ENTER(0x2b6a40);
SET32(29, RW(29) + -32);
SET64(3, RD(0) | 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002B6AB0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B6A7C; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B6A7C; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B6A7C; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B6AD0;
L_002B6A7C:;
SET64(2, (s64)(s32)0x4b0000);
SET64(8, (s32)rd32(c, (RW(28) + -30112)));
SET64(5, (s32)rd32(c, (RW(2) + 9176)));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9648)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8928)));
SET64(31, 0x2b6aa4); SET32(7, RW(0) + 54); F_0029FD30(c);
SET32(3, RW(0) + 225);
wr32(c, (RW(16) + 212), RW(3)); goto L_002B6ACC;
L_002B6AB0:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b6acc); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B6ACC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B6AD0:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B6AE0(Ctx *c) { /* func_002B6AE0 */
ENTER(0x2b6ae0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6B34; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -18992);
SET32(2, RW(2) + -18952);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b6b1c); wr32(c, (RW(17) + 64), RW(2)); F_002B7180(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B6B38; }
SET64(31, 0x2b6b34); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B6B34:;
SET64(2, RD(17) + RD(0));
L_002B6B38:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B6B50(Ctx *c) { /* func_002B6B50 */
ENTER(0x2b6b50);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b6b64); SET64(16, RD(4) + RD(0)); F_002B71F0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18992);
SET32(3, RW(3) + -18952);
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 64), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B6B90(Ctx *c) { /* func_002B6B90 */
ENTER(0x2b6b90);
SET32(4, RW(4) + -64); { F_002B6AE0(c); return; }
}

void F_002B6BA0(Ctx *c) { /* func_002B6BA0 */
ENTER(0x2b6ba0);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B6D28; }
L_002B6BD8:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B6BF4; }
SET32(2, RW(4) << 2); goto L_002B6BFC;
L_002B6BF4:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B6BFC:;
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
SET64(31, 0x2b6c50); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6c64); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b6c8c); SET64(7, RD(2) | 0x102); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6ca0); SET64(5, RD(17) + RD(0)); F_002A2B80(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8002);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b6cc8); SET64(7, RD(2) | 0x102); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6cd4); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(16) << 16);
SET64(2, (s64)(s32)0x7d000000);
SET32(6, RW(16) << 3);
SET64(2, RD(2) | 0xc001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b6cfc); SET64(7, RD(2) | 0x102); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6d08); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B6BD8; } }
L_002B6D28:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B6D50(Ctx *c) { /* func_002B6D50 */
ENTER(0x2b6d50);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B6DB0; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B6D84; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B6D84; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B6D84; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B6DD0;
L_002B6D84:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9520)));
SET64(5, (s32)rd32(c, (RW(3) + 9104)));
SET64(8, (s32)rd32(c, (RW(28) + -30176)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8800)));
SET64(31, 0x2b6da8); SET32(7, RW(0) + 86); F_0029FD30(c);
 goto L_002B6DCC;
L_002B6DB0:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b6dcc); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B6DCC:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B6DD0:;
SET32(29, RW(29) + 16); return;
}

void F_002B6DE0(Ctx *c) { /* func_002B6DE0 */
ENTER(0x2b6de0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B6E34; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -18928);
SET32(2, RW(2) + -18888);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b6e1c); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B6E38; }
SET64(31, 0x2b6e34); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B6E34:;
SET64(2, RD(17) + RD(0));
L_002B6E38:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B6E50(Ctx *c) { /* func_002B6E50 */
ENTER(0x2b6e50);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b6e70); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -18928);
SET32(2, RW(2) + -18888);
SET64(18, RD(16) & 0xffff);
SET32(7, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 64), RW(2));
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET64(31, 0x2b6ea4); SET64(8, RD(7) + RD(0)); F_002A2F00(c);
SET32(7, RW(0) + 1);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b6ebc); SET64(8, RD(7) + RD(0)); F_002A2E40(c);
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
{ u32 t = RW(25); SET64(31, 0x2b6eec); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b6f00); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B6F20(Ctx *c) { /* func_002B6F20 */
ENTER(0x2b6f20);
SET32(4, RW(4) + -64); { F_002B6DE0(c); return; }
}

void F_002B6F30(Ctx *c) { /* func_002B6F30 */
ENTER(0x2b6f30);
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
{ int t = RD(1) == RD(0); SET64(17, RD(0) + RD(0)); if (t) goto L_002B70C0; }
L_002B6F68:;
SET64(4, (s32)rd32(c, (RW(19) + 80)));
SET32(2, RW(17) + RW(4));
SET64(1, RSD(2) < RSD(5));
{ int t = RD(1) == RD(0);  if (t) goto L_002B6F84; }
SET32(2, RW(4) << 2); goto L_002B6F8C;
L_002B6F84:;
SET32(4, RW(5) - RW(17));
SET32(2, RW(4) << 2);
L_002B6F8C:;
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
SET64(31, 0x2b6fe0); wr64(c, (RW(19) + 48), RD(2)); F_002AEB60(c);
SET64(2, rd8(c, (RW(19) + 40)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b6ff4); SET64(5, RD(17) + RD(0)); F_002A2BB0(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6c000000);
SET32(6, RW(20) << 4);
SET64(2, RD(2) | 0x8001);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b701c); SET64(7, RD(2) | 0x204); F_002AEB00(c);
SET64(2, rd8(c, (RW(19) + 41)));
mul_s(c, 0, 20, RSW(16), RSW(2));
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7030); SET64(5, RD(17) + RD(0)); F_002A2B80(c);
SET64(5, RD(2) + RD(0));
SET32(3, RW(20) << 16);
SET64(2, (s64)(s32)0x6d000000);
SET32(6, RW(20) << 3);
SET64(2, RD(2) | 0x8003);
SET64(4, RD(18) + RD(0));
SET64(8, RD(3) | RD(2));
SET64(2, (s64)(s32)0x1000000);
SET64(31, 0x2b7058); SET64(7, RD(2) | 0x204); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b7064); SET64(5, RD(17) + RD(0)); F_002A2B00(c);
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
SET64(31, 0x2b7094); SET64(8, RD(2) | RD(3)); F_002AEB00(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b70a0); SET64(5, RD(18) + RD(0)); F_0029FD00(c);
SET64(3, (s32)rd32(c, (RW(19) + 80)));
SET64(5, rd16(c, (RW(19) + 28)));
SET32(3, RW(3) + -2);
SET32(17, RW(17) + RW(3));
SET32(3, RW(5) + -2);
SET64(3, RSD(17) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B6F68; } }
L_002B70C0:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B70E0(Ctx *c) { /* func_002B70E0 */
ENTER(0x2b70e0);
SET32(29, RW(29) + -32);
SET64(3, RD(0) | 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002B7150; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B711C; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B711C; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B711C; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B7170;
L_002B711C:;
SET64(2, (s64)(s32)0x4b0000);
SET64(8, (s32)rd32(c, (RW(28) + -30116)));
SET64(5, (s32)rd32(c, (RW(2) + 9176)));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9640)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8920)));
SET64(31, 0x2b7144); SET32(7, RW(0) + 54); F_0029FD30(c);
SET32(3, RW(0) + 225);
wr32(c, (RW(16) + 212), RW(3)); goto L_002B716C;
L_002B7150:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b716c); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B716C:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B7170:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B7180(Ctx *c) { /* func_002B7180 */
ENTER(0x2b7180);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B71D4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -18864);
SET32(2, RW(2) + -18824);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b71bc); wr32(c, (RW(17) + 64), RW(2)); F_002B6330(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B71D8; }
SET64(31, 0x2b71d4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B71D4:;
SET64(2, RD(17) + RD(0));
L_002B71D8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B71F0(Ctx *c) { /* func_002B71F0 */
ENTER(0x2b71f0);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b7210); SET64(16, RD(5) + RD(0)); F_002B63C0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18864);
SET32(3, RW(3) + -18824);
wr32(c, (RW(17) + 0), RW(2));
SET64(4, RD(17) + RD(0));
SET64(2, RD(16) & 0xffff);
wr32(c, (RW(17) + 64), RW(3));
SET32(18, RW(2) << 1);
SET64(5, RD(0) + RD(0));
SET64(6, RD(18) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b7248); SET32(8, RW(0) + 1); F_002A2F00(c);
SET64(6, RD(18) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + 2);
SET64(31, 0x2b7260); SET32(8, RW(0) + 1); F_002A2E40(c);
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
{ u32 t = RW(25); SET64(31, 0x2b7290); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(25, (s32)rd32(c, (RW(17) + 0)));
SET64(5, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b72a4); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B72C0(Ctx *c) { /* func_002B72C0 */
ENTER(0x2b72c0);
SET32(4, RW(4) + -64); { F_002B7180(c); return; }
}

void F_002B72D0(Ctx *c) { /* func_002B72D0 */
ENTER(0x2b72d0);
SET32(29, RW(29) + -16);
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); wr64(c, (RW(29) + 0), RD(31)); if (t) goto L_002B7330; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B7304; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B7304; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B7304; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B7350;
L_002B7304:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9552)));
SET64(5, (s32)rd32(c, (RW(3) + 9104)));
SET64(8, (s32)rd32(c, (RW(28) + -30160)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8832)));
SET64(31, 0x2b7328); SET32(7, RW(0) + 86); F_0029FD30(c);
 goto L_002B734C;
L_002B7330:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b734c); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B734C:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B7350:;
SET32(29, RW(29) + 16); return;
}

void F_002B7360(Ctx *c) { /* func_002B7360 */
ENTER(0x2b7360);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B73B4; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -18800);
SET32(2, RW(2) + -18760);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b739c); wr32(c, (RW(17) + 64), RW(2)); F_002B6DE0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B73B8; }
SET64(31, 0x2b73b4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B73B4:;
SET64(2, RD(17) + RD(0));
L_002B73B8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B73D0(Ctx *c) { /* func_002B73D0 */
ENTER(0x2b73d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b73e4); SET64(16, RD(4) + RD(0)); F_002B6E50(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18800);
SET32(3, RW(3) + -18760);
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 64), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B7410(Ctx *c) { /* func_002B7410 */
ENTER(0x2b7410);
SET32(4, RW(4) + -64); { F_002B7360(c); return; }
}

void F_002B7420(Ctx *c) { /* func_002B7420 */
ENTER(0x2b7420);
SET32(29, RW(29) + -32);
SET64(3, RD(0) | 0xffff);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
{ int t = RD(5) == RD(3); SET64(16, RD(4) + RD(0)); if (t) goto L_002B7490; }
SET64(3, RD(0) | 0x8001);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8000); if (t) goto L_002B745C; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B745C; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B745C; }
SET64(31, rd64(c, (RW(29) + 16))); goto L_002B74B0;
L_002B745C:;
SET64(2, (s64)(s32)0x4b0000);
SET64(8, (s32)rd32(c, (RW(28) + -30100)));
SET64(5, (s32)rd32(c, (RW(2) + 9176)));
SET64(4, RD(16) + RD(0));
SET64(2, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9672)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8952)));
SET64(31, 0x2b7484); SET32(7, RW(0) + 54); F_0029FD30(c);
SET32(3, RW(0) + 225);
wr32(c, (RW(16) + 212), RW(3)); goto L_002B74AC;
L_002B7490:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b74ac); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B74AC:;
SET64(31, rd64(c, (RW(29) + 16)));
L_002B74B0:;
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B74C0(Ctx *c) { /* func_002B74C0 */
ENTER(0x2b74c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B7514; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -18736);
SET32(2, RW(2) + -18696);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b74fc); wr32(c, (RW(17) + 64), RW(2)); F_002B7180(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B7518; }
SET64(31, 0x2b7514); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B7514:;
SET64(2, RD(17) + RD(0));
L_002B7518:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B7530(Ctx *c) { /* func_002B7530 */
ENTER(0x2b7530);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b7544); SET64(16, RD(4) + RD(0)); F_002B71F0(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18736);
SET32(3, RW(3) + -18696);
wr32(c, (RW(16) + 0), RW(2));
wr32(c, (RW(16) + 64), RW(3));
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B7570(Ctx *c) { /* func_002B7570 */
ENTER(0x2b7570);
SET32(4, RW(4) + -64); { F_002B74C0(c); return; }
}

void F_002B7580(Ctx *c) { /* func_002B7580 */
ENTER(0x2b7580);
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
SET32(4, RW(4) + -27152);
SET64(2, RD(2) << 32);
SET64(2, RSD(2) >> 32);
SET64(31, 0x2b75cc); wr32(c, (RW(29) + 48), RW(2)); F_002B1FD0(c);
SET64(2, (s64)(s32)0x1000000);
SET64(4, RD(16) + RD(0));
SET64(7, RD(2) | 0x101);
SET32(5, RW(29) + 48);
SET64(2, (s64)(s32)0x6c010000);
SET32(6, RW(0) + 16);
SET64(31, 0x2b75ec); SET64(8, RD(2) | 0x59); F_002AEB60(c);
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b75f8); SET64(5, RD(16) + RD(0)); F_002B5E30(c);
SET64(4, (s64)(s32)0x540000);
SET64(5, RD(16) + RD(0));
SET64(31, 0x2b7608); SET32(4, RW(4) + -27088); F_002B1FD0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B7620(Ctx *c) { /* func_002B7620 */
ENTER(0x2b7620);
SET32(29, RW(29) + -16);
SET32(3, RW(0) + 221);
wr64(c, (RW(29) + 0), RD(31));
wr32(c, (RW(4) + 212), RW(3));
SET64(3, RD(0) | 0xffff);
{ int t = RD(5) == RD(3); SET64(3, RD(0) | 0x8001); if (t) goto L_002B768C; }
{ int t = RD(5) == RD(3);  if (t) goto L_002B7660; }
SET64(3, RD(0) | 0x8000);
{ int t = RD(5) == RD(3);  if (t) goto L_002B7660; }
{ int t = RD(5) == RD(0);  if (t) goto L_002B7660; }
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B76AC;
L_002B7660:;
SET64(2, (s64)(s32)0x4b0000);
SET64(3, (s64)(s32)0x4b0000);
SET64(6, (s32)rd32(c, (RW(2) + 9608)));
SET64(5, (s32)rd32(c, (RW(3) + 9152)));
SET64(8, (s32)rd32(c, (RW(28) + -30132)));
SET64(2, (s64)(s32)0x4b0000);
SET64(9, (s32)rd32(c, (RW(2) + 8888)));
SET64(31, 0x2b7684); SET32(7, RW(0) + 42); F_0029FD30(c);
 goto L_002B76A8;
L_002B768C:;
SET64(2, (s64)(s32)0x4b0000);
SET64(7, RD(0) + RD(0));
SET64(5, (s32)rd32(c, (RW(2) + 9008)));
SET64(8, RD(0) + RD(0));
SET64(9, RD(0) + RD(0));
SET64(31, 0x2b76a8); SET64(6, RD(5) + RD(0)); F_0029FD30(c);
L_002B76A8:;
SET64(31, rd64(c, (RW(29) + 0)));
L_002B76AC:;
SET32(29, RW(29) + 16); return;
}

void F_002B76C0(Ctx *c) { /* func_002B76C0 */
ENTER(0x2b76c0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B7714; }
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -18672);
SET32(2, RW(2) + -18632);
wr32(c, (RW(17) + 0), RW(3));
SET64(5, RD(0) + RD(0));
SET64(31, 0x2b76fc); wr32(c, (RW(17) + 64), RW(2)); F_002B60C0(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B7718; }
SET64(31, 0x2b7714); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B7714:;
SET64(2, RD(17) + RD(0));
L_002B7718:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B7730(Ctx *c) { /* func_002B7730 */
ENTER(0x2b7730);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b7744); SET64(16, RD(4) + RD(0)); F_002B6130(c);
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18672);
SET32(3, RW(3) + -18632);
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
{ u32 t = RW(25); SET64(31, 0x2b778c); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B77A0(Ctx *c) { /* func_002B77A0 */
ENTER(0x2b77a0);
SET32(4, RW(4) + -64); { F_002B76C0(c); return; }
}

void F_002B77B0(Ctx *c) { /* func_002B77B0 */
ENTER(0x2b77b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2b77d4); SET64(16, RD(4) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 308)));
{ int t = RD(16) == RD(0);  if (t) goto L_002B7800; }
L_002B77E0:;
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(4, RD(16) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2b77f4); SET64(5, RD(17) + RD(0)); rt_call(c, t); }
SET64(16, (s32)rd32(c, (RW(16) + 4)));
{ int t = RD(16) != RD(0);  if (t) { POLL(); goto L_002B77E0; } }
L_002B7800:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B7820(Ctx *c) { /* func_002B7820 */
ENTER(0x2b7820);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 304)));
SET64(31, 0x2b7840); SET64(16, RD(5) + RD(0)); F_0029F990(c);
SET32(4, RW(17) + 208);
SET64(31, 0x2b784c); SET64(5, RD(16) + RD(0)); F_0029F8B0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B7860(Ctx *c) { /* func_002B7860 */
ENTER(0x2b7860);
SET32(29, RW(29) + -128);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) & 0x1);
{ int t = RD(3) != RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002B7908; }
L_002B788C:;
SET64(3, (s32)rd32(c, (RW(18) + 140)));
SET64(3, RD(3) & 0x2);
{ int t = RD(3) != RD(0); SET64(6, RD(17) + RD(0)); if (t) goto L_002B7924; }
L_002B789C:;
SET64(3, (s32)rd32(c, (RW(18) + 140)));
SET64(3, RD(3) & 0x40);
{ int t = RD(3) != RD(0);  if (t) goto L_002B7974; }
wr32(c, (RW(18) + 304), RW(16));
SET64(3, (s32)rd32(c, (RW(18) + 132)));
L_002B78B4:;
{ int t = RD(3) == RD(0);  if (t) goto L_002B7900; }
SET64(3, (s32)rd32(c, (RW(3) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 16)));
{ int t = RSD(3) <= 0; SET32(16, RW(3) + -1); if (t) goto L_002B7900; }
L_002B78CC:;
SET64(2, (s32)rd32(c, (RW(18) + 132)));
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(31, 0x2b78dc); SET64(5, RD(16) + RD(0)); F_002AAE30(c);
SET64(25, (s32)rd32(c, (RW(2) + 144)));
SET64(4, RD(2) + RD(0));
SET64(6, (s32)rd32(c, (RW(18) + 304)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b78f4); SET32(5, RW(18) + 64); rt_call(c, t); }
SET64(3, RD(16) + RD(0));
{ int t = RSD(3) > 0; SET32(16, RW(16) + -1); if (t) { POLL(); goto L_002B78CC; } }
L_002B7900:;
SET64(31, rd64(c, (RW(29) + 48))); goto L_002B7984;
L_002B7908:;
SET64(31, 0x2b7910);  F_002A2380(c);
SET64(4, (s32)rd32(c, (RW(18) + 140)));
SET32(3, RW(0) + -2);
SET64(3, RD(4) & RD(3));
wr32(c, (RW(18) + 140), RW(3)); { POLL(); goto L_002B788C; }
L_002B7924:;
SET32(4, RW(29) + 64);
SET64(31, 0x2b7930); SET64(5, RD(18) + RD(0)); F_002ABB90(c);
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
wr128(c, (RW(18) + 288) & ~15u, &c->r[5]); { POLL(); goto L_002B789C; }
L_002B7974:;
SET64(31, 0x2b797c); SET64(4, (s32)rd32(c, (RW(18) + 304))); F_002A56C0(c);
SET64(3, (s32)rd32(c, (RW(18) + 132))); { POLL(); goto L_002B78B4; }
L_002B7984:;
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_002B79A0(Ctx *c) { /* func_002B79A0 */
ENTER(0x2b79a0);
{ int t = RD(5) == RD(0); wr32(c, (RW(4) + 304), RW(5)); if (t) goto L_002B79B8; }
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) | 0x40);
wr32(c, (RW(4) + 140), RW(3)); goto L_002B79C8;
L_002B79B8:;
SET64(5, (s32)rd32(c, (RW(4) + 140)));
SET32(3, RW(0) + -65);
SET64(3, RD(5) & RD(3));
wr32(c, (RW(4) + 140), RW(3));
L_002B79C8:;
 return;
}

void F_002B79D0(Ctx *c) { /* func_002B79D0 */
ENTER(0x2b79d0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 308)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B79F8; }
SET64(31, 0x2b79f4);  F_002AB890(c);
wr32(c, (RW(16) + 308), RW(2));
L_002B79F8:;
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B7A10(Ctx *c) { /* func_002B7A10 */
ENTER(0x2b7a10);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(3, (s32)rd32(c, (RW(4) + 308)));
{ int t = RD(3) == RD(0);  if (t) goto L_002B7A34; }
SET64(31, 0x2b7a2c); SET64(4, RD(3) + RD(0)); F_002AB920(c);
L_002B7A2C:;
SET64(31, rd64(c, (RW(29) + 0))); goto L_002B7A3C;
L_002B7A34:;
wr32(c, (RW(4) + 308), RW(5)); { POLL(); goto L_002B7A2C; }
L_002B7A3C:;
SET32(29, RW(29) + 16); return;
}

void F_002B7A50(Ctx *c) { /* func_002B7A50 */
ENTER(0x2b7a50);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(4) + 140)));
SET64(3, RD(3) & 0x8);
{ int t = RD(3) == RD(0); SET64(17, RD(4) + RD(0)); if (t) goto L_002B7AAC; }
SET64(4, (s32)rd32(c, (RW(17) + 308)));
{ int t = RD(4) == RD(0);  if (t) goto L_002B7AAC; }
{ int t = RD(4) == RD(0);  if (t) goto L_002B7AA8; }
L_002B7A84:;
SET64(16, (s32)rd32(c, (RW(4) + 4)));
{ int t = RD(4) == RD(0); wr32(c, (RW(4) + 4), RW(0)); if (t) goto L_002B7AA0; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b7aa0); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002B7AA0:;
{ int t = RD(16) != RD(0); SET64(4, RD(16) + RD(0)); if (t) { POLL(); goto L_002B7A84; } }
L_002B7AA8:;
wr32(c, (RW(17) + 308), RW(0));
L_002B7AAC:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B7AC0(Ctx *c) { /* func_002B7AC0 */
ENTER(0x2b7ac0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B7B1C; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18608);
wr32(c, (RW(17) + 144), RW(2));
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b7af8);  rt_call(c, t); }
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b7b04); SET64(5, RD(0) + RD(0)); F_002A2410(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
{ int t = RSD(2) <= 0; SET64(2, RD(17) + RD(0)); if (t) goto L_002B7B20; }
SET64(31, 0x2b7b1c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B7B1C:;
SET64(2, RD(17) + RD(0));
L_002B7B20:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B7B40(Ctx *c) { /* func_002B7B40 */
ENTER(0x2b7b40);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b7b5c); SET64(16, RD(5) + RD(0)); F_002A2470(c);
SET64(2, (s64)(s32)0x4e0000);
SET32(4, RW(17) + 208);
SET32(2, RW(2) + -18608);
SET64(31, 0x2b7b70); wr32(c, (RW(17) + 144), RW(2)); F_0029F940(c);
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

void F_002B7BB0(Ctx *c) { /* func_002B7BB0 */
ENTER(0x2b7bb0);
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

void F_002B7BE0(Ctx *c) { /* func_002B7BE0 */
ENTER(0x2b7be0);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2b7bf0); SET64(4, (s32)rd32(c, (RW(4) + 576))); F_002A27A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002B7C00(Ctx *c) { /* func_002B7C00 */
ENTER(0x2b7c00);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2b7c10); SET64(4, (s32)rd32(c, (RW(4) + 576))); F_002A27F0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002B7C20(Ctx *c) { /* func_002B7C20 */
ENTER(0x2b7c20);
wr32(c, (RW(4) + 496), RW(5));
SET64(3, (s32)rd32(c, (RW(5) + 16)));
wr32(c, (RW(4) + 544), RW(3)); return;
}

void F_002B7C30(Ctx *c) { /* func_002B7C30 */
ENTER(0x2b7c30);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(3, rd8(c, (RW(4) + 8)));
{ int t = RD(3) != RD(0); SET64(16, RD(6) + RD(0)); if (t) goto L_002B7C9C; }
SET64(4, (s32)rd32(c, (RW(18) + 496)));
if (RD(4) == RD(0)) { SET32(4, RW(18) + 352); goto L_002B7C78; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b7c74);  rt_call(c, t); }
SET32(4, RW(18) + 352);
L_002B7C78:;
SET64(31, 0x2b7c80); SET64(5, RD(17) + RD(0)); F_002B0F40(c);
SET32(4, RW(18) + 448);
SET64(31, 0x2b7c8c); SET64(5, RD(17) + RD(0)); F_002B12C0(c);
SET32(4, RW(18) + 32);
SET64(5, RD(17) + RD(0));
SET64(31, 0x2b7c9c); SET64(6, RD(16) + RD(0)); F_002B77B0(c);
L_002B7C9C:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B7CC0(Ctx *c) { /* func_002B7CC0 */
ENTER(0x2b7cc0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 580)));
{ int t = RD(4) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B7CF8; }
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002B7CEC; }
SET32(5, RW(5) + 32);
L_002B7CEC:;
SET64(31, 0x2b7cf4);  F_00240930(c);
wr32(c, (RW(17) + 580), RW(0));
L_002B7CF8:;
if (RD(16) != RD(0)) { SET64(5, RD(17) + RD(0)); goto L_002B7D10; }
SET64(31, 0x2b7d08);  F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(5, RD(17) + RD(0));
L_002B7D10:;
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002B7D20; }
SET32(5, RW(17) + 32);
SET64(4, RD(16) + RD(0));
L_002B7D20:;
SET64(31, 0x2b7d28);  F_002A3210(c);
SET64(31, 0x2b7d30); SET64(4, RD(17) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002B7D54; }
SET32(2, RW(0) + 2);
SET64(31, 0x2b7d48); wr32(c, (RW(17) + 0), RW(2)); F_00139590(c);
SET64(3, (s32)rd32(c, (RW(2) + 40)));
wr32(c, (RW(17) + 12), RW(3));
SET64(31, rd64(c, (RW(29) + 32)));
L_002B7D54:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B7D70(Ctx *c) { /* func_002B7D70 */
ENTER(0x2b7d70);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(6) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B7DA0; }
SET64(2, (s64)(s32)0x540000);
SET32(2, RW(2) + -27024);
wr32(c, (RW(17) + 580), RW(2)); goto L_002B7DA4;
L_002B7DA0:;
wr32(c, (RW(17) + 580), RW(6));
L_002B7DA4:;
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002B7DB0; }
SET32(5, RW(17) + 32);
L_002B7DB0:;
SET64(31, 0x2b7db8); SET64(4, (s32)rd32(c, (RW(17) + 580))); F_00240980(c);
if (RD(16) != RD(0)) { SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002B7DD0; }
SET64(31, 0x2b7dc8);  F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002B7DD0:;
SET32(3, RW(0) + 2);
if (RD(4) == RD(3)) { SET64(18, RD(17) + RD(0)); goto L_002B7E58; }
SET32(3, RW(0) + 1);
if (RD(4) == RD(3)) { SET64(18, RD(17) + RD(0)); goto L_002B7E28; }
if (RD(4) == RD(0)) { SET64(18, RD(17) + RD(0)); goto L_002B7DF8; }
wr8(c, (RW(17) + 8), (u8)RW(0)); goto L_002B7E84;
L_002B7DF8:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002B7E08; }
SET32(18, RW(17) + 32);
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002B7E08:;
SET64(31, 0x2b7e10); SET32(5, RW(0) + 1); F_002AAE30(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2b7e20); SET64(5, RD(18) + RD(0)); F_002AB090(c);
 goto L_002B7E80;
L_002B7E28:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002B7E38; }
SET32(18, RW(17) + 32);
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002B7E38:;
SET64(31, 0x2b7e40); SET32(5, RW(0) + 2); F_002AAE30(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2b7e50); SET64(5, RD(18) + RD(0)); F_002AB090(c);
 goto L_002B7E80;
L_002B7E58:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002B7E68; }
SET32(18, RW(17) + 32);
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002B7E68:;
SET64(31, 0x2b7e70); SET64(5, RD(0) + RD(0)); F_002AAE30(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2b7e80); SET64(5, RD(18) + RD(0)); F_002AB090(c);
L_002B7E80:;
wr8(c, (RW(17) + 8), (u8)RW(0));
L_002B7E84:;
SET32(3, RW(0) + 1);
wr32(c, (RW(17) + 0), RW(3));
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B7EB0(Ctx *c) { /* func_002B7EB0 */
ENTER(0x2b7eb0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(5, (s32)rd32(c, (RW(4) + 576)));
{ int t = RD(5) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B7EF0; }
SET64(31, 0x2b7ed0); SET32(4, RW(16) + 32); F_002B79D0(c);
SET64(4, (s32)rd32(c, (RW(16) + 576)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 576), RW(0)); goto L_002B7EF0; }
SET64(25, (s32)rd32(c, (RW(4) + 0)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b7eec); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 576), RW(0));
L_002B7EF0:;
wr32(c, (RW(16) + 580), RW(0));
wr32(c, (RW(16) + 496), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B7F10(Ctx *c) { /* func_002B7F10 */
ENTER(0x2b7f10);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2b7f2c); SET32(4, RW(0) + 48); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(16, RD(2) + RD(0)); if (t) goto L_002B7F40; }
SET64(4, RD(16) + RD(0));
SET64(31, 0x2b7f40); SET64(5, RD(0) + RD(0)); F_002A2950(c);
L_002B7F40:;
SET64(5, RD(16) + RD(0));
SET32(4, RW(17) + 32);
SET64(31, 0x2b7f50); wr32(c, (RW(17) + 576), RW(16)); F_002B7A10(c);
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

void F_002B7FA0(Ctx *c) { /* func_002B7FA0 */
ENTER(0x2b7fa0);
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
SET64(31, 0x2b7fe8); SET32(5, RW(2) + RW(3)); F_002A2F00(c);
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
SET64(31, 0x2b8018); SET32(5, RW(2) + RW(3)); F_002A2D80(c);
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
SET64(31, 0x2b804c); SET32(5, RW(2) + RW(3)); F_002A2CC0(c);
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
SET64(31, 0x2b8080); SET32(5, RW(2) + RW(3)); F_002A2BE0(c);
SET64(2, rd16(c, (RW(17) + 122)));
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b8094); wr16(c, (RW(17) + 120), (u16)RW(2)); F_002B2BF0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B80B0(Ctx *c) { /* func_002B80B0 */
ENTER(0x2b80b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B8144; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18448);
SET32(3, RW(3) + -18408);
wr32(c, (RW(17) + 0), RW(2));
SET32(2, RW(17) + 112);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 64), RW(3)); if (t) goto L_002B8120; }
if (RD(2) == RD(0)) { SET64(4, RD(17) + RD(0)); goto L_002B8124; }
wr32(c, (RW(17) + 124), RW(0));
wr32(c, (RW(17) + 128), RW(0));
wr32(c, (RW(17) + 132), RW(0));
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2b810c); SET64(4, (s32)rd32(c, (RW(17) + 140))); F_001004B0(c);
wr32(c, (RW(17) + 140), RW(0));
wr16(c, (RW(17) + 116), (u16)RW(0));
wr16(c, (RW(17) + 118), (u16)RW(0));
wr16(c, (RW(17) + 120), (u16)RW(0));
wr16(c, (RW(17) + 122), (u16)RW(0));
L_002B8120:;
SET64(4, RD(17) + RD(0));
L_002B8124:;
SET64(31, 0x2b812c); SET64(5, RD(0) + RD(0)); F_002B2E60(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002B8148; }
SET64(31, 0x2b8144); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B8144:;
SET64(2, RD(17) + RD(0));
L_002B8148:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B8160(Ctx *c) { /* func_002B8160 */
ENTER(0x2b8160);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2b8180); SET64(5, RD(0) + RD(0)); F_002B2ED0(c);
SET64(5, RD(17) + RD(0));
SET32(4, RW(16) + 112);
SET64(31, 0x2b8190); SET32(6, RW(0) + 3); F_002B8D70(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -18448);
SET32(2, RW(2) + -18408);
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
SET64(31, 0x2b81dc); SET32(5, RW(2) + RW(3)); F_002A2F00(c);
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
SET64(31, 0x2b820c); SET32(5, RW(2) + RW(3)); F_002A2D80(c);
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
SET64(31, 0x2b8240); SET32(5, RW(2) + RW(3)); F_002A2CC0(c);
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
SET64(31, 0x2b8274); SET32(5, RW(2) + RW(3)); F_002A2BE0(c);
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(5, rd16(c, (RW(16) + 116)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b8288); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B82A0(Ctx *c) { /* func_002B82A0 */
ENTER(0x2b82a0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B8308; }
if (RD(17) == RD(0)) { SET64(2, RD(16) << 48); goto L_002B82F4; }
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
SET64(31, 0x2b82dc); SET64(4, (s32)rd32(c, (RW(17) + 28))); F_001004B0(c);
wr32(c, (RW(17) + 28), RW(0));
wr16(c, (RW(17) + 4), (u16)RW(0));
wr16(c, (RW(17) + 6), (u16)RW(0));
wr16(c, (RW(17) + 8), (u16)RW(0));
wr16(c, (RW(17) + 10), (u16)RW(0));
SET64(2, RD(16) << 48);
L_002B82F4:;
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002B830C; }
SET64(31, 0x2b8308); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B8308:;
SET64(2, RD(17) + RD(0));
L_002B830C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B8320(Ctx *c) { /* func_002B8320 */
ENTER(0x2b8320);
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
SET64(31, 0x2b8368); SET32(5, RW(2) + RW(3)); F_002A2F00(c);
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
SET64(31, 0x2b8398); SET32(5, RW(2) + RW(3)); F_002A2D80(c);
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
SET64(31, 0x2b83cc); SET32(5, RW(2) + RW(3)); F_002A2CC0(c);
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
SET64(31, 0x2b8400); SET32(5, RW(2) + RW(3)); F_002A2BE0(c);
SET64(2, rd16(c, (RW(17) + 122)));
SET64(5, RD(16) + RD(0));
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b8414); wr16(c, (RW(17) + 120), (u16)RW(2)); F_002B1BF0(c);
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B8430(Ctx *c) { /* func_002B8430 */
ENTER(0x2b8430);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B84BC; }
SET64(2, (s64)(s32)0x4e0000);
SET64(3, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18384);
SET32(3, RW(3) + -18344);
wr32(c, (RW(17) + 0), RW(2));
SET32(2, RW(17) + 112);
{ int t = RD(2) == RD(0); wr32(c, (RW(17) + 64), RW(3)); if (t) goto L_002B8498; }
wr32(c, (RW(17) + 124), RW(0));
wr32(c, (RW(17) + 128), RW(0));
wr32(c, (RW(17) + 132), RW(0));
wr32(c, (RW(17) + 136), RW(0));
SET64(31, 0x2b8484); SET64(4, (s32)rd32(c, (RW(17) + 140))); F_001004B0(c);
wr32(c, (RW(17) + 140), RW(0));
wr16(c, (RW(17) + 116), (u16)RW(0));
wr16(c, (RW(17) + 118), (u16)RW(0));
wr16(c, (RW(17) + 120), (u16)RW(0));
wr16(c, (RW(17) + 122), (u16)RW(0));
L_002B8498:;
SET64(4, RD(17) + RD(0));
SET64(31, 0x2b84a4); SET64(5, RD(0) + RD(0)); F_002B1E60(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002B84C0; }
SET64(31, 0x2b84bc); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B84BC:;
SET64(2, RD(17) + RD(0));
L_002B84C0:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B84E0(Ctx *c) { /* func_002B84E0 */
ENTER(0x2b84e0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(5) + RD(0));
SET64(16, RD(4) + RD(0));
SET64(31, 0x2b8500); SET64(5, RD(0) + RD(0)); F_002B1ED0(c);
SET64(5, RD(17) + RD(0));
SET32(4, RW(16) + 112);
SET64(31, 0x2b8510); SET32(6, RW(0) + 2); F_002B8D70(c);
SET64(3, (s64)(s32)0x4e0000);
SET64(2, (s64)(s32)0x4e0000);
SET32(3, RW(3) + -18384);
SET32(2, RW(2) + -18344);
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
SET64(31, 0x2b855c); SET32(5, RW(2) + RW(3)); F_002A2F00(c);
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
SET64(31, 0x2b858c); SET32(5, RW(2) + RW(3)); F_002A2D80(c);
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
SET64(31, 0x2b85c0); SET32(5, RW(2) + RW(3)); F_002A2CC0(c);
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
SET64(31, 0x2b85f4); SET32(5, RW(2) + RW(3)); F_002A2BE0(c);
SET64(25, (s32)rd32(c, (RW(16) + 0)));
SET64(5, rd16(c, (RW(16) + 116)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b8608); SET64(4, RD(16) + RD(0)); rt_call(c, t); }
SET64(2, RD(16) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B8620(Ctx *c) { /* func_002B8620 */
ENTER(0x2b8620);
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
{ int t = RD(3) != RD(2); SET64(16, RD(6) + RD(0)); if (t) goto L_002B86AC; }
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
SET64(31, 0x2b86ac); SET32(5, RW(5) + RW(2)); F_00127218(c);
L_002B86AC:;
SET64(31, 0x2b86b4); c->f[12].u = rd32(c, (RW(16) + 0)); F_0011F450(c);
c->f[12].u = rd32(c, (RW(16) + 0));
SET64(31, 0x2b86c0); c->f[20].u = c->f[0].u; F_0011F6F0(c);
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

void F_002B8730(Ctx *c) { /* func_002B8730 */
ENTER(0x2b8730);
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
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002B87BC; }
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
SET64(31, 0x2b87bc); SET32(4, RW(7) + RW(2)); F_00127218(c);
L_002B87BC:;
SET64(3, rd8(c, (RW(16) + 0)));
if (RD(3) == RD(0)) { SET64(3, RD(0) | 0x8000); goto L_002B87CC; }
SET64(3, RD(0) + RD(0));
L_002B87CC:;
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

void F_002B8820(Ctx *c) { /* func_002B8820 */
ENTER(0x2b8820);
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
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002B88A8; }
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
SET64(31, 0x2b88a8); SET32(4, RW(4) + RW(2)); F_00127218(c);
L_002B88A8:;
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

void F_002B88F0(Ctx *c) { /* func_002B88F0 */
ENTER(0x2b88f0);
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
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002B8978; }
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
SET64(31, 0x2b8978); SET32(5, RW(5) + RW(2)); F_00127218(c);
L_002B8978:;
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

void F_002B8A10(Ctx *c) { /* func_002B8A10 */
ENTER(0x2b8a10);
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

void F_002B8A90(Ctx *c) { /* func_002B8A90 */
ENTER(0x2b8a90);
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
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002B8B1C; }
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
SET64(31, 0x2b8b1c); SET32(4, RW(7) + RW(2)); F_00127218(c);
L_002B8B1C:;
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

void F_002B8B70(Ctx *c) { /* func_002B8B70 */
ENTER(0x2b8b70);
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

void F_002B8BB0(Ctx *c) { /* func_002B8BB0 */
ENTER(0x2b8bb0);
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
{ int t = RD(4) != RD(3); SET64(16, RD(6) + RD(0)); if (t) goto L_002B8C38; }
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
SET64(31, 0x2b8c38); SET32(5, RW(5) + RW(2)); F_00127218(c);
L_002B8C38:;
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

void F_002B8CA0(Ctx *c) { /* func_002B8CA0 */
ENTER(0x2b8ca0);
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

void F_002B8CF0(Ctx *c) { /* func_002B8CF0 */
ENTER(0x2b8cf0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B8D4C; }
wr32(c, (RW(17) + 12), RW(0));
wr32(c, (RW(17) + 16), RW(0));
wr32(c, (RW(17) + 20), RW(0));
wr32(c, (RW(17) + 24), RW(0));
SET64(31, 0x2b8d24); SET64(4, (s32)rd32(c, (RW(17) + 28))); F_001004B0(c);
wr32(c, (RW(17) + 28), RW(0));
SET64(2, RD(16) << 48);
wr16(c, (RW(17) + 4), (u16)RW(0));
SET64(2, RSD(2) >> 48);
wr16(c, (RW(17) + 6), (u16)RW(0));
wr16(c, (RW(17) + 8), (u16)RW(0));
{ int t = RSD(2) <= 0; wr16(c, (RW(17) + 10), (u16)RW(0)); if (t) goto L_002B8D4C; }
SET64(31, 0x2b8d4c); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B8D4C:;
SET64(2, RD(17) + RD(0));
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B8D70(Ctx *c) { /* func_002B8D70 */
ENTER(0x2b8d70);
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
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 2); if (t) goto L_002B8DB8; }
SET32(2, RW(3) + 3);
SET32(2, RSW(2) >> 2);
L_002B8DB8:;
SET32(2, RW(2) << 2);
wr16(c, (RW(19) + 0), (u16)RW(2));
SET64(2, rd16(c, (RW(19) + 4)));
SET32(3, RW(2) + 1);
{ int t = RSD(3) >= 0; SET32(2, RSW(3) >> 1); if (t) goto L_002B8DD8; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002B8DD8:;
SET32(2, RW(2) << 1);
wr16(c, (RW(19) + 2), (u16)RW(2));
SET64(4, rd16(c, (RW(19) + 4)));
SET64(2, rd16(c, (RW(19) + 6)));
SET32(3, RW(4) << 2);
mul_s(c, 0, 4, RSW(4), RSW(2));
SET32(2, RSW(3) >> 1);
{ int t = RSD(3) >= 0; SET32(18, RW(4) << 5); if (t) goto L_002B8E04; }
SET32(2, RW(3) + 1);
SET32(2, RSW(2) >> 1);
L_002B8E04:;
SET32(2, RW(2) << 4);
SET64(3, rd16(c, (RW(19) + 0)));
SET32(17, RW(18) + RW(2));
SET64(2, rd16(c, (RW(19) + 2)));
SET32(3, RW(3) << 3);
SET32(16, RW(3) + RW(17));
SET32(2, RW(2) << 4);
SET64(31, 0x2b8e28); SET32(4, RW(2) + RW(16)); F_00100530(c);
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
{ int t = RSD(2) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002B8E98; }
SET64(4, RD(0) + RD(0));
L_002B8E68:;
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
{ int t = RD(2) != RD(0); SET32(4, RW(4) + 8); if (t) { POLL(); goto L_002B8E68; } }
L_002B8E98:;
SET64(2, RD(19) + RD(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002B8EC0(Ctx *c) { /* func_002B8EC0 */
ENTER(0x2b8ec0);
SET32(4, RW(4) + -64); { F_002B8430(c); return; }
}

void F_002B8ED0(Ctx *c) { /* func_002B8ED0 */
ENTER(0x2b8ed0);
SET32(4, RW(4) + -64); { F_002B80B0(c); return; }
}

void F_002B8EE0(Ctx *c) { /* func_002B8EE0 */
ENTER(0x2b8ee0);
SET32(4, RW(4) + -32); { F_002B7C30(c); return; }
}

void F_002B8EF0(Ctx *c) { /* func_002B8EF0 */
ENTER(0x2b8ef0);
SET32(4, RW(4) + -32); { F_00159F90(c); return; }
}

void F_002B8F00(Ctx *c) { /* func_002B8F00 */
ENTER(0x2b8f00);
SET32(4, RW(4) + -352); { F_00159F90(c); return; }
}

void F_002B8F10(Ctx *c) { /* func_002B8F10 */
ENTER(0x2b8f10);
SET32(4, RW(4) + -448); { F_00159F90(c); return; }
}

void F_002B8F20(Ctx *c) { /* func_002B8F20 */
ENTER(0x2b8f20);
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
SET64(31, 0x2b8f60); SET64(16, RD(5) + RD(0)); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002B8F70; }
SET64(31, 0x2b8f70); SET64(4, RD(18) + RD(0)); F_0014FE60(c);
L_002B8F70:;
SET64(17, RD(17) & 0xffff);
SET64(16, RD(16) & 0xffff);
SET64(4, RD(18) + RD(0));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET32(7, RW(0) + 20);
SET32(8, RW(0) + 1);
SET64(31, 0x2b8f94); wr32(c, (RW(20) + 0), RW(18)); F_0014FB00(c);
SET64(31, 0x2b8f9c); SET32(4, RW(0) + 64); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002B8FAC; }
SET64(31, 0x2b8fac); SET64(4, RD(18) + RD(0)); F_0014F940(c);
L_002B8FAC:;
wr32(c, (RW(20) + 4), RW(18));
SET64(4, RD(18) + RD(0));
SET64(6, (s32)rd32(c, (RW(20) + 0)));
SET64(5, RD(0) + RD(0));
SET32(7, RW(0) + -1);
SET64(31, 0x2b8fc8); SET64(8, RD(0) + RD(0)); F_0014F2D0(c);
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(5, RD(16) + RD(0));
SET64(6, RD(17) + RD(0));
SET64(7, RD(21) + RD(0));
SET64(8, RD(21) + RD(0));
SET64(31, 0x2b8fe4); SET64(9, RD(0) + RD(0)); F_0014F3A0(c);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(5, RW(0) + 1);
SET64(6, RD(5) + RD(0));
SET64(18, (s32)rd32(c, (RW(2) + 16)));
SET64(31, 0x2b8ffc); SET32(4, RW(18) + 32); F_002B16B0(c);
SET32(4, RW(18) + 32);
SET64(5, RD(0) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(7, RD(0) + RD(0));
SET64(31, 0x2b9014); SET64(8, RD(0) + RD(0)); F_002B1650(c);
SET32(2, RW(0) + 19);
SET32(19, RW(0) + 1);
{ int t = RD(21) == RD(2); SET64(18, RD(0) + RD(0)); if (t) goto L_002B9030; }
SET32(2, RW(0) + 27);
if (RD(21) != RD(2)) { SET32(2, RW(0) + 20); goto L_002B903C; }
L_002B9030:;
SET32(18, RW(0) + 256);
SET32(19, RW(0) + 1);
SET32(2, RW(0) + 20);
L_002B903C:;
if (RD(21) == RD(2)) { SET32(18, RW(0) + 16); goto L_002B9060; }
SET32(2, RW(0) + 36);
{ int t = RD(21) == RD(2);  if (t) goto L_002B905C; }
SET32(2, RW(0) + 44);
{ int t = RD(21) != RD(2);  if (t) goto L_002B9064; }
L_002B905C:;
SET32(18, RW(0) + 16);
L_002B9060:;
SET64(19, RD(0) + RD(0));
L_002B9064:;
if (RD(18) == RD(0)) { SET32(4, RW(0) + 3088); goto L_002B9154; }
SET64(31, 0x2b9074); SET32(4, RW(18) << 2); F_00100530(c);
wr32(c, (RW(20) + 16), RW(2));
{ int t = RSD(18) <= 0; SET64(5, RD(0) + RD(0)); if (t) goto L_002B9108; }
SET64(4, RD(0) + RD(0));
SET64(3, RD(0) + RD(0));
{ int t = RSD(18) >= 0; SET32(2, RSW(18) >> 1); if (t) goto L_002B9098; }
SET32(2, RW(18) + 1);
SET32(2, RSW(2) >> 1);
L_002B9098:;
SET64(7, (s64)(s32)0x80000000);
L_002B909C:;
SET64(6, (s32)rd32(c, (RW(20) + 16)));
SET64(1, RSD(2) < RSD(5));
SET32(6, RW(6) + RW(4));
{ int t = RD(1) != RD(0); wr32(c, (RW(6) + 0), RW(0)); if (t) goto L_002B90D8; }
div_s(c, 0, RSW(3), RSW(2));
SET64(6, (s32)rd32(c, (RW(20) + 16)));
SET32(8, RW(6) + RW(4));
SET64(6, (s32)rd32(c, (RW(8) + 0)));
SET64(9, c->lo.d[0]);
SET32(9, RW(9) << 24);
SET64(6, RD(6) | RD(9));
wr32(c, (RW(8) + 0), RW(6)); goto L_002B90F0;
L_002B90D8:;
SET64(6, (s32)rd32(c, (RW(20) + 16)));
SET32(8, RW(6) + RW(4));
SET64(6, (s32)rd32(c, (RW(8) + 0)));
SET64(6, RD(6) | RD(7));
wr32(c, (RW(8) + 0), RW(6));
L_002B90F0:;
SET32(5, RW(5) + 1);
SET64(6, RSD(5) < RSD(18));
SET32(4, RW(4) + 4);
{ int t = RD(6) != RD(0); SET32(3, RW(3) + 128); if (t) { POLL(); goto L_002B909C; } }
L_002B9108:;
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(5, RD(19) + RD(0));
SET64(6, RD(0) + RD(0));
SET64(31, 0x2b911c); SET64(7, RD(0) + RD(0)); F_0014F2F0(c);
SET64(5, (s32)rd32(c, (RW(20) + 16)));
SET64(31, 0x2b9128); SET64(4, (s32)rd32(c, (RW(20) + 4))); F_0014EFB0(c);
SET64(2, (s32)rd32(c, (RW(20) + 4)));
SET32(3, RW(0) + 1);
SET64(31, 0x2b9138); wr8(c, (RW(2) + 56), (u8)RW(3)); F_00139590(c);
SET64(4, (s32)rd32(c, (RW(20) + 4)));
SET64(2, (s32)rd32(c, (RW(2) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2b9150); SET64(5, (s32)rd32(c, (RW(2) + 236))); rt_call(c, t); }
SET32(4, RW(0) + 3088);
L_002B9154:;
SET64(31, 0x2b915c);  F_00100670(c);
{ int t = RD(2) == RD(0); SET64(18, RD(2) + RD(0)); if (t) goto L_002B9174; }
SET64(5, (s32)rd32(c, (RW(28) + -30060)));
SET64(6, RD(22) + RD(0));
SET64(31, 0x2b9174); SET64(4, RD(18) + RD(0)); F_00239CA0(c);
L_002B9174:;
wr32(c, (RW(20) + 8), RW(18));
wr32(c, (RW(29) + 136), RW(16));
wr32(c, (RW(29) + 140), RW(17));
wr32(c, (RW(29) + 128), RW(0));
wr32(c, (RW(29) + 132), RW(0));
SET64(4, (s32)rd32(c, (RW(20) + 8)));
SET64(6, (s32)rd32(c, (RW(20) + 0)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 56)));
{ u32 t = RW(25); SET64(31, 0x2b91a0); SET32(5, RW(29) + 128); rt_call(c, t); }
SET64(2, (s32)rd32(c, (RW(20) + 8)));
SET32(3, RW(0) + 1);
SET64(2, (s32)rd32(c, (RW(2) + 236)));
wr8(c, (RW(2) + 324), (u8)RW(3));
SET64(4, (s32)rd32(c, (RW(20) + 8)));
SET64(31, 0x2b91bc); SET64(5, RD(0) + RD(0)); F_001624B0(c);
SET64(31, 0x2b91c4); SET32(4, RW(0) + 496); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002B921C; }
SET32(5, RW(0) + 1);
SET64(4, RD(17) + RD(0));
SET64(6, RD(5) + RD(0));
SET64(31, 0x2b91e0); SET64(7, RD(5) + RD(0)); F_002A36E0(c);
SET32(16, RW(17) + 240);
SET32(5, RW(0) + 16);
SET32(4, RW(16) + 4);
SET64(6, RD(0) + RD(0));
SET64(31, 0x2b91f8); wr32(c, (RW(17) + 240), RW(4)); F_002AB2A0(c);
SET64(31, 0x2b9200); SET32(4, RW(16) + 32); F_002A59A0(c);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 240), RW(16));
SET32(2, RW(2) + -30800);
SET64(4, RD(17) + RD(0));
wr32(c, (RW(17) + 144), RW(2));
SET64(31, 0x2b921c); SET32(5, RW(17) + 272); F_002A35D0(c);
L_002B921C:;
wr32(c, (RW(20) + 12), RW(17));
SET64(2, (s32)rd32(c, (RW(20) + 8)));
SET64(4, (s32)rd32(c, (RW(2) + 560)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2b9234); SET64(5, RD(17) + RD(0)); F_002AB090(c);
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

void F_002B9260(Ctx *c) { /* func_002B9260 */
ENTER(0x2b9260);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(2, RD(0) < RD(2)); return;
}

void F_002B9270(Ctx *c) { /* func_002B9270 */
ENTER(0x2b9270);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(2, (s32)rd32(c, (RW(4) + 8)));
{ int t = RD(2) == RD(0); SET64(16, RD(4) + RD(0)); if (t) goto L_002B92B8; }
SET64(5, (s32)rd32(c, (RW(16) + 12)));
if (RD(5) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 8))); goto L_002B92A0; }
SET64(31, 0x2b929c); SET64(4, (s32)rd32(c, (RW(2) + 560))); F_002AAEF0(c);
SET64(4, (s32)rd32(c, (RW(16) + 8)));
L_002B92A0:;
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2b92b0);  rt_call(c, t); }
SET64(31, 0x2b92b8); SET64(4, (s32)rd32(c, (RW(16) + 8))); F_00162440(c);
L_002B92B8:;
SET64(4, (s32)rd32(c, (RW(16) + 0)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002B92D8; }
SET64(25, (s32)rd32(c, (RW(4) + 28)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b92d4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 0), RW(0));
L_002B92D8:;
SET64(4, (s32)rd32(c, (RW(16) + 4)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 4), RW(0)); goto L_002B92F8; }
SET64(25, (s32)rd32(c, (RW(4) + 60)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b92f4); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 4), RW(0));
L_002B92F8:;
SET64(4, (s32)rd32(c, (RW(16) + 8)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 8), RW(0)); goto L_002B9318; }
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b9314); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 8), RW(0));
L_002B9318:;
SET64(4, (s32)rd32(c, (RW(16) + 12)));
if (RD(4) == RD(0)) { wr32(c, (RW(16) + 12), RW(0)); goto L_002B9338; }
SET64(25, (s32)rd32(c, (RW(4) + 144)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2b9334); SET32(5, RW(0) + 1); rt_call(c, t); }
wr32(c, (RW(16) + 12), RW(0));
L_002B9338:;
SET64(31, 0x2b9340); SET64(4, (s32)rd32(c, (RW(16) + 16))); F_001004B0(c);
wr32(c, (RW(16) + 16), RW(0));
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002B9360(Ctx *c) { /* func_002B9360 */
ENTER(0x2b9360);
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18328);
wr32(c, (RW(4) + 20), RW(2));
wr32(c, (RW(4) + 0), RW(0));
SET64(2, RD(4) + RD(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(0));
wr32(c, (RW(4) + 16), RW(0)); return;
}

void F_002B9390(Ctx *c) { /* func_002B9390 */
ENTER(0x2b9390);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(17) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002B93D4; }
SET64(2, (s64)(s32)0x4e0000);
SET32(2, RW(2) + -18328);
SET64(31, 0x2b93bc); wr32(c, (RW(17) + 20), RW(2)); F_002B9270(c);
SET64(2, RD(16) << 48);
SET64(2, RSD(2) >> 48);
if (RSD(2) <= 0) { SET64(2, RD(17) + RD(0)); goto L_002B93D8; }
SET64(31, 0x2b93d4); SET64(4, RD(17) + RD(0)); F_001004B0(c);
L_002B93D4:;
SET64(2, RD(17) + RD(0));
L_002B93D8:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B93F0(Ctx *c) { /* func_002B93F0 */
ENTER(0x2b93f0);
wr32(c, (RW(4) + 0), RW(0));
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(3)); return;
}

void F_002B9410(Ctx *c) { /* func_002B9410 */
ENTER(0x2b9410);
SET64(2, RD(0) + RD(0)); return;
}

void F_002B9420(Ctx *c) { /* func_002B9420 */
ENTER(0x2b9420);
SET32(29, RW(29) + -176);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(18, RD(4) + RD(0));
SET64(31, 0x2b9440); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00163DC0(c);
SET64(3, rd16(c, (RW(18) + 418)));
{ int t = RD(3) == RD(0);  if (t) goto L_002B9668; }
SET64(31, 0x2b9454); SET64(4, RD(18) + RD(0)); F_002B99B0(c);
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
SET64(31, 0x2b94a4); wr32(c, (RW(29) + 168), c->f[0].u); F_002AD410(c);
SET64(3, rd16(c, (RW(18) + 418)));
{ int t = RSD(3) <= 0; SET64(17, RD(0) + RD(0)); if (t) goto L_002B9668; }
SET64(3, RD(17) & 0xffff);
L_002B94B4:;
SET32(3, RW(3) << 2);
SET32(16, RW(18) + RW(3));
SET64(3, (s32)rd32(c, (RW(16) + 428)));
{ int t = RD(3) == RD(0);  if (t) goto L_002B9650; }
SET64(19, (s32)rd32(c, (RW(3) + 912)));
{ int t = RD(19) == RD(0);  if (t) goto L_002B9650; }
SET64(31, 0x2b94dc); SET64(4, (s32)rd32(c, (RW(19) + 256))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002B9650; }
SET64(4, (s32)rd32(c, (RW(19) + 256)));
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 32)));
{ u32 t = RW(25); SET64(31, 0x2b94fc);  rt_call(c, t); }
{ int t = RD(2) != RD(0);  if (t) goto L_002B9650; }
SET64(2, (s64)(s32)0x3f0000);
SET64(5, (s32)rd32(c, (RW(2) + -30908)));
SET64(31, 0x2b9514); SET64(4, RD(19) + RD(0)); F_00151580(c);
SET64(4, RD(19) + RD(0));
SET64(31, 0x2b9520); SET64(5, RD(2) & 0xffff); F_00151560(c);
SET64(3, (s64)(s32)0x3f800000);
wr32(c, (RW(29) + 144), RW(0));
wr32(c, (RW(29) + 156), RW(3));
wr32(c, (RW(29) + 148), RW(0));
wr32(c, (RW(29) + 152), RW(0));
rd128(c, (RW(2) + 112) & ~15u, &c->r[2]);
wr128(c, (RW(29) + 144) & ~15u, &c->r[2]);
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET64(25, (s32)rd32(c, (RW(25) + 208)));
{ u32 t = RW(25); SET64(31, 0x2b954c); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
{ int t = RD(2) == RD(0);  if (t) goto L_002B95A8; }
SET64(25, (s32)rd32(c, (RW(18) + 56)));
SET32(4, RW(29) + 128);
SET64(5, RD(18) + RD(0));
SET64(25, (s32)rd32(c, (RW(25) + 212)));
{ u32 t = RW(25); SET64(31, 0x2b956c); SET32(6, RW(29) + 144); rt_call(c, t); }
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
SET64(31, 0x2b95a8); wr32(c, (RW(29) + 168), c->f[0].u); F_002AD410(c);
L_002B95A8:;
SET64(4, RD(18) + RD(0));
SET32(5, RW(29) + 144);
SET64(31, 0x2b95b8); SET64(6, RD(17) + RD(0)); F_002B9690(c);
SET64(2, (s64)(s32)0x461c0000);
SET32(4, RW(29) + 80);
SET64(2, RD(2) | 0x4000);
c->f[12].u = RW(2);
SET64(31, 0x2b95d0); SET32(5, RW(29) + 160); F_002ACFD0(c);
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
SET64(31, 0x2b962c); wr32(c, (RW(29) + 120), c->f[0].u); F_002B9260(c);
SET64(3, (s32)rd32(c, (RW(16) + 8)));
rd128(c, (RW(29) + 112) & ~15u, &c->r[2]);
SET32(4, RW(3) + 784);
wr128(c, (RW(3) + 800) & ~15u, &c->r[2]);
rd128(c, (RW(29) + 144) & ~15u, &c->r[2]);
wr128(c, (RW(3) + 816) & ~15u, &c->r[2]);
SET64(31, 0x2b964c); wr32(c, (RW(3) + 832), RW(0)); F_0015CEB0(c);
L_002B9650:;
SET32(3, RW(17) + 1);
SET64(17, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(18) + 418)));
SET64(3, RSD(17) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, RD(17) & 0xffff); { POLL(); goto L_002B94B4; } }
L_002B9668:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 176); return;
}

void F_002B9690(Ctx *c) { /* func_002B9690 */
ENTER(0x2b9690);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 32), RD(31));
SET32(7, RW(29) + 56);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(6) + RD(0));
SET64(31, 0x2b96b4); SET32(6, RW(29) + 60); F_001689D0(c);
SET64(5, rd16(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(6, rd16(c, (RW(29) + 56)));
SET64(31, 0x2b96c8); SET64(7, RD(16) + RD(0)); F_002B9800(c);
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(4, RD(17) + RD(0));
SET64(5, rd16(c, (RW(29) + 60)));
SET64(7, RD(16) + RD(0));
SET32(2, RW(2) + 1);
SET64(31, 0x2b96e4); SET64(6, RD(2) & 0xffff); F_002B9800(c);
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(4, RD(17) + RD(0));
SET64(5, rd16(c, (RW(29) + 60)));
SET64(7, RD(16) + RD(0));
SET32(2, RW(2) + -1);
SET64(31, 0x2b9700); SET64(6, RD(2) & 0xffff); F_002B9800(c);
SET64(2, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(6, rd16(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(2, RW(2) + 1);
SET64(31, 0x2b971c); SET64(5, RD(2) & 0xffff); F_002B9800(c);
SET64(2, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(6, rd16(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(2, RW(2) + -1);
SET64(31, 0x2b9738); SET64(5, RD(2) & 0xffff); F_002B9800(c);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(3, RW(3) + 1);
SET32(2, RW(2) + 1);
SET64(5, RD(3) & 0xffff);
SET64(31, 0x2b975c); SET64(6, RD(2) & 0xffff); F_002B9800(c);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(3, RW(3) + -1);
SET32(2, RW(2) + -1);
SET64(5, RD(3) & 0xffff);
SET64(31, 0x2b9780); SET64(6, RD(2) & 0xffff); F_002B9800(c);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(3, RW(3) + 1);
SET32(2, RW(2) + -1);
SET64(5, RD(3) & 0xffff);
SET64(31, 0x2b97a4); SET64(6, RD(2) & 0xffff); F_002B9800(c);
SET64(3, (s32)rd32(c, (RW(29) + 60)));
SET64(4, RD(17) + RD(0));
SET64(2, (s32)rd32(c, (RW(29) + 56)));
SET64(7, RD(16) + RD(0));
SET32(3, RW(3) + -1);
SET32(2, RW(2) + 1);
SET64(5, RD(3) & 0xffff);
SET64(31, 0x2b97c8); SET64(6, RD(2) & 0xffff); F_002B9800(c);
SET64(3, (s32)rd32(c, (RW(17) + 388)));
SET64(3, RD(0) < RD(3));
if (RD(3) == RD(0)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002B97EC; }
SET64(4, (s32)rd32(c, (RW(17) + 388)));
SET64(6, RD(16) & 0xffff);
SET64(31, 0x2b97e8); SET64(5, RD(0) + RD(0)); F_0016B600(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_002B97EC:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B9800(Ctx *c) { /* func_002B9800 */
ENTER(0x2b9800);
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
{ int t = RD(1) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002B985C; }
SET64(3, rd16(c, (RW(21) + 290)));
SET64(4, RD(20) & 0xffff);
SET64(1, RSD(4) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002B985C; }
SET64(5, RD(0) + (s64)1);
L_002B985C:;
if (RD(5) == RD(0)) { SET64(31, rd64(c, (RW(29) + 112))); goto L_002B998C; }
SET64(2, RD(19) & 0xffff);
SET32(22, RW(2) << 2);
SET32(2, RW(22) + RW(21));
SET64(18, (s32)rd32(c, (RW(2) + 420)));
if (RD(18) == RD(0)) { SET64(4, rd16(c, (RW(21) + 288))); goto L_002B9954; }
SET64(31, 0x2b9884); SET64(4, RD(18) + RD(0)); F_002B9260(c);
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
{ int t = RD(4) == RD(0); SET64(5, (s32)rd32(c, (RW(18) + 4))); if (t) goto L_002B98CC; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2b98cc); SET64(6, RD(19) & 0xffff); rt_call(c, t); }
L_002B98CC:;
SET64(31, 0x2b98d4); SET64(4, RD(18) + RD(0)); F_002B9260(c);
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
if (RD(4) == RD(0)) { SET64(3, rd16(c, (RW(21) + 288))); goto L_002B991C; }
SET64(31, 0x2b9918); SET64(6, RD(19) & 0xffff); F_001EF0E0(c);
SET64(3, rd16(c, (RW(21) + 288)));
L_002B991C:;
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
SET64(31, 0x2b9950); SET32(4, RW(2) + RW(3)); F_0016BE00(c);
SET64(4, rd16(c, (RW(21) + 288)));
L_002B9954:;
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
SET64(31, 0x2b9988); SET32(4, RW(2) + RW(3)); F_0016BE30(c);
SET64(31, rd64(c, (RW(29) + 112)));
L_002B998C:;
rd128(c, (RW(29) + 96) & ~15u, &c->r[22]);
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 128); return;
}

void F_002B99B0(Ctx *c) { /* func_002B99B0 */
ENTER(0x2b99b0);
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
{ int t = RSD(3) <= 0; SET64(20, RD(0) + RD(0)); if (t) goto L_002B9AA0; }
SET64(4, rd16(c, (RW(21) + 288)));
L_002B99E4:;
{ int t = RSD(4) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002B9A88; }
SET64(16, RD(20) & 0xffff);
L_002B99F0:;
SET64(17, RD(19) & 0xffff);
SET64(1, RSD(17) < RSD(4));
{ int t = RD(1) == RD(0); SET64(5, RD(0) + RD(0)); if (t) goto L_002B9A18; }
SET64(3, rd16(c, (RW(21) + 290)));
SET64(1, RSD(16) < RSD(3));
{ int t = RD(1) == RD(0);  if (t) goto L_002B9A18; }
SET64(5, RD(0) + (s64)1);
L_002B9A18:;
{ int t = RD(5) == RD(0);  if (t) goto L_002B9A70; }
SET64(18, RD(0) + RD(0));
L_002B9A28:;
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
SET64(31, 0x2b9a5c); SET32(4, RW(2) + RW(3)); F_0016BE30(c);
SET32(3, RW(18) + 1);
SET64(18, RD(3) & 0xffff);
SET64(3, RSD(18) < (s64)2);
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B9A28; } }
L_002B9A70:;
SET64(4, rd16(c, (RW(21) + 288)));
SET32(19, RW(19) + 1);
SET64(3, RSD(19) < RSD(4));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002B99F0; } }
L_002B9A88:;
SET64(3, rd16(c, (RW(21) + 290)));
SET32(20, RW(20) + 1);
SET64(3, RSD(20) < RSD(3));
if (RD(3) != RD(0)) { SET64(4, rd16(c, (RW(21) + 288))); { POLL(); goto L_002B99E4; } }
L_002B9AA0:;
SET64(3, (s32)rd32(c, (RW(21) + 388)));
SET64(3, RD(0) < RD(3));
{ int t = RD(3) == RD(0);  if (t) goto L_002B9AD8; }
SET64(16, RD(0) + RD(0));
SET64(4, (s32)rd32(c, (RW(21) + 388)));
L_002B9AB8:;
SET64(6, RD(16) & 0xffff);
SET64(31, 0x2b9ac4); SET32(5, RW(0) + 1); F_0016B600(c);
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, RSD(16) < (s64)2);
if (RD(3) != RD(0)) { SET64(4, (s32)rd32(c, (RW(21) + 388))); { POLL(); goto L_002B9AB8; } }
L_002B9AD8:;
SET64(31, rd64(c, (RW(29) + 96)));
rd128(c, (RW(29) + 80) & ~15u, &c->r[21]);
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 112); return;
}

void F_002B9B00(Ctx *c) { /* func_002B9B00 */
ENTER(0x2b9b00);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b9b18); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_001685F0(c);
SET64(2, RD(2) & 0xff);
if (RD(2) != RD(0)) { SET64(2, rd16(c, (RW(17) + 418))); goto L_002B9B2C; }
SET64(2, RD(0) + RD(0)); goto L_002B9B9C;
L_002B9B2C:;
{ int t = RD(2) == RD(0);  if (t) goto L_002B9B98; }
SET64(2, rd16(c, (RW(17) + 418)));
{ int t = RSD(2) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002B9B98; }
SET64(2, RD(16) & 0xffff);
L_002B9B44:;
SET32(2, RW(2) << 2);
SET32(2, RW(17) + RW(2));
SET64(4, (s32)rd32(c, (RW(2) + 428)));
if (RD(4) == RD(0)) { SET64(2, rd16(c, (RW(17) + 418))); goto L_002B9B80; }
SET64(25, (s32)rd32(c, (RW(4) + 276)));
SET64(25, (s32)rd32(c, (RW(25) + 28)));
{ u32 t = RW(25); SET64(31, 0x2b9b68);  rt_call(c, t); }
SET64(2, RD(2) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002B9B7C; }
SET64(2, RD(0) + RD(0)); goto L_002B9B9C;
L_002B9B7C:;
SET64(2, rd16(c, (RW(17) + 418)));
L_002B9B80:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(2, RSD(16) < RSD(2));
if (RD(2) != RD(0)) { SET64(2, RD(16) & 0xffff); { POLL(); goto L_002B9B44; } }
L_002B9B98:;
SET32(2, RW(0) + 1);
L_002B9B9C:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002B9BB0(Ctx *c) { /* func_002B9BB0 */
ENTER(0x2b9bb0);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(17, RD(4) + RD(0));
SET64(31, 0x2b9bd0); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00167F00(c);
SET64(3, rd16(c, (RW(17) + 418)));
{ int t = RSD(3) <= 0; SET64(16, RD(0) + RD(0)); if (t) goto L_002B9C68; }
SET64(3, rd16(c, (RW(17) + 418)));
L_002B9BE0:;
{ int t = RD(3) == RD(0);  if (t) goto L_002B9C50; }
SET64(2, RD(16) & 0xffff);
SET32(2, RW(2) << 2);
SET32(18, RW(17) + RW(2));
SET64(19, (s32)rd32(c, (RW(18) + 420)));
SET64(31, 0x2b9c00); SET64(4, RD(19) + RD(0)); F_002B9260(c);
SET64(4, (s32)rd32(c, (RW(19) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2b9c14);  rt_call(c, t); }
SET64(18, (s32)rd32(c, (RW(18) + 428)));
{ int t = RD(18) == RD(0);  if (t) goto L_002B9C50; }
SET64(31, 0x2b9c28); SET64(4, (s32)rd32(c, (RW(18) + 256))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002B9C50; }
SET64(31, 0x2b9c3c); SET64(4, RD(19) + RD(0)); F_002B9260(c);
SET64(25, (s32)rd32(c, (RW(18) + 276)));
SET64(5, (s32)rd32(c, (RW(19) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2b9c50); SET64(4, RD(18) + RD(0)); rt_call(c, t); }
L_002B9C50:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(17) + 418)));
SET64(3, RSD(16) < RSD(3));
if (RD(3) != RD(0)) { SET64(3, rd16(c, (RW(17) + 418))); { POLL(); goto L_002B9BE0; } }
L_002B9C68:;
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002B9C90(Ctx *c) { /* func_002B9C90 */
ENTER(0x2b9c90);
SET32(29, RW(29) + -96);
wr64(c, (RW(29) + 80), RD(31));
wr128(c, (RW(29) + 64) & ~15u, &c->r[20]);
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET64(19, RD(4) + RD(0));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
SET64(31, 0x2b9cb4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00168280(c);
SET64(3, rd16(c, (RW(19) + 418)));
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002B9D90; }
SET64(2, (s64)(s32)0x4b0000);
c->f[0].u = rd32(c, (RW(2) + 31176));
c->f[0].u = (u32)fpu_cvtw(F(0));
SET64(16, (s32)c->f[0].u);
SET64(2, rd16(c, (RW(19) + 418)));
L_002B9CD4:;
{ int t = RD(2) == RD(0);  if (t) goto L_002B9D48; }
SET64(2, RD(18) & 0xffff);
SET32(2, RW(2) << 2);
SET32(20, RW(19) + RW(2));
SET64(17, (s32)rd32(c, (RW(20) + 420)));
SET64(31, 0x2b9cf4); SET64(4, RD(17) + RD(0)); F_002B9260(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 64)));
{ u32 t = RW(25); SET64(31, 0x2b9d08);  rt_call(c, t); }
SET64(20, (s32)rd32(c, (RW(20) + 428)));
{ int t = RD(20) == RD(0);  if (t) goto L_002B9D48; }
SET64(31, 0x2b9d1c); SET64(4, (s32)rd32(c, (RW(20) + 256))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) == RD(3);  if (t) goto L_002B9D48; }
SET64(31, 0x2b9d30); SET64(4, RD(17) + RD(0)); F_002B9260(c);
SET64(25, (s32)rd32(c, (RW(20) + 276)));
SET64(4, RD(20) + RD(0));
SET64(5, (s32)rd32(c, (RW(17) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 20)));
{ u32 t = RW(25); SET64(31, 0x2b9d48); SET64(6, RD(0) + RD(0)); rt_call(c, t); }
L_002B9D48:;
SET64(2, RD(18) & 0xffff);
SET32(2, RW(2) << 2);
SET32(2, RW(19) + RW(2));
SET64(17, (s32)rd32(c, (RW(2) + 420)));
SET64(31, 0x2b9d60); SET64(4, RD(17) + RD(0)); F_002B9260(c);
SET64(4, (s32)rd32(c, (RW(17) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2b9d74); SET64(5, RD(16) + RD(0)); rt_call(c, t); }
SET64(3, rd16(c, (RW(19) + 418)));
SET32(4, RW(18) + 1);
SET64(18, RD(4) & 0xffff);
SET64(3, RSD(18) < RSD(3));
if (RD(3) != RD(0)) { SET64(2, rd16(c, (RW(19) + 418))); { POLL(); goto L_002B9CD4; } }
L_002B9D90:;
SET64(31, rd64(c, (RW(29) + 80)));
rd128(c, (RW(29) + 64) & ~15u, &c->r[20]);
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 96); return;
}

void F_002B9DB0(Ctx *c) { /* func_002B9DB0 */
ENTER(0x2b9db0);
SET32(29, RW(29) + -64);
SET64(3, RD(5) & 0xffff);
wr64(c, (RW(29) + 48), RD(31));
SET32(3, RW(3) << 2);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
SET32(5, RW(3) + RW(4));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(3, (s32)rd32(c, (RW(5) + 428)));
{ int t = RD(3) == RD(0); SET32(16, RW(5) + 428); if (t) goto L_002B9E44; }
SET64(3, rd16(c, (RW(4) + 418)));
if (RD(3) == RD(0)) { wr32(c, (RW(16) + 0), RW(0)); goto L_002B9E48; }
SET64(18, (s32)rd32(c, (RW(5) + 420)));
SET64(31, 0x2b9df4); SET64(4, RD(18) + RD(0)); F_002B9260(c);
SET64(4, (s32)rd32(c, (RW(18) + 8)));
SET64(25, (s32)rd32(c, (RW(4) + 176)));
SET64(25, (s32)rd32(c, (RW(25) + 68)));
{ u32 t = RW(25); SET64(31, 0x2b9e08);  rt_call(c, t); }
SET64(17, (s32)rd32(c, (RW(16) + 0)));
{ int t = RD(17) == RD(0);  if (t) goto L_002B9E44; }
SET64(31, 0x2b9e1c); SET64(4, (s32)rd32(c, (RW(17) + 256))); F_001419B0(c);
SET32(3, RW(0) + 1);
{ int t = RD(2) != RD(3);  if (t) goto L_002B9E44; }
SET64(31, 0x2b9e30); SET64(4, RD(18) + RD(0)); F_002B9260(c);
SET64(25, (s32)rd32(c, (RW(17) + 276)));
SET64(5, (s32)rd32(c, (RW(18) + 12)));
SET64(25, (s32)rd32(c, (RW(25) + 24)));
{ u32 t = RW(25); SET64(31, 0x2b9e44); SET64(4, RD(17) + RD(0)); rt_call(c, t); }
L_002B9E44:;
wr32(c, (RW(16) + 0), RW(0));
L_002B9E48:;
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002B9E60(Ctx *c) { /* func_002B9E60 */
ENTER(0x2b9e60);
SET64(7, rd16(c, (RW(4) + 294)));
SET32(3, RW(0) + 8);
{ int t = RD(7) == RD(3);  if (t) goto L_002B9E90; }
SET64(3, RD(6) & 0xffff);
SET32(3, RW(3) << 2);
SET32(3, RW(3) + RW(4));
SET32(4, RW(3) + 428);
SET64(3, (s32)rd32(c, (RW(3) + 428)));
{ int t = RD(3) == RD(5);  if (t) goto L_002B9E90; }
wr32(c, (RW(4) + 0), RW(5));
L_002B9E90:;
 return;
}

void F_002B9EA0(Ctx *c) { /* func_002B9EA0 */
ENTER(0x2b9ea0);
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
SET64(31, 0x2b9ed4); wr128(c, (RW(29) + 0) & ~15u, &c->r[16]); F_00164EB0(c);
SET64(30, RD(2) & 0xff);
SET64(2, rd16(c, (RW(21) + 418)));
if (RD(2) == RD(0)) { SET64(2, RD(30) + RD(0)); goto L_002BA0B4; }
SET64(2, RD(30) & 0xff);
{ int t = RD(2) != RD(0);  if (t) goto L_002BA0B0; }
SET64(2, rd8(c, (RW(21) + 416)));
{ int t = RD(2) != RD(0);  if (t) goto L_002BA0B0; }
SET64(2, rd16(c, (RW(21) + 418)));
{ int t = RSD(2) <= 0; SET64(23, RD(0) + RD(0)); if (t) goto L_002BA0A8; }
SET64(18, RD(23) & 0xffff);
L_002B9F0C:;
SET64(2, rd16(c, (RW(21) + 290)));
SET32(3, RW(18) << 2);
SET32(3, RW(21) + RW(3));
SET64(20, (s32)rd32(c, (RW(3) + 420)));
{ int t = RSD(2) <= 0; SET64(22, RD(0) + RD(0)); if (t) goto L_002BA038; }
L_002B9F28:;
SET64(2, rd16(c, (RW(21) + 288)));
{ int t = RSD(2) <= 0; SET64(19, RD(0) + RD(0)); if (t) goto L_002BA020; }
SET64(17, RD(22) & 0xffff);
L_002B9F38:;
SET64(31, 0x2b9f40); SET64(4, RD(20) + RD(0)); F_002B9260(c);
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
{ int t = RD(4) == RD(0); SET64(5, (s32)rd32(c, (RW(20) + 4))); if (t) goto L_002B9F88; }
SET64(25, (s32)rd32(c, (RW(4) + 16)));
SET64(25, (s32)rd32(c, (RW(25) + 76)));
{ u32 t = RW(25); SET64(31, 0x2b9f88); SET64(6, RD(18) + RD(0)); rt_call(c, t); }
L_002B9F88:;
SET64(31, 0x2b9f90); SET64(4, RD(20) + RD(0)); F_002B9260(c);
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
{ int t = RD(4) == RD(0);  if (t) goto L_002B9FD8; }
SET64(31, 0x2b9fd4); SET64(6, RD(18) + RD(0)); F_001EF0E0(c);
L_002B9FD8:;
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
SET64(31, 0x2ba00c); SET32(4, RW(2) + RW(3)); F_0016BE30(c);
SET64(2, rd16(c, (RW(21) + 288)));
SET32(19, RW(19) + 1);
SET64(2, RSD(19) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002B9F38; } }
L_002BA020:;
SET64(2, rd16(c, (RW(21) + 290)));
SET32(22, RW(22) + 1);
SET64(2, RSD(22) < RSD(2));
{ int t = RD(2) != RD(0);  if (t) { POLL(); goto L_002B9F28; } }
L_002BA038:;
SET64(2, (s32)rd32(c, (RW(21) + 388)));
SET64(2, RD(0) < RD(2));
{ int t = RD(2) == RD(0);  if (t) goto L_002BA090; }
SET64(31, 0x2ba050); SET64(4, RD(20) + RD(0)); F_002B9260(c);
SET64(4, (s32)rd32(c, (RW(21) + 388)));
SET64(16, RD(23) & 0xffff);
SET64(5, (s32)rd32(c, (RW(20) + 4)));
SET64(31, 0x2ba064); SET64(6, RD(16) + RD(0)); F_0016B660(c);
SET64(31, 0x2ba06c); SET64(4, RD(20) + RD(0)); F_002B9260(c);
SET64(2, (s32)rd32(c, (RW(20) + 8)));
SET64(6, RD(16) + RD(0));
SET64(4, (s32)rd32(c, (RW(21) + 388)));
SET64(31, 0x2ba080); SET32(5, RW(2) + 1280); F_0016B630(c);
SET64(4, (s32)rd32(c, (RW(21) + 388)));
SET64(6, RD(16) + RD(0));
SET64(31, 0x2ba090); SET32(5, RW(0) + 1); F_0016B600(c);
L_002BA090:;
SET32(2, RW(23) + 1);
SET64(23, RD(2) & 0xffff);
SET64(2, rd16(c, (RW(21) + 418)));
SET64(2, RSD(23) < RSD(2));
if (RD(2) != RD(0)) { SET64(18, RD(23) & 0xffff); { POLL(); goto L_002B9F0C; } }
L_002BA0A8:;
SET32(2, RW(0) + 1);
wr8(c, (RW(21) + 416), (u8)RW(2));
L_002BA0B0:;
SET64(2, RD(30) + RD(0));
L_002BA0B4:;
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

void F_002BA0F0(Ctx *c) { /* func_002BA0F0 */
ENTER(0x2ba0f0);
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
{ int t = RSD(3) <= 0; SET64(18, RD(0) + RD(0)); if (t) goto L_002BA1B8; }
SET64(2, (s64)(s32)0x4b0000);
c->f[20].u = rd32(c, (RW(2) + 31168));
L_002BA138:;
SET64(31, 0x2ba140); SET32(4, RW(0) + 24); F_00100670(c);
{ int t = RD(2) == RD(0); SET64(17, RD(2) + RD(0)); if (t) goto L_002BA150; }
SET64(31, 0x2ba150); SET64(4, RD(17) + RD(0)); F_002B9360(c);
L_002BA150:;
SET64(2, RD(18) & 0xffff);
SET32(2, RW(2) << 2);
SET64(4, RD(17) + RD(0));
SET32(16, RW(21) + RW(2));
SET64(5, RD(20) + RD(0));
wr32(c, (RW(16) + 420), RW(17));
SET64(6, RD(19) + RD(0));
SET32(7, RW(0) + 4096);
SET64(31, 0x2ba178); SET32(17, RW(16) + 420); F_002B8F20(c);
SET64(17, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2ba184); SET64(4, RD(17) + RD(0)); F_002B9260(c);
SET64(2, (s64)(s32)0x3acd0000);
SET64(2, RD(2) | 0xe32f);
c->f[12].u = RW(2);
SET64(31, 0x2ba198); SET64(4, (s32)rd32(c, (RW(17) + 8))); F_00162100(c);
SET32(3, RW(18) + 1);
wr32(c, (RW(16) + 436), c->f[20].u);
SET64(18, RD(3) & 0xffff);
SET64(3, rd16(c, (RW(21) + 418)));
SET64(3, RSD(18) < RSD(3));
{ int t = RD(3) != RD(0);  if (t) { POLL(); goto L_002BA138; } }
L_002BA1B8:;
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

void F_002BA200(Ctx *c) { /* func_002BA200 */
ENTER(0x2ba200);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2ba210);  F_0016B4A0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BA220(Ctx *c) { /* func_002BA220 */
ENTER(0x2ba220);
SET32(29, RW(29) + -16);
wr64(c, (RW(29) + 0), RD(31));
SET64(31, 0x2ba230);  F_0016B540(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 16); return;
}

void F_002BA240(Ctx *c) { /* func_002BA240 */
ENTER(0x2ba240);
SET64(2, rd16(c, (RW(4) + 418)));
SET64(2, RD(0) < RD(2)); return;
}

void F_002BA250(Ctx *c) { /* func_002BA250 */
ENTER(0x2ba250);
SET32(29, RW(29) + -80);
wr64(c, (RW(29) + 64), RD(31));
wr128(c, (RW(29) + 48) & ~15u, &c->r[19]);
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(16, RD(0) + RD(0));
L_002BA270:;
SET64(3, RD(16) & 0xffff);
SET32(3, RW(3) << 2);
SET32(19, RW(17) + RW(3));
SET64(4, (s32)rd32(c, (RW(19) + 420)));
{ int t = RD(4) == RD(0); SET32(18, RW(19) + 420); if (t) goto L_002BA298; }
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET64(25, (s32)rd32(c, (RW(25) + 8)));
{ u32 t = RW(25); SET64(31, 0x2ba298); SET32(5, RW(0) + 1); rt_call(c, t); }
L_002BA298:;
SET32(3, RW(16) + 1);
SET64(16, RD(3) & 0xffff);
wr32(c, (RW(18) + 0), RW(0));
SET64(3, RSD(16) < (s64)2);
{ int t = RD(3) != RD(0); wr32(c, (RW(19) + 428), RW(0)); if (t) { POLL(); goto L_002BA270; } }
wr16(c, (RW(17) + 418), (u16)RW(0));
SET64(31, rd64(c, (RW(29) + 64)));
rd128(c, (RW(29) + 48) & ~15u, &c->r[19]);
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 80); return;
}

void F_002BA2D0(Ctx *c) { /* func_002BA2D0 */
ENTER(0x2ba2d0);
SET32(29, RW(29) + -32);
SET32(5, RW(0) + 1536);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(31, 0x2ba2e8); SET64(16, RD(4) + RD(0)); F_0013A040(c);
SET64(31, 0x2ba2f0); SET32(4, RW(16) + 64); F_00240AE0(c);
SET64(31, 0x2ba2f8); SET32(4, RW(16) + 224); F_00141AA0(c);
SET64(2, (s64)(s32)0x4d0000);
SET64(3, (s64)(s32)0x4d0000);
SET32(2, RW(2) + -25072);
SET64(8, (s64)(s32)0x4e0000);
wr32(c, (RW(16) + 56), RW(2));
SET32(3, RW(3) + -25064);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 20), RW(3));
SET32(2, RW(2) + -25052);
SET64(3, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 36), RW(2));
SET32(3, RW(3) + -24992);
SET64(2, (s64)(s32)0x4d0000);
wr32(c, (RW(16) + 208), RW(3));
SET32(2, RW(2) + -24968);
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
SET32(8, RW(8) + -18304);
wr32(c, (RW(16) + 260), RW(0));
SET32(7, RW(7) + -18296);
wr16(c, (RW(16) + 264), (u16)RW(0));
SET32(6, RW(6) + -18284);
wr16(c, (RW(16) + 266), (u16)RW(0));
SET32(5, RW(5) + -18224);
wr16(c, (RW(16) + 268), (u16)RW(0));
SET32(4, RW(4) + -18200);
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

void F_002BA490(Ctx *c) { /* func_002BA490 */
ENTER(0x2ba490);
SET32(4, RW(4) + -4); { F_0023F2C0(c); return; }
}

void F_002BA4A0(Ctx *c) { /* func_002BA4A0 */
ENTER(0x2ba4a0);
SET32(4, RW(4) + -24); { F_0023F2C0(c); return; }
}

void F_002BA4B0(Ctx *c) { /* func_002BA4B0 */
ENTER(0x2ba4b0);
SET32(4, RW(4) + -64); { F_0023F2C0(c); return; }
}

void F_002BA4C0(Ctx *c) { /* func_002BA4C0 */
ENTER(0x2ba4c0);
SET32(4, RW(4) + -224); { F_002B9B00(c); return; }
}

void F_002BA4D0(Ctx *c) { /* func_002BA4D0 */
ENTER(0x2ba4d0);
SET32(4, RW(4) + -224); { F_002BA250(c); return; }
}

void F_002BA4E0(Ctx *c) { /* func_002BA4E0 */
ENTER(0x2ba4e0);
SET32(4, RW(4) + -224); { F_0023F2C0(c); return; }
}

void F_002BA4F0(Ctx *c) { /* func_002BA4F0 */
ENTER(0x2ba4f0);
SET64(3, (s32)rd32(c, (RW(5) + 0)));
rd128(c, (RW(3) + 192) & ~15u, &c->r[3]);
SET64(5, (s64)(s32)0x3f800000);
wr32(c, (RW(4) + 0), RW(0));
wr32(c, (RW(4) + 4), RW(0));
wr32(c, (RW(4) + 8), RW(0));
wr32(c, (RW(4) + 12), RW(5));
wr128(c, (RW(4) + 0) & ~15u, &c->r[3]); return;
}

void F_002BA520(Ctx *c) { /* func_002BA520 */
ENTER(0x2ba520);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 0), RD(31));
rd128(c, (RW(5) + 0) & ~15u, &c->r[3]);
SET64(2, (s32)rd32(c, (RW(4) + 0)));
wr128(c, (RW(2) + 192) & ~15u, &c->r[3]);
SET64(31, 0x2ba53c); SET64(4, (s32)rd32(c, (RW(4) + 0))); F_0014DDB0(c);
SET64(31, rd64(c, (RW(29) + 0)));
SET32(29, RW(29) + 32); return;
}

void F_002BA550(Ctx *c) { /* func_002BA550 */
ENTER(0x2ba550);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(3, (s32)rd32(c, (RW(4) + 0)));
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(3, rd8(c, (RW(3) + 8)));
{ int t = RD(3) != RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BA594; }
SET64(25, (s32)rd32(c, (RW(17) + 24)));
SET64(25, (s32)rd32(c, (RW(25) + 16)));
{ u32 t = RW(25); SET64(31, 0x2ba588); SET32(4, RW(17) + 16); rt_call(c, t); }
SET64(4, (s32)rd32(c, (RW(17) + 0)));
SET64(31, 0x2ba594); SET64(5, RD(16) + RD(0)); F_0014DCC0(c);
L_002BA594:;
SET64(31, rd64(c, (RW(29) + 32)));
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BA5B0(Ctx *c) { /* func_002BA5B0 */
ENTER(0x2ba5b0);
SET32(29, RW(29) + -48);
wr64(c, (RW(29) + 32), RD(31));
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
SET64(2, (s32)rd32(c, (RW(4) + 0)));
SET64(4, (s32)rd32(c, (RW(2) + 12)));
SET64(31, 0x2ba5d4); SET64(16, RD(5) + RD(0)); F_001419B0(c);
SET32(3, RW(0) + 1);
if (RD(2) != RD(3)) { SET64(31, rd64(c, (RW(29) + 32))); goto L_002BA64C; }
SET64(4, (s32)rd32(c, (RW(17) + 12)));
{ int t = RD(4) == RD(0);  if (t) goto L_002BA604; }
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002BA5F8; }
SET64(5, (s32)rd32(c, (RW(17) + 8)));
L_002BA5F8:;
SET64(31, 0x2ba600);  F_00240930(c);
wr32(c, (RW(17) + 12), RW(0));
L_002BA604:;
{ int t = RD(16) == RD(0);  if (t) goto L_002BA614; }
SET64(5, RD(17) + RD(0)); goto L_002BA624;
L_002BA614:;
SET64(31, 0x2ba61c);  F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(5, RD(17) + RD(0));
L_002BA624:;
if (RD(17) == RD(0)) { SET64(4, RD(16) + RD(0)); goto L_002BA634; }
SET64(5, (s32)rd32(c, (RW(17) + 8)));
SET64(4, RD(16) + RD(0));
L_002BA634:;
SET64(31, 0x2ba63c);  F_002A3210(c);
SET64(4, (s32)rd32(c, (RW(17) + 4)));
SET64(31, 0x2ba648); SET64(5, RD(16) + RD(0)); F_00152AA0(c);
SET64(31, rd64(c, (RW(29) + 32)));
L_002BA64C:;
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 48); return;
}

void F_002BA660(Ctx *c) { /* func_002BA660 */
ENTER(0x2ba660);
SET32(29, RW(29) + -64);
wr64(c, (RW(29) + 48), RD(31));
wr128(c, (RW(29) + 32) & ~15u, &c->r[18]);
wr128(c, (RW(29) + 16) & ~15u, &c->r[17]);
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(17, RD(4) + RD(0));
{ int t = RD(6) == RD(0); SET64(16, RD(5) + RD(0)); if (t) goto L_002BA688; }
wr32(c, (RW(17) + 12), RW(6)); goto L_002BA694;
L_002BA688:;
SET64(6, (s64)(s32)0x540000);
SET32(6, RW(6) + -27024);
wr32(c, (RW(17) + 12), RW(6));
L_002BA694:;
{ int t = RD(17) == RD(0); SET64(5, RD(17) + RD(0)); if (t) goto L_002BA6A0; }
SET64(5, (s32)rd32(c, (RW(17) + 8)));
L_002BA6A0:;
SET64(31, 0x2ba6a8); SET64(4, (s32)rd32(c, (RW(17) + 12))); F_00240980(c);
{ int t = RD(16) == RD(0);  if (t) goto L_002BA6B8; }
SET64(3, (s32)rd32(c, (RW(17) + 0))); goto L_002BA6C8;
L_002BA6B8:;
SET64(31, 0x2ba6c0);  F_00139590(c);
SET64(16, (s32)rd32(c, (RW(2) + 12)));
SET64(3, (s32)rd32(c, (RW(17) + 0)));
L_002BA6C8:;
SET32(2, RW(0) + 2);
SET64(3, (s32)rd32(c, (RW(3) + 12)));
SET64(3, (s32)rd32(c, (RW(3) + 4)));
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_002BA758; }
SET32(2, RW(0) + 1);
if (RD(3) == RD(2)) { SET64(18, RD(17) + RD(0)); goto L_002BA728; }
if (RD(3) == RD(0)) { SET64(18, RD(17) + RD(0)); goto L_002BA6F8; }
SET64(4, (s32)rd32(c, (RW(17) + 4))); goto L_002BA784;
L_002BA6F8:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002BA708; }
SET64(18, (s32)rd32(c, (RW(17) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002BA708:;
SET64(31, 0x2ba710); SET32(5, RW(0) + 1); F_002AAE30(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2ba720); SET64(5, RD(18) + RD(0)); F_002AB090(c);
 goto L_002BA780;
L_002BA728:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002BA738; }
SET64(18, (s32)rd32(c, (RW(17) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002BA738:;
SET64(31, 0x2ba740); SET32(5, RW(0) + 2); F_002AAE30(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2ba750); SET64(5, RD(18) + RD(0)); F_002AB090(c);
 goto L_002BA780;
L_002BA758:;
if (RD(17) == RD(0)) { SET64(4, (s32)rd32(c, (RW(16) + 208))); goto L_002BA768; }
SET64(18, (s32)rd32(c, (RW(17) + 8)));
SET64(4, (s32)rd32(c, (RW(16) + 208)));
L_002BA768:;
SET64(31, 0x2ba770); SET64(5, RD(0) + RD(0)); F_002AAE30(c);
SET64(4, (s32)rd32(c, (RW(2) + 0)));
SET64(6, (s32)rd32(c, (RW(4) + 16)));
SET64(31, 0x2ba780); SET64(5, RD(18) + RD(0)); F_002AB090(c);
L_002BA780:;
SET64(4, (s32)rd32(c, (RW(17) + 4)));
L_002BA784:;
SET64(6, (s32)rd32(c, (RW(17) + 12)));
SET64(31, 0x2ba790); SET64(5, RD(16) + RD(0)); F_00152AF0(c);
SET64(31, rd64(c, (RW(29) + 48)));
rd128(c, (RW(29) + 32) & ~15u, &c->r[18]);
rd128(c, (RW(29) + 16) & ~15u, &c->r[17]);
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 64); return;
}

void F_002BA7B0(Ctx *c) { /* func_002BA7B0 */
ENTER(0x2ba7b0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(4, (s32)rd32(c, (RW(4) + 8)));
SET64(31, 0x2ba7cc); SET64(5, RD(0) + RD(0)); F_00240890(c);
SET64(31, 0x2ba7d4); SET64(4, (s32)rd32(c, (RW(16) + 0))); F_0014E7D0(c);
SET64(31, 0x2ba7dc); SET64(4, (s32)rd32(c, (RW(16) + 4))); F_001536F0(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BA7F0(Ctx *c) { /* func_002BA7F0 */
ENTER(0x2ba7f0);
SET32(29, RW(29) + -32);
wr64(c, (RW(29) + 16), RD(31));
wr128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET64(16, RD(4) + RD(0));
SET64(31, 0x2ba808); SET64(4, (s32)rd32(c, (RW(4) + 0))); F_0014E1C0(c);
SET64(31, 0x2ba810); SET32(4, RW(16) + 16); F_001EA540(c);
SET64(31, rd64(c, (RW(29) + 16)));
rd128(c, (RW(29) + 0) & ~15u, &c->r[16]);
SET32(29, RW(29) + 32); return;
}

void F_002BA820(Ctx *c) { /* func_002BA820 */
ENTER(0x2ba820);
SET64(25, (s32)rd32(c, (RW(4) + 148)));
SET32(4, RW(4) + -304);
SET32(4, RW(4) + RW(25)); { F_001C5A10(c); return; }
}

void F_002BA830(Ctx *c) { /* func_002BA830 */
ENTER(0x2ba830);
SET64(25, (s32)rd32(c, (RW(4) + 356)));
SET32(4, RW(4) + -96);
SET32(4, RW(4) + RW(25)); { F_002BA7B0(c); return; }
}

void F_002BA840(Ctx *c) { /* func_002BA840 */
ENTER(0x2ba840);
SET64(25, (s32)rd32(c, (RW(4) + 356)));
SET32(4, RW(4) + -96);
SET32(4, RW(4) + RW(25)); { F_002BA7F0(c); return; }
}

void F_002BA850(Ctx *c) { /* func_002BA850 */
ENTER(0x2ba850);
SET64(25, (s32)rd32(c, (RW(4) + 356)));
SET32(4, RW(4) + -96);
SET32(4, RW(4) + RW(25)); { F_001C5A10(c); return; }
}

void F_002BA860(Ctx *c) { /* func_002BA860 */
ENTER(0x2ba860);
SET64(25, (s32)rd32(c, (RW(4) + 20)));
SET32(4, RW(4) + -68);
SET32(4, RW(4) + RW(25)); { F_001C5130(c); return; }
}

