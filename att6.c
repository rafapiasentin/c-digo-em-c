#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valor;
    int menor_valor, maior_valor;
    float media;
    long soma = 0;
    int quantidade = 500;

    srand(time(NULL));

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor);

    menor_valor = valor;
    maior_valor = valor;
    soma += valor;

    printf("Numeros gerados:\n%d|", valor);

    for (int i = 2; i <= quantidade; i++) {
        valor = rand() % 1000 + 1;
        printf("%d|", valor);

        soma += valor;

        if (valor > maior_valor) {
            maior_valor = valor;
        }
        if (valor < menor_valor) {
            menor_valor = valor;
        }
    }

    media = (float)soma / quantidade;

    printf("\n\nO menor valor é %d e o maior é %d", menor_valor, maior_valor);
    printf("\nA média é %.2f\n", media);

    return 0;
}
