#include <stdio.h>
#include <stdlib.h>

#define pos 10

int main (){

 int vetor1[pos];
 int vetor2[pos];
 int i;

    printf("digite 10 numeros inteiros e posivos pfv: ");
    for(i = 0; i < 10; i++)
    scanf("%d", &vetor1[i]);

    for(i = 0; i < 10; i++){
        if(i % 2 == 0){
            vetor2[i] = vetor1[i] * 3;
        } else{
            vetor2[i] = vetor1[i] / 2;
        }
    }

    printf("vetor1: \n");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor1[i]);
    }
    printf("vetor2: \n");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor2[i]);
    }

    printf("\n");


    return 0;
}