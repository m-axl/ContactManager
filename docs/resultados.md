# Resultados Concluídos

Este documento lista os resultados concluídos desde o início do projeto ContactManager até o momento atual.

## 1. Objetivo e escopo definidos
- Projeto planejado como um sistema de gerenciamento de contatos em terminal.
- Escopo definido para operações básicas: adicionar, listar, buscar, remover e persistência local.
- Arquitetura modular definida com separação entre código-fonte (`src/`), cabeçalhos (`include/`) e documentação (`docs/`).

## 2. Estrutura do projeto organizada
- Diretório `docs/` contém a documentação do projeto.
- Diretório `include/` contém definições de tipos e assinaturas de funções.
- Diretório `src/` contém a implementação em C.
- `README.md` e `docs/README.md` fornecem visão geral e índice da documentação.

## 3. Implementação parcial do núcleo
- `include/contact.h` define a struct `Contact` com campos `name` e `phone`.
- `src/contact.c` implementa a função `addContact` e a função `listContacts`.
- `include/storage.h` prototipa `saveContacts` e `loadContacts`.
- `src/storage.c` contém a base da lógica de persistência, mas ainda precisa de correções.
- `src/main.c` está presente, mas ainda não possui o fluxo de menu completo.

## 4. Documentação e acompanhamento
- `docs/diario/diario.md` registra o histórico de desenvolvimento por dia e sequência de entregas.
- `docs/testes.md` apresenta o primeiro caso de teste e o status atual de testes.
- `docs/requisitos.md`, `docs/arquitetura.md` e `docs/modelos-de-dados.md` foram atualizados para refletir a implementação C.
- `docs/README.md` foi criado como índice de documentação.

## 5. Estado atual do projeto
- Implementação de entrada e listagem de contatos presente, mas com ajustes necessários.
- Persistência em arquivo ainda precisa ser corrigida e validada.
- Menu principal e fluxo de execução não estão implementados em `src/main.c`.

## 6. Próximos resultados esperados
- Corrigir `src/storage.c` para permitir salvar e carregar contatos corretamente.
- Ajustar `src/contact.c` para corrigir a listagem de contatos.
- Implementar `src/main.c` com menu interativo e chamadas a rotinas de contato.
- Validar o primeiro caso de teste e incluir testes de persistência e remoção.

## Observação
- A documentação foi reorganizada para oferecer um guia mais claro e alinhado ao estado atual do projeto.
