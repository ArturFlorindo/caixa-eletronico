#include <stdio.h>

#define SALDO_INICIAL 1000.00

/*
 * Projeto: Caixa Eletronico Simples
 * Objetivo: simular consulta de saldo, deposito e saque.
 * Saldo inicial definido internamente: R$ 1.000,00.
 */

void limparEntrada(void) {
    int caractere;
    while ((caractere = getchar()) != '\n' && caractere != EOF) {
        /* Descarta caracteres restantes da entrada. */
    }
}

void exibirCabecalho(void) {
    printf("=====================================\n");
    printf("       CAIXA ELETRONICO SIMPLES      \n");
    printf("=====================================\n\n");
    printf("Bem-vindo ao nosso caixa eletronico!\n");
    printf("Este sistema permite consultar saldo,\n");
    printf("realizar depositos e efetuar saques.\n");
    printf("Esperamos que tenha uma boa experiencia!\n\n");
}

void exibirMenu(void) {
    printf("\n========== MENU PRINCIPAL ==========\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Realizar deposito\n");
    printf("3 - Realizar saque\n");
    printf("4 - Sair\n");
    printf("====================================\n");
    printf("Escolha uma opcao: ");
}

int main(void) {
    int opcao = 0;
    double saldo = SALDO_INICIAL;
    double valor;

    exibirCabecalho();

    do {
        exibirMenu();

        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada invalida. Digite um numero de 1 a 4.\n");
            limparEntrada();
            opcao = 0;
            continue;
        }
        limparEntrada();

        switch (opcao) {
            case 1:
                printf("\nSeu saldo atual e: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("\nDigite o valor que deseja depositar: R$ ");
                if (scanf("%lf", &valor) != 1) {
                    printf("\nValor invalido. O deposito nao foi realizado.\n");
                    limparEntrada();
                    break;
                }
                limparEntrada();

                if (valor > 0) {
                    saldo += valor;
                    printf("\nDeposito realizado com sucesso!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("\nO valor do deposito deve ser maior que zero.\n");
                }
                break;

            case 3:
                printf("\nDigite o valor que deseja sacar: R$ ");
                if (scanf("%lf", &valor) != 1) {
                    printf("\nValor invalido. O saque nao foi realizado.\n");
                    limparEntrada();
                    break;
                }
                limparEntrada();

                if (valor <= 0) {
                    printf("\nO valor do saque deve ser maior que zero.\n");
                } else if (valor > saldo) {
                    printf("\nSaldo insuficiente. Saque nao autorizado.\n");
                    printf("Saldo disponivel: R$ %.2f\n", saldo);
                } else {
                    saldo -= valor;
                    printf("\nSaque realizado com sucesso!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                }
                break;

            case 4:
                printf("\nEncerrando o sistema...\n");
                printf("Obrigado por utilizar nosso caixa!\n");
                printf("Saldo final: R$ %.2f\n", saldo);
                printf("Sistema encerrado com sucesso!\n");
                break;

            default:
                printf("\nOpcao invalida. Escolha uma opcao de 1 a 4.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
