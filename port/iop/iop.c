/*
 * IOP side of the SIF command and RPC protocols, reimplemented.
 *
 * Packets start with a header { u32 psize:8, dsize:24; u32 dest; u32 cid; u32 opt; }. System commands:
 *   0x80000000 CHANGE_SADDR, 0x80000001 SET_SREG, 0x80000002 INIT_CMD, 0x80000003 RESET_CMD,
 *   0x80000008 RPC_END (IOP -> EE), 0x80000009 RPC_BIND, 0x8000000A RPC_CALL, 0x8000000C RPC_RDATA.
 * RPC packets (after the header): rec_id 0x10, pkt_addr 0x14, rpc_id 0x18, client 0x1C, then
 *   BIND: sid 0x20
 *   CALL: rpc_number 0x20, send_size 0x24, receive 0x28, recv_size 0x2C, rmode 0x30, server 0x34
 *   RDATA: (client data) src 0x20, dest 0x24, size 0x28
 * The reply RPC_END: the request's rec_id..client, then cid 0x20 (the command answered),
 *   server 0x24, buff 0x28 (where the EE sends call data), cbuf 0x2C.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"
#include "iop.h"

u8 iop_ram[IOP_RAM_SIZE] __attribute__((aligned(16)));

#define MAX_SERVERS 64
typedef struct { u32 sid; const char *name; RpcHandler handler; u32 buff; } Server;
static Server servers[MAX_SERVERS];
static int nservers;
static u32 next_buff = 0x00100000;           /* IOP memory handed out as servers' receive buffers */

static u32 ee_pktbuf;                         /* EE address that receives IOP -> EE packets */

#define QUEUE 64
static u8 queue[QUEUE][64];
static int qhead, qtail;

void iop_register_server(u32 sid, const char *name, RpcHandler handler) {
    Server *s = &servers[nservers++];
    s->sid = sid;
    s->name = name;
    s->handler = handler;
    s->buff = next_buff;
    next_buff += 0x10000;
}

static u32 unknown_server(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {
    (void)c; (void)in; (void)out;
    rt_log("iop", "call to an unknown server, fn %u (%u bytes in, %u out)", fn, in_size, out_size);
    return 0;
}

static Server *find_server(u32 sid) {
    for (int i = 0; i < nservers; i++)
        if (servers[i].sid == sid) return &servers[i];
    return NULL;
}

/* A server nobody reimplemented: accept the bind anyway, so the game goes on; calls are logged. */
static Server *find_or_stub(u32 sid) {
    Server *s = find_server(sid);
    if (s || nservers >= MAX_SERVERS) return s;
    char *name = malloc(24);
    snprintf(name, 24, "unknown-%08X", sid);
    iop_register_server(sid, name, unknown_server);
    return find_server(sid);
}

static void send_to_ee(const u8 *pkt, u32 size) {
    if ((qtail + 1) % QUEUE == qhead) { rt_log("iop", "reply queue full"); return; }
    memset(queue[qtail], 0, 64);
    memcpy(queue[qtail], pkt, size);
    qtail = (qtail + 1) % QUEUE;
    rt_irq_pending = 1;
}

int iop_pending(void) { return qhead != qtail && ee_pktbuf != 0; }

void iop_deliver(Ctx *c, void (*raise_sif0)(Ctx *c)) {
    while (iop_pending()) {
        u8 *p = queue[qhead];
        u32 size = p[0];
        for (u32 i = 0; i < size; i += 4) {
            u32 w;
            memcpy(&w, p + i, 4);
            wr32(c, ee_pktbuf + i, w);
        }
        qhead = (qhead + 1) % QUEUE;
        u32 cid;
        memcpy(&cid, p + 8, 4);
        rt_log("iop", "-> EE packet %08X (%u bytes) at %08X", cid, size, ee_pktbuf);
        raise_sif0(c);
    }
}

static void put32(u8 *p, u32 off, u32 v) { memcpy(p + off, &v, 4); }

static void rpc_end(const u8 *req, u32 answered, u32 server, u32 buff) {
    u8 r[0x30] = {0};
    put32(r, 0x00, 0x30);                     /* psize */
    put32(r, 0x08, 0x80000008);
    memcpy(r + 0x10, req + 0x10, 16);         /* rec_id, pkt_addr, rpc_id, client */
    put32(r, 0x20, answered);
    put32(r, 0x24, server);
    put32(r, 0x28, buff);
    put32(r, 0x2C, buff);
    send_to_ee(r, sizeof r);
}

/* ---- IOP -> EE calls: the IOP binds to an RPC server the EE registered, then calls it.
 * Jobs run one at a time: BIND is sent, the EE answers with RPC_END (server, buff); the data is
 * written into buff, CALL is sent, and the EE's RPC_END for the call finishes the job. */
typedef struct { u32 sid, fn, size; u8 data[256]; } EeCall;
#define EE_JOBS 32
static EeCall ee_jobs[EE_JOBS];
static int ee_head, ee_tail, ee_busy;
static struct { u32 sid, server, buff; } ee_servers[16];
static int ee_nservers;

static void ee_job_next(Ctx *c);

static void send_bind(u32 sid) {
    u8 r[0x24] = {0};
    put32(r, 0x00, 0x24);
    put32(r, 0x08, 0x80000009);
    put32(r, 0x14, 0x0001E000);               /* pkt_addr: IOP-side packet, echoed back */
    put32(r, 0x1C, 0x0001E100 + sid);         /* client: identifies the job */
    put32(r, 0x20, sid);
    send_to_ee(r, sizeof r);
}

static void send_call(Ctx *c, u32 server, u32 buff, EeCall *j) {
    for (u32 i = 0; i < j->size; i++) wr8(c, buff + i, j->data[i]);
    u8 r[0x38] = {0};
    put32(r, 0x00, 0x38);
    put32(r, 0x08, 0x8000000A);
    put32(r, 0x14, 0x0001E000);
    put32(r, 0x1C, 0x0001E100 + j->sid);
    put32(r, 0x20, j->fn);
    put32(r, 0x24, j->size);
    put32(r, 0x28, 0);                        /* no data back */
    put32(r, 0x2C, 0);
    put32(r, 0x30, 0);
    put32(r, 0x34, server);
    send_to_ee(r, sizeof r);
}

void iop_call_ee(u32 sid, u32 fn, const void *data, u32 size) {
    EeCall *j = &ee_jobs[ee_tail];
    j->sid = sid;
    j->fn = fn;
    j->size = size < sizeof j->data ? size : sizeof j->data;
    memcpy(j->data, data, j->size);
    ee_tail = (ee_tail + 1) % EE_JOBS;
}

static void ee_job_next(Ctx *c) {
    if (ee_busy || ee_head == ee_tail) return;
    EeCall *j = &ee_jobs[ee_head];
    for (int i = 0; i < ee_nservers; i++)
        if (ee_servers[i].sid == j->sid && ee_servers[i].server) {
            ee_busy = 2;
            send_call(c, ee_servers[i].server, ee_servers[i].buff, j);
            return;
        }
    ee_busy = 1;
    send_bind(j->sid);
}

static void ee_rpc_end(Ctx *c, const u8 *p) {
    u32 answered, server, buff;
    memcpy(&answered, p + 0x20, 4);
    memcpy(&server, p + 0x24, 4);
    memcpy(&buff, p + 0x28, 4);
    EeCall *j = &ee_jobs[ee_head];
    if (answered == 0x80000009) {
        if (!server) {                        /* not registered yet: try again later */
            rt_log("iop", "EE server %X not registered yet", j->sid);
            ee_busy = 0;
            return;
        }
        ee_servers[ee_nservers++ % 16] = (typeof(ee_servers[0])){j->sid, server, buff};
        ee_busy = 2;
        send_call(c, server, buff, j);
    } else {
        ee_head = (ee_head + 1) % EE_JOBS;
        ee_busy = 0;
        ee_job_next(c);
    }
}

static void command(Ctx *c, u32 iop_addr) {
    u8 *p = iop_ram + iop_addr;
    u32 cid, w;
    memcpy(&cid, p + 8, 4);
#define F(off) (memcpy(&w, p + (off), 4), w)
    switch (cid) {
    case 0x80000000:                          /* CHANGE_SADDR */
    case 0x80000002:                          /* INIT_CMD */
        ee_pktbuf = F(0x10) & 0x1FFFFFFF;
        rt_log("iop", "%s: EE receive buffer %08X", cid == 0x80000000 ? "CHANGE_SADDR" : "INIT_CMD", ee_pktbuf);
        rt_log("iop", "INIT_CMD opt %u", F(0x0C));
        if (cid == 0x80000002 && F(0x0C) == 1) {
            /* sceSifInitRpc: the IOP answers by setting software register 0 (RPC ready) */
            u8 r[0x18] = {0};
            put32(r, 0x00, 0x18);
            put32(r, 0x08, 0x80000001);       /* SET_SREG */
            put32(r, 0x10, 0);                /* index */
            put32(r, 0x14, 1);                /* value */
            send_to_ee(r, sizeof r);
        }
        break;
    case 0x80000001:                          /* SET_SREG */
        break;
    case 0x80000008:                          /* RPC_END from the EE: answer to one of our calls */
        ee_rpc_end(c, p);
        break;
    case 0x80000009: {                        /* RPC_BIND */
        u32 sid = F(0x20);
        Server *s = find_or_stub(sid);
        rt_log("iop", "bind to server %08X (%s)", sid, s ? s->name : "not implemented");
        /* a server that does not exist answers with server = 0; the EE then retries */
        rpc_end(p, 0x80000009, s ? sid : 0, s ? s->buff : 0);
        break;
    }
    case 0x8000000A: {                        /* RPC_CALL */
        u32 fn = F(0x20), send_size = F(0x24), receive = F(0x28), recv_size = F(0x2C), server = F(0x34);
        Server *s = find_server(server);
        static u8 out[0x10000];
        u32 n = 0;
        memset(out, 0, recv_size < sizeof out ? recv_size : sizeof out);
        if (s && s->handler)
            n = s->handler(c, fn, iop_ram + s->buff, send_size, out, recv_size);
        else
            rt_log("iop", "call %08X fn %u (%u bytes in, %u out): server not implemented", server, fn, send_size, recv_size);
        if (receive && recv_size) {
            if (n > recv_size) n = recv_size;
            for (u32 i = 0; i < recv_size; i++) wr8(c, receive + i, out[i]);
        }
        rpc_end(p, 0x8000000A, server, s ? s->buff : 0);
        break;
    }
    case 0x8000000C: {                        /* RPC_RDATA: copy IOP memory to the EE */
        u32 src = F(0x20), dest = F(0x24), size = F(0x28);
        for (u32 i = 0; i < size; i++) wr8(c, dest + i, iop_ram[(src + i) & (IOP_RAM_SIZE - 1)]);
        rpc_end(p, 0x8000000C, 0, 0);
        break;
    }
    default:
        rt_log("iop", "command %08X not implemented", cid);
    }
#undef F
}

void iop_receive(Ctx *c, u32 src, u32 dst, u32 size) {
    dst &= IOP_RAM_SIZE - 1;
    for (u32 i = 0; i < size; i++) iop_ram[(dst + i) & (IOP_RAM_SIZE - 1)] = rd8(c, src + i);
    if (dst == IOP_CMD_BUFFER) {
        command(c, dst);
        ee_job_next(c);
    }
}

void iop_services_init(void);

void iop_init(void) {
    sif_init();
    iop_services_init();
}
