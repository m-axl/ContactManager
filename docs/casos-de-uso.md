# Casos de Uso

## Descrição geral
Este documento apresenta os casos de uso principais do sistema ContactManager em diagramas Mermaid.

## Caso de Uso Principal
```mermaid
flowchart TB
    actor[Usuário]
    subgraph Sistema ContactManager
      A[Adicionar contato]
      B[Listar contatos]
      C[Buscar contato]
      D[Remover contato]
      E[Salvar dados em arquivo]
      F[Carregar dados ao iniciar]
    end

    actor --> A
    actor --> B
    actor --> C
    actor --> D
    actor --> E
    actor --> F
```

## Casos de Uso Detalhados
### Caso de Uso: Gerenciar contatos
```mermaid
flowchart TB
    actor[Usuário]
    subgraph Gerenciamento de contatos
      A[Adicionar contato]
      B[Listar contatos]
      C[Buscar contato]
      D[Remover contato]
    end

    actor --> A
    actor --> B
    actor --> C
    actor --> D
```

### Caso de Uso: Persistência de dados
```mermaid
flowchart TB
    actor[Usuário]
    subgraph Persistência
      A[Salvar dados em arquivo]
      B[Carregar dados ao iniciar]
    end

    actor --> A
    actor --> B
```

## Notas
- O ator principal é o usuário do terminal.
- O sistema suporta operações básicas de CRUD e persistência entre execuções.
- Os diagramas mostram a interação do usuário com as funcionalidades de gerenciamento e armazenamento.
