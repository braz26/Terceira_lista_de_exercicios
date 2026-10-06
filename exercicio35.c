#include <stdio.h>

int main() {
    int qtdAlunos, i, aprovados = 0, recuperacao = 0, reprovados = 0;
    char nome[50];
    float nota1, nota2, media, somaMedias = 0, maiorMedia = -9999, menorMedia = 9999;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    for (i = 1; i <= qtdAlunos; i++) {
        printf("Aluno %d\n", i);
        printf("Nome: ");
        scanf("%49s", nome);

        printf("Nota da primeira avaliacao: ");
        scanf("%f", &nota1);

        printf("Nota da segunda avaliacao: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2.0;

        if (media >= 7) {
            aprovados++;
            printf("Aprovado\n");
        } else if (media >= 5) {
            recuperacao++;
            printf("Recuperacao\n");
        } else {
            reprovados++;
            printf("Reprovado\n");
        }

        somaMedias += media;

        if (media > maiorMedia) maiorMedia = media;
        if (media < menorMedia) menorMedia = media;

        printf("\n");
    }

    printf("Quantidade de alunos: %d\n", qtdAlunos);
    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade em recuperacao: %d\n", recuperacao);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Media geral da turma: %.2f\n", somaMedias / qtdAlunos);
    printf("Maior media: %.2f\n", maiorMedia);
    printf("Menor media: %.2f\n", menorMedia);

    return 0;
}