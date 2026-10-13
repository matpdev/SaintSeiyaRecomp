#!/usr/bin/env python3
"""Static recompiler: translate every function of SLES_541.62 from R5900 machine code to C.

    tools/recomp/recomp.py <elf> <out_dir> asm/*.s

Function boundaries come from splat's output (`nonmatching NAME, SIZE` + `glabel`). Every function
becomes `void F_XXXXXXXX(Ctx *c)` operating on the guest registers in `c` and guest memory through
the accessors of port/runtime/r5900.h. Output: rc_NNN.c files of about FUNCS_PER_FILE functions,
functab.c (address -> function, sorted), and report.txt (what could not be translated exactly).

Control flow:
  - branches inside the function become `goto`, with the delay slot executed first (or, for
    branch-likely, only when taken);
  - `jal` / `j` / branches to another function's start become calls (a `j` or branch out of the
    function is a tail call: call, then return);
  - `jr $ra` returns; `jalr` and `jr` to a register go through rt_call(), except `jr` to a target
    inside the function (switch tables), which dispatches over every address in the data that points
    into this function.
"""
import collections
import os
import re
import struct
import sys

import rabbitizer as R

R.config.pseudos_enablePseudos = False
R.config.misc_omit0XOnSmallImm = False

ELF_OFF, BASE = 0x80, 0x100000
DATA_START, DATA_END = 0x3D6500, 0x500080      # words in here may be jump-table entries
FUNCS_PER_FILE = 400


# ---------------------------------------------------------------------------------------------- input

def read_functions(asm_files):
    funcs = []
    for path in asm_files:
        size = name = None
        for line in open(path):
            m = re.match(r"nonmatching (\S+), 0x([0-9A-Fa-f]+)", line)
            if m:
                name, size = m.group(1), int(m.group(2), 16)
                continue
            if size is not None:
                m = re.match(r"\s+/\* [0-9A-F]+ ([0-9A-F]{8}) ", line)
                if m:
                    funcs.append((int(m.group(1), 16), size, name))
                    size = None
    funcs.sort()
    return funcs


def data_pointers(raw, lo, hi):
    """Every word in the data region whose value is an address in [lo, hi)."""
    n = (DATA_END - DATA_START) // 4
    words = struct.unpack_from(f"<{n}I", raw, ELF_OFF + DATA_START - BASE)
    return sorted({w for w in words if lo <= w < hi and w % 4 == 0})


# ---------------------------------------------------------------------------------------------- codegen

def sx16(v):
    return v - 0x10000 if v & 0x8000 else v


class Gen:
    def __init__(self, raw, funcs, ptrs):
        self.raw = raw
        self.funcs = funcs
        self.starts = {a for a, _, _ in funcs}
        self.entries = collections.defaultdict(set)   # function start -> extra entry addresses
        self.hle = {}                                  # function start -> native replacement
        for line in open(os.path.join(os.path.dirname(__file__), "..", "..", "port", "hle.txt")):
            line = line.split("#", 1)[0].split()
            if len(line) == 2:
                self.hle[int(line[0], 16)] = line[1]
        self.ptrs = ptrs
        self.report = collections.Counter()
        self.notes = []

    def find_entries(self):
        """Branch/jump/call targets that land inside another function become extra entry points."""
        import bisect
        import bisect as _b
        starts = [a for a, _, _ in self.funcs]
        ends = {a: a + sz for a, sz, _ in self.funcs}
        # code addresses stored in the data (vtables, function pointer tables) that are not function
        # starts: reachable by jalr, so they become entry points too
        for p in self.ptrs:
            if p in self.starts:
                continue
            k = bisect.bisect_right(starts, p) - 1
            if k >= 0 and p < ends[starts[k]]:
                self.entries[starts[k]].add(p)
        entry = struct.unpack_from("<I", self.raw, 0x18)[0]       # ELF entry point
        if entry not in self.starts:
            import bisect as _b
            k = _b.bisect_right(starts, entry) - 1
            self.entries[starts[k]].add(entry)
        for start, size, _ in self.funcs:
            for i in range(size // 4):
                ins = R.Instruction(self.word(start + 4 * i), vram=start + 4 * i, category=R.InstrCategory.R5900)
                if ins.isBranch():
                    t = ins.getBranchVramGeneric()
                elif ins.isJumpWithAddress():
                    t = ins.getInstrIndexAsVram()
                else:
                    continue
                if start <= t < start + size or t in self.starts:
                    continue
                k = bisect.bisect_right(starts, t) - 1
                if k >= 0 and t < ends[starts[k]]:
                    self.entries[starts[k]].add(t)
        self.all_entries = self.starts | {e for es in self.entries.values() for e in es}

    def word(self, a):
        return struct.unpack_from("<I", self.raw, ELF_OFF + a - BASE)[0]

    # register helpers -------------------------------------------------------------------------
    @staticmethod
    def set32(r, expr):
        return "" if r == 0 else f"SET32({r}, {expr});"

    @staticmethod
    def set64(r, expr):
        return "" if r == 0 else f"SET64({r}, {expr});"

    # one non-control instruction ---------------------------------------------------------------
    def simple(self, ins, pc):
        op = ins.getOpcodeName()
        raw = ins.getRaw()
        rs, rt, rd, sa = (raw >> 21) & 31, (raw >> 16) & 31, (raw >> 11) & 31, (raw >> 6) & 31
        fs, ft, fd = rd, rt, sa
        imm = raw & 0xFFFF
        simm = sx16(imm)
        ea = f"(RW({rs}) + {simm})"
        s32, s64 = self.set32, self.set64

        alu = {
            "addu": lambda: s32(rd, f"RW({rs}) + RW({rt})"),
            "add": lambda: s32(rd, f"RW({rs}) + RW({rt})"),
            "subu": lambda: s32(rd, f"RW({rs}) - RW({rt})"),
            "sub": lambda: s32(rd, f"RW({rs}) - RW({rt})"),
            "addiu": lambda: s32(rt, f"RW({rs}) + {simm}"),
            "addi": lambda: s32(rt, f"RW({rs}) + {simm}"),
            "daddu": lambda: s64(rd, f"RD({rs}) + RD({rt})"),
            "dadd": lambda: s64(rd, f"RD({rs}) + RD({rt})"),
            "dsubu": lambda: s64(rd, f"RD({rs}) - RD({rt})"),
            "daddiu": lambda: s64(rt, f"RD({rs}) + (s64){simm}"),
            "and": lambda: s64(rd, f"RD({rs}) & RD({rt})"),
            "or": lambda: s64(rd, f"RD({rs}) | RD({rt})"),
            "xor": lambda: s64(rd, f"RD({rs}) ^ RD({rt})"),
            "nor": lambda: s64(rd, f"~(RD({rs}) | RD({rt}))"),
            "andi": lambda: s64(rt, f"RD({rs}) & {imm:#x}"),
            "ori": lambda: s64(rt, f"RD({rs}) | {imm:#x}"),
            "xori": lambda: s64(rt, f"RD({rs}) ^ {imm:#x}"),
            "lui": lambda: s64(rt, f"(s64)(s32){(imm << 16):#x}"),
            "slt": lambda: s64(rd, f"RSD({rs}) < RSD({rt})"),
            "sltu": lambda: s64(rd, f"RD({rs}) < RD({rt})"),
            "slti": lambda: s64(rt, f"RSD({rs}) < (s64){simm}"),
            "sltiu": lambda: s64(rt, f"RD({rs}) < (u64)(s64){simm}"),
            "sll": lambda: s32(rd, f"RW({rt}) << {sa}"),
            "srl": lambda: s32(rd, f"RW({rt}) >> {sa}"),
            "sra": lambda: s32(rd, f"RSW({rt}) >> {sa}"),
            "sllv": lambda: s32(rd, f"RW({rt}) << (RW({rs}) & 31)"),
            "srlv": lambda: s32(rd, f"RW({rt}) >> (RW({rs}) & 31)"),
            "srav": lambda: s32(rd, f"RSW({rt}) >> (RW({rs}) & 31)"),
            "dsll": lambda: s64(rd, f"RD({rt}) << {sa}"),
            "dsrl": lambda: s64(rd, f"RD({rt}) >> {sa}"),
            "dsra": lambda: s64(rd, f"RSD({rt}) >> {sa}"),
            "dsll32": lambda: s64(rd, f"RD({rt}) << {sa + 32}"),
            "dsrl32": lambda: s64(rd, f"RD({rt}) >> {sa + 32}"),
            "dsra32": lambda: s64(rd, f"RSD({rt}) >> {sa + 32}"),
            "dsllv": lambda: s64(rd, f"RD({rt}) << (RW({rs}) & 63)"),
            "dsrlv": lambda: s64(rd, f"RD({rt}) >> (RW({rs}) & 63)"),
            "dsrav": lambda: s64(rd, f"RSD({rt}) >> (RW({rs}) & 63)"),
            "movn": lambda: "" if rd == 0 else f"if (RD({rt}) != 0) SET64({rd}, RD({rs}));",
            "movz": lambda: "" if rd == 0 else f"if (RD({rt}) == 0) SET64({rd}, RD({rs}));",
            "mfhi": lambda: s64(rd, "c->hi.d[0]"),
            "mflo": lambda: s64(rd, "c->lo.d[0]"),
            "mfhi1": lambda: s64(rd, "c->hi.d[1]"),
            "mflo1": lambda: s64(rd, "c->lo.d[1]"),
            "mthi": lambda: f"c->hi.d[0] = RD({rs});",
            "mtlo": lambda: f"c->lo.d[0] = RD({rs});",
            "mthi1": lambda: f"c->hi.d[1] = RD({rs});",
            "mtlo1": lambda: f"c->lo.d[1] = RD({rs});",
            "mult": lambda: f"mul_s(c, 0, {rd}, RSW({rs}), RSW({rt}));",
            "multu": lambda: f"mul_u(c, 0, {rd}, RW({rs}), RW({rt}));",
            "mult1": lambda: f"mul_s(c, 1, {rd}, RSW({rs}), RSW({rt}));",
            "multu1": lambda: f"mul_u(c, 1, {rd}, RW({rs}), RW({rt}));",
            "madd": lambda: f"madd_s(c, 0, {rd}, RSW({rs}), RSW({rt}));",
            "madd1": lambda: f"madd_s(c, 1, {rd}, RSW({rs}), RSW({rt}));",
            "div": lambda: f"div_s(c, 0, RSW({rs}), RSW({rt}));",
            "divu": lambda: f"div_u(c, 0, RW({rs}), RW({rt}));",
            "div1": lambda: f"div_s(c, 1, RSW({rs}), RSW({rt}));",
            "divu1": lambda: f"div_u(c, 1, RW({rs}), RW({rt}));",
            # memory
            "lb": lambda: s64(rt, f"(s8)rd8(c, {ea})"),
            "lbu": lambda: s64(rt, f"rd8(c, {ea})"),
            "lh": lambda: s64(rt, f"(s16)rd16(c, {ea})"),
            "lhu": lambda: s64(rt, f"rd16(c, {ea})"),
            "lw": lambda: s64(rt, f"(s32)rd32(c, {ea})"),
            "lwu": lambda: s64(rt, f"rd32(c, {ea})"),
            "ld": lambda: s64(rt, f"rd64(c, {ea})"),
            "lq": lambda: "" if rt == 0 else f"rd128(c, {ea} & ~15u, &c->r[{rt}]);",
            "sb": lambda: f"wr8(c, {ea}, (u8)RW({rt}));",
            "sh": lambda: f"wr16(c, {ea}, (u16)RW({rt}));",
            "sw": lambda: f"wr32(c, {ea}, RW({rt}));",
            "sd": lambda: f"wr64(c, {ea}, RD({rt}));",
            "sq": lambda: f"wr128(c, {ea} & ~15u, &c->r[{rt}]);",
            "lwl": lambda: "" if rt == 0 else f"lwl(c, {rt}, {ea});",
            "lwr": lambda: "" if rt == 0 else f"lwr(c, {rt}, {ea});",
            "ldl": lambda: "" if rt == 0 else f"ldl(c, {rt}, {ea});",
            "ldr": lambda: "" if rt == 0 else f"ldr(c, {rt}, {ea});",
            "swl": lambda: f"swl(c, {rt}, {ea});",
            "swr": lambda: f"swr(c, {rt}, {ea});",
            "sdl": lambda: f"sdl(c, {rt}, {ea});",
            "sdr": lambda: f"sdr(c, {rt}, {ea});",
            # FPU (single precision, PS2 rules in fpu_*)
            "lwc1": lambda: f"c->f[{ft}].u = rd32(c, {ea});",
            "swc1": lambda: f"wr32(c, {ea}, c->f[{ft}].u);",
            "mtc1": lambda: f"c->f[{fs}].u = RW({rt});",
            "mfc1": lambda: s64(rt, f"(s32)c->f[{fs}].u"),
            "ctc1": lambda: f"c->fcr31 = RW({rt});",
            "cfc1": lambda: s64(rt, "(s32)c->fcr31"),
            "mov.s": lambda: f"c->f[{fd}].u = c->f[{fs}].u;",
            "neg.s": lambda: f"c->f[{fd}].u = c->f[{fs}].u ^ 0x80000000u;",
            "abs.s": lambda: f"c->f[{fd}].u = c->f[{fs}].u & 0x7FFFFFFFu;",
            "add.s": lambda: f"c->f[{fd}].f = fpu(F({fs}) + F({ft}));",
            "sub.s": lambda: f"c->f[{fd}].f = fpu(F({fs}) - F({ft}));",
            "mul.s": lambda: f"c->f[{fd}].f = fpu(F({fs}) * F({ft}));",
            "div.s": lambda: f"c->f[{fd}].f = fpu_div(F({fs}), F({ft}));",
            "sqrt.s": lambda: f"c->f[{fd}].f = fpu_sqrt(F({ft}));",
            "rsqrt.s": lambda: f"c->f[{fd}].f = fpu_div(F({fs}), fpu_sqrt(F({ft})));",
            "max.s": lambda: f"c->f[{fd}].f = F({fs}) > F({ft}) ? F({fs}) : F({ft});",
            "min.s": lambda: f"c->f[{fd}].f = F({fs}) < F({ft}) ? F({fs}) : F({ft});",
            "adda.s": lambda: f"c->facc = fpu(F({fs}) + F({ft}));",
            "suba.s": lambda: f"c->facc = fpu(F({fs}) - F({ft}));",
            "mula.s": lambda: f"c->facc = fpu(F({fs}) * F({ft}));",
            "madda.s": lambda: f"c->facc = fpu(c->facc + F({fs}) * F({ft}));",
            "msuba.s": lambda: f"c->facc = fpu(c->facc - F({fs}) * F({ft}));",
            "madd.s": lambda: f"c->f[{fd}].f = fpu(c->facc + F({fs}) * F({ft}));",
            "msub.s": lambda: f"c->f[{fd}].f = fpu(c->facc - F({fs}) * F({ft}));",
            "cvt.s.w": lambda: f"c->f[{fd}].f = (f32)(s32)c->f[{fs}].u;",
            "cvt.w.s": lambda: f"c->f[{fd}].u = (u32)fpu_cvtw(F({fs}));",
            "c.f.s": lambda: "c->fcc = 0;",
            "c.eq.s": lambda: f"c->fcc = F({fs}) == F({ft});",
            "c.lt.s": lambda: f"c->fcc = F({fs}) < F({ft});",
            "c.le.s": lambda: f"c->fcc = F({fs}) <= F({ft});",
            # MMI
            "mfsa": lambda: s64(rd, "c->sa"),
            "mtsa": lambda: f"c->sa = RW({rs}) & 15;",
            "mtsab": lambda: f"c->sa = (RW({rs}) ^ {imm:#x}) & 15;",
            "mtsah": lambda: f"c->sa = ((RW({rs}) ^ {imm:#x}) & 7) * 2;",
            # COP2 transfers
            "lqc2": lambda: f"rd128(c, {ea} & ~15u, (GPR *)&c->vf[{ft}]);" if ft else "",
            "sqc2": lambda: f"wr128(c, {ea} & ~15u, (GPR *)&c->vf[{ft}]);",
            "qmtc2": lambda: f"if ({rd}) memcpy(&c->vf[{rd}], &c->r[{rt}], 16);",
            "qmfc2": lambda: "" if rt == 0 else f"memcpy(&c->r[{rt}], &c->vf[{rd}], 16);",
            "cfc2": lambda: s64(rt, f"(s32)vu0_cfc2(c, {rd})"),
            "ctc2": lambda: f"vu0_ctc2(c, {rd}, RW({rt}));",
            # system
            "syscall": lambda: f"rt_syscall(c, {pc:#x});",
            # The SDK's kernel-mode helpers put the return address in ErrorEPC ($30) and eret to it.
            "eret": lambda: "return;",
            "break": lambda: f"rt_break(c, {pc:#x});",
            "mfc0": lambda: s64(rt, f"(s32)rt_mfc0(c, {rd})"),
            "mtc0": lambda: f"rt_mtc0(c, {rd}, RW({rt}));",
            "ei": lambda: "rt_ei(c);",
            "di": lambda: "rt_di(c);",
            "sync": lambda: "",
            "sync.p": lambda: "",
            "sync.l": lambda: "",
            "cache": lambda: "",
            "pref": lambda: "",
        }
        mmi3 = {"paddh", "paddw", "paddb", "paddub", "padduw", "psubb", "psubh", "psubw", "pand", "por", "pxor",
                "pnor", "pcpyld", "pcpyud", "pextlb", "pextub", "pextlh", "pextuh", "pextlw", "pextuw", "pcgth",
                "pcgtw", "pceqh", "pceqw", "pminh", "pmaxh", "pminw", "pmaxw", "ppacb", "ppach", "ppacw", "qfsrv"}
        mmi_sh = {"psrlh", "psrah", "psllh", "psrlw", "psraw", "psllw"}
        mmi2 = {"pcpyh"}
        if op in alu:
            return alu[op]()
        if op in mmi3:
            return "" if rd == 0 else f"mmi_{op}(c, &c->r[{rd}], &c->r[{rs}], &c->r[{rt}]);"
        if op in mmi_sh:
            return "" if rd == 0 else f"mmi_{op}(&c->r[{rd}], &c->r[{rt}], {sa});"
        if op in mmi2:
            return "" if rd == 0 else f"mmi_{op}(&c->r[{rd}], &c->r[{rt}]);"
        if raw >> 26 == 0x11 and rs == 0x10 and raw & 0x3F == 0x04:     # sqrt.s fd, ft
            return f"c->f[{fd}].f = fpu_sqrt(F({ft}));"
        if raw >> 26 == 0x11 and rs == 0x10 and raw & 0x3F == 0x16:     # rsqrt.s fd, fs, ft
            return f"c->f[{fd}].f = fpu_div(F({fs}), fpu_sqrt(F({ft})));"
        if raw >> 26 == 0x12:            # COP2 macro instruction (VU0): decoded at run time
            return f"vu0_exec(c, {raw:#010x});"
        if raw == 0:
            return ""
        self.report[f"unimplemented {op}"] += 1
        return f"rt_unimpl(c, {pc:#x}, {raw:#010x});"

    # one function -----------------------------------------------------------------------------
    def function(self, start, size, name):
        if start in self.hle:
            self.report["replaced by native functions (port/hle.txt)"] += 1
            return f"void F_{start:08X}(Ctx *c) {{ {self.hle[start]}(c); }} /* {name} */"
        end = start + size
        n = size // 4
        insns = [R.Instruction(self.word(start + 4 * i), vram=start + 4 * i, category=R.InstrCategory.R5900)
                 for i in range(n)]
        labels = set()
        has_jr = False
        for i, ins in enumerate(insns):
            pc = start + 4 * i
            if ins.isBranch() or (ins.isJump() and ins.isJumpWithAddress() and not ins.doesLink()):
                t = ins.getBranchVramGeneric() if ins.isBranch() else ins.getInstrIndexAsVram()
                if start <= t < end:
                    labels.add(t)
            if ins.getOpcodeName() == "jr" and (ins.getRaw() >> 21) & 31 != 31:
                has_jr = True
        table = [p for p in self.ptrs_in(start, end)] if has_jr else []
        labels.update(table)
        extra = sorted(self.entries.get(start, ()))
        labels.update(extra)

        if extra:
            out = [f"static void B_{start:08X}(Ctx *c, u32 entry) {{ /* {name} */"]
            out.append("ENTER(entry);")
            out.append("switch (entry) { " + " ".join(f"case {e:#x}: goto L_{e:08X};" for e in extra) + " }")
        else:
            out = [f"void F_{start:08X}(Ctx *c) {{ /* {name} */", f"ENTER({start:#x});"]
        i = 0
        while i < n:
            pc = start + 4 * i
            ins = insns[i]
            if pc in labels:
                out.append(f"L_{pc:08X}:;")
            if ins.hasDelaySlot():
                delay = self.simple(insns[i + 1], pc + 4) if i + 1 < n else ""
                if i + 1 < n and self.is_control(insns[i + 1]):
                    self.report["control instruction in delay slot"] += 1
                    delay = f"rt_unimpl(c, {pc + 4:#x}, {insns[i + 1].getRaw():#010x});"
                out.append(self.control(ins, pc, delay, start, end, table))
                if pc + 4 in labels:          # something jumps into the delay slot
                    out.append(f"if (0) {{ L_{pc + 4:08X}:; {delay} }}")
                i += 2
                continue
            out.append(self.simple(ins, pc))
            i += 1
        # falls off the end: continue in the next function
        last = insns[-1] if n else None
        prev = insns[-2] if n >= 2 else None
        if not (prev is not None and prev.hasDelaySlot() and self.ends_flow(prev)):
            if end in self.starts:
                out.append(f"F_{end:08X}(c); return;")
                self.report["falls through into next function"] += 1
            else:
                out.append(f"rt_fell_off(c, {end:#x});")
        out.append("}")
        if extra:
            for e in [start, *extra]:
                out.append(f"void F_{e:08X}(Ctx *c) {{ B_{start:08X}(c, {e:#x}); }}")
        return "\n".join(l for l in out if l)

    def ptrs_in(self, lo, hi):
        import bisect
        i = bisect.bisect_left(self.ptrs, lo)
        while i < len(self.ptrs) and self.ptrs[i] < hi:
            yield self.ptrs[i]
            i += 1

    @staticmethod
    def is_control(ins):
        return ins.hasDelaySlot() or ins.getOpcodeName() in ("syscall", "eret")

    @staticmethod
    def ends_flow(ins):
        op = ins.getOpcodeName()
        if op in ("jr", "j"):
            return True
        if op == "beq" and (ins.getRaw() >> 16) & 0x3FF == 0:     # beq $zero, $zero
            return True
        return False

    def goto_or_call(self, target, start, end, pc=None):
        if start <= target < end:
            if pc is not None and target <= pc:      # backward branch: a loop; let interrupts in
                return f"{{ POLL(); goto L_{target:08X}; }}"
            return f"goto L_{target:08X};"
        if target in self.all_entries:
            self.report["branch/jump to another function (tail call)"] += 1
            return f"{{ F_{target:08X}(c); return; }}"
        self.report["branch into the middle of another function"] += 1
        self.notes.append(f"{start:08X}: branch to {target:08X}, not a function start")
        return f"{{ rt_jump(c, {target:#x}); return; }}"

    def control(self, ins, pc, delay, start, end, table):
        op = ins.getOpcodeName()
        raw = ins.getRaw()
        rs, rt, rd = (raw >> 21) & 31, (raw >> 16) & 31, (raw >> 11) & 31
        conds = {
            "beq": f"RD({rs}) == RD({rt})", "bne": f"RD({rs}) != RD({rt})",
            "blez": f"RSD({rs}) <= 0", "bgtz": f"RSD({rs}) > 0",
            "bltz": f"RSD({rs}) < 0", "bgez": f"RSD({rs}) >= 0",
            "bc1t": "c->fcc", "bc1f": "!c->fcc",
        }
        if ins.isBranch():
            target = ins.getBranchVramGeneric()
            go = self.goto_or_call(target, start, end, pc)
            base = op[:-1] if ins.isBranchLikely() else op
            if base in ("bltzal", "bgezal"):
                self.report[f"unimplemented {op}"] += 1
                return f"rt_unimpl(c, {pc:#x}, {raw:#010x});"
            cond = conds[base]
            if cond == "RD(0) == RD(0)":
                return f"{delay} {go}"
            if ins.isBranchLikely():
                return f"if ({cond}) {{ {delay} {go} }}"
            return f"{{ int t = {cond}; {delay} if (t) {go} }}"
        if op == "j":
            return f"{delay} {self.goto_or_call(ins.getInstrIndexAsVram(), start, end, pc)}"
        if op == "jal":
            target = ins.getInstrIndexAsVram()
            call = f"F_{target:08X}(c);" if target in self.all_entries else f"rt_call(c, {target:#x});"
            if target not in self.all_entries:
                self.report["jal to a non-function address"] += 1
                self.notes.append(f"{start:08X}: jal {target:08X}, not a function start")
            return f"SET64(31, {pc + 8:#x}); {delay} {call}"
        if op == "jalr":
            link = f"SET64({rd}, {pc + 8:#x});" if rd else ""
            return f"{{ u32 t = RW({rs}); {link} {delay} rt_call(c, t); }}"
        if op == "jr":
            if rs == 31:
                return f"{delay} return;"
            cases = " ".join(f"case {t:#x}: goto L_{t:08X};" for t in table)
            if not cases:
                self.report["jr to a register without jump-table targets"] += 1
            return f"{{ u32 t = RW({rs}); {delay} switch (t) {{ {cases} default: rt_jump(c, t); return; }} }}"
        self.report[f"unimplemented control {op}"] += 1
        return f"rt_unimpl(c, {pc:#x}, {raw:#010x});"


def main():
    raw = open(sys.argv[1], "rb").read()
    out_dir = sys.argv[2]
    funcs = read_functions(sys.argv[3:])
    lo, hi = funcs[0][0], max(a + s for a, s, _ in funcs)
    gen = Gen(raw, funcs, data_pointers(raw, lo, hi))
    gen.find_entries()
    gen.report["extra entry points"] = sum(len(v) for v in gen.entries.values())
    os.makedirs(out_dir, exist_ok=True)
    table = sorted([(a, s, n) for a, s, n in funcs] +
                   [(e, 0, f"{n}+{e - a:#x}") for a, s, n in funcs for e in sorted(gen.entries.get(a, ()))])

    names = []
    for k in range(0, len(funcs), FUNCS_PER_FILE):
        chunk = funcs[k:k + FUNCS_PER_FILE]
        path = os.path.join(out_dir, f"rc_{k // FUNCS_PER_FILE:03d}.c")
        with open(path, "w") as f:
            f.write('#include "r5900.h"\n#include "functab.h"\n\n')
            for a, s, name in chunk:
                f.write(gen.function(a, s, name) + "\n\n")
        names.append(path)

    with open(os.path.join(out_dir, "functab.h"), "w") as f:
        f.write("/* generated by tools/recomp/recomp.py */\n#pragma once\n#include \"r5900.h\"\n")
        for a, _, _ in table:
            f.write(f"void F_{a:08X}(Ctx *c);\n")
        for native in sorted(set(gen.hle.values())):
            f.write(f"void {native}(Ctx *c);\n")
    with open(os.path.join(out_dir, "functab.c"), "w") as f:
        f.write('/* generated by tools/recomp/recomp.py */\n#include "functab.h"\n\n')
        f.write(f"const FuncEntry rt_functab[] = {{\n")
        for a, s, name in table:
            f.write(f"    {{{a:#x}, {s:#x}, F_{a:08X}, \"{name}\"}},\n")
        f.write(f"}};\nconst int rt_functab_count = {len(table)};\n")

    with open(os.path.join(out_dir, "report.txt"), "w") as f:
        f.write(f"{len(funcs)} functions in {len(names)} files\n")
        for k, v in gen.report.most_common():
            f.write(f"{v:7}  {k}\n")
        f.write("\n" + "\n".join(gen.notes) + "\n")
    print(open(os.path.join(out_dir, "report.txt")).read().split("\n\n")[0])


main()
