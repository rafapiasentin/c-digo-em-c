#include <stdio.h>
#include <stdlib.h>
#define pos 5

int main(){

    int vetor1[pos];
    int vetor2[pos];
    int i;
    int inguais = 1;

        for(i = 0; i < 5; i++){
            printf("Digite o numero %d: ", i);
            scanf("%d", &vetor1[i]);
        }

        for(i = 0; i < 5; i++){
            printf("Digite para o segundo vetor o numero %d: ", i);
            scanf("%d", &vetor2[i]);
        }
        
        for(i = 0; i < 5; i++){
            if (vetor1[i] != vetor2[i]){
                inguais = 0;
                break;
            }
        }

        if(inguais){
            printf("\nIngual");
        }
        else{
            printf("Nao e ingual");
        }

        return 0;
}