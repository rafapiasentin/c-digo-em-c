#include <stdio.h>

int main() {
    int vetor1[20], vetor2[20];
    int diferenca[20], soma[20], multiplicacao[20];
    int i;

    printf("Digite 20 numeros para o primeiro vetor:\n");
    for(i = 0; i < 20; i++) {
        printf("Vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 20 numeros para o segundo vetor:\n");
    for(i = 0; i < 20; i++) {
        printf("Vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    for ( i = 0; i < 20; i++){
        diferenca[i] = vetor1[i] - vetor2[i];
        soma[i] = vetor1[i] + vetor2[i];
        multiplicacao[i] = vetor1[i] * vetor2[i];
    }
    printf("\nResultado: \n");


    printf("\nDiferenca: ");
    for(i = 0; i < 20; i++) {
        printf("%d ", diferenca[i]);
    }

    printf("\nsoma: ");
    for(i = 0; i < 20; i++) {
        printf("%d ", soma[i]);
    }

    printf("\multiplicacao: ");
    for(i = 0; i < 20; i++) {
        printf("%d ", multiplicacao[i]);
    }


    return 0;
}