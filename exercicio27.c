#include <stdio.h>

int main() {
    int aprovados = 0, reprovados = 0, i;
    float nota, percentual;

    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    percentual = (aprovados * 100.0) / 10.0;

    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Percentual de aprovacao: %.2f%%\n", percentual);

    return 0;
}