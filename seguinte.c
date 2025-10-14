#include <stdio.h>

#define max 10


int main () {

    char vet[max];

    printf("digite seu nome: ");
    scanf("%s", vet);

    printf("o seu nome com caractere circular fica: ");
    for(int i = 0; i < max; i++){
        printf("%c", (vet[i] + 1));
    }

    return 0;
}