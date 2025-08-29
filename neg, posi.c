#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1, resultado;

    printf("digite o numero: ");
    scanf("%d", &n1);

    if (n1 >= 0){
        resultado = n1 * 2;
    }
    else{
        resultado = n1 * 3;
    }

    printf("resultado: %d", resultado);

    return 0;
}