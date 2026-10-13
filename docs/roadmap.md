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
- Marco 2: quase concluído. `build/sstheh` roda crt0, a inicialização do SDK e `main`. O jogo:
  - imprime `::main: Incoming.`, inicializa o alocador (`CMemoryAllocator::Init`);
  - inicializa o SIF/RPC com o IOP HLE (`port/iop/`), reinicia o IOP (IOPRP280) e reconecta;
  - inicializa o CD/DVD ("Disk Type = PlayStation2 DVD"): libcdvd substituída por leitura do ISO;
  - carrega os módulos do IOP (simulados), inicializa o som RSSD (handshake 0xF0 via RPC IOP -> EE);
  - inicializa o DMAC e manda os primeiros pacotes ao VIF0/VIF1/GIF; cria 11 threads.
  Para na inicialização do PS2RNA da CRI (`0x264710`), que espera o módulo `CRI_ADXI.IRX` do IOP.

## Próximos passos

1. **CRI ADXI** (servidor `0x90000200`): simular o lado IOP do ADX o suficiente para o PS2RNA iniciar;
   depois, áudio de verdade (o `snd_adx.c` do Tenkaichi3Decomp decodifica ADX).
2. **DMAC + GIF/VIF + GS**: trazer o renderer do Tenkaichi3Decomp (`port/src/gs`, MIT) e ligar às escritas
   nos registradores de DMA; interpretador de VU1 para os 62 programas.
3. **DBC / controle** (`0x80001300`, `0x8000131B/C`): devolver o estado do controle a partir do SDL.
4. **RSSD** (som do jogo, `0x900`/`0x901`): reimplementar o protocolo.

Ferramentas: `tools/recon/xref.py` (quem usa uma string, quem chama uma função), `port/hle.txt` (substituir
funções do jogo por nativas), `./build/sstheh -v` (log detalhado).

Rodar: `.venv/bin/python configure.py && ninja port && ./build/sstheh`
