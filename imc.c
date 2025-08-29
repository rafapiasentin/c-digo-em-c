#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float peso, altura, imc;

    printf("peso: ");
    scanf("%f", &peso);

    printf("altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("abaixo do peso");
    }

    else if (imc < 25){
        printf("peso normal");
    }

    else if (imc < 30){
        printf("acima do peso");
    }

    else{
        printf("obeso");
    }


    return 0;
}