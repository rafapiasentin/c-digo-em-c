#include <stdio.h>

int main(){
    char letra[10];

       
        printf("Digite seu nome: \n");
        scanf("%s", letra);
    
        

            printf("O seu nome invertido e: ");
                for (int i = 9; i >= 0; i--){
                printf("%c", letra[i]);
                }
    return 0;

}