#include <stdio.h>

int main(void) {
    int numero;
    long long soma = 0;   // aguenta somas maiores
    int contador = 0;

    printf("Digite um numero (0 para sair): ");
    while (scanf("%d", &numero) == 1 && numero != 0) {
        if (numero % 2 == 0) {   // considera apenas pares (positivos ou negativos)
            soma += numero;
            contador++;
        }
        printf("Digite um numero (0 para sair): ");
    }

    if (contador > 0) {
        double media = (double)soma / (double)contador;  // evita divisao inteira
        printf("A media dos numeros pares e: %.2f\n", media);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }
    return 0;
}
