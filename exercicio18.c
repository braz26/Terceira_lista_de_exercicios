#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) {
        printf("Crianca\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("Adolescente\n");
    } else if (idade >= 18 && idade <= 59) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}