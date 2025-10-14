#include <stdlib.h>
#include <stdio.h>

int main () {

    int numero;
    char *numeros[] = {
    "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX"
    };

    while (1) {
        
        printf("digite um numero entre 1 e 20: ");
        scanf("%d", &numero);

        if( "numero >= 1 && numero <= 20") {
            printf("o numero que voce digitou em numero romano e: %s\n", numero [numeros - 1]);
        }   else {
            printf("digite um numero valido entre 1 e 20: ");
        }

    }



    return 0;
}