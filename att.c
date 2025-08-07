#include <stdio.h>
#include <stdlib.h>


int main (){

   float salario;
   int dia;
   float resultado;
    printf("Informe seu salario:");
    scanf("%f", &salario);
    
    printf("Informe os dias trabalhados:");
    scanf("%d", &dia);

    resultado = salario / dia;

    printf("O valor so salário é:%f\n", resultado); 

    return 0;
}