# Modelo de Dados

Este documento descreve o modelo de dados atual do ContactManager em C.

## Estrutura de Contato

A estrutura utilizada em `include/contact.h` é:

```c
#define MAX_NAME 100
#define MAX_PHONE 20

typedef struct {
    char name[MAX_NAME];
    char phone[MAX_PHONE];
} Contact;
```

### Campos
- `name` — nome do contato, até 99 caracteres.
- `phone` — telefone do contato, até 19 caracteres.

## Armazenamento em memória

Os contatos são mantidos em um vetor de `Contact` em memória durante a execução do programa.

## Formato de persistência

O arquivo de dados esperado é `data/contacts.txt`. Cada contato deve estar em uma linha no formato:

```
nome,telefone
```

Exemplo:

```
João,11999999999
Maria,21988887777
```

## Limitações atuais
- O modelo atual não inclui campos de e-mail, ID ou categorias.
- A implementação de persistência ainda não está concluída.
- Caso o diretório `data/` não exista, a aplicação deve criar o diretório antes de salvar os dados.

## Possíveis extensões futuras
- adicionar campo `email`
- adicionar campo `id` único para cada contato
- suportar múltiplos telefones por contato
- usar formato CSV mais robusto ou JSON
