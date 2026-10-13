/*
 * IOP RPC servers the game talks to, reimplemented. Each is registered by its server id (sid).
 * Servers not reimplemented yet answer with zeros and log what was asked, with the start of the
 * request, so the log shows what each one needs.
 */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "iop.h"

static void dump_request(const char *name, u32 fn, const u8 *in, u32 in_size, u32 out_size) {
    char text[80];
    u32 n = in_size < 64 ? in_size : 64, k = 0;
    for (u32 i = 0; i < n && k < sizeof text - 1; i++) text[k++] = isprint(in[i]) ? in[i] : '.';
    text[k] = 0;
    rt_log("iop", "%s fn %u, %u bytes in, %u out: \"%s\"", name, fn, in_size, out_size, text);
}

static u32 rd(const u8 *p, u32 off) { u32 v; memcpy(&v, p + off, 4); return v; }
static void wr(u8 *p, u32 off, u32 v) { memcpy(p + off, &v, 4); }

/* ---- 0x80000003: IOP heap (SifAllocIopHeap / SifFreeIopHeap / SifLoadIopHeap) */
static u32 heap_next = 0x00140000;

static u32 srv_iopheap(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {
    (void)c;
    switch (fn) {
    case 1: {                                   /* alloc(size) -> address */
        u32 size = (rd(in, 0) + 63) & ~63u, a = heap_next;
        heap_next += size;
        if (heap_next > IOP_RAM_SIZE) { a = 0; rt_log("iop", "IOP heap exhausted"); }
        wr(out, 0, a);
        rt_log("iop", "iopheap alloc %u bytes -> %08X", size, a);
        return 4;
    }
    case 2: wr(out, 0, 0); return 4;            /* free */
    default: dump_request("iopheap", fn, in, in_size, out_size); return 0;
    }
}

/* ---- 0x80000006: module loader. Modules are not run: their services are reimplemented here. */
static u32 srv_loadfile(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {
    (void)c;
    static int next_id = 1;
    if (fn == 255) {                            /* version: the EE library wants "2800" (SDK 2.8) */
        memcpy(out, "2800", 4);
        return 4;
    }
    if (fn == 0 || fn == 1) {                   /* LoadModule (file / from buffer) */
        rt_log("iop", "LoadModule %s", (const char *)in + 8);
        wr(out, 0, next_id++);                  /* module id */
        wr(out, 4, 0);                          /* module's result */
        return 8;
    }
    dump_request("loadfile", fn, in, in_size, out_size);
    return 0;
}

#define GENERIC(fname, label)                                                                   \
    static u32 fname(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {              \
        (void)c; (void)out;                                                                     \
        dump_request(label, fn, in, in_size, out_size);                                         \
        return 0;                                                                               \
    }
GENERIC(srv_fileio, "fileio")
GENERIC(srv_cdvd_init, "cdvd-init")
GENERIC(srv_cdvd_s, "cdvd-scmd")
GENERIC(srv_cdvd_n, "cdvd-ncmd")
GENERIC(srv_cdvd_search, "cdvd-search")
GENERIC(srv_cdvd_ready, "cdvd-ready")
GENERIC(srv_pad, "pad")
GENERIC(srv_pad_ext, "pad-ext")
GENERIC(srv_mc, "mcserv")
GENERIC(srv_libsd, "libsd")
GENERIC(srv_dbc, "dbc")            /* DBCMAN: device bus (pads, memory cards over SIO2) */
GENERIC(srv_mc2, "mc2")
u32 srv_rssd(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size);   /* rssd.c */
u32 srv_cri_adxi(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size);   /* cri_adxi.c */

void iop_services_init(void) {
    iop_register_server(0x80000001, "fileio", srv_fileio);
    iop_register_server(0x80000003, "iopheap", srv_iopheap);
    iop_register_server(0x80000006, "loadfile", srv_loadfile);
    iop_register_server(0x80000592, "cdvd-init", srv_cdvd_init);
    iop_register_server(0x80000593, "cdvd-scmd", srv_cdvd_s);
    iop_register_server(0x80000595, "cdvd-ncmd", srv_cdvd_n);
    iop_register_server(0x80000596, "cdvd-search", srv_cdvd_search);
    iop_register_server(0x80000597, "cdvd-ready", srv_cdvd_ready);
    iop_register_server(0x80000100, "pad", srv_pad);
    iop_register_server(0x80000101, "pad-ext", srv_pad_ext);
    iop_register_server(0x80000400, "mcserv", srv_mc);
    iop_register_server(0x80000701, "libsd", srv_libsd);
    iop_register_server(0x00000900, "rssd", srv_rssd);
    iop_register_server(0x80001300, "dbc", srv_dbc);
    iop_register_server(0x90000200, "cri-adxi", srv_cri_adxi);
    iop_register_server(0x80001400, "mc2", srv_mc2);
}
