# Como o port funciona

Um mapa do port para quem quer lê-lo, depurá-lo ou modificá-lo. Cada arquivo de código começa com um
comentário (em inglês) explicando a sua parte em detalhe; esta página mostra como as partes se encaixam.
English: [architecture.md](architecture.md). Opções e ferramentas de depuração:
[depuracao.pt-BR.md](depuracao.pt-BR.md).

## A ideia em um parágrafo

O executável do jogo de PS2 (`SLES_541.62`, código MIPS para o processador principal do PS2, o EE) é
**traduzido para C uma única vez, durante o build**, e compilado para o PC: isso é uma *recompilação
estática*. O código traduzido continua achando que roda num PS2: ele lê e escreve na memória e nos
registradores de hardware do PS2. Por isso o port também fornece o que o PS2 tinha em volta da CPU: o
sistema operacional (o kernel), o segundo processador (o IOP: disco, som, memory card, controles), as
unidades vetoriais (VU) e o chip gráfico (o GS), cujo desenho é refeito com Vulkan. Algumas funções do
jogo são **substituídas ou interceptadas** por código C nativo (`port/hle/`): o memory card, o disco e
os recursos próprios do port (widescreen, treino, fontes).

## Da ISO ao programa

```
sua ISO ──tools/disc.py──► disc/SLES_541.62 (conferido pelo SHA-1)
                           │
               splat (config/sles_541.62.yaml) ──► asm/*.s (uma função por glabel)
                           │
            tools/recomp/recomp.py ──► generated/recomp/rc_*.c + functab.c   (cada função em C)
                           │
       sstheh --gen-vu ──► generated/vu/*.c   (os 189 microprogramas do VU1 em C, ver port/gs/vu_jit.c)
                           │
                 gcc + port/**/*.c ──► build/sstheh
```

O `build.sh` roda tudo isso (o `configure.py` gera o arquivo do ninja). Os dados do jogo (modelos,
texturas, sons) nunca são extraídos: o programa lê a ISO (`disc/game.iso`) enquanto roda.

O C traduzido fica no git (`generated/`): é só código, os dados do executável são carregados do
`SLES_541.62` do próprio jogador quando o jogo abre. Por isso o port compila sem o disco (o CI do GitHub monta
os pacotes do release assim, `tools/release.sh`); com ele, o `configure.py` refaz o `generated/` sempre que o
tradutor muda, e a mudança entra num commit como qualquer outra. A saída é a mesma em qualquer máquina.

Cada função do jogo vira `void F_XXXXXXXX(Ctx *c)`. O `Ctx` guarda os registradores do EE; `RW(n)` são os
32 bits baixos do registrador n, `SET32(n, v)` o altera, `F(n)` é um registrador de ponto flutuante,
`rd32(c, endereço)` / `wr32(c, endereço, v)` leem e escrevem na memória do PS2 (`port/runtime/r5900.h`).
Uma chamada para um endereço que não se conhecia na tradução passa por `rt_call(c, endereço)`, que acha a
função em `functab.c`.

## Substituindo e interceptando funções do jogo

O `port/hle.txt` lista endereços que têm uma função nativa:

```
0x00123930 hle_sceCdRead                   # substituída: o código do jogo nesse endereço nunca roda
0x002F9140 hle_training_battle before      # interceptada: roda na entrada, depois o código do próprio jogo
```

O recompilador lê essa lista. A função nativa vê os registradores do jogo: argumentos em `RW(4)`..`RW(11)`
(a0..a7) e `F(12)`.. para floats, o endereço de retorno de quem chamou em `RW(31)` (os hooks usam isso para
agir só para um chamador), e devolve um resultado com `SET64(2, valor)`.

O `port/hle/hle.h` tem os auxiliares que essas funções compartilham (`game_call` para chamar código do
jogo a partir de um hook preservando os registradores, `rd_float` / `wr_float`), e **o `port/hle/game.h`
dá nome a cada endereço e offset de estrutura do jogo que o código nativo usa**. Junto com o
`port/hle.txt`, ele é a lista do que precisa ser encontrado de novo para outra versão do jogo (a japonesa,
um executável modificado).

## Threads durante a execução

| Thread | O que roda nela | Onde |
|---|---|---|
| `ee-N` | As threads do próprio jogo (o EE tinha várias, uma rodando por vez; aqui cada uma é uma thread do PC e uma trava deixa só uma rodar) | `port/kernel/kernel.c` |
| `vblank` | Um timer que gera a interrupção de vertical blank 60 vezes por segundo (50 em PAL); os tratadores de interrupção do jogo rodam no próximo ponto seguro da thread do EE que estiver rodando | `port/kernel/kernel.c` |
| `iop-*` | O lado do IOP: leituras do disco, som (streams ADX da CRI, o SPU2 e o driver de som do jogo rodando como é), memory card, controles | `port/iop/` |
| `gs` | O pipeline gráfico que o EE alimenta por DMA: desempacotamento do VIF1, programas do VU1 (compilados nativamente), GIF, escritas nos registradores do GS. Ele registra o que desenhar | `port/gs/dmac.c`, `vif.c`, `vu*.c`, `gs.c` |
| principal (`sstheh`) | A janela: entrada e o renderizador Vulkan que desenha os quadros registrados | `port/gs/display.c`, `gpu_vk.c` |
| `vu-compiler` | (builds de desenvolvimento) compila programas do VU1 que não vieram embutidos | `port/gs/vu_jit.c` |

## Um quadro, do jogo até a tela

1. **O jogo (EE)** calcula o quadro e monta cadeias de DMA: geometria e programas do VU1 para o VIF1,
   2D e texturas para o GIF.
2. **O DMAC** (`dmac.c`) entrega as cadeias para a thread `gs`.
3. **VIF1 / VU1** (`vif.c`, `vu.c`, `vu_exec.c`, `vu_jit.c`): o VIF desempacota os vértices na memória do
   VU1 e inicia programas do VU1, que os transformam, iluminam e enviam pacotes ao GS (XGKICK).
4. **GS** (`gs.c`): os pacotes do GS alteram registradores e desenham primitivas. Nada é desenhado aqui:
   cada primitiva é registrada num `GpuFrame` (draws, vértices, uploads de textura; `gpu.h`). As texturas
   são decodificadas da memória do GS (4 MB, mantida em dia com os uploads do jogo), com substituições
   (`texpack.c`: pacotes HD; `port/hle/textfont.c`: textos com fonte TTF). Cada draw é classificado para
   o widescreen (3D, 2D a manter em 4:3, HUD...).
5. **O renderizador** (`gpu_vk.c`, na thread da janela) refaz o quadro registrado com Vulkan numa resolução
   maior, ajusta o 2D para o widescreen e o mostra; entre dois quadros do jogo, mostra quadros
   interpolados a partir deles (`display.c`).

## Onde encontrar as coisas

| Pasta | Conteúdo |
|---|---|
| `port/main.c` | Linha de comando, inicialização |
| `port/runtime/` | Auxiliares da CPU do jogo (`r5900.h`: registradores, acesso à memória, regras da FPU), mapa de memória e carga do ELF, logs, relatórios de crash, profiler, camada de plataforma (Linux / Windows) |
| `port/kernel/` | O kernel do EE: threads, semáforos, interrupções, alarmes, syscalls |
| `port/iop/` | Serviços do IOP (SIF, RPC), controles, áudio ADX da CRI; `lle/`: os módulos do IOP que rodam como são (interpretador MIPS I, SPU2) |
| `port/gs/` | DMAC, VIF, VU0/VU1, GS, renderizador Vulkan, janela, pacotes de textura, gravações |
| `port/gs/shaders/` | Shaders GLSL (compilados para SPIR-V no build) |
| `port/hle/` | Substituições e hooks nativos: disco, memory card, vídeo, ritmo dos quadros, widescreen, seleção de personagem, treino, opções do Big Bang, fontes. `game.h`: os endereços do jogo |
| `port/hle.txt` | Quais funções do jogo são substituídas ou interceptadas |
| `tools/recomp/` | O recompilador |
| `tools/setup/` | O instalador do release (Qt) |
| `config/` | Configuração do splat e nomes de símbolos conhecidos |

## Adicionando um recurso que mexe no jogo

1. Encontre a função do jogo (logs, `SSTHEH_RAM_DUMP`, `SSTHEH_WATCH`, a desmontagem em `asm/`, um
   depurador no código recompilado: veja [depuracao.pt-BR.md](depuracao.pt-BR.md)).
2. Dê nome ao endereço e aos offsets que usar no `port/hle/game.h`.
3. Escreva a função nativa em `port/hle/` (inclua `hle.h`); explique num comentário acima dela o que a
   função do jogo faz.
4. Acrescente o endereço ao `port/hle.txt` (`before` para um hook) e recompile (`./build.sh`).
5. Confira que o jogo ainda chega a uma luta e compare imagens de antes e depois (`--shot`).
