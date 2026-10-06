#include <stdio.h>

int main() {
    float litros, precoLitro, bruto, desconto, total;

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    printf("Digite o preco do litro: ");
    scanf("%f", &precoLitro);

    bruto = litros * precoLitro;

    if (litros < 20) {
        desconto = 0;
    } else if (litros <= 40) {
        desconto = bruto * 0.03;
    } else {
        desconto = bruto * 0.05;
    }

    total = bruto - desconto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", total);

    return 0;
}