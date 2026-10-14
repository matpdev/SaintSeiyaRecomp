/*
 * The IOP's CPU (MIPS R3000A, MIPS I) for the modules run as they are: an interpreter with branch
 * delay slots and the unaligned loads / stores. Memory is the IOP's 2 MB of RAM (any segment); the
 * scratchpad and hardware registers read as 0 (the modules reach the hardware through imports).
 * Import stubs run native code (iop_set_native). Load delay slots are not modelled: compiled code
 * doesn't rely on them.
 */
#include <stdio.h>
#include <string.h>

#include "runtime.h"
#include "lle.h"

#define NATIVE_SLOTS (IOP_RAM_SIZE / 4)
static IopNative natives[NATIVE_SLOTS];               /* by word address in RAM */

void iop_set_native(u32 addr, IopNative fn) { natives[(addr & (IOP_RAM_SIZE - 1)) >> 2] = fn; }

u32 iop_arg(IopCpu *cpu, int n) {
    if (n < 4) return cpu->r[4 + n];
    return iop_r32(cpu->r[29] + 16 + (u32)(n - 4) * 4);
}

static int mapped(u32 a) { return (a & 0x1FFFFFFF) < 0x00800000; }   /* RAM and its mirrors */

static u32 m_rd32(u32 a) {
    if (!mapped(a)) { static int told; if (told++ < 8) rt_log("iopcpu", "read32 %08X (unmapped: 0)", a); return 0; }
    return iop_r32(a);
}
static u16 m_rd16(u32 a) { return mapped(a) ? iop_r16(a) : 0; }
static u8 m_rd8(u32 a) { return mapped(a) ? *iop_ptr(a) : 0; }
static void m_wr32(u32 a, u32 v) {
    if (mapped(a)) iop_w32(a, v);
    else { static int told; if (told++ < 8) rt_log("iopcpu", "write32 %08X = %08X (unmapped)", a, v); }
}
static void m_wr16(u32 a, u16 v) { if (mapped(a)) iop_w16(a, v); }
static void m_wr8(u32 a, u8 v) { if (mapped(a)) *iop_ptr(a) = v; }

volatile int iop_irq_flag;

/* Run from cpu->pc until a return to IOP_RET_MAGIC. */
static void run(IopCpu *cpu) {
    u32 *r = cpu->r;
    int budget = 256;
    while (cpu->pc != IOP_RET_MAGIC) {
        u32 cur = cpu->pc;
        IopNative nat = natives[(cur & (IOP_RAM_SIZE - 1)) >> 2];
        if (nat) {                                   /* an import: native code, then return */
            nat(cpu);
            r[0] = 0;
            cpu->pc = r[31];
            cpu->npc = cpu->pc + 4;
            continue;
        }
        if (--budget == 0) {
            budget = 256;
            if (iop_irq_flag) iop_lle_poll();
        }
        u32 w = iop_r32(cur);
        u32 rs = (w >> 21) & 31, rt = (w >> 16) & 31, rd = (w >> 11) & 31, sa = (w >> 6) & 31;
        s32 imm = (s16)(w & 0xFFFF);
        u32 uimm = w & 0xFFFF;
        cpu->pc = cpu->npc;
        cpu->npc += 4;
#define BR(c) do { if (c) cpu->npc = cur + 4 + ((u32)imm << 2); } while (0)
#define EA (r[rs] + (u32)imm)
        switch (w >> 26) {
        case 0x00:
            switch (w & 0x3F) {
            case 0x00: if (rd) r[rd] = r[rt] << sa; break;
            case 0x02: if (rd) r[rd] = r[rt] >> sa; break;
            case 0x03: if (rd) r[rd] = (u32)((s32)r[rt] >> sa); break;
            case 0x04: if (rd) r[rd] = r[rt] << (r[rs] & 31); break;
            case 0x06: if (rd) r[rd] = r[rt] >> (r[rs] & 31); break;
            case 0x07: if (rd) r[rd] = (u32)((s32)r[rt] >> (r[rs] & 31)); break;
            case 0x08: cpu->npc = r[rs]; break;                                     /* jr */
            case 0x09: { u32 t = r[rs]; if (rd) r[rd] = cur + 8; cpu->npc = t; break; }  /* jalr */
            case 0x0C: rt_log("iopcpu", "syscall at %08X", cur); break;
            case 0x0D: rt_log("iopcpu", "break at %08X", cur); break;
            case 0x10: if (rd) r[rd] = cpu->hi; break;
            case 0x11: cpu->hi = r[rs]; break;
            case 0x12: if (rd) r[rd] = cpu->lo; break;
            case 0x13: cpu->lo = r[rs]; break;
            case 0x18: { s64 p = (s64)(s32)r[rs] * (s32)r[rt]; cpu->lo = (u32)p; cpu->hi = (u32)((u64)p >> 32); break; }
            case 0x19: { u64 p = (u64)r[rs] * r[rt]; cpu->lo = (u32)p; cpu->hi = (u32)(p >> 32); break; }
            case 0x1A:
                if (r[rt] == 0) { cpu->lo = (s32)r[rs] < 0 ? 1 : 0xFFFFFFFF; cpu->hi = r[rs]; }
                else if (r[rs] == 0x80000000 && r[rt] == 0xFFFFFFFF) { cpu->lo = 0x80000000; cpu->hi = 0; }
                else { cpu->lo = (u32)((s32)r[rs] / (s32)r[rt]); cpu->hi = (u32)((s32)r[rs] % (s32)r[rt]); }
                break;
            case 0x1B:
                if (r[rt] == 0) { cpu->lo = 0xFFFFFFFF; cpu->hi = r[rs]; }
                else { cpu->lo = r[rs] / r[rt]; cpu->hi = r[rs] % r[rt]; }
                break;
            case 0x20: case 0x21: if (rd) r[rd] = r[rs] + r[rt]; break;
            case 0x22: case 0x23: if (rd) r[rd] = r[rs] - r[rt]; break;
            case 0x24: if (rd) r[rd] = r[rs] & r[rt]; break;
            case 0x25: if (rd) r[rd] = r[rs] | r[rt]; break;
            case 0x26: if (rd) r[rd] = r[rs] ^ r[rt]; break;
            case 0x27: if (rd) r[rd] = ~(r[rs] | r[rt]); break;
            case 0x2A: if (rd) r[rd] = (s32)r[rs] < (s32)r[rt]; break;
            case 0x2B: if (rd) r[rd] = r[rs] < r[rt]; break;
            default: rt_log("iopcpu", "unknown special %08X at %08X", w, cur); break;
            }
            break;
        case 0x01: {                                                                /* bltz/bgez(al) */
            s32 v = (s32)r[rs];
            if ((rt & 0x1E) == 0x10) r[31] = cur + 8;
            if (rt & 1) BR(v >= 0); else BR(v < 0);
            break;
        }
        case 0x02: cpu->npc = (cur & 0xF0000000) | ((w & 0x03FFFFFF) << 2); break;                    /* j */
        case 0x03: cpu->npc = (cur & 0xF0000000) | ((w & 0x03FFFFFF) << 2); r[31] = cur + 8; break;   /* jal */
        case 0x04: BR(r[rs] == r[rt]); break;
        case 0x05: BR(r[rs] != r[rt]); break;
        case 0x06: BR((s32)r[rs] <= 0); break;
        case 0x07: BR((s32)r[rs] > 0); break;
        case 0x08: case 0x09: if (rt) r[rt] = r[rs] + (u32)imm; break;
        case 0x0A: if (rt) r[rt] = (s32)r[rs] < imm; break;
        case 0x0B: if (rt) r[rt] = r[rs] < (u32)imm; break;
        case 0x0C: if (rt) r[rt] = r[rs] & uimm; break;
        case 0x0D: if (rt) r[rt] = r[rs] | uimm; break;
        case 0x0E: if (rt) r[rt] = r[rs] ^ uimm; break;
        case 0x0F: if (rt) r[rt] = uimm << 16; break;
        case 0x10:                                                                  /* COP0 */
            if (rs == 0x00 && rt) r[rt] = (rd == 12) ? 0x401 : 0;                   /* mfc0: SR, interrupts on */
            break;
        case 0x12: break;                                                           /* COP2: unused here */
        case 0x20: { u32 v = (u32)(s32)(s8)m_rd8(EA); if (rt) r[rt] = v; break; }
        case 0x21: { u32 v = (u32)(s32)(s16)m_rd16(EA); if (rt) r[rt] = v; break; }
        case 0x22: {                                                                /* lwl */
            u32 a = EA, sh = (a & 3) * 8, m = m_rd32(a & ~3u);
            if (rt) r[rt] = (r[rt] & (0x00FFFFFFu >> sh)) | (m << (24 - sh));
            break;
        }
        case 0x23: { u32 v = m_rd32(EA); if (rt) r[rt] = v; break; }
        case 0x24: { u32 v = m_rd8(EA); if (rt) r[rt] = v; break; }
        case 0x25: { u32 v = m_rd16(EA); if (rt) r[rt] = v; break; }
        case 0x26: {                                                                /* lwr */
            u32 a = EA, sh = (a & 3) * 8, m = m_rd32(a & ~3u);
            if (rt) r[rt] = (r[rt] & ~(0xFFFFFFFFu >> sh)) | (m >> sh);
            break;
        }
        case 0x28: m_wr8(EA, (u8)r[rt]); break;
        case 0x29: m_wr16(EA, (u16)r[rt]); break;
        case 0x2A: {                                                                /* swl */
            u32 a = EA, sh = (a & 3) * 8, m = m_rd32(a & ~3u);
            m_wr32(a & ~3u, (m & ~(0xFFFFFFFFu >> (24 - sh))) | (r[rt] >> (24 - sh)));
            break;
        }
        case 0x2B: m_wr32(EA, r[rt]); break;
        case 0x2E: {                                                                /* swr */
            u32 a = EA, sh = (a & 3) * 8, m = m_rd32(a & ~3u);
            m_wr32(a & ~3u, (m & ~(0xFFFFFFFFu << sh)) | (r[rt] << sh));
            break;
        }
        default: rt_log("iopcpu", "unknown opcode %08X at %08X", w, cur); break;
        }
#undef BR
#undef EA
    }
}

u32 iop_call(IopCpu *cpu, u32 addr, u32 a0, u32 a1, u32 a2, u32 a3) {
    IopCpu save = *cpu;
    cpu->r[4] = a0;
    cpu->r[5] = a1;
    cpu->r[6] = a2;
    cpu->r[7] = a3;
    cpu->r[25] = addr;
    cpu->r[31] = IOP_RET_MAGIC;
    cpu->r[29] = (cpu->r[29] - 64) & ~7u;          /* the caller's argument area */
    cpu->pc = addr;
    cpu->npc = addr + 4;
    run(cpu);
    u32 v0 = cpu->r[2];
    *cpu = save;
    return v0;
}
