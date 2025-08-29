#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int valor;
    int dentro = 0, fora = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    printf("\nQuantidade de valores dentro do intervalo [10,20]: %d\n", dentro);
    printf("Quantidade de valores fora do intervalo: %d\n", fora);

    return 0;
}