#include <stdio.h>
#include <stdlib.h>

int main (){
    int cont = 1;
    int valor;
    int negativo = 0;
    int soma = 0;

    while (cont <= 5){ 
        printf("Digite o valor %d: ", cont);  
        scanf("%d", &valor);
        cont += 1;
        if (valor < 0){
            negativo += 1;  
        } else {
            soma += valor;  
        }

        
    }
    
    printf("A soma dos valores positivos é: %d\n", soma);
    printf("A quantidade de números negativos é: %d\n", negativo);

    return 0;
}