#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("Numeros impares entre 100 e 200:\n");

    for (i = 100; i <= 200; i++) {
        if (i % 2 != 0) { // verifica se é ímpar
            printf("%d|", i);
        }
    }

    return 0;
}