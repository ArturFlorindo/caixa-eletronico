# Regras de negócio — Caixa Eletrônico

Este documento descreve as regras implementadas na versão inicial do simulador.

## Estado inicial
- O programa inicia com saldo de R$ 1.000,00.
- O saldo é mantido em memória durante a execução.
- Ao encerrar o programa, o saldo não é salvo em arquivo ou banco de dados.

## Consulta
- A opção 1 apresenta o saldo atual.
- A consulta não altera o saldo.

## Depósito
- A opção 2 solicita um valor.
- Somente valores maiores que zero são aceitos.
- Um depósito válido é somado ao saldo.
- Valores iguais a zero, negativos ou não numéricos são rejeitados.

## Saque
- A opção 3 solicita um valor.
- Somente valores maiores que zero são aceitos.
- O saque é recusado quando o valor solicitado supera o saldo.
- Um saque válido é subtraído do saldo.

## Encerramento
- A opção 4 encerra o laço principal.
- O programa apresenta uma mensagem de despedida e o saldo final.

## Limitações conhecidas
- Não existe autenticação de usuário ou senha.
- Não há persistência de dados entre execuções.
- Não há conexão com banco, rede ou sistema bancário real.
- O projeto é didático e não deve ser usado para transações financeiras reais.
- A representação monetária utiliza `double`, adequada ao exercício introdutório; sistemas financeiros reais devem adotar representação decimal apropriada e regras rigorosas de precisão.
