#include <stdio.h>
int main(){
    int numero1;
    int numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("A soma dos numeros %d e %d é: %d", numero1, numero2, numero1+numero2);

    return 0;
}