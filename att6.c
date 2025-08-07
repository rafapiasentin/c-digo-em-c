#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    double raio, area, pi;
    pi = 3.14;

    printf("tamanho do raio: ");
    scanf("%lf", &raio);

    area = pi * pow(raio, 2);
    printf("tamanho da area: %f", area);

    return 0; 
}