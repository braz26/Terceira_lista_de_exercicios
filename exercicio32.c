#include <stdio.h>

int main() {
    int entrada, saida, horas, total;

    printf("Digite a hora de entrada: ");
    scanf("%d", &entrada);

    printf("Digite a hora de saida: ");
    scanf("%d", &saida);

    horas = saida - entrada;

    if (horas <= 0) {
        printf("Tempo de permanencia: 0 hora\n");
        printf("Valor total: R$ 0.00\n");
        return 0;
    }

    total = 10 + (horas - 1) * 5;

    printf("Tempo de permanencia: %d hora(s)\n", horas);
    printf("Valor total: R$ %d.00\n", total);

    return 0;
}