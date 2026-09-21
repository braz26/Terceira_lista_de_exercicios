#include <stdio.h>
int main(){
    char nome [50];
    
    printf("Digite seu nome: ");

    scanf("%49s", nome);
    printf("Olá, %s! Seja bem-vindo(a) à disciplina de Lógica de Programação", nome);

    return 0;
}