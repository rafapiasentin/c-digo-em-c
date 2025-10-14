#include <stdio.h>
#include <stdlib.h>
#define pos 10

int main () {

    int n[pos];

    for(int i = 0; i < 10; i++){
        printf("digite um numero: ");
        scanf("%d", &n[i]);
    }

    printf("os valores digitos de forma invertida sao: ");
    for(int i = 9; i >= 0; i--){
        printf("%d ", n[i]);
    }


    return 0;
}