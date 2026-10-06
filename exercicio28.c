#include <stdio.h>

int main() {
    int numero, maior, i;

    printf("Digite o 1o numero: ");
    scanf("%d", &numero);

    maior = numero;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero informado foi: %d\n", maior);

    return 0;
}