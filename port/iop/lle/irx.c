/*
 * IRX loading: an IOP module is a relocatable MIPS ELF (type 0xFF80) with a .iopmod section. The
 * loader copies its sections into memory from AllocSysMemory, applies the relocations (R_MIPS_32,
 * 26, HI16 / LO16; offsets are addresses from the module's start), links its imports and runs its
 * entry point.
 *
 * Import tables sit in .text: { 0x41E00000, 0, u16 version, u16 flags, char name[8] } then one stub
 * per function, "jr $ra" / "addiu $zero, $zero, index", until a pair of zeros. A stub for a library
 * a module registered (RegisterLibraryEntries: { 0x41C00000, 0, version, flags, name[8] }, then the
 * function addresses) becomes a jump there; any other runs native code (iop_import).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "runtime.h"
#include "lle.h"

#define MAX_LIBS 8
static struct { char name[9]; u32 table; } libs[MAX_LIBS];
static int nlibs;

void irx_export(const char *lib, u32 table) {
    if (nlibs >= MAX_LIBS) return;
    snprintf(libs[nlibs].name, sizeof libs[0].name, "%s", lib);
    libs[nlibs].table = table;
    nlibs++;
    rt_log("iop-lle", "library %s registered (functions at %08X)", lib, table);
}

u32 irx_find_export(const char *lib, int index) {
    for (int i = 0; i < nlibs; i++)
        if (!strcmp(libs[i].name, lib)) return iop_r32(libs[i].table + (u32)index * 4);
    return 0;
}

static u32 le32(const u8 *p) { u32 v; memcpy(&v, p, 4); return v; }
static u16 le16(const u8 *p) { u16 v; memcpy(&v, p, 2); return v; }

static void link_imports(u32 text, u32 size) {
    for (u32 a = text; a + 20 < text + size; a += 4) {
        if (iop_r32(a) != 0x41E00000) continue;
        char lib[9];
        memcpy(lib, iop_ptr(a + 12), 8);
        lib[8] = 0;
        u32 s = a + 20;
        for (; iop_r32(s) || iop_r32(s + 4); s += 8) {
            if (iop_r32(s) != 0x03E00008) continue;
            int index = (int)(iop_r32(s + 4) & 0xFFFF);
            u32 target = irx_find_export(lib, index);
            if (target) {                               /* another module: jump there */
                iop_w32(s, 0x08000000u | ((target >> 2) & 0x03FFFFFF));
                iop_w32(s + 4, 0);
            } else
                iop_set_native(s, iop_import(lib, index, s));
        }
        a = s;
    }
}

int irx_load(const u8 *f, u32 fsize, const char *name) {
    if (fsize < 0x34 || memcmp(f, "\x7F" "ELF", 4) || le16(f + 0x10) != 0xFF80) {
        rt_log("iop-lle", "%s: not an IRX", name);
        return -1;
    }
    u32 shoff = le32(f + 0x20), entry = le32(f + 0x18);
    u16 shentsize = le16(f + 0x2E), shnum = le16(f + 0x30);
    u32 total = 0, text_size = 0;
    for (int i = 0; i < shnum; i++) {
        const u8 *sh = f + shoff + (u32)i * shentsize;
        u32 type = le32(sh + 4), flags = le32(sh + 8), addr = le32(sh + 12), size = le32(sh + 20);
        if ((flags & 2) && (type == 1 || type == 8) && addr + size > total) total = addr + size;   /* ALLOC */
        if (type == 1 && (flags & 4)) text_size = addr + size;                                    /* .text */
    }
    u32 base = iop_alloc(total);
    if (!base) return -1;
    for (int i = 0; i < shnum; i++) {
        const u8 *sh = f + shoff + (u32)i * shentsize;
        u32 type = le32(sh + 4), flags = le32(sh + 8), addr = le32(sh + 12), off = le32(sh + 16), size = le32(sh + 20);
        if ((flags & 2) && type == 1) memcpy(iop_ptr(base + addr), f + off, size);
        if ((flags & 2) && type == 8) memset(iop_ptr(base + addr), 0, size);
    }
    /* relocations */
    for (int i = 0; i < shnum; i++) {
        const u8 *sh = f + shoff + (u32)i * shentsize;
        if (le32(sh + 4) != 9) continue;                                                            /* SHT_REL */
        u32 off = le32(sh + 16), size = le32(sh + 20);
        u32 hi[64], nhi = 0;
        for (u32 k = 0; k + 8 <= size; k += 8) {
            u32 where = base + le32(f + off + k), type = le32(f + off + k + 4) & 0xFF;
            u32 w = iop_r32(where);
            switch (type) {
            case 2: iop_w32(where, w + base); break;                                               /* R_MIPS_32 */
            case 4: iop_w32(where, (w & 0xFC000000) | ((((w & 0x03FFFFFF) << 2) + base) >> 2 & 0x03FFFFFF)); break;
            case 5: if (nhi < 64) hi[nhi++] = where; break;                                       /* HI16: with its LO16 */
            case 6: {                                                                               /* LO16 */
                s32 lo = (s16)(w & 0xFFFF);
                for (u32 h = 0; h < nhi; h++) {
                    u32 hw = iop_r32(hi[h]);
                    u32 v = ((hw & 0xFFFF) << 16) + (u32)lo + base;
                    iop_w32(hi[h], (hw & 0xFFFF0000) | (((v + 0x8000) >> 16) & 0xFFFF));
                }
                nhi = 0;
                iop_w32(where, (w & 0xFFFF0000) | ((u32)(lo + (s32)base) & 0xFFFF));
                break;
            }
            case 0: break;
            default: rt_log("iop-lle", "%s: relocation type %u at %X", name, type, where - base); break;
            }
        }
    }
    link_imports(base, text_size);
    rt_log("iop-lle", "%s at %08X (%X bytes), starting at %08X", name, base, total, base + entry);
    u32 r = iop_lle_start_module(base + entry);
    rt_log("iop-lle", "%s started: %u", name, r);
    return (r & 3) == 1 ? -1 : 0;                       /* NO_RESIDENT_END: it failed */
}
