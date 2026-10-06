#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("O maior e: %d\n", a);
    } else {
        printf("O maior e: %d\n", b);
    }

    return 0;
}