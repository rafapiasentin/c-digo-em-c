#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1, n2, resultado;

    printf("tamanho da base: ");
    scanf ("%d", &n1);
    
    printf("tamanho da lateral: ");
    scanf ("%d", &n2);

    resultado = n1 * n2;

    printf("resultado: %d", resultado);

    return 0;
}
