# Depurando o port

Ferramentas e opções para descobrir o que o jogo e o port estão fazendo. English:
[debugging.md](debugging.md). Como as partes se encaixam: [arquitetura.pt-BR.md](arquitetura.pt-BR.md).

As opções são variáveis de ambiente, colocadas antes do comando:

```sh
SSTHEH_AUDIO=0 SSTHEH_FRAME_LOG=frames.csv ./build/sstheh -v
```

## Primeiros passos quando algo está errado

- **Rode com `-v`** (ou `-vv`) e guarde a saída do terminal: cada parte registra o que faz (`[mc]` memory
  card, `[gpu]` renderizador, `[font]` textos...), com a contagem de vertical blanks (60 por segundo)
  entre colchetes.
- **Um crash** imprime um relatório: a função e o endereço do jogo, os registradores, a pilha de chamadas
  do jogo. Os nomes vêm de `config/symbol_addrs.txt`; funções desconhecidas aparecem como `func_XXXXXXXX`,
  que dá para achar em `asm/`.
- **Desligue os recursos do port um por um** para ver qual causa o problema: `SSTHEH_WIDESCREEN=0`,
  `SSTHEH_FONT=0`, `SSTHEH_TEXTURES=0`, `SSTHEH_WIDE_HUD=0`, `SSTHEH_WIDE_SELECT=0`, `SSTHEH_INTERP=0`;
  depois as otimizações: `SSTHEH_VUJIT=0`, `SSTHEH_GSTHREAD=0`, `SSTHEH_UPLOAD_DEDUP=0`; e o
  renderizador: `SSTHEH_GS=sw` (o GS em software, lento, mas desenhando como o PS2).
- **F3** mostra o painel de desempenho (fps, carga de CPU e GPU); `SSTHEH_PERF_LOG=1` o imprime a cada
  segundo.

## Chegando a um momento sem jogar

`--press` aperta botões em vertical blanks escolhidos, `--shot` salva imagens e roda sem janela:

```sh
./build/sstheh -q --press "1100:CROSS,1300:CROSS,2700:START,3000:DOWN,3200:CROSS" --shot 3100,3600
```

- Botões: `UP DOWN LEFT RIGHT CROSS CIRCLE SQUARE TRIANGLE L1 R1 L2 R2 START SELECT`; `quando:BOTÃO:quadros`
  segura por mais tempo (6 por padrão). Vários no mesmo vertical blank são apertados juntos.
- As imagens vão para `build/shot_N.ppm` (relativo a onde você roda): o quadro do PS2 (512x448), ou como
  uma janela desse tamanho o mostraria, com `SSTHEH_SHOT_PRESENT=1920x1080`.
- As execuções não se repetem exatamente depois que uma luta começa (as escolhas do computador variam), mas
  os menus sim: imagens do mesmo menu tiradas antes e depois de uma mudança devem ser idênticas byte a
  byte (`cmp`). Numa transição (algo deslizando para entrar), a imagem pode cair num quadro diferente.
- Use uma cópia do seu memory card (`SSTHEH_MEMCARD=pasta`) e `SSTHEH_UNLOCK_ALL=1`, para os testes nunca
  mexerem nos seus saves. `SSTHEH_AUDIO=0` roda sem som.

## Olhando a memória do jogo

| Opção | O que dá |
|---|---|
| `SSTHEH_RAM_DUMP=1` | com `--shot`: os 32 MB do EE naquele momento, `build/ram_N.bin` (ache um valor, depois compare dumps) |
| `SSTHEH_VRAM=1` | com `--shot`: os 4 MB de memória do GS como imagem, `build/vram_N.ppm`, e os registradores de exibição |
| `SSTHEH_WATCH=endereço,desde[,off]` | registra a palavra de 32 bits em `endereço` (hex) a cada vertical blank a partir de `desde`; com `off`, a palavra em `*endereço + off` (um campo do objeto para o qual a variável aponta) |
| `SSTHEH_POISON_FREE=1` | preenche cada bloco que o jogo libera, para um uso depois de liberado dar crash na hora; o relatório diz quem liberou o bloco |
| `--trace` + `SSTHEH_TRACE_COUNT=de,até` | quantas vezes cada função do jogo foi chamada entre dois vertical blanks, as mais chamadas primeiro |

## Tempo e desempenho

| Opção | O que dá |
|---|---|
| `SSTHEH_FRAME_LOG=arquivo.csv` | uma linha por quadro do jogo: ms total, ms do VU1 (e interpretado), ms do GS, programas do VU1 compilados, pipelines da GPU criados |
| `SSTHEH_PERF_LOG=1` | o painel do F3 impresso a cada segundo |
| `SSTHEH_GPU_STATS=1` | a cada 50 quadros: draws, vértices, uploads de textura, cópias de render target, texturas vivas |
| `SSTHEH_PROF=1` (ou `=N`) | o profiler por amostragem embutido (a partir do vertical blank N), relatório na saída; `SSTHEH_PROF_IN=função`: os pontos mais quentes dentro de uma função |
| `perf record -g ./build/sstheh` | o `perf` do Linux também funciona; as threads têm nome (`gs`, `ee-N`, `iop-*`, `vblank`), então `perf report --sort comm,sym` separa o trabalho por thread |
| `SSTHEH_SCALE=n` | resolução interna fixa (1 a 8 vezes a do PS2), para ver se a GPU é o limite |

## Gráficos

| Opção | O que dá |
|---|---|
| `SSTHEH_GS=sw` | o renderizador do GS em software em vez do Vulkan |
| `SSTHEH_GPU_DEBUG=n` | chaves do renderizador: 1 sem teste de profundidade, 2 sem blending (bits, combináveis); também registra um quadro a cada 100 |
| `SSTHEH_GPU_RED=1` | render targets novos começam vermelhos em vez de pretos (mostra o que nunca foi desenhado) |
| `SSTHEH_SHOT_FULL=1` | `--shot` salva o quadro inteiro na resolução interna |
| `SSTHEH_PRIMS=N` | a partir do vertical blank N, imprime os pacotes das primeiras primitivas do GS |
| `SSTHEH_TEX_DUMP=1` | salva cada textura que o jogo usa como PNG (`~/.local/share/sstheh/textures/dump/`) |
| `SSTHEH_FONT_DEBUG=1` | registra cada letra que o jogo escreve e cada texto desenhado com a fonte (e quanto tempo levou) |
| `SSTHEH_GSREC=arquivo` | grava o trabalho da thread `gs` (`SSTHEH_GSREC_FROM`, padrão 9000; `SSTHEH_GSREC_FRAMES`, 150); `build/sstheh --gs-replay arquivo` o repete sem o jogo: tempo por quadro e um hash de tudo o que foi desenhado (rode de dentro de `build/`) |

## VU1 (a unidade vetorial que desenha o 3D)

| Opção | O que dá |
|---|---|
| `SSTHEH_VUJIT=0` | roda os programas do VU1 no interpretador em vez dos compilados (para separar um erro de tradução de qualquer outra coisa) |
| `SSTHEH_VUJIT_MISS=1` | registra o início de um programa do VU1 que não tem versão compilada |
| `SSTHEH_VUREC=arquivo` | grava 20 vertical blanks de programas do VU1 (`SSTHEH_VUREC_FROM`, padrão 8000) para o `tools/vubench.c`, que confere os programas compilados contra o interpretador e mede o tempo |
| `SSTHEH_VUDUMP=1`, `SSTHEH_VUSNAP=1` | salva a memória de código do VU1 (`build/vu1_code.bin`); conta as diferentes memórias de código vistas |

## Som

| Opção | O que dá |
|---|---|
| `SSTHEH_AUDIO=0` | sem dispositivo de som (os streams continuam sendo consumidos em tempo real) |
| `SSTHEH_AUDIO_DUMP=a.wav` | grava a mixagem final |
| `SSTHEH_SPU_DUMP=b.raw` | grava só o SPU2 (16 bits estéreo, 48 kHz) |
| `SSTHEH_RSSD_HLE=1` | não roda o driver de efeitos sonoros do jogo |
| `SSTHEH_RSSD_DUMP=pasta` | salva cada pedido enviado ao driver de som |

## Opções de jogo (também úteis ao depurar)

`SSTHEH_WINDOW=LxA|full`, `SSTHEH_VSYNC=1`, `SSTHEH_WIDESCREEN=0`, `SSTHEH_WIDE_2D=0`, `SSTHEH_WIDE_HUD=0`,
`SSTHEH_WIDE_SELECT=0`, `SSTHEH_INTERP=0`, `SSTHEH_FONT=arquivo|0`, `SSTHEH_TEXTURES=0|pasta`,
`SSTHEH_50HZ=1`, `SSTHEH_30FPS_SCENES=1`, `SSTHEH_PAD2=1`, `SSTHEH_MEMCARD=pasta`, `SSTHEH_UNLOCK_ALL=1`, e as
do menu de treino: `SSTHEH_TRAINING`, `SSTHEH_AUTOMASH`, `SSTHEH_REVIVAL`, `SSTHEH_BBCOUNTER`: veja o README.

## Depurando o código recompilado com gdb

As funções recompiladas são C comum com o endereço do jogo no nome, então um breakpoint numa função do
jogo é `break F_002F9140`, e os registradores dela estão em `c->r[n]` (`p/x c->r[4].w[0]` é o a0). A
memória do jogo é `rt_ram` (`x/4wx rt_ram + 0x00500204`). Compile com `-O0` na regra `cc` do
`build.ninja` para andar linha a linha numa função que estiver estudando.
