#define _GNU_SOURCE
/*
 * The PS2 EE kernel, reimplemented (HLE): threads, semaphores, interrupt and DMA handlers, alarms,
 * and the bookkeeping syscalls the SDK makes at start-up.
 *
 * Threads: every guest thread runs on a host thread of its own, but only one runs at a time, like
 * on the single-core EE. `cur` names the thread allowed to run; the others wait on `cv`. Switches
 * happen where the real kernel switches: in blocking calls, and when a higher-priority thread
 * becomes ready (preemption).
 *
 * Interrupts: a host timer raises `rt_irq_pending` at the PAL vertical blank rate (50 Hz). The
 * recompiled code polls it at backward branches and in syscalls (rt_poll), so the handlers run at
 * a safe point, on a context of their own, on whichever host thread holds the CPU.
 */
#include <pthread.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"
#include "iop.h"
#include "gs.h"

#define MAX_THREADS 256
#define MAX_SEMAS 256
#define MAX_HANDLERS 64
#define MAX_ALARMS 64
#define RAM_END 0x02000000u
#define KERNEL_SYSCALL_TABLE 0x80000800u  /* stand-in for the kernel's own table, in kernel RAM */

enum { T_FREE, T_DORMANT, T_READY, T_WAIT, T_SUSPEND };
enum { W_NONE, W_SLEEP, W_SEMA };

typedef struct {
    int state, wait, wait_id;
    u32 entry, stack, stack_size, gp, attr, option, arg;
    int init_prio, prio;
    int wakeups;
    u64 ready_seq;               /* FIFO order among equal priorities */
    Ctx ctx;
    pthread_t host;
    int host_started;
} Thread;

typedef struct { int used, count, max, init, waiters; u32 attr, option; } Sema;
typedef struct { int used, cause, enabled; u32 handler, arg, next; } Handler;
typedef struct { int used; u64 when; u32 handler, arg; } Alarm;

/* recursive: interrupt handlers run with the lock held and make (i-prefixed) syscalls */
static pthread_mutex_t big = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
static pthread_cond_t cv = PTHREAD_COND_INITIALIZER;
static Thread threads[MAX_THREADS];
static Sema semas[MAX_SEMAS];
static Handler intc[MAX_HANDLERS], dmac[MAX_HANDLERS];
static Alarm alarms[MAX_ALARMS];
static u32 intc_mask, dmac_mask;
static int cur = -1;             /* thread holding the CPU */
static u64 seq;
static Ctx irq_ctx;
static int in_irq;
static u32 heap_end;
static u32 user_syscalls[256];   /* installed with SetSyscall: guest functions run in "kernel mode" */
static volatile u32 vblanks;
static u64 hsyncs;               /* time base for alarms: PAL has 15625 lines per second */

volatile int rt_irq_pending;
static volatile int timer_vblank;

u32 kernel_vblank_count(void) { return vblanks; }

/* ------------------------------------------------------------------------------------------- logging */

int rt_verbose = 1;

void rt_log(const char *area, const char *fmt, ...) {
    if (!rt_verbose) return;
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "[%-6s] ", area);
    vfprintf(stderr, fmt, ap);
    fputc('\n', stderr);
    va_end(ap);
}

_Noreturn void rt_fatal(Ctx *c, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "\n*** FATAL (thread %d): ", cur);
    vfprintf(stderr, fmt, ap);
    fputc('\n', stderr);
    va_end(ap);
    if (c) {
        static const char *names[32] = {"zero", "at", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2",
            "t3", "t4", "t5", "t6", "t7", "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9", "k0",
            "k1", "gp", "sp", "fp", "ra"};
        for (int i = 0; i < 32; i++)
            fprintf(stderr, "%4s=%016llX%s", names[i], (unsigned long long)c->r[i].d[0], i % 4 == 3 ? "\n" : " ");
        fprintf(stderr, "ra is in %s\n", rt_name_of(RW(31)));
    }
    fflush(stderr);
    _exit(1);
}

/* ------------------------------------------------------------------------------------------- scheduling */

static int best_ready(void) {
    int best = -1;
    for (int i = 1; i < MAX_THREADS; i++) {
        Thread *t = &threads[i];
        if (t->state != T_READY) continue;
        if (best < 0 || t->prio < threads[best].prio ||
            (t->prio == threads[best].prio && t->ready_seq < threads[best].ready_seq))
            best = i;
    }
    return best;
}

static void make_ready(int id) {
    threads[id].state = T_READY;
    threads[id].ready_seq = ++seq;
}

static void run_interrupts(void);

/* Give the CPU to the best ready thread and wait until this thread (`me`) has it again.
 * Called with `big` held. `me` keeps its state (READY if it only yields, WAIT if it blocks). */
static void switch_away(int me) {
    for (;;) {
        int next = best_ready();
        if (next >= 0) {
            cur = next;
            break;
        }
        /* nobody can run: wait for the next interrupt and run it here */
        pthread_mutex_unlock(&big);
        while (!rt_irq_pending && !iop_pending()) usleep(200);
        pthread_mutex_lock(&big);
        run_interrupts();
    }
    pthread_cond_broadcast(&cv);
    while (cur != me) pthread_cond_wait(&cv, &big);
}

/* The running thread is gone (exited): hand the CPU on, idling until some thread is ready. */
static void leave_cpu(void) {
    for (;;) {
        int next = best_ready();
        if (next >= 0) { cur = next; break; }
        int any = 0;
        for (int i = 1; i < MAX_THREADS; i++) any |= threads[i].state == T_WAIT || threads[i].state == T_SUSPEND;
        if (!any) rt_fatal(NULL, "every thread has ended");
        cur = -1;
        pthread_mutex_unlock(&big);
        while (!rt_irq_pending && !iop_pending()) usleep(200);
        pthread_mutex_lock(&big);
        run_interrupts();
    }
    pthread_cond_broadcast(&cv);
}

/* After something became ready: switch if it outranks the running thread. */
static void maybe_preempt(void) {
    if (in_irq || cur < 0) return;
    int next = best_ready();
    if (next >= 0 && threads[next].prio < threads[cur].prio) {
        int me = cur;
        make_ready(me);
        switch_away(me);
    }
}

/* ------------------------------------------------------------------------------------------- interrupts */

static void call_guest(Ctx *c, u32 fn, u32 a0, u32 a1, u32 a2) {
    SET64(4, a0);
    SET64(5, a1);
    SET64(6, a2);
    SET64(31, 0);
    rt_call(c, fn);
}

static void run_handlers(Handler *list, int cause) {
    for (int i = 0; i < MAX_HANDLERS; i++) {
        Handler *h = &list[i];
        if (!h->used || h->cause != cause || !h->enabled) continue;
        static u8 told[2][16];
        if (cause < 16 && !told[list == dmac][cause]++)
            rt_log("kernel", "first %s interrupt %d -> %08X", list == dmac ? "DMAC" : "INTC", cause, h->handler);
        irq_ctx.r[28].d[0] = cur >= 0 ? threads[cur].ctx.r[28].d[0] : 0;
        call_guest(&irq_ctx, h->handler, cause, h->arg, 0);
    }
}

static volatile u32 dmac_pending;

void kernel_raise_dmac(int ch) {
    dmac_pending |= 1u << ch;
    rt_irq_pending = 1;
}

static void raise_sif0(Ctx *c) {
    (void)c;
    if (!(dmac_mask & (1 << 5))) rt_log("kernel", "SIF0 interrupt while DMAC channel 5 is disabled");
    run_handlers(dmac, 5);
}

static void run_interrupts(void) {
    if (in_irq) return;
    rt_irq_pending = 0;
    if (!timer_vblank && !iop_pending() && !dmac_pending) return;
    in_irq = 1;
    /* irq_ctx gets its own stack at the top of RAM, below the main thread's area */
    irq_ctx.r[29].d[0] = RAM_END - 0x100000;
    if (iop_pending()) iop_deliver(&irq_ctx, raise_sif0);
    while (dmac_pending) {
        int ch = __builtin_ctz(dmac_pending);
        dmac_pending &= ~(1u << ch);
        if (ch != 5 && (dmac_mask & (1u << ch))) run_handlers(dmac, ch);
    }
    if (!timer_vblank) { in_irq = 0; return; }
    timer_vblank = 0;
    vblanks++;
    hsyncs += 312;
    if (intc_mask & (1 << 2)) run_handlers(intc, 2);       /* VBLANK_START */
    if (intc_mask & (1 << 3)) run_handlers(intc, 3);       /* VBLANK_END */
    for (int i = 0; i < MAX_ALARMS; i++) {
        Alarm *a = &alarms[i];
        if (a->used && hsyncs >= a->when) {
            a->used = 0;
            call_guest(&irq_ctx, a->handler, i, (u32)hsyncs, a->arg);
        }
    }
    in_irq = 0;
}

/* Polled by the recompiled code at backward branches. */
void rt_poll(Ctx *c) {
    (void)c;
    pthread_mutex_lock(&big);
    run_interrupts();
    maybe_preempt();
    pthread_mutex_unlock(&big);
}

static void *timer_main(void *arg) {
    (void)arg;
    struct timespec next;
    clock_gettime(CLOCK_MONOTONIC, &next);
    for (;;) {
        next.tv_nsec += 20000000;            /* 50 Hz */
        if (next.tv_nsec >= 1000000000) { next.tv_nsec -= 1000000000; next.tv_sec++; }
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &next, NULL);
        timer_vblank = 1;
        rt_irq_pending = 1;
    }
    return NULL;
}

/* ------------------------------------------------------------------------------------------- threads */

static void *thread_main(void *arg) {
    int id = (int)(intptr_t)arg;
    Thread *t = &threads[id];
    pthread_mutex_lock(&big);
    while (cur != id) pthread_cond_wait(&cv, &big);
    pthread_mutex_unlock(&big);

    Ctx *c = &t->ctx;
    memset(c, 0, sizeof *c);
    c->thread = id;
    SET64(4, t->arg);
    SET64(28, t->gp);
    SET64(29, t->stack + t->stack_size - 0x20);
    SET64(31, 0);
    rt_log("kernel", "thread %d starts at %08X (%s), prio %d", id, t->entry, rt_name_of(t->entry), t->prio);
    rt_call(c, t->entry);

    /* returning from the entry function ends the thread, like ExitThread */
    pthread_mutex_lock(&big);
    rt_log("kernel", "thread %d returned", id);
    t->state = T_DORMANT;
    t->host_started = 0;
    leave_cpu();
    pthread_mutex_unlock(&big);
    return NULL;
}

static void start_host(int id) {
    Thread *t = &threads[id];
    if (t->host_started) return;
    t->host_started = 1;
    pthread_attr_t a;
    pthread_attr_init(&a);
    pthread_attr_setstacksize(&a, 64 << 20);    /* deep guest call chains run on the host stack */
    pthread_create(&t->host, &a, thread_main, (void *)(intptr_t)id);
    pthread_attr_destroy(&a);
}

static int new_thread(void) {
    for (int i = 1; i < MAX_THREADS; i++)
        if (threads[i].state == T_FREE) return i;
    return -1;
}

/* ------------------------------------------------------------------------------------------- syscalls */

static s32 sys_create_thread(Ctx *c, u32 p) {
    int id = new_thread();
    if (id < 0) return -1;
    Thread *t = &threads[id];
    memset(t, 0, sizeof *t);
    t->state = T_DORMANT;
    t->entry = rd32(c, p + 4);
    t->stack = rd32(c, p + 8);
    t->stack_size = rd32(c, p + 12);
    t->gp = rd32(c, p + 16);
    t->init_prio = t->prio = rd32(c, p + 20);
    t->attr = rd32(c, p + 28);
    t->option = rd32(c, p + 32);
    rt_log("kernel", "CreateThread %d: entry %08X (%s) stack %08X+%X prio %d", id, t->entry,
           rt_name_of(t->entry), t->stack, t->stack_size, t->prio);
    return id;
}

static s32 sema_wait(int id) {
    Sema *s = &semas[id];
    if (s->count > 0) { s->count--; return id; }
    Thread *t = &threads[cur];
    t->state = T_WAIT;
    t->wait = W_SEMA;
    t->wait_id = id;
    s->waiters++;
    switch_away(cur);
    return id;
}

static s32 sema_signal(int id) {
    Sema *s = &semas[id];
    if (s->waiters > 0) {
        /* wake the waiter of best priority */
        int w = -1;
        for (int i = 1; i < MAX_THREADS; i++) {
            Thread *t = &threads[i];
            if (t->state == T_WAIT && t->wait == W_SEMA && t->wait_id == id &&
                (w < 0 || t->prio < threads[w].prio))
                w = i;
        }
        if (w >= 0) {
            s->waiters--;
            threads[w].wait = W_NONE;
            make_ready(w);
            return id;
        }
    }
    s->count++;
    return id;
}

void rt_syscall(Ctx *c, u32 pc) {
    s32 n = (s32)RW(3);
    u32 a0 = RW(4), a1 = RW(5), a2 = RW(6), a3 = RW(7), t0 = RW(8);
    s64 ret = 0;
    int isr = n < 0;            /* i-prefixed variants, callable from interrupt handlers */
    int k = isr ? -n : n;

    if (!isr && k < 256 && user_syscalls[k]) {
        /* a handler the game installed itself: run it like a call, arguments in place */
        if (rt_find(user_syscalls[k])) {
            SET64(31, pc + 4);
            rt_call(c, user_syscalls[k]);
            return;
        }
        /* code the SDK copied into kernel memory (libkernl patches for TLB, alarms, threads):
         * the HLE kernel does that work itself */
        static u8 told[256];
        if (!told[k]++) rt_log("kernel", "syscall %u -> kernel patch at %08X: skipped (HLE)", k, user_syscalls[k]);
        SET64(2, 0);
        return;
    }

    pthread_mutex_lock(&big);
    if (rt_verbose > 2)
        rt_log("sys", "thread %d: %s0x%X(%X, %X, %X) from %s", cur, isr ? "-" : "", k, a0, a1, a2, rt_name_of(pc));
    switch (k) {
    case 0x02: rt_log("kernel", "SetGsCrt(interlace=%u, mode=%u, field=%u)", a0, a1, a2); gs_set_crt(a0, a1, a2); break;
    case 0x04: rt_log("kernel", "Exit(%d)", a0); fflush(stderr); _exit(a0);
    case 0x10: case 0x12: {                                     /* AddIntcHandler / AddDmacHandler */
        Handler *list = k == 0x10 ? intc : dmac;
        ret = -1;
        for (int i = 0; i < MAX_HANDLERS; i++)
            if (!list[i].used) {
                list[i] = (Handler){1, (int)a0, 1, a1, a3, a2};
                ret = i;
                break;
            }
        rt_log("kernel", "Add%sHandler(cause %u, %08X %s) = %lld", k == 0x10 ? "Intc" : "Dmac", a0, a1,
               rt_name_of(a1), (long long)ret);
        break;
    }
    case 0x11: case 0x13: (k == 0x11 ? intc : dmac)[a1 % MAX_HANDLERS].used = 0; break;
    case 0x14: case 0x1A: ret = !(intc_mask & (1 << a0)); intc_mask |= 1u << a0; break;       /* (i)EnableIntc */
    case 0x15: case 0x1B: ret = !!(intc_mask & (1 << a0)); intc_mask &= ~(1u << a0); break;    /* (i)DisableIntc */
    case 0x16: case 0x1C: ret = !(dmac_mask & (1 << a0)); dmac_mask |= 1u << a0; break;       /* (i)EnableDmac */
    case 0x17: case 0x1D: ret = !!(dmac_mask & (1 << a0)); dmac_mask &= ~(1u << a0); break;    /* (i)DisableDmac */
    case 0x18: case 0x1E: {                                     /* (i)SetAlarm(ticks, handler, arg) */
        ret = -1;
        for (int i = 0; i < MAX_ALARMS; i++)
            if (!alarms[i].used) { alarms[i] = (Alarm){1, hsyncs + a0, a1, a2}; ret = i; break; }
        break;
    }
    case 0x19: case 0x1F: if (a0 < MAX_ALARMS) alarms[a0].used = 0; break;                     /* (i)ReleaseAlarm */
    case 0x20: ret = sys_create_thread(c, a0); break;
    case 0x21: if (a0 < MAX_THREADS) threads[a0].state = T_FREE; break;                         /* DeleteThread */
    case 0x22: {                                                /* StartThread(id, arg) */
        Thread *t = &threads[a0 % MAX_THREADS];
        t->arg = a1;
        make_ready(a0);
        start_host(a0);
        maybe_preempt();
        break;
    }
    case 0x23: case 0x24: {                                     /* ExitThread / ExitDeleteThread */
        Thread *t = &threads[cur];
        rt_log("kernel", "thread %d exits", cur);
        t->state = k == 0x24 ? T_FREE : T_DORMANT;
        t->host_started = 0;
        leave_cpu();
        pthread_mutex_unlock(&big);
        pthread_exit(NULL);
    }
    case 0x25: case 0x26: if (a0 < MAX_THREADS) threads[a0].state = T_DORMANT; break;           /* TerminateThread */
    case 0x29: case 0x2A: {                                     /* (i)ChangeThreadPriority(id, prio) */
        int id = a0 ? (int)a0 : cur;
        ret = threads[id].prio;
        threads[id].prio = a1;
        if (!isr) maybe_preempt();
        break;
    }
    case 0x2B: case 0x2C: {                                     /* (i)RotateThreadReadyQueue(prio) */
        if (!isr && cur >= 0 && threads[cur].prio == (int)a0) {
            int me = cur;
            make_ready(me);
            switch_away(me);
        }
        break;
    }
    case 0x2D: case 0x2E: {                                     /* (i)ReleaseWaitThread(id) */
        Thread *t = &threads[a0 % MAX_THREADS];
        if (t->state == T_WAIT) {
            if (t->wait == W_SEMA) semas[t->wait_id].waiters--;
            t->wait = W_NONE;
            make_ready(a0);
            if (!isr) maybe_preempt();
        }
        break;
    }
    case 0x2F: ret = cur; break;                                /* GetThreadId */
    case 0x30: case 0x31: {                                     /* (i)ReferThreadStatus(id, status*) */
        int id = a0 ? (int)a0 : cur;
        Thread *t = &threads[id];
        if (a1) {
            static const int st[] = {0, 0x10, 0x02, 0x04, 0x08};
            wr32(c, a1 + 0, cur == id ? 0x01 : st[t->state]);
            wr32(c, a1 + 4, t->entry);
            wr32(c, a1 + 8, t->stack);
            wr32(c, a1 + 12, t->stack_size);
            wr32(c, a1 + 16, t->gp);
            wr32(c, a1 + 20, t->init_prio);
            wr32(c, a1 + 24, t->prio);
            wr32(c, a1 + 28, t->attr);
            wr32(c, a1 + 32, t->option);
            wr32(c, a1 + 36, t->wait);
            wr32(c, a1 + 40, t->wait_id);
            wr32(c, a1 + 44, t->wakeups);
        }
        ret = cur == id ? 0x01 : 0x02;
        break;
    }
    case 0x32: {                                                /* SleepThread */
        Thread *t = &threads[cur];
        if (t->wakeups > 0) { t->wakeups--; break; }
        t->state = T_WAIT;
        t->wait = W_SLEEP;
        switch_away(cur);
        break;
    }
    case 0x33: case 0x34: {                                     /* (i)WakeupThread(id) */
        Thread *t = &threads[a0 % MAX_THREADS];
        if (t->state == T_WAIT && t->wait == W_SLEEP) {
            t->wait = W_NONE;
            make_ready(a0);
            if (!isr) maybe_preempt();
        } else {
            t->wakeups++;
        }
        break;
    }
    case 0x35: case 0x36: ret = threads[a0 ? a0 : (u32)cur].wakeups; threads[a0 ? a0 : (u32)cur].wakeups = 0; break;
    case 0x37: case 0x38: if (a0 < MAX_THREADS && threads[a0].state == T_READY) threads[a0].state = T_SUSPEND; break;
    case 0x39: case 0x3A: if (a0 < MAX_THREADS && threads[a0].state == T_SUSPEND) { make_ready(a0); if (!isr) maybe_preempt(); } break;
    case 0x3C: {                                                /* SetupThread(gp, stack, size, args, root) */
        u32 top = a1 == 0xFFFFFFFFu ? RAM_END : a1 + a2;
        threads[1].stack = top - a2;
        threads[1].stack_size = a2;
        threads[1].gp = a0;
        ret = top - 0x40;
        rt_log("kernel", "SetupThread(gp=%08X, stack=%08X, size=%X) -> sp %08llX", a0, a1, a2, (long long)ret);
        break;
    }
    case 0x3D: {                                                /* SetupHeap(start, size) */
        heap_end = a1 == 0xFFFFFFFFu ? threads[1].stack : a0 + a1;
        ret = heap_end;
        rt_log("kernel", "SetupHeap(%08X, %X) -> end %08X", a0, a1, heap_end);
        break;
    }
    case 0x3E: ret = heap_end; break;                           /* EndOfHeap */
    case 0x40: {                                                /* CreateSema(param*) */
        ret = -1;
        for (int i = 1; i < MAX_SEMAS; i++)
            if (!semas[i].used) {
                semas[i] = (Sema){1, (int)rd32(c, a0 + 8), (int)rd32(c, a0 + 4), (int)rd32(c, a0 + 8), 0,
                                  rd32(c, a0 + 16), rd32(c, a0 + 20)};
                ret = i;
                break;
            }
        break;
    }
    case 0x41: semas[a0 % MAX_SEMAS].used = 0; break;           /* DeleteSema */
    case 0x42: case 0x43: ret = sema_signal(a0 % MAX_SEMAS); if (!isr) maybe_preempt(); break;
    case 0x44: ret = sema_wait(a0 % MAX_SEMAS); break;          /* WaitSema */
    case 0x45: case 0x46: {                                     /* (i)PollSema */
        Sema *s = &semas[a0 % MAX_SEMAS];
        if (s->count > 0) { s->count--; ret = a0; } else ret = -419;
        break;
    }
    case 0x47: case 0x48: {                                     /* (i)ReferSemaStatus(id, status*) */
        Sema *s = &semas[a0 % MAX_SEMAS];
        wr32(c, a1 + 0, s->count);
        wr32(c, a1 + 4, s->max);
        wr32(c, a1 + 8, s->init);
        wr32(c, a1 + 12, s->waiters);
        ret = a0;
        break;
    }
    case 0x4A: break;                                           /* SetOsdConfigParam */
    case 0x4B:                                                  /* GetOsdConfigParam(config*) */
        /* bits: screenType 1-2 (0 = 4:3), version 6-8, language 9-13 (1 = English) */
        wr32(c, a0, (1 << 6) | (1 << 9));
        break;
    case 0x64: case 0x68: break;                                /* (i)FlushCache */
    case 0x70: ret = gs_imr; break;                             /* GsGetIMR */
    case 0x71: ret = gs_imr; gs_imr = a0; break;                /* GsPutIMR */
    case 0x73: break;                                           /* SetVSyncFlag */
    case 0x74:                                                  /* SetSyscall(n, handler) */
        rt_log("kernel", "SetSyscall(%u, %08X %s)", a0, a1, rt_name_of(a1));
        if (a0 < 256) {
            user_syscalls[a0] = a1;
            /* the SDK's libkernl searches kernel memory for this entry to patch around it */
            wr32(c, KERNEL_SYSCALL_TABLE + a0 * 4, a1);
        }
        break;
    case 0x76: case 0x77: case 0x78: case 0x79: case 0x7A:
        ret = sif_syscall(c, k, isr, a0, a1, a2);
        break;
    case 0x7C: ret = 0; break;                                  /* Deci2Call */
    case 0x7E: ret = 0; break;                                  /* MachineType */
    case 0x7F: ret = RAM_END; break;                            /* GetMemorySize */
    default:
        rt_log("kernel", "syscall %s0x%X (a0=%08X a1=%08X a2=%08X a3=%08X t0=%08X) from %s: not implemented",
               isr ? "-" : "", k, a0, a1, a2, a3, t0, rt_name_of(pc));
        ret = 0;
    }
    run_interrupts();
    maybe_preempt();
    pthread_mutex_unlock(&big);
    SET64(2, ret);
}

/* ------------------------------------------------------------------------------------------- start */

u32 gs_imr = 0xFF00;

void kernel_init(void) {
    iop_init();
    pthread_t timer;
    pthread_create(&timer, NULL, timer_main, NULL);
}

void kernel_run(u32 entry) {
    /* thread 1 is the main thread; crt0 calls SetupThread to give it its stack */
    Thread *t = &threads[1];
    memset(t, 0, sizeof *t);
    t->entry = entry;
    t->init_prio = t->prio = 0;
    t->stack = RAM_END - 0x10000;
    t->stack_size = 0x10000;
    pthread_mutex_lock(&big);
    make_ready(1);
    cur = 1;
    t->host_started = 1;
    pthread_mutex_unlock(&big);
    thread_main((void *)(intptr_t)1);
    for (;;) pause();
}
