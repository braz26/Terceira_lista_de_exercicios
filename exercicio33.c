#include <stdio.h>

int main() {
    int voto, cand1 = 0, cand2 = 0, cand3 = 0, total = 0;

    printf("Votacao\n");
    printf("Digite 1, 2 ou 3 para votar. Digite 0 para encerrar.\n");

    do {
        printf("Seu voto: ");
        scanf("%d", &voto);

        if (voto == 1) {
            cand1++;
            total++;
        } else if (voto == 2) {
            cand2++;
            total++;
        } else if (voto == 3) {
            cand3++;
            total++;
        } else if (voto != 0) {
            printf("Voto invalido.\n");
        }

    } while (voto != 0);

    printf("Votos candidato 1: %d\n", cand1);
    printf("Votos candidato 2: %d\n", cand2);
    printf("Votos candidato 3: %d\n", cand3);
    printf("Total de votos: %d\n", total);

    if (cand1 > cand2 && cand1 > cand3) {
        printf("Candidato vencedor: 1\n");
    } else if (cand2 > cand1 && cand2 > cand3) {
        printf("Candidato vencedor: 2\n");
    } else if (cand3 > cand1 && cand3 > cand2) {
        printf("Candidato vencedor: 3\n");
    } else {
        printf("Empate.\n");
    }

    return 0;
}