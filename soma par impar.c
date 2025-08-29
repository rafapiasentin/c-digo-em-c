#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1, resultado;

    printf("digite um numero: ");
    scanf("%d", &n1);

    if(n1 %2==0){
        resultado = n1 + 5;
    }

    else{
       resultado = n1 + 8;
    }

    printf("resultado %d", resultado);


    return 0;
}