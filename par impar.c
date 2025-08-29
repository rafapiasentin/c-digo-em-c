#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int n1;

    printf("digite um numero: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0){
    printf("o numero que voce digitou é par");
    }

    else{
        printf("o numero que voce digitou é impar");
    }

    return 0;
}