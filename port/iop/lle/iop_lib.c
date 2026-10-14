/*
 * The IOP's system modules, natively, for the modules that run as they are (SSD / RSSD): threads,
 * semaphores, memory, interrupts, hardware timers, vertical blanks, SIF RPC, the disc and files.
 *
 * Threads: every IOP thread is a host thread, but only one runs at a time (the IOP has one CPU):
 * `cur` names the thread that has the CPU and holds `big` while it runs; the others wait their turn
 * on `cv`. As on the IOP, the best priority (lowest number) ready thread runs, and a thread runs
 * until it blocks or wakes up a better one. "Outside" callers (the EE's RPC calls, module loading,
 * the clock) take the CPU when it is idle (cur = EXT).
 *
 * Interrupts (hardware timers, vertical blanks, SPU2 transfers) are due by the IOP clock, which the
 * sound thread (clock_main) advances as it makes samples; the CPU delivers them between instructions
 * (iop_lle_poll) on a context of its own, or the clock thread does when the CPU is idle.
 */
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "runtime.h"
#include "lle.h"

int cdvd_find(const char *path, u32 *lsn, u32 *size);
int cdvd_read(u32 lsn, u32 count, u8 *out);

#define SYSCLOCK 36864000ull                /* the IOP's system clock, Hz */
#define EXT (-2)                            /* the CPU is lent to the outside (EE, loader, clock) */

static pthread_mutex_t big = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cv = PTHREAD_COND_INITIALIZER;
static int cur = -1;                        /* thread with the CPU; -1 idle; EXT */
static int in_irq, intr_on = 1;
static u64 ready_seq;

void iop_lock(void) { pthread_mutex_lock(&big); }
void iop_unlock(void) { pthread_mutex_unlock(&big); }

#define V0(x) (cpu->r[2] = (u32)(x))
#define A(n) iop_arg(cpu, n)

/* ------------------------------------------------------------------------------------------- memory */

/* AllocSysMemory: first fit over the region the modules own; blocks are kept on the side. */
#define HEAP_LO 0x00030000u
#define HEAP_HI 0x00100000u
#define MAX_BLOCKS 1024
static struct { u32 addr, size, used; } blocks[MAX_BLOCKS];
static int nblocks;

static void heap_init(void) {
    if (nblocks) return;
    blocks[0].addr = HEAP_LO;
    blocks[0].size = HEAP_HI - HEAP_LO;
    blocks[0].used = 0;
    nblocks = 1;
}

u32 iop_alloc(u32 size) {
    heap_init();
    size = (size + 255) & ~255u;
    for (int i = 0; i < nblocks; i++) {
        if (blocks[i].used || blocks[i].size < size) continue;
        if (blocks[i].size > size && nblocks < MAX_BLOCKS) {           /* split */
            memmove(&blocks[i + 2], &blocks[i + 1], (size_t)(nblocks - i - 1) * sizeof blocks[0]);
            blocks[i + 1].addr = blocks[i].addr + size;
            blocks[i + 1].size = blocks[i].size - size;
            blocks[i + 1].used = 0;
            blocks[i].size = size;
            nblocks++;
        }
        blocks[i].used = 1;
        memset(iop_ptr(blocks[i].addr), 0, size);
        return blocks[i].addr;
    }
    rt_log("iop-lle", "AllocSysMemory(%u): out of memory", size);
    return 0;
}

static void iop_free(u32 addr) {
    for (int i = 0; i < nblocks; i++) {
        if (blocks[i].addr != addr || !blocks[i].used) continue;
        blocks[i].used = 0;
        if (i + 1 < nblocks && !blocks[i + 1].used) {                  /* merge with the next */
            blocks[i].size += blocks[i + 1].size;
            memmove(&blocks[i + 1], &blocks[i + 2], (size_t)(nblocks - i - 2) * sizeof blocks[0]);
            nblocks--;
        }
        if (i > 0 && !blocks[i - 1].used) {                            /* and with the previous */
            blocks[i - 1].size += blocks[i].size;
            memmove(&blocks[i], &blocks[i + 1], (size_t)(nblocks - i - 1) * sizeof blocks[0]);
            nblocks--;
        }
        return;
    }
}

static void n_AllocSysMemory(IopCpu *cpu) { V0(iop_alloc(A(1))); }
static void n_FreeSysMemory(IopCpu *cpu) { iop_free(A(0)); V0(0); }
static void n_QueryMaxFreeMemSize(IopCpu *cpu) {
    u32 best = 0;
    for (int i = 0; i < nblocks; i++) if (!blocks[i].used && blocks[i].size > best) best = blocks[i].size;
    V0(best);
}

/* ------------------------------------------------------------------------------------------- printf */

static void iop_format(IopCpu *cpu, const char *who, u32 fmt, int first) {
    char out[512];
    int k = 0, arg = first;
    for (u32 p = fmt; *iop_ptr(p) && k < (int)sizeof out - 64; p++) {
        char ch = (char)*iop_ptr(p);
        if (ch != '%') { out[k++] = ch; continue; }
        char spec[16];
        int n = 0;
        spec[n++] = '%';
        for (p++; *iop_ptr(p) && strchr("-+ #0123456789.l", *iop_ptr(p)) && n < 12; p++)
            if (*iop_ptr(p) != 'l') spec[n++] = (char)*iop_ptr(p);
        char conv = (char)*iop_ptr(p);
        if (!conv) break;
        if (conv == '%') { out[k++] = '%'; continue; }
        spec[n++] = conv == 'p' ? 'x' : conv;
        spec[n] = 0;
        u32 v = A(arg++);
        if (conv == 's') {
            char s[128];
            int m = 0;
            for (u32 q = v; *iop_ptr(q) && m < 127; q++) s[m++] = (char)*iop_ptr(q);
            s[m] = 0;
            k += snprintf(out + k, sizeof out - (size_t)k, spec, s);
        } else if (conv == 'd' || conv == 'i' || conv == 'c') k += snprintf(out + k, sizeof out - (size_t)k, spec, (int)v);
        else k += snprintf(out + k, sizeof out - (size_t)k, spec, v);
        if (k >= (int)sizeof out - 64) break;
    }
    out[k] = 0;
    while (k > 0 && (out[k - 1] == '\n' || out[k - 1] == '\r')) out[--k] = 0;
    if (k) rt_log(who, "%s", out);
}

static void n_printf(IopCpu *cpu) { iop_format(cpu, "iop-tty", A(0), 1); V0(0); }

/* ------------------------------------------------------------------------------------------- threads */

enum { T_FREE, T_DORMANT, T_READY, T_RUN, T_WAIT };
enum { W_NONE, W_SEMA, W_SLEEP, W_VBLANK, W_RPC, W_DELAY };
#define MAX_THREADS 32
typedef struct {
    int state, prio, wait, wakeups, gen, host;
    u32 wait_obj, entry, stack, stack_size, arg;
    u64 seq, wake_at;
    IopCpu cpu;
} Thread;
static Thread th[MAX_THREADS];

static int best_ready(void) {
    int b = -1;
    for (int i = 0; i < MAX_THREADS; i++) {
        if (th[i].state != T_READY) continue;
        if (b < 0 || th[i].prio < th[b].prio || (th[i].prio == th[b].prio && th[i].seq < th[b].seq)) b = i;
    }
    return b;
}

static void make_ready(int i) {
    th[i].state = T_READY;
    th[i].wait = W_NONE;
    th[i].seq = ++ready_seq;
}

/* Give the CPU to the best ready thread (or leave it idle). */
static void reschedule(void) {
    int n = best_ready();
    cur = n;
    if (n >= 0) th[n].state = T_RUN;
    pthread_cond_broadcast(&cv);
}

static void wait_turn(int me, int gen) {
    while (cur != me) {
        pthread_cond_wait(&cv, &big);
        if (th[me].gen != gen) { pthread_mutex_unlock(&big); pthread_exit(NULL); }   /* terminated */
    }
}

/* The running thread blocks until something makes it ready again. */
static void block(int kind, u32 obj) {
    int me = cur, gen = th[me].gen;
    th[me].state = T_WAIT;
    th[me].wait = kind;
    th[me].wait_obj = obj;
    reschedule();
    wait_turn(me, gen);
}

/* After a thread became ready: switch if it outranks the running one. */
static void maybe_preempt(void) {
    if (in_irq || cur < 0) return;
    int n = best_ready();
    if (n >= 0 && th[n].prio < th[cur].prio) {
        int me = cur, gen = th[me].gen;
        make_ready(me);
        reschedule();
        wait_turn(me, gen);
    }
}

/* The CPU for the outside: wait until it is idle. */
static void ext_enter(void) {
    pthread_mutex_lock(&big);
    while (cur != -1) pthread_cond_wait(&cv, &big);
    cur = EXT;
}
static void ext_leave(void) {
    reschedule();
    pthread_mutex_unlock(&big);
}

/* Let the threads run until they all wait (or a while has passed). Called with `big` held, cur == -1 or a thread. */
static void settle(void) {
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    ts.tv_nsec += 200 * 1000000;
    if (ts.tv_nsec >= 1000000000) { ts.tv_sec++; ts.tv_nsec -= 1000000000; }
    while (cur != -1)
        if (pthread_cond_timedwait(&cv, &big, &ts)) { rt_log("iop-lle", "threads still busy after 200 ms"); break; }
}

static void *thread_main(void *p) {
    int me = (int)(intptr_t)p;
    pthread_mutex_lock(&big);
    int gen = th[me].gen;
    wait_turn(me, gen);
    Thread *t = &th[me];
    memset(&t->cpu, 0, sizeof t->cpu);
    t->cpu.r[29] = (t->stack + t->stack_size - 16) & ~15u;
    rt_log("iop-lle", "thread %d starts at %08X (priority %d)", me + 1, t->entry, t->prio);
    iop_call(&t->cpu, t->entry, t->arg, 0, 0, 0);
    rt_log("iop-lle", "thread %d ended", me + 1);
    t->state = T_DORMANT;
    t->host = 0;
    reschedule();
    pthread_mutex_unlock(&big);
    return NULL;
}

static int tid_index(u32 id) { return id >= 1 && id <= MAX_THREADS && th[id - 1].state != T_FREE ? (int)id - 1 : -1; }

static void n_CreateThread(IopCpu *cpu) {
    u32 p = A(0);
    for (int i = 0; i < MAX_THREADS; i++) {
        if (th[i].state != T_FREE) continue;
        Thread *t = &th[i];
        int gen = t->gen;
        memset(t, 0, sizeof *t);
        t->gen = gen + 1;
        t->entry = iop_r32(p + 8);
        t->stack_size = iop_r32(p + 0xC);
        t->prio = (int)iop_r32(p + 0x10);
        t->stack = iop_alloc(t->stack_size);
        t->state = T_DORMANT;
        V0(i + 1);
        return;
    }
    V0(-400);                                       /* KE_NO_MEMORY */
}

static void n_StartThread(IopCpu *cpu) {
    int i = tid_index(A(0));
    if (i < 0 || th[i].state != T_DORMANT) { V0(-407); return; }
    th[i].arg = A(1);
    make_ready(i);
    if (!th[i].host) {
        pthread_t h;
        pthread_attr_t a;
        pthread_attr_init(&a);
        pthread_attr_setdetachstate(&a, PTHREAD_CREATE_DETACHED);
        pthread_create(&h, &a, thread_main, (void *)(intptr_t)i);
        pthread_attr_destroy(&a);
        th[i].host = 1;
    }
    V0(0);
    if (cur == -1) reschedule();
    maybe_preempt();
}

static void n_DeleteThread(IopCpu *cpu) {
    int i = tid_index(A(0));
    if (i < 0) { V0(-407); return; }
    iop_free(th[i].stack);
    th[i].state = T_FREE;
    V0(0);
}

static void n_TerminateThread(IopCpu *cpu) {
    int i = tid_index(A(0));
    if (i < 0) { V0(-407); return; }
    th[i].state = T_DORMANT;
    th[i].gen++;                                    /* its host thread quits when it wakes */
    th[i].host = 0;
    pthread_cond_broadcast(&cv);
    V0(0);
}

static void n_GetThreadId(IopCpu *cpu) { V0(cur >= 0 ? cur + 1 : 0x100); }

static void n_SleepThread(IopCpu *cpu) {
    if (cur < 0) { V0(0); return; }
    if (th[cur].wakeups > 0) th[cur].wakeups--;
    else block(W_SLEEP, 0);
    V0(0);
}

static void wakeup(IopCpu *cpu, int preempt) {
    int i = tid_index(A(0));
    if (i < 0) { V0(-407); return; }
    if (th[i].state == T_WAIT && th[i].wait == W_SLEEP) make_ready(i);
    else th[i].wakeups++;
    V0(0);
    if (cur == -1) reschedule();
    if (preempt) maybe_preempt();
}
static void n_WakeupThread(IopCpu *cpu) { wakeup(cpu, 1); }
static void n_iWakeupThread(IopCpu *cpu) { wakeup(cpu, 0); }

static void n_DelayThread(IopCpu *cpu);
static void n_USec2SysClock(IopCpu *cpu) {
    u64 t = (u64)A(0) * SYSCLOCK / 1000000;
    iop_w32(A(1), (u32)t);
    iop_w32(A(1) + 4, (u32)(t >> 32));
    V0(0);
}

/* ------------------------------------------------------------------------------------------- semaphores */

#define MAX_SEMAS 64
static struct { int used, count, max; } semas[MAX_SEMAS];

static void n_CreateSema(IopCpu *cpu) {
    u32 p = A(0);
    for (int i = 0; i < MAX_SEMAS; i++) {
        if (semas[i].used) continue;
        semas[i].used = 1;
        semas[i].count = (int)iop_r32(p + 8);
        semas[i].max = (int)iop_r32(p + 12);
        V0(i + 1);
        return;
    }
    V0(-400);
}
static int sema_index(u32 id) { return id >= 1 && id <= MAX_SEMAS && semas[id - 1].used ? (int)id - 1 : -1; }
static void n_DeleteSema(IopCpu *cpu) {
    int s = sema_index(A(0));
    if (s >= 0) semas[s].used = 0;
    V0(s >= 0 ? 0 : -408);
}

static void signal_sema(IopCpu *cpu, int preempt) {
    int s = sema_index(A(0));
    if (s < 0) { V0(-408); return; }
    int w = -1;                                     /* the first waiter (best priority, then oldest) */
    for (int i = 0; i < MAX_THREADS; i++)
        if (th[i].state == T_WAIT && th[i].wait == W_SEMA && th[i].wait_obj == (u32)s &&
            (w < 0 || th[i].prio < th[w].prio || (th[i].prio == th[w].prio && th[i].seq < th[w].seq))) w = i;
    if (w >= 0) make_ready(w);
    else if (semas[s].count < semas[s].max) semas[s].count++;
    V0(0);
    if (cur == -1) reschedule();
    if (preempt) maybe_preempt();
}
static void n_SignalSema(IopCpu *cpu) { signal_sema(cpu, 1); }
static void n_iSignalSema(IopCpu *cpu) { signal_sema(cpu, 0); }

static void n_WaitSema(IopCpu *cpu) {
    int s = sema_index(A(0));
    if (s < 0) { V0(-408); return; }
    if (semas[s].count > 0) semas[s].count--;
    else if (cur >= 0) { th[cur].seq = ++ready_seq; block(W_SEMA, (u32)s); }
    else rt_log("iop-lle", "WaitSema(%d) outside a thread would block", s + 1);
    V0(0);
}
static void n_PollSema(IopCpu *cpu) {
    int s = sema_index(A(0));
    if (s < 0) { V0(-408); return; }
    if (semas[s].count > 0) { semas[s].count--; V0(0); } else V0(-419);   /* KE_SEMA_ZERO */
}

/* ------------------------------------------------------------------------------------------- interrupts */

static void n_CpuSuspendIntr(IopCpu *cpu) {
    if (A(0)) iop_w32(A(0), (u32)intr_on);
    V0(intr_on ? 0 : -102);                         /* KE_CPUDI: already off */
    intr_on = 0;
}
static void n_CpuResumeIntr(IopCpu *cpu) {
    intr_on = A(0) != 0;
    V0(0);
    if (intr_on && iop_irq_flag && !in_irq) iop_lle_poll();
}

/* The IOP clock, in system clock ticks; the clock thread moves it on. */
static volatile u64 iop_ticks;
static u64 vblank_next;

#define MAX_TIMERS 4
static struct { int used, running; u32 handler, arg, compare, prescale; u64 next, start; } timers[MAX_TIMERS];

static void n_AllocHardTimer(IopCpu *cpu) {
    for (int i = 0; i < MAX_TIMERS; i++)
        if (!timers[i].used) {
            memset(&timers[i], 0, sizeof timers[i]);
            timers[i].used = 1;
            timers[i].prescale = A(2) ? A(2) : 1;
            V0(i + 1);
            return;
        }
    V0(-150);
}
static int timer_index(u32 id) { return id >= 1 && id <= MAX_TIMERS && timers[id - 1].used ? (int)id - 1 : -1; }
static void n_FreeHardTimer(IopCpu *cpu) { int t = timer_index(A(0)); if (t >= 0) timers[t].used = 0; V0(0); }
static void n_SetTimerHandler(IopCpu *cpu) {
    int t = timer_index(A(0));
    if (t < 0) { V0(-151); return; }
    timers[t].compare = A(1);
    timers[t].handler = A(2);
    timers[t].arg = A(3);
    rt_log("iop-lle", "timer %d: handler %08X every %u ticks", t + 1, A(2), A(1));
    V0(0);
}
static void n_SetupHardTimer(IopCpu *cpu) {
    int t = timer_index(A(0));
    if (t >= 0 && A(3)) timers[t].prescale = A(3);
    V0(0);
}
static void n_StartHardTimer(IopCpu *cpu) {
    int t = timer_index(A(0));
    if (t < 0) { V0(-151); return; }
    timers[t].running = 1;
    timers[t].start = iop_ticks;
    timers[t].next = iop_ticks + (u64)timers[t].compare * timers[t].prescale;
    V0(0);
}
static void n_StopHardTimer(IopCpu *cpu) { int t = timer_index(A(0)); if (t >= 0) timers[t].running = 0; V0(0); }
static void n_GetTimerCounter(IopCpu *cpu) {
    int t = timer_index(A(0));
    V0(t >= 0 ? (u32)((iop_ticks - timers[t].start) / timers[t].prescale) : 0);
}

static void n_WaitVblankEnd(IopCpu *cpu) {
    if (cur >= 0) block(W_VBLANK, 0);
    V0(0);
}

static void n_DelayThread(IopCpu *cpu) {
    if (cur >= 0) {
        th[cur].wake_at = iop_ticks + (u64)A(0) * SYSCLOCK / 1000000;
        block(W_DELAY, 0);
    }
    V0(0);
}

/* SPU2 transfer / interrupt handlers (libsd 26, 27) */
static u32 trans_handler[2], trans_arg[2], spu_handler, spu_arg;
static void n_SetTransIntrHandler(IopCpu *cpu) {
    int ch = A(0) & 1;
    V0(trans_handler[ch]);
    trans_handler[ch] = A(1);
    trans_arg[ch] = A(2);
}
static void n_SetSpu2IntrHandler(IopCpu *cpu) {
    V0(spu_handler);
    spu_handler = A(0);
    spu_arg = A(1);
}
static volatile int trans_pending[2];
void iop_lle_trans_done(int ch) { trans_pending[ch & 1] = 1; iop_irq_flag = 1; }

static IopCpu irq_cpu;
static u32 irq_stack;

static void run_interrupts(void) {
    if (in_irq || !intr_on) return;
    in_irq = 1;
    iop_irq_flag = 0;
    irq_cpu.r[29] = irq_stack;
    u64 now = iop_ticks;
    for (int i = 0; i < MAX_TIMERS; i++) {
        int guard = 0;
        while (timers[i].used && timers[i].running && timers[i].handler && now >= timers[i].next) {
            if (++guard > 8) { timers[i].next = now + (u64)timers[i].compare * timers[i].prescale; break; }
            u32 c = iop_call(&irq_cpu, timers[i].handler, timers[i].arg, 0, 0, 0);
            if (!c) { timers[i].running = 0; break; }
            timers[i].compare = c;
            timers[i].next += (u64)c * timers[i].prescale;
        }
    }
    for (int ch = 0; ch < 2; ch++)
        if (trans_pending[ch]) {
            trans_pending[ch] = 0;
            if (trans_handler[ch]) iop_call(&irq_cpu, trans_handler[ch], (u32)ch, trans_arg[ch], 0, 0);
        }
    {
        int core = spu2_take_irq();
        if (core && spu_handler) iop_call(&irq_cpu, spu_handler, (u32)core, spu_arg, 0, 0);
    }
    if (now >= vblank_next) {
        vblank_next = now + SYSCLOCK / 60;
        if (now > vblank_next + SYSCLOCK) vblank_next = now;
        for (int i = 0; i < MAX_THREADS; i++)
            if (th[i].state == T_WAIT && th[i].wait == W_VBLANK) make_ready(i);
    }
    for (int i = 0; i < MAX_THREADS; i++)
        if (th[i].state == T_WAIT && th[i].wait == W_DELAY && now >= th[i].wake_at) make_ready(i);
    in_irq = 0;
}

/* Between instructions, with the CPU held: deliver what is due, then let a better thread run. */
void iop_lle_poll(void) {
    if (in_irq || !intr_on) return;
    run_interrupts();
    maybe_preempt();
}

/* ------------------------------------------------------------------------------------------- SIF RPC */

/* Clients (IOP -> EE): the client data's server pointer (+0x24) just has to be set. */
#define MAX_CLIENTS 8
static struct { u32 cd, sid; } clients[MAX_CLIENTS];
static int nclients;

static void n_SifInitRpc(IopCpu *cpu) { V0(0); }
static void n_SifCheckInit(IopCpu *cpu) { V0(1); }
static void n_SifInit(IopCpu *cpu) { V0(0); }
static void n_SifBindRpc(IopCpu *cpu) {
    u32 cd = A(0), sid = A(1);
    int i;
    for (i = 0; i < nclients && clients[i].cd != cd; i++) {}
    if (i == nclients && nclients < MAX_CLIENTS) nclients++;
    clients[i].cd = cd;
    clients[i].sid = sid;
    iop_w32(cd + 0x24, 0x00001F00u);                /* "bound" */
    V0(0);
}
static void n_SifCheckStatRpc(IopCpu *cpu) { V0(0); }

/* The EE's server doesn't answer: the call is done once sent. Its end function runs at once. */
static void n_SifCallRpc(IopCpu *cpu) {
    u32 cd = A(0), fn = A(1), send = A(3), ssize = A(4), endf = A(7), endp = A(8);
    u32 sid = 0;
    for (int i = 0; i < nclients; i++) if (clients[i].cd == cd) sid = clients[i].sid;
    if (rt_verbose > 2 || (rt_verbose > 1 && fn != 0x57)) rt_log("iop-lle", "IOP -> EE %X fn %X (%u bytes)", sid, fn, ssize);
    iop_call_ee(sid, fn, iop_ptr(send), ssize);
    if (endf) iop_call(cpu, endf, endp, 0, 0, 0);
    V0(0);
}

/* Servers (EE -> IOP) */
#define MAX_SERVERS 8
static struct { u32 sd, sid, func, buf, qd; } servers[MAX_SERVERS];
static int nservers;
static struct { int pending, done; u32 sid, fn, size, out_size; u8 *out; } req;

static u32 lle_rpc(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size);

static void n_SifSetRpcQueue(IopCpu *cpu) { iop_w32(A(0), A(1)); V0(0); }
static void n_SifRegisterRpc(IopCpu *cpu) {
    u32 sd = A(0), sid = A(1), func = A(2), buf = A(3), qd = A(6);
    if (nservers < MAX_SERVERS) servers[nservers++] = (typeof(servers[0])){sd, sid, func, buf, qd};
    iop_register_server(sid, "iop-module", lle_rpc);
    iop_set_server_buffer(sid, buf);
    rt_log("iop-lle", "RPC server %X: function %08X, buffer %08X", sid, func, buf);
    V0(0);
}
static void n_SifRemoveRpc(IopCpu *cpu) { V0(0); }
static void n_SifRemoveRpcQueue(IopCpu *cpu) { V0(0); }

static void n_SifRpcLoop(IopCpu *cpu) {
    u32 qd = A(0);
    for (;;) {
        int s = -1;
        if (req.pending)
            for (int i = 0; i < nservers; i++) if (servers[i].sid == req.sid && servers[i].qd == qd) s = i;
        if (s < 0) { block(W_RPC, qd); continue; }
        req.pending = 0;
        u32 ret = iop_call(cpu, servers[s].func, req.fn, servers[s].buf, req.size, 0);
        if (req.out && req.out_size && ret) memcpy(req.out, iop_ptr(ret), req.out_size);
        req.done = 1;
        pthread_cond_broadcast(&cv);
    }
}

/* The EE called a module's server: hand the request to the thread in its RPC loop, wait for the answer. */
static u32 lle_rpc(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {
    (void)c;
    (void)in;
    if (rt_verbose > 1) rt_log("iop-lle", "EE -> %X fn %X (%u bytes, %u back)", iop_current_sid, fn, in_size, out_size);
    pthread_mutex_lock(&big);
    while (req.pending) pthread_cond_wait(&cv, &big);
    req.pending = 1;
    req.done = 0;
    req.sid = iop_current_sid;
    req.fn = fn;
    req.size = in_size;
    req.out = out;
    req.out_size = out_size;
    for (int i = 0; i < MAX_THREADS; i++)
        if (th[i].state == T_WAIT && th[i].wait == W_RPC) make_ready(i);
    if (cur == -1) reschedule();
    while (!req.done) pthread_cond_wait(&cv, &big);
    pthread_mutex_unlock(&big);
    if (rt_verbose > 1) {
        u32 w[8] = {0}, q[8] = {0};
        memcpy(q, in, in_size < 32 ? in_size : 32);
        memcpy(w, out, out_size < 32 ? out_size : 32);
        rt_log("iop-lle", "  in  %08X %08X %08X %08X %08X %08X %08X %08X", q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7]);
        rt_log("iop-lle", "  out %08X %08X %08X %08X %08X %08X %08X %08X", w[0], w[1], w[2], w[3], w[4], w[5], w[6], w[7]);
    }
    return out_size;
}

/* ------------------------------------------------------------------------------------------- files, disc */

#define MAX_FILES 8
static struct { int used; u32 lsn, size, pos; } files[MAX_FILES];

static void iop_string(u32 a, char *out, int n) {
    int i = 0;
    for (; i < n - 1 && *iop_ptr(a + (u32)i); i++) out[i] = (char)*iop_ptr(a + (u32)i);
    out[i] = 0;
}

static void n_open(IopCpu *cpu) {
    char path[256];
    iop_string(A(0), path, sizeof path);
    const char *p = strchr(path, ':');
    p = p ? p + 1 : path;
    u32 lsn, size;
    if (strncmp(path, "cdrom", 5) || !cdvd_find(p, &lsn, &size)) { rt_log("iop-lle", "open(%s): not found", path); V0(-2); return; }
    for (int i = 0; i < MAX_FILES; i++)
        if (!files[i].used) {
            files[i] = (typeof(files[0])){1, lsn, size, 0};
            rt_log("iop-lle", "open(%s) -> %d", path, i + 3);
            V0(i + 3);
            return;
        }
    V0(-24);
}
static int fd_index(u32 fd) { return fd >= 3 && fd < 3 + MAX_FILES && files[fd - 3].used ? (int)fd - 3 : -1; }
static void n_close(IopCpu *cpu) { int f = fd_index(A(0)); if (f >= 0) files[f].used = 0; V0(0); }
static void n_lseek(IopCpu *cpu) {
    int f = fd_index(A(0));
    if (f < 0) { V0(-9); return; }
    s32 off = (s32)A(1);
    u32 base = A(2) == 0 ? 0 : A(2) == 1 ? files[f].pos : files[f].size;
    files[f].pos = base + (u32)off;
    V0(files[f].pos);
}
static void n_read(IopCpu *cpu) {
    int f = fd_index(A(0));
    if (f < 0) { V0(-9); return; }
    u32 dst = A(1), n = A(2);
    if (files[f].pos >= files[f].size) { V0(0); return; }
    if (n > files[f].size - files[f].pos) n = files[f].size - files[f].pos;
    u32 first = files[f].pos / 2048, last = (files[f].pos + n + 2047) / 2048;
    u8 *tmp = malloc((size_t)(last - first) * 2048);
    if (cdvd_read(files[f].lsn + first, last - first, tmp)) { free(tmp); V0(-5); return; }
    for (u32 i = 0; i < n; i++) *iop_ptr(dst + i) = tmp[files[f].pos - first * 2048 + i];
    free(tmp);
    files[f].pos += n;
    V0(n);
}

static void n_sceCdRead(IopCpu *cpu) {
    u32 lsn = A(0), count = A(1), dst = A(2);
    u8 *tmp = malloc((size_t)count * 2048);
    int bad = cdvd_read(lsn, count, tmp);
    if (!bad) for (u32 i = 0; i < count * 2048; i++) *iop_ptr(dst + i) = tmp[i];
    free(tmp);
    if (rt_verbose > 1) rt_log("iop-lle", "sceCdRead(%u, %u, %08X)%s", lsn, count, dst, bad ? ": error" : "");
    V0(1);
}
static void n_sceCdSync(IopCpu *cpu) { V0(0); }
static void n_sceCdGetError(IopCpu *cpu) { V0(0); }

/* ------------------------------------------------------------------------------------------- libsd */

static void n_sceSdInit(IopCpu *cpu) { spu2_init(); V0(0); }
static void n_SetParam(IopCpu *cpu) { spu2_set_param(A(0), A(1)); V0(0); }
static void n_GetParam(IopCpu *cpu) { V0(spu2_get_param(A(0))); }
static void n_SetSwitch(IopCpu *cpu) { spu2_set_switch(A(0), A(1)); V0(0); }
static void n_GetSwitch(IopCpu *cpu) { V0(spu2_get_switch(A(0))); }
static void n_SetAddr(IopCpu *cpu) { spu2_set_addr(A(0), A(1)); V0(0); }
static void n_GetAddr(IopCpu *cpu) { V0(spu2_get_addr(A(0))); }
static void n_SetCoreAttr(IopCpu *cpu) { spu2_set_core_attr(A(0), A(1)); V0(0); }
static void n_GetCoreAttr(IopCpu *cpu) { V0(spu2_get_core_attr(A(0))); }
static void n_VoiceTrans(IopCpu *cpu) {
    u32 ch = A(0), mode = A(1), iop = A(2), spu = A(3), size = A(4);
    if ((mode & 3) == 0) spu2_write_ram(spu, iop_ptr(iop), size);
    else if ((mode & 3) == 1) spu2_read_ram(spu, iop_ptr(iop), size);
    if ((mode & 3) != 2) iop_lle_trans_done((int)ch);
    if (rt_verbose > 1) rt_log("iop-lle", "VoiceTrans ch %u mode %X iop %08X spu %06X size %X", ch, mode, iop, spu, size);
    V0(size);
}
static void n_VoiceTransStatus(IopCpu *cpu) { V0(1); }
static void n_BlockTrans(IopCpu *cpu) {
    V0(spu2_block_trans((int)(A(0) & 1), A(1), A(2), A(3), A(4)));
}
static void n_BlockTransStatus(IopCpu *cpu) { V0(spu2_block_status((int)(A(0) & 1))); }
static void n_SetEffectAttr(IopCpu *cpu) {
    u32 p = A(1);
    rt_log("iop-lle", "SetEffectAttr core %u: mode %u depth %d/%d delay %d feedback %d", A(0) & 1,
           iop_r32(p + 4), (s16)iop_r16(p + 8), (s16)iop_r16(p + 10), (int)iop_r32(p + 12), (int)iop_r32(p + 16));
    spu2_set_effect(A(0) & 1, iop_r32(p + 4), (s16)iop_r16(p + 8), (s16)iop_r16(p + 10), (int)iop_r32(p + 12), (int)iop_r32(p + 16));
    V0(0);
}
static void n_GetEffectAttr(IopCpu *cpu) { V0(0); }
static void n_ClearEffectWorkArea(IopCpu *cpu) { V0(0); }

/* ------------------------------------------------------------------------------------------- imports */

static void n_RegisterLibraryEntries(IopCpu *cpu) {
    u32 t = A(0);
    char name[9];
    memcpy(name, iop_ptr(t + 12), 8);
    name[8] = 0;
    irx_export(name, t + 20);
    V0(0);
}

static void n_zero(IopCpu *cpu) { V0(0); }

typedef struct { const char *lib; int index; IopNative fn; } Import;
static const Import imports[] = {
    {"sysmem", 4, n_AllocSysMemory}, {"sysmem", 5, n_FreeSysMemory}, {"sysmem", 7, n_QueryMaxFreeMemSize},
    {"sysmem", 14, n_printf},
    {"loadcore", 6, n_RegisterLibraryEntries},
    {"stdio", 4, n_printf},
    {"intrman", 17, n_CpuSuspendIntr}, {"intrman", 18, n_CpuResumeIntr},
    {"thbase", 4, n_CreateThread}, {"thbase", 5, n_DeleteThread}, {"thbase", 6, n_StartThread},
    {"thbase", 10, n_TerminateThread}, {"thbase", 20, n_GetThreadId}, {"thbase", 24, n_SleepThread},
    {"thbase", 25, n_WakeupThread}, {"thbase", 26, n_iWakeupThread}, {"thbase", 33, n_DelayThread},
    {"thbase", 39, n_USec2SysClock},
    {"thsemap", 4, n_CreateSema}, {"thsemap", 5, n_DeleteSema}, {"thsemap", 6, n_SignalSema},
    {"thsemap", 7, n_iSignalSema}, {"thsemap", 8, n_WaitSema}, {"thsemap", 9, n_PollSema},
    {"timrman", 4, n_AllocHardTimer}, {"timrman", 6, n_FreeHardTimer}, {"timrman", 10, n_GetTimerCounter},
    {"timrman", 20, n_SetTimerHandler}, {"timrman", 22, n_SetupHardTimer}, {"timrman", 23, n_StartHardTimer},
    {"timrman", 24, n_StopHardTimer},
    {"vblank", 5, n_WaitVblankEnd},
    {"sifman", 5, n_SifInit}, {"sifman", 29, n_SifCheckInit},
    {"sifcmd", 14, n_SifInitRpc}, {"sifcmd", 15, n_SifBindRpc}, {"sifcmd", 16, n_SifCallRpc},
    {"sifcmd", 17, n_SifRegisterRpc}, {"sifcmd", 18, n_SifCheckStatRpc}, {"sifcmd", 19, n_SifSetRpcQueue},
    {"sifcmd", 22, n_SifRpcLoop}, {"sifcmd", 24, n_SifRemoveRpc}, {"sifcmd", 25, n_SifRemoveRpcQueue},
    {"ioman", 4, n_open}, {"ioman", 5, n_close}, {"ioman", 6, n_read}, {"ioman", 8, n_lseek},
    {"cdvdman", 6, n_sceCdRead}, {"cdvdman", 8, n_sceCdGetError}, {"cdvdman", 11, n_sceCdSync},
    {"libsd", 4, n_sceSdInit}, {"libsd", 5, n_SetParam}, {"libsd", 6, n_GetParam}, {"libsd", 7, n_SetSwitch},
    {"libsd", 8, n_GetSwitch}, {"libsd", 9, n_SetAddr}, {"libsd", 10, n_GetAddr}, {"libsd", 11, n_SetCoreAttr},
    {"libsd", 12, n_GetCoreAttr}, {"libsd", 17, n_VoiceTrans}, {"libsd", 18, n_BlockTrans},
    {"libsd", 19, n_VoiceTransStatus}, {"libsd", 20, n_BlockTransStatus}, {"libsd", 23, n_SetEffectAttr},
    {"libsd", 24, n_GetEffectAttr}, {"libsd", 25, n_ClearEffectWorkArea}, {"libsd", 26, n_SetTransIntrHandler},
    {"libsd", 27, n_SetSpu2IntrHandler},
};

/* Functions nobody wrote yet log their first call and return 0. */
#define MAX_UNKNOWN 64
static struct { char lib[9]; int index; u32 stub; } unknown[MAX_UNKNOWN];
static int nunknown;
static void n_unknown(IopCpu *cpu) {
    for (int i = 0; i < nunknown; i++)
        if (unknown[i].stub == cpu->pc) {
            static u8 told[MAX_UNKNOWN];
            if (!told[i]++) rt_log("iop-lle", "%s %d (%08X %08X %08X) not implemented", unknown[i].lib, unknown[i].index, A(0), A(1), A(2));
        }
    V0(0);
}

IopNative iop_import(const char *lib, int index, u32 stub) {
    for (size_t i = 0; i < sizeof imports / sizeof imports[0]; i++)
        if (imports[i].index == index && !strcmp(imports[i].lib, lib)) return imports[i].fn;
    if (nunknown < MAX_UNKNOWN) {
        snprintf(unknown[nunknown].lib, sizeof unknown[0].lib, "%s", lib);
        unknown[nunknown].index = index;
        unknown[nunknown].stub = stub;
        nunknown++;
    }
    (void)n_zero;
    return n_unknown;
}

/* ------------------------------------------------------------------------------------------- loading, clock */

static IopCpu boot_cpu;
static u32 boot_stack;

static void lle_init(void) {
    static int done;
    if (done) return;
    done = 1;
    heap_init();
    boot_stack = iop_alloc(0x4000) + 0x4000 - 16;
    irq_stack = iop_alloc(0x4000) + 0x4000 - 16;
}

u32 iop_lle_start_module(u32 entry) {
    boot_cpu.r[29] = boot_stack;
    return iop_call(&boot_cpu, entry, 0, 0, 0, 0);
}

int iop_lle_load(const char *path) {
    lle_init();
    const char *p = strchr(path, ':');
    p = p ? p + 1 : path;
    u32 lsn, size;
    if (!cdvd_find(p, &lsn, &size)) { rt_log("iop-lle", "%s: not on the disc", path); return -1; }
    u8 *file = malloc((size + 2047) & ~2047u);
    if (cdvd_read(lsn, (size + 2047) / 2048, file)) { free(file); return -1; }
    ext_enter();
    int r = irx_load(file, size, path);
    ext_leave();
    free(file);
    pthread_mutex_lock(&big);
    settle();
    pthread_mutex_unlock(&big);
    if (!r) iop_lle_clock_start();
    return r;
}

/* The clock: makes the SPU2's samples (48 kHz), and moves the IOP clock on with them. */
#define RING 8192
static float ring[RING * 2];
static volatile u64 ring_w, ring_r;          /* frames written / read */
static int audio_pulls;                     /* the sound device takes the samples (else: by time) */

void iop_lle_audio(float *out, int frames) {  /* the sound device's callback: add the SPU2's output */
    static u64 short_frames, calls;
    calls++;
    if (!audio_pulls) { audio_pulls = 1; return; }      /* the clock starts filling the ring */
    if (ring_w - ring_r < (u64)frames) short_frames += (u64)frames - (ring_w - ring_r);
    if (rt_verbose > 1 && calls % 2000 == 0 && short_frames) {
        rt_log("iop-lle", "sound: %llu frames missing so far", (unsigned long long)short_frames);
    }
    for (int f = 0; f < frames; f++) {
        if (ring_r >= ring_w) break;
        u32 k = (u32)(ring_r % RING) * 2;
        out[f * 2] += ring[k];
        out[f * 2 + 1] += ring[k + 1];
        ring_r++;
    }
}

static u64 now_ns(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000000ull + (u64)ts.tv_nsec;
}

#define CHUNK 64
#define AHEAD 1536                          /* frames made ahead of the sound device */

static void *clock_main(void *unused) {
    (void)unused;
    u64 t0 = now_ns(), made = 0;
    float buf[CHUNK * 2];
    for (;;) {
        int go;
        if (audio_pulls) go = ring_w - ring_r < AHEAD;
        else go = made < (now_ns() - t0) * 48000 / 1000000000ull;
        if (!go) { usleep(1000); continue; }
        made += CHUNK;
        iop_ticks += SYSCLOCK * CHUNK / 48000;
        iop_irq_flag = 1;
        if (!pthread_mutex_trylock(&big)) {
            if (cur == -1) {
                cur = EXT;
                run_interrupts();
                reschedule();
            }
            pthread_mutex_unlock(&big);
        }
        memset(buf, 0, sizeof buf);
        spu2_mix(buf, CHUNK);
        {   /* SSTHEH_SPU_DUMP=file: the SPU2's output alone, as raw 16-bit stereo 48 kHz (tests) */
            static FILE *dump = (FILE *)1;
            if (dump == (FILE *)1) { const char *e = getenv("SSTHEH_SPU_DUMP"); dump = e ? fopen(e, "wb") : NULL; }
            if (dump) {
                s16 pcm[CHUNK * 2];
                for (int i = 0; i < CHUNK * 2; i++) {
                    float x = buf[i] * 32767.0f;
                    pcm[i] = (s16)(x > 32767 ? 32767 : x < -32768 ? -32768 : x);
                }
                fwrite(pcm, 2, CHUNK * 2, dump);
            }
        }
        if (audio_pulls) {
            for (int f = 0; f < CHUNK; f++) {
                u32 k = (u32)(ring_w % RING) * 2;
                ring[k] = buf[f * 2];
                ring[k + 1] = buf[f * 2 + 1];
                ring_w++;
            }
        } else ring_r = ring_w;
    }
    return NULL;
}

void iop_lle_clock_start(void) {
    static int started;
    if (started) return;
    started = 1;
    void cri_audio_start(void);
    cri_audio_start();
    pthread_t h;
    pthread_create(&h, NULL, clock_main, NULL);
    pthread_detach(h);
}
