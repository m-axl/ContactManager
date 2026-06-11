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

## 3. Implementação atual do núcleo
- `include/contact.h` define a struct `Contact` com campos `name` e `phone`.
- `src/contact.c` implementa a função `addContact` e a função `listContacts`.
- `include/storage.h` prototipa `saveContacts` e `loadContacts`.
- `src/storage.c` implementa salvamento e carregamento em `data/contacts.txt`.
- `src/main.c` possui menu interativo para adicionar contatos, listar contatos e sair salvando os dados.

## 4. Documentação e acompanhamento
- `diario/diario.md` registra o histórico de desenvolvimento por dia e sequência de entregas.
- `docs/testes.md` apresenta o primeiro caso de teste e o status atual de testes.
- `docs/requisitos.md`, `docs/arquitetura.md` e `docs/modelos-de-dados.md` foram atualizados para refletir a implementação C.
- `docs/README.md` foi criado como índice de documentação.

## 5. Estado atual do projeto
- Fluxo básico do CLI implementado: carregar, adicionar, listar, salvar e encerrar.
- Persistência local em arquivo implementada com criação do diretório `data/` ao salvar.
- Busca e remoção ainda não estão implementadas no menu nem em `src/contact.c`.
- Validação de entrada ainda é simples e deve ser aprimorada.

## 6. Próximos resultados esperados
- Implementar busca de contatos por nome ou telefone.
- Implementar remoção de contatos.
- Atualizar o menu principal com opções de busca e remoção.
- Ampliar os testes funcionais para cobrir busca, remoção e persistência após reiniciar o programa.

## Observação
- A documentação foi reorganizada para oferecer um guia mais claro e alinhado ao estado atual do projeto.
