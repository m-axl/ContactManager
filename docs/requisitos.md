# ContactManager - Requisitos do Sistema

## Introdução

ContactManager é um sistema de terminal para gerenciamento local de contatos. O objetivo é fornecer operações básicas de cadastro, listagem e persistência em arquivo, evoluindo depois para consulta e remoção.

## Escopo

O sistema opera localmente e não depende de rede ou banco de dados externo na fase inicial.

> Os dados são armazenados em arquivo local na fase atual. Há um plano de evolução para adotar PostgreSQL como backend e oferecer automação com Python e interface gráfica.

## Requisitos Funcionais

| ID    | Nome              | Descrição                            | Prioridade | Caso de Uso |
|-------|-------------------|--------------------------------------|------------|-------------|
| RF-01 | Adicionar contato | Cadastrar novo contato em memória    | Alta       | UC-1        |
| RF-02 | Listar contatos   | Exibir contatos cadastrados          | Alta       | UC-2        |
| RF-03 | Buscar contatos   | Buscar contatos por nome ou telefone | Alta       | UC-3        |
| RF-04 | Remover contato   | Excluir contato existente            | Alta       | UC-4        |
| RF-05 | Salvar dados      | Persistir contatos em arquivo        | Alta       | UC-5        |
| RF-06 | Carregar dados    | Ler contatos ao iniciar o sistema    | Alta       | UC-6        |
| RF-07 | Encerrar          | Finalizar o programa de forma limpa  | Alta       | UC-7        |

## Estado dos Requisitos Funcionais

| ID    | Estado        | Observação |
|-------|---------------|------------|
| RF-01 | Implementado  | Disponível na opção 1 do menu |
| RF-02 | Implementado  | Disponível na opção 2 do menu |
| RF-03 | Planejado     | Declarado no cabeçalho, mas ainda sem implementação no menu |
| RF-04 | Planejado     | Declarado no cabeçalho, mas ainda sem implementação no menu |
| RF-05 | Implementado  | Executado ao sair do programa |
| RF-06 | Implementado  | Executado ao iniciar o programa |
| RF-07 | Implementado  | Disponível na opção 3 do menu |

## Requisitos Não Funcionais

| ID     | Nome            | Descrição                                           |
|--------|-----------------|-----------------------------------------------------|
| RNF-01 | Plataforma      | Compatível com Linux                                 |
| RNF-02 | Interface       | Interface de linha de comando (CLI)                  |
| RNF-03 | Persistência    | Manter dados entre execuções                         |
| RNF-04 | Simplicidade    | Navegação clara por menu numérico                    |
| RNF-05 | Manutenibilidade| Código organizado e modular                          |
| RNF-06 | Desempenho      | Resposta rápida para operações básicas               |
| RNF-07 | Backend         | Suportar evolução para PostgreSQL como backend       |

## Requisitos de Engenharia

| ID    | Nome                          | Descrição                                                        |
|-------|-------------------------------|------------------------------------------------------------------|
| RE-01 | Modularização                 | Cada funcionalidade deve estar em módulo separado                |
| RE-02 | Separação de responsabilidades| Interface, lógica de negócio e persistência devem ser desacopladas|
| RE-03 | Tratamento de erros           | Entradas e falhas devem ser validadas                             |
| RE-04 | Uso de constantes             | Limites e tamanhos devem usar constantes simbólicas              |
| RE-05 | Estruturas de dados           | Contatos devem ser representados por `struct`                    |
| RE-06 | Organização de projeto        | Código, documentação e dados devem permanecer separados          |

## Restrições

| ID     | Nome           | Descrição                                               |
|--------|----------------|---------------------------------------------------------|
| RC-01  | Linguagem      | Implementar em C                                         |
| RC-02  | Ambiente       | Executar em Linux                                        |
| RC-03  | Interface      | Usar somente CLI                                         |
| RC-04  | Armazenamento  | Persistir em arquivo local na fase atual. Evoluir para PostgreSQL posteriormente |
| RC-05  | Base de dados  | Não usar banco de dados externo na fase inicial         |
| RC-06  | Rede           | Sem comunicação de rede                                  |
| RC-07  | Capacidade     | Suportar até 100 contatos                                |
| RC-08  | Dependências   | Usar apenas a biblioteca padrão do C                     |
| RC-09  | Execução       | Operar localmente em uma única máquina                   |

## Critérios de aceitação

O ContactManager será considerado funcional quando:

* for possível adicionar contatos
* for possível listar contatos
* os dados forem salvos corretamente
* os dados forem carregados corretamente
* o programa encerrar sem perda de informações

Para o ciclo completo planejado, também será necessário:

* buscar contatos por nome ou telefone
* remover contatos cadastrados

## Estado atual

A implementação atual está em desenvolvimento. O CLI básico já cobre adicionar, listar, carregar e salvar contatos. Busca e remoção permanecem como funcionalidades planejadas.
