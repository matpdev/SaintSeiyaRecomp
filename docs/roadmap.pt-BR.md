# Roteiro: do executável ao jogo rodando no PC

English: [roadmap.md](roadmap.md).

Decidido em 2026-10-13: **o caminho híbrido**. Toda função ainda não decompilada é traduzida automaticamente
de MIPS (R5900) para C pelo recompilador. O resultado é ligado a uma camada de plataforma que faz o papel do
hardware do PS2. A decompilação fiel continua em paralelo, e cada função decompilada substitui a traduzida.

## Peças

| Peça | O que faz | Onde |
|---|---|---|
| Recompilador | Lê o ELF e os limites de função do splat e escreve C (um arquivo por bloco de funções) | `tools/recomp/` |
| Runtime da CPU | Registradores de 128 bits, a FPU do PS2 (não é IEEE), modo macro da VU0, memória (32 MB + scratchpad) | `port/runtime/` |
| Kernel HLE | Syscalls do kernel do PS2: threads, semáforos, interrupções (VBlank, DMA), alarmes | `port/kernel/` |
| IOP HLE | RPC SIF para os serviços do IOP: arquivos (cdvd/fileio), controle, memory card, som CRI ADXI | `port/iop/`, `port/hle/` |
| IOP LLE | O driver de som do jogo (SSD/RSSD) rodado a partir do disco: interpretador MIPS I, carregador de IRX, SPU2 | `port/iop/lle/` |
| Gráficos | DMA → VIF → GIF → GS; microcódigo da VU1 traduzido para código nativo; renderizador Vulkan | `port/gs/` (baseado no `port/src/gs` do Tenkaichi3Decomp, MIT) |
| Vídeo | A abertura (o único vídeo: Sofdec MPEG-2) tocada com FFmpeg no lugar de Sofdec + IPU | `port/hle/movie.c` |

## Marcos

1. **O recompilador escreve C para toda função, e o C compila.**
2. **O jogo inicia:** `crt0` → `main` rodam nativamente; syscalls registradas até o primeiro bloqueio.
3. **Arquivos:** `AFSDATA.AFS` e os outros arquivos do disco lidos pelo IOP HLE.
4. **Primeira imagem:** o GS desenha a tela de título (sem 3D).
5. **3D:** VU1; lutas visíveis.
6. **Som e controle.**
7. **Jogável do começo ao fim**; vídeos.
8. Em paralelo, sempre: a decompilação fiel substituindo o código traduzido.

## Status

**Atualizado em 2026-11-10:** marcos 1 a 6 prontos, e a maior parte do 7. O jogo roda nativamente da tela de
título às lutas em 3D, com música e vozes (CRI ADXI), efeitos sonoros (o driver SSD/RSSD do próprio disco num
IOP e SPU2 emulados, com reverb), controle (PADMAN) e memory card (libmc2 numa pasta). Renderizador Vulkan via
SDL3 GPU, programas da VU1 traduzidos para código nativo, 60 Hz com quadros interpolados, widescreen 16:9. A
abertura toca (FFmpeg, desde 2026-11-01). A versão japonesa (SLPS-25744) roda no mesmo executável
([versions.md](versions.md)). Falta: testar o jogo inteiro, macOS, e a decompilação em si.

### Histórico

- Marco 0 (preparação): o build é idêntico ao original; 327 funções de biblioteca nomeadas.
- Marco 1: as 13.855 funções são traduzidas para C (`tools/recomp/recomp.py`) e compilam.
- Marco 2: `build/sstheh` roda o crt0, a inicialização do SDK e o `main`: o alocador, SIF/RPC com o IOP HLE, o
  reboot do IOP (IOPRP280), CD/DVD (libcdvd trocada por leituras da ISO), os módulos do IOP, o DMAC e os
  primeiros pacotes VIF/GIF.
- Marco 4 (primeira imagem), 2026-10-13: DMAC, VIF1, GIF e um GS por software (adaptado do Tenkaichi3Decomp);
  janela SDL3; `--shot N,M` salva capturas em `build/`.
- Marcos 5 e 6, 2026-10-14: renderizador Vulkan, JIT da VU1, PADMAN, música e vozes CRI ADX, memory card.
- Efeitos sonoros, 2026-10-14: SSD.IRX e RSSD.IRX rodam como estão num IOP interpretado, com módulos de sistema
  nativos e uma SPU2 emulada (`port/iop/lle/`). As chamadas IOP → EE esperam o RPC_END do EE antes da próxima.

Ferramentas: `tools/recon/xref.py` (quem usa uma string, quem chama uma função), `port/hle.txt` (troca funções
do jogo por nativas), `./build/sstheh -v` (log detalhado).
