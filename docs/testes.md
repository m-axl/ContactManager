# Testes

## 2026-06-05 - Primeiro caso de teste
Objetivo: validar a funcionalidade de adicionar e listar contatos com a implementação atual.

Passos:
1. Compilar o projeto e garantir que o código atual tenha pelo menos o fluxo básico funcional.
2. Executar o programa e selecionar a opção de adicionar contato.
3. Inserir um nome simples, por exemplo: `João`.
4. Inserir um telefone simples, por exemplo: `11999999999`.
5. Selecionar a opção de listar contatos.

Resultado esperado:
- O contato `João` deve aparecer na listagem com o telefone `11999999999`.
- A aplicação não deve travar ou apresentar erro de execução ao listar contatos.

Observações:
- Essa validação inicial foca em `src/contact.c`, `src/main.c` e no fluxo básico de interação por terminal.
- A persistência em arquivo deve ser validada observando a criação ou atualização de `data/contacts.txt`.

## Situação atual de testes
- O fluxo de adicionar, listar, salvar e carregar contatos já pode ser testado manualmente.
- Existe registro de teste funcional em `tests/2026-06-09-add-list-persist.md`.
- Um próximo caso de teste deve incluir busca e remoção assim que essas funções forem implementadas.
- A recarga dos dados após reiniciar o programa deve continuar sendo validada em testes de regressão.

## Histórico de testes executados
- Os casos de teste registrados são armazenados em `tests/`.
- Cada arquivo contém data, objetivo, comando, saída, erros e status.
- Exemplo: `tests/2026-06-09-add-list-persist.md`.
