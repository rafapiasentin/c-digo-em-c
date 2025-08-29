#include <stdio.h>
#include <stdlib.h>

int main () {

    int nA, nB, nC;
    int resultado;

    printf("digite o numero A: ");
    scanf("%d", &nA);

    printf("digite o numero B: ");
    scanf("%d", &nB);

    printf("digite o numero C: ");
    scanf("%d", &nC);

    resultado = nA + nB;

    if(resultado < nC){
        printf("o resultado é menor que o terceiro valor");
    }

    else{
        printf("o resultado nao é menor que o terceiro valor");
    }

    return 0;
}