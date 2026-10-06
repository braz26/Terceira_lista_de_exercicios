#include <stdio.h>

int main() {
    float valor, desconto, valorFinal, percentual;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor <= 100.00) {
        percentual = 0;
    } else if (valor <= 500.00) {
        percentual = 5;
    } else {
        percentual = 10;
    }

    desconto = valor * percentual / 100.0;
    valorFinal = valor - desconto;

    printf("Valor original: R$ %.2f\n", valor);
    printf("Percentual de desconto: %.0f%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}