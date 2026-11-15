# Caixa Eletrônico Simples

Projeto acadêmico em **linguagem C** que simula operações básicas de um caixa eletrônico por meio de um menu interativo no terminal.

O sistema permite consultar o saldo, realizar depósitos, efetuar saques e encerrar a execução. O saldo inicial é de **R$ 1.000,00**.

> **Projeto educacional:** este programa é uma simulação local. Não possui autenticação, persistência de dados, conexão bancária ou capacidade de realizar transações reais.

## Objetivo

Praticar fundamentos da programação estruturada em C usando uma situação cotidiana como contexto. O exercício trabalha entrada e saída de dados, variáveis, operadores, decisões, repetição, funções auxiliares e validação básica.

## Funcionalidades

| Opção | Funcionalidade | Descrição |
|---|---|---|
| 1 | Consultar saldo | Exibe o saldo disponível. |
| 2 | Realizar depósito | Adiciona ao saldo um valor maior que zero. |
| 3 | Realizar saque | Subtrai um valor positivo, desde que exista saldo suficiente. |
| 4 | Sair | Exibe o saldo final e encerra o programa. |

## Regras de negócio

1. O saldo começa em R$ 1.000,00, definido pela constante `SALDO_INICIAL`.
2. Depósitos precisam ser maiores que zero.
3. Saques precisam ser maiores que zero.
4. Não é permitido sacar mais do que o saldo disponível.
5. Operações válidas atualizam o saldo em memória.
6. O menu continua aparecendo até que o usuário escolha a opção 4.
7. Entradas não numéricas são tratadas como inválidas nas leituras de opção e valor.

As regras estão descritas com mais detalhes em [docs/REGRAS_DE_NEGOCIO.md](docs/REGRAS_DE_NEGOCIO.md).

## Estrutura de pastas

```text
caixa-eletronico/
├── src/
│   └── main.c
├── docs/
│   └── REGRAS_DE_NEGOCIO.md
├── .gitignore
├── Makefile
└── README.md
```

## Tecnologias e ferramentas

- Linguagem C
- GCC (compilador recomendado)
- Visual Studio Code (editor recomendado)
- Git e GitHub (versionamento e publicação)

## Como compilar e executar

Instale um compilador C, como o GCC, e verifique a instalação:

```bash
gcc --version
```

Clone o repositório:

```bash
git clone https://github.com/ArturFlorindo/caixa-eletronico.git
cd caixa-eletronico
```

Compile na raiz do projeto:

```bash
gcc -Wall -Wextra -std=c11 src/main.c -o caixa-eletronico
```

Execute no Linux ou macOS:

```bash
./caixa-eletronico
```

No Windows (PowerShell, conforme o ambiente GCC instalado):

```powershell
.\caixa-eletronico.exe
```

### Usar o Makefile

Em ambientes que tenham `make` instalado:

```bash
make
make run
make clean
```

## Exemplo de execução

Ao iniciar, o sistema apresenta uma mensagem de boas-vindas e o menu:

```text
=====================================
       CAIXA ELETRONICO SIMPLES
=====================================

Bem-vindo ao nosso caixa eletronico!
Este sistema permite consultar saldo,
realizar depositos e efetuar saques.
Esperamos que tenha uma boa experiencia!

========== MENU PRINCIPAL ==========
1 - Consultar saldo
2 - Realizar deposito
3 - Realizar saque
4 - Sair
====================================
Escolha uma opcao:
```

### Consulta de saldo

Com o saldo inicial, selecionar a opção 1 apresenta:

```text
Seu saldo atual e: R$ 1000.00
```

### Depósito

Ao informar 250 como depósito:

```text
Deposito realizado com sucesso!
Novo saldo: R$ 1250.00
```

### Saque

Ao sacar 300:

```text
Saque realizado com sucesso!
Novo saldo: R$ 950.00
```

### Saldo insuficiente

Se o saldo for R$ 950,00 e o usuário tentar sacar R$ 2.000,00:

```text
Saldo insuficiente. Saque nao autorizado.
Saldo disponivel: R$ 950.00
```

## Conceitos de C utilizados

- **Variáveis e tipos:** `int` para a opção e `double` para saldo e valor.
- **Constante:** `SALDO_INICIAL` centraliza o valor inicial.
- **Entrada e saída:** `scanf` e `printf` recebem e apresentam informações.
- **Estruturas condicionais:** `if`, `else if` e `else` validam valores e saldo.
- **Estrutura `switch`:** direciona o programa conforme a opção escolhida.
- **Laço `do-while`:** repete o menu até a opção de encerramento.
- **Funções auxiliares:** `exibirCabecalho()`, `exibirMenu()` e `limparEntrada()` organizam partes do programa.

## Testes manuais sugeridos

| Cenário | Entrada | Resultado esperado |
|---|---|---|
| Consultar saldo inicial | Opção 1 | Exibir R$ 1.000,00 |
| Depositar valor válido | Opção 2, valor 250 | Saldo passa a R$ 1.250,00 |
| Depositar zero | Opção 2, valor 0 | Rejeitar depósito |
| Sacar valor válido | Opção 3, valor 300 | Descontar R$ 300,00 |
| Sacar acima do saldo | Opção 3, valor maior que o saldo | Recusar saque e manter saldo |
| Opção inexistente | Opção 9 | Exibir mensagem de opção inválida |
| Entrada não numérica | Texto no menu | Exibir mensagem de entrada inválida |
| Encerrar | Opção 4 | Exibir despedida e saldo final |

## Possíveis evoluções

As ideias abaixo são possibilidades para versões futuras, não funcionalidades já implementadas:

- dividir cada operação em uma função própria;
- registrar histórico de depósitos e saques;
- salvar o saldo em arquivo para manter os dados entre execuções;
- implementar autenticação didática;
- desenvolver testes automatizados;
- criar uma interface gráfica.

## Aprendizados

O desenvolvimento deste projeto ajuda a praticar lógica de programação e a compreender como diferentes estruturas da linguagem C trabalham em conjunto. A simulação também reforça a importância de validar entradas, proteger o estado do programa e informar com clareza o resultado de cada operação.

## Autor

**Artur Vittoretti**  
Estudante de Análise e Desenvolvimento de Sistemas.

Projeto desenvolvido como atividade prática de aprendizagem em programação.

---

**Status:** versão acadêmica inicial — aplicação de terminal, sem integração com serviços financeiros reais.
