#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1, n2, n3, n4;
    float media;

    printf("digite o primeiro numero:");
    scanf ("%d", &n1);

    printf("digite o segundo numero:");
    scanf ("%d", &n2);

    printf("digite o terceiro numero:");
    scanf ("%d", &n3);

    printf("digite o quarto numero:");
    scanf ("%d", &n4);

    media = n1 + n2 + n3 + n4 / 4;

    printf("a media é: %f", media);

    return 0;
}