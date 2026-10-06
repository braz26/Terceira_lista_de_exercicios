#include <stdio.h>

int main() {
    int qtdAlunos, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    for (i = 1; i <= qtdAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / qtdAlunos;

    printf("Media geral da turma: %.2f\n", media);

    return 0;
}