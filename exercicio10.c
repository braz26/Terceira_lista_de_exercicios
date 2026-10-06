#include <stdio.h>

int main() {
    char produto[50];
    int quantidade;
    float precoUnitario, total;

    printf("Digite o nome do produto: ");
    scanf("%49s", produto);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Digite o preco unitario: ");
    scanf("%f", &precoUnitario);

    total = quantidade * precoUnitario;

    printf("Produto: %s\n", produto);
    printf("Quantidade: %d\n", quantidade);
    printf("Valor total da compra: R$ %.2f\n", total);

    return 0;
}