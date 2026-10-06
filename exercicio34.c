#include <stdio.h>

int main() {
    char produto[50], continuar;
    int qtdVendas = 0, totalProdutosVendidos = 0;
    float qtd, precoUnitario, totalVenda, faturamentoTotal = 0, maiorVenda = 0;

    do {
        printf("Digite o nome do produto: ");
        scanf("%49s", produto);

        printf("Digite a quantidade: ");
        scanf("%f", &qtd);

        printf("Digite o preco unitario: ");
        scanf("%f", &precoUnitario);

        totalVenda = qtd * precoUnitario;
        faturamentoTotal += totalVenda;
        totalProdutosVendidos += qtd;
        qtdVendas++;

        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
        }

        printf("Deseja cadastrar outra venda? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("Quantidade de vendas realizadas: %d\n", qtdVendas);
    printf("Quantidade total de produtos vendidos: %d\n", totalProdutosVendidos);
    printf("Faturamento total: R$ %.2f\n", faturamentoTotal);
    printf("Maior venda realizada: R$ %.2f\n", maiorVenda);

    return 0;
}