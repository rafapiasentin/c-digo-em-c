#include <stdio.h>
#include <stdlib.h>

int main () {

    float n1, n2, n3, n4;
    float media;

    printf("digite nota 1b: ");
    scanf("%f", &n1);

    printf("digite nota 2b: ");
    scanf("%f", &n2);

    printf("digite nota 3b: ");
    scanf("%f", &n3);

    printf("digite nota 4b: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if(media >= 70) {
        printf("aprovado");
    }

    else if(media >= 30 && media < 70) {
        printf("esta de exame");
    }
    else {
        printf("reprovado");
}

    return 0;
}