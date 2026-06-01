# Diagramas - ContactManager

Esta pasta contém os diagramas SVG do projeto ContactManager, gerados a partir dos documentos de planejamento.

## Diagramas Disponíveis

### 1. Processo de Desenvolvimento
- **Arquivo**: `processo-desenvolvimento.svg`
- **Descrição**: Fluxograma do processo simplificado de SDLC (Software Development Lifecycle)
- **Referência**: [docs/README.md](../docs/overview.md#9-processo-de-desenvolvimento)

### 2. Casos de Uso
- **Arquivo**: `casos-de-uso.svg`
- **Descrição**: Diagrama de casos de uso mostrando as interações do usuário com o sistema
- **Referência**: [docs/casos-de-uso.md](../docs/casos-de-uso.md)

### 3. UML de Classes
- **Arquivo**: `uml-classes.svg`
- **Descrição**: Diagrama UML de classes mostrando os componentes principais do sistema
- **Referência**: [docs/uml.md](../docs/uml.md)

### 4. Fluxo de Inicialização
- **Arquivo**: `fluxo-inicializacao.svg`
- **Descrição**: Fluxograma detalhado do processo de inicialização e operação do sistema
- **Referência**: [docs/fluxos.md](../docs/fluxos.md)

### 5. Modelo de Dados (ER)
- **Arquivo**: `modelo-dados.svg`
- **Descrição**: Diagrama Entidade-Relacionamento do schema PostgreSQL
- **Referência**: [docs/modelos-de-dados.md](../docs/modelos-de-dados.md)

## Como Usar

Os arquivos SVG podem ser:
- Visualizados em qualquer navegador web
- Integrados em documentação web
- Impressos em alta qualidade
- Editados com ferramentas como Inkscape ou Adobe Illustrator

## Regeneração dos Diagramas

Para regenerar os diagramas a partir dos arquivos Mermaid na documentação, use:

```bash
# Instalar mermaid-cli (se não estiver instalado)
npm install -g @mermaid-js/mermaid-cli

# Gerar todos os diagramas
mmdc -i docs/fluxos.md -o diagramas/
```

## Notas

- Todos os diagramas foram criados em formato SVG para melhor qualidade e escalabilidade
- Os diagramas refletem o planejamento técnico do projeto ContactManager
- Para atualizações, consulte os arquivos Markdown na pasta `docs/`
