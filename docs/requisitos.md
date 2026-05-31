# ContactManager - Requisitos Do Sistema 

## Introdução 
ContactManager é um sistema de gerenciamento de contatos em ambiente de terminal. Seu propósito é permitir o armazenamento, consulta, remoção e persitência de contatos de forma simples, organizada e confiável.

---
## 1.2 Escopo 
O sistema deverá operar localmente em um computador, sem depempências de redes ou banco de dados externo.

```
Os dados serão armazenados em arquivo local 
```

# Requisitos Funcionais 

| ID    |        Nome       |     Descrição       | Prioridades |
|-------|-------------------|---------------------|-------------|
| RF-01 | Adicionar Contato | Cadastrar Contatato | Alta | UC-1 |
| RF-02 | Listar Contatos   | Exibir Contatos     | Alta | UC-2 |
| RF-03 | Buscar Contatos   | Buscar Por Nomes    | Alta | UC-3 |
| RF-04 | Remover Contato   | Excluir Contato     | Alta | UC-4 |
| RF-05 | Salvar Dados      | Persistir Dados     | Alta | UC-5 | 
| RF-06 | Carregar Dados    | Ler Dados Salvos    | Alta | UC-6 | 
| RF-07 | Encerrar Programa | O Sistema Encerra   | Alta | UC-7 | 
<!--Podem aparecer ou surgir mais requisitos caso seja necessário, contudo este é o fundamento mínimo para a aplicação -->
---
# Requisitos Não Funcionais 
| ID     |       Nome       |         Descrição             | 
|--------|------------------|-------------------------------|
| RNF-01 |  Plataforma      | Deve Ser Compativel Com Linux | 
| RNF-02 |  Interface       | Exclusivamente Via Terminal   | 
| RNF-03 |  Persistência    | Dados Disp. Após Enc. Do Prog.|
| RNF-04 |  Desempenho      | O Sist. Deve Resp. Imed.  Ate | 
| RNF-05 |  Simplicidade    | Possuir Navegação Em Menu Num.|    
| RNF-06 |  Manutenibiidade | O Código Deve Ser Org.        | 
<!--Podem ser adicionados mais RNF ao longo do projeto-->
---

## Requisitos De Engenharia 
| ID    |       Nome                       | Descrição                                        |
|-------|----------------------------------|--------------------------------------------------|
| RE-01 | Modularização                    | Cada Funcionaldidade Deve Possuir Função Pròpria |
| RE-02 | Separação De Responsabilidadeas  | Interface, Lògica e Persistência Devem Permanecer Desacopladas |
| RE-03 | Tratamento De Erros              | Operações Crìticas Devem Validar Entradas E Falhas | 
| RE-04 | Uso De Constantes                | Limites De Sistema Devem Usar Constantes Simbolicas |
| RE-05 | Estruturas De Dados              | Os Contatos Devem Ser Representados Por Estruturas |
| RE-06 | Organização De Projetos          | Código-Fonte, Documentação, E Dados Devem Permanecer Separados |
<!--Requisitos base iniciais acrescentados parcialmente-->
---- 

## Restrições 
|   ID |  Nome          | Descrição          |  
|------|----------------|--------------------|
| RC-01 | Linguagem     | Deve Ser Imp. Em C |
| RC-02 | Ambiente      | Deve Executar Em Linux |
| RC-03 | Interface     | Deve Usar Apenas CLI |
| RC-04 | Armazenamento | Persistidos Em Local |
| RC-05 | BD            | Sem BD Externo  |
| RC-06 | Rede          | Sem Comunicação De Rede |
| RC-07 | Capacidade    | Deve Suportar Até 100 CTT | 
| RC-08 | Dependências  | Apenas Libc Padrão De C  | 
| RC-09 | Execução      | Deve Operar Localmente Em Uma Unica Máquina | 
<!--Podem surgir mais restruções ao longo do projeto, rever e evoluir conforme planejado-->
---

## Critérios De Aceitação 

O ContactManager será considerado funcional quando: 

* Permitir adicionar contatos 
* Permitir listar contatos 
* Permitir buscar contatos 
* Permitir remover contatos 
* Salvar dados corretamente 
* Carregar dados corretamente 
* Encerrar sem perda de informações 