#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor; 
    int menor_valor;
    int maior_valor;

    // Lê o primeiro valor
    printf("Digite o valor 1: ");
    scanf("%d", &valor);

    // Inicializa menor e maior com o primeiro valor
    menor_valor = valor;
    maior_valor = valor;

    // Agora lê os próximos 49 valores
    for (int c = 2; c <= 50; c++) {
        printf("%d|", c);

        if (c > maior_valor) {
            maior_valor = c;
        }
        if (c < menor_valor) {
            menor_valor = c;
        }
    }

    printf("\nO maior valor é %d e o menor valor é %d\n", maior_valor, menor_valor);

    return 0;
}