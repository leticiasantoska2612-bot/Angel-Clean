# Angel — cheat interno para Paladins

## Estrutura
```
Angel/
  main.cpp              # DLL interna: hooks (ProcessEvent + kiero Present), menu ImGui, todas as features
  SDK.hpp               # Agregado de headers UE3/Paladins (extraídos do SDK.rar)
  SDK/                  # Headers PL_* (classes, structs, parameters) — extraídos do SDK.rar
  types.h               # Tipos base (FVector, FRotator, TArray, TAntiCheatArray)
  globals.h             # Ponteiros globais do engine + initObjects()
  scanner.h             # Resolucao de ancoras (padroes do AkameUpdateALL4Class.CT)
  memory_manager.h      # Leitura de memoria + resolucao de RIP/call relativos
  UI/Style.h            # Tema ametista (paleta padrao da Angel)
  CMakeLists.txt        # Build x64 MSVC (AngelCore.dll + AngelLauncher.exe)
  Construir_Angel.bat   # Build sem abrir o Visual Studio IDE
  injector/main.cpp     # Launcher Win32 (injeta Angel.dll no Paladins.exe)
  injector/app.rc       # Recurso do ícone do launcher
  assets/Angel.ico      # Ícone Angel
  ext/                  # ImGui, kiero, MinHook, Detours (vendado)
  .github/workflows/angel-windows.yml  # GitHub Actions (CI Windows x64)
  README.md             # Este arquivo
  .gitignore            # Ignora binários, logs, fontes do jogo
```

## Funcionalidades (todas da lista)
- **UI fantástica** — menu ImGui dentro do jogo, tema ametista, sem janela externa de console/logs
- **(Silent) Aimbot** — head lock, aim magnet, mira silenciosa (não move a câmera visível)
- **Player ESP** — caixas, nomes, barras de vida, barras de ultimate, tracers, distância
- **Health- e Ultbar** — barras de vida e ultimate acima de cada jogador
- **Speedhack** — multiplicador de GroundSpeed/AirSpeed + time dilation
- **Instant Respawn** — respawn imediato via ServerSetReadyForRespawn
- **Match leave keybind** — sair da partida por tecla
- **Freecam / Spectatecam** — câmera livre (hitscans continuam ativos)
- **Team Swap** — tentativa de troca de task force (curar o time inimigo com Grover)
- **Habilidades ocultas** — ativação de slots de habilidade escondidos
- **Talents ocultos** — seleção de talents não listados
- **Múltiplos talents via Ability Types** — jogar com vários talents
- **No Cooldown / Escudo infinito / Ultimate infinito** — interceptação de ProcessEvent
- **Crosshair customizável** — tamanho, espessura, gap, cor, ponto central
- **Equipar Frame/Title/Emote/Spray** — cosméticos via ID
- **Login manager** — múltiplas contas (usuário/senha locais)

## Otimizações de estabilidade (anti-crash)
- `initObjects()` zera todos os ponteiros antes de cada leitura — nunca reaproveita estado estale
- SEH (`__try/__except`) em todo acesso a ponteiro do jogo
- Reentrancy guard em `HookedProcessEvent`
- One-shot restore (escreve só enquanto ativo, restaura na transição — evita rubber-band)
- Pre-warming de `StaticClass()` na injeção — evita crash do GC durante a partida
- `UnhookEverything()` em `DLL_PROCESS_DETACH` — sem jump para memória liberada na ejeção
- Fila de mensagens `WndProc` replayada na thread de render — sem data race no ImGui
- Hotkeys bloqueadas enquanto o usuário está digitando (`WantTextInput`)

## Build
1. Instale o **Visual Studio Build Tools** (workload C++ com Windows SDK).
2. Execute `Construir_Angel.bat` ou abra a pasta no VS e compile x64 Release.
3. Saídas: `build/bin/Angel.dll` e `build/bin/AngelLauncher.exe`.

## Injeção
1. Inicie o Paladins.
2. Rode `AngelLauncher.exe` — localiza o `Paladins.exe` e injeta a `Angel.dll`.
3. No jogo, pressione **F3** (ou INSERT) para mostrar/ocultar o menu.

## Commit no GitHub (do zero)
```bat
cd Angel
git init
git branch -M main
git add -A
git commit -m "feat: Angel cheat inicial para Paladins (DLL interna, tema ametista)"
git remote add origin <SUA_URL_DO_REPOSITORIO>
git push -u origin main
```

Qualquer push na branch `main` dispara `.github/workflows/angel-windows.yml`, que compila no Windows x64 via GitHub Actions e publica o artefato `Angel-x64`.

## O que entra no commit
Apenas código-fonte e scripts de build. Binários (`.dll`, `.exe`, `.pdb`, `.obj`, `.log`) e arquivos originais do jogo (`.ct`, `.zip`, `.rar`) são ignorados pelo `.gitignore`.

## Observações
- Todo o código roda dentro do processo do jogo (DLL interna). Nada de janela externa, logs de console ou overlay externo.
- Features que gravam estatísticas do servidor (cards, moedas, entitados) são do lado do servidor e não funcionam — o foco é em estado declarável pelo cliente (movimento, mira, visual, cosméticos locais).
- Compilação e execução reais requerem a build instalada do Paladins e MSVC; este repositório contém apenas o código-fonte.
