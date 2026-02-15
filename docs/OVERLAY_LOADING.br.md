# Sistema de Carregamento de Overlays do GT2

## Visão Geral

O GT2 usa um sistema de overlays para carregar módulos do jogo dinamicamente do CD-ROM devido ao limite de 2MB de RAM. Os overlays são compactados (DEFLATE) e carregados sob demanda.

## Arquivo Principal de Overlay

- **gt2.ovl**: Arquivo principal de overlay no CD, contém múltiplos módulos (menus, corrida, arcade, etc.)

## Funções de Carregamento de Overlay

| Função | Nome Sugerido | Arquivo | Propósito |
|--------|---------------|---------|-----------|
| load_gt2_overlay_file | LoadGT2OverlayFile | part_001 | Carrega gt2.ovl do CD, aloca buffer, copia dados |
| FUN_8005d9bc | ClearOverlayBuffer | part_001 | Limpa buffer principal de overlay (0x120654 bytes) |
| FUN_8005d9f0 | InvokeOverlayInitCallback | part_001 | Chama callback de init antes do carregamento |
| FUN_8005da3c | InitializeOverlayByIndex | part_001 | Carrega overlay por índice (config de PTR_LAB_80091174) |
| FUN_8005da7c | LoadOverlayWithConfig | part_001 | Carregamento completo: copia CD → descomprime → flush cache → limpa |
| FUN_8005dad8 | PrepareAndLoadOverlay | part_001 | Carregamento simplificado quando dados já configurados |
| FUN_80082fac | ProcessOverlayData | part_007 | Descomprime stream DEFLATE (chama FUN_800847d0) |
| FUN_800847d0 | InflateDeflateStream | part_007 | Descompressão DEFLATE (RFC 1951) |

## Fluxo de Carregamento

```
FUN_8005d6e0 (entrada principal)
  → FUN_8005d9f0 (invoca callback)
  → FUN_8005da3c(1) (carrega overlay índice 1)
    → FUN_8005da7c(param_1, config, 0,0,0,0)
      → FUN_8005dad8(param_1)
        → FUN_8007ab74 (copia do CD para buffer)
        → FUN_80082fac(dest, load_gt2_overlay_file)
          → FUN_800847d0 (descompressão DEFLATE)
        → FlushCache
        → FUN_8005d9bc (limpa buffer)
```

## Globais Importantes

- **DAT_801c93e0**: Tamanho descomprimido
- **DAT_801c93d0**: Endereço de carregamento (base de setor do CD)
- **DAT_801c93e8**: Endereço base de memória
- **DAT_800a8d5c**: Buffer principal de overlay
- **DAT_801ef61c**: Tabela de offsets de overlay (por índice)
- **PTR_LAB_80091174**: Array de configuração de overlays
- **DAT_801c942c**: Callback de init de overlay

## Contextos de Uso

1. **Inicialização do jogo** (FUN_8005d6e0): Carrega overlay principal via FUN_8005da3c(1)
2. **Init de gráficos** (loop FUN_80010e14): FUN_80082fac com config PTR_LAB_8003322a
3. **Arcade/global** (part_009, part_012): FUN_80082fac com loaders customizados
