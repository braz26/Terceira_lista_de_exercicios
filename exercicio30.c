#include <stdio.h>

int main() {
    float saldo, valor;
    int opcao;

    printf("Digite o saldo inicial: ");
    scanf("%f", &saldo);

    do {
        printf("\n--- MENU ---\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Digite o valor a depositar: ");
                scanf("%f", &valor);
                saldo += valor;
                printf("Deposito realizado com sucesso.\n");
                break;

            case 3:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);

                if (valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado com sucesso.\n");
                } else {
                    printf("Saldo insuficiente.\n");
                }
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida.\n");
                break;
        }

    } while (opcao != 4);

    return 0;
}