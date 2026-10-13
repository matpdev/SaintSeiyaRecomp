typedef struct { float x, y, z, w; } Vec4 __attribute__((aligned(16)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef float v4sf __attribute__((vector_size(16)));

struct E1 { char pad[0x18]; char dirty; char pad2[7]; Vec4 pos; };
void func_0014E770_a(E1 *e, Vec4 *v) { if (e->pos.z != v->z) e->dirty = 1; *(u128 *)&e->pos = *(u128 *)v; }

union QV { u128 q; struct { float x, y, z, w; } f; };
struct E2 { char pad[0x18]; char dirty; char pad2[7]; QV pos; };
void func_0014E770_b(E2 *e, QV *v) { if (e->pos.f.z != v->f.z) e->dirty = 1; e->pos = *v; }

struct E3 { char pad[0x18]; char dirty; char pad2[7]; v4sf pos; };
void func_0014E770_c(E3 *e, v4sf *v) { if (((float *)&e->pos)[2] != ((float *)v)[2]) e->dirty = 1; e->pos = *v; }

struct D { short a[2]; int x4; short b[2]; char c[2]; int x10; };
void func_0017BE30_a(D *d) { int i; for (i = 0; i < 2; i++) { d->b[i] = i ? 1 : 0; d->c[i] = 0; d->a[i] = -1; } d->x4 = 1; d->x10 = 0; }
void func_0017BE30_b(D *d) { int i; for (i = 0; i < 2; i++) { d->a[i] = -1; d->b[i] = i ? 1 : 0; d->c[i] = 0; } d->x4 = 1; d->x10 = 0; }
void func_0017BE30_c(D *d) { int i; for (i = 0; i < 2; i++) { if (i) d->b[i] = 1; else d->b[i] = 0; d->c[i] = 0; d->a[i] = -1; } d->x4 = 1; d->x10 = 0; }
void func_0017BE30_d(D *d) { for (int i = 0; i < 2; i++) { d->b[i] = (i != 0) ? true : false; d->c[i] = false; d->a[i] = -1; } d->x4 = 1; d->x10 = 0; }
