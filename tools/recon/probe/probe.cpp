/* Hand-written C for small functions of SLES_541.62, used to identify the compiler build.
 * Function names are the original addresses. Callee names are placeholders. */

typedef struct { float x, y, z, w; } Vec4 __attribute__((aligned(16)));
typedef unsigned int u128 __attribute__((mode(TI)));

extern void f_140230(void *a, void *b, int c, int d);
extern void f_1CA990(void *a);
extern void f_160F00(void *a, int b);
extern void f_3B7880(void *a);
extern void f_1AB920(void *a, void *b);
extern void f_1C8200(void *a);

struct S140560 { int x; };
void func_00140560(void *a, struct S140560 *b, int c) { f_140230(a, b, c, b->x); }

struct S14E770 { char pad[0x18]; char dirty; char pad2[7]; Vec4 pos; };
void func_0014E770(struct S14E770 *e, Vec4 *v) {
    if (e->pos.z != v->z) e->dirty = 1;
    *(u128 *)&e->pos = *(u128 *)v;
}

struct S159300 { char pad[0x842]; unsigned short count; };
void func_00159300(struct S159300 *a) {
    if (a->count > 0) {
        f_1CA990(a);
        a->count--;
    }
}

struct S16BE60 { char pad[0x114]; unsigned short state; };
void func_0016BE60(struct S16BE60 *a, int b) {
    if (a->state == 3) f_160F00(a, b);
}

struct S17BE30 { short a[2]; int x4; short b[2]; char c[2]; int x10; };
void func_0017BE30(struct S17BE30 *d) {
    int i;
    for (i = 0; i < 2; i++) {
        d->b[i] = (i != 0);
        d->c[i] = 0;
        d->a[i] = -1;
    }
    d->x4 = 1;
    d->x10 = 0;
}

struct S19E700b { char pad[0x11C]; void *p; };
struct S19E700 { char pad[0xA0]; struct S19E700b *sub; };
void func_0019E700(struct S19E700 *a) {
    if (a->sub != 0 && a->sub->p != 0) f_3B7880(a->sub->p);
}

struct S1ACB80 { int x0; void *p; };
void func_001ACB80(void *a, struct S1ACB80 *b) {
    if (b) b = (struct S1ACB80 *)b->p;
    f_1AB920(a, b);
}

void *func_001C7F40(void *a) { f_1C8200(a); return a; }
