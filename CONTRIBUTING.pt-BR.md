# Contribuindo

Toda ajuda é bem-vinda: decompilar funções, melhorar o port, ou testar e relatar problemas. Issues e pull
requests em português também são bem-vindos. English: [CONTRIBUTING.md](CONTRIBUTING.md).

## A regra principal

**Nada do jogo entra no repositório**: nem o executável, nem a ISO, nem arquivos extraídos dela (texturas,
sons, modelos). O `.gitignore` já exclui `disc/`, `asm/`, `assets/` e `build/`. Confira o `git status` antes
de cada commit.

## Testando

Rode o port (veja o README) e abra uma issue com:

- o que aconteceu e onde (tela, personagem, modo de jogo);
- sua GPU, driver e distribuição;
- a saída do terminal (`./play.sh -v 2> log.txt` dá mais detalhes);
- se o problema some com `SSTHEH_GS=sw` (renderizador por software).

## Decompilando uma função

O objetivo é um C++ que, compilado com o compilador do jogo, produza **exatamente** as mesmas instruções.

`asm/` e `src/` não estão no repositório: `asm/` é gerado pelo splat a partir do seu disco quando você
compila (`./build.sh`), e `src/` é onde o código decompilado vai ficar quando houver (ainda não há). Sobre o
executável e o compilador: [docs/recon.md](docs/recon.md).

1. Escolha uma função em `asm/game_*.s` (cada uma fica entre `glabel` e `endlabel`). Funções folha pequenas
   (que não chamam nada) são o melhor começo. `tools/recon/xref.py` mostra quem a chama e que strings usa.
2. Escreva o C++ em `src/…` com o nome `func_XXXXXXXX`, ou dê um nome e adicione em `config/symbol_addrs.txt`.
3. Rode `tools/fdiff.py src/arquivo.cpp` até a função mostrar `OK`.
4. Rode `ninja`: o build deve continuar terminando com `OK: build matches the original`.

O [decomp.me](https://decomp.me) ajuda a experimentar: use o compilador Metrowerks CodeWarrior PS2 3.0.1 com
`-O3`.

## Trabalhando no port

- O código nativo fica em `port/`; o recompilador em `tools/recomp/recomp.py`.
- Comece pelo [índice dos docs](docs/README.md), depois [docs/arquitetura.pt-BR.md](docs/arquitetura.pt-BR.md)
  (como as partes se encaixam) e [docs/depuracao.pt-BR.md](docs/depuracao.pt-BR.md) (logs, imagens, dumps de
  memória, profiling).
- Para trocar uma função do jogo por uma nativa, adicione o endereço em `port/hle.txt` e implemente em
  `port/hle/` (inclua `hle.h`); dê nome aos endereços e offsets do jogo em `port/hle/game.h`.
- Siga o estilo do arquivo que está editando (C, comentários curtos explicando o hardware do PS2).
- Confira que o jogo ainda chega à tela de título e a uma luta. `--shot N,M` salva capturas sem janela, útil
  para comparar antes e depois.

## Pull requests

- Um assunto por PR, com uma descrição curta do que muda e de como foi testado.
- Mensagens de commit no imperativo ou descritivas, como as do histórico.
