# Roteiro: do executável ao jogo rodando no PC

Decidido em 2026-10-13: **caminho híbrido**. Toda função ainda não decompilada é traduzida automaticamente
de MIPS (R5900) para C pelo recompilador. O resultado é ligado a uma camada de plataforma que faz o papel
do hardware do PS2. A decomp matching continua em paralelo, e cada função decompilada substitui a traduzida.

## Peças

| Peça | O que faz | Onde |
|---|---|---|
| Recompilador | Lê o ELF e as fronteiras de função do splat e gera C (um arquivo por bloco de funções) | `tools/recomp/` |
| Runtime da CPU | Registradores de 128 bits, FPU do PS2 (sem IEEE), VU0 em modo macro, memória (32 MB + scratchpad) | `port/runtime/` |
| Kernel HLE | Syscalls do kernel do PS2: threads, semáforos, interrupções (VBlank, DMA), alarmes | `port/kernel/` |
| IOP HLE | RPC via SIF para os serviços do IOP: arquivos (cdvd/fileio), controle, memory card, som (libsd, CRI ADXI) | `port/iop/` |
| Gráficos | DMA → VIF → GIF → GS; interpretador de VU1 para o microcódigo do jogo | `port/gs/` (base: `port/src/gs` do Tenkaichi3Decomp, MIT) |
| Som | Decodificação ADX e mixagem (base: `snd_adx.c` do Tenkaichi3Decomp) | `port/snd/` |
| Vídeo | Sofdec/MPEG-2 via IPU (cutscenes) | depois |

## Marcos

1. **O recompilador gera C para todas as funções e o C compila.**
2. **O jogo inicia:** `crt0` → `main` rodam nativamente; syscalls registradas no log até o primeiro bloqueio.
3. **Arquivos:** leitura do `AFSDATA.AFS` e dos outros arquivos do disco pelo IOP HLE.
4. **Primeira imagem:** o GS desenha a tela de título (sem 3D).
5. **3D:** interpretador de VU1; lutas visíveis.
6. **Som e controle.**
7. **Jogável do começo ao fim**; vídeos.
8. Em paralelo e para sempre: decomp matching substituindo o código traduzido.

## Estado

- Marco 0 (preparação): concluído. O build é idêntico ao original e há 327 funções de biblioteca nomeadas.
- Marco 1: concluído. As 13.855 funções são traduzidas para C (`tools/recomp/recomp.py`) e compilam.
- Marco 2: em andamento. `build/sstheh` roda crt0, a inicialização do SDK (patches de kernel, Timer 2,
  thread ociosa) e `main` do jogo, que imprime `::main: Incoming.` e inicializa o alocador de memória
  (`CMemoryAllocator::Init`). Para no primeiro contato com o IOP (SIF), que é o próximo trabalho.

Rodar: `.venv/bin/python configure.py && ninja port && ./build/sstheh`
