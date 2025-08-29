#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero;
    long long soma = 0;
    int contador = 0;


    printf("digite um valor (valor nagativo para sair: )");
    while(scanf ("%d", &numero) == 1 &&numero >0){

    if(numero >0){
    soma += numero;
    contador++;
    }
    printf("digite um valor (valor nagativo para sair: )");
}

    if(contador > 0){
        double media = (double)soma / (double)contador;
        printf("a media dos numeros positivos sao: %2f", media);
    }
    else{
        printf("nenhum numero positivo foi digitado");
    }

    return 0;
}