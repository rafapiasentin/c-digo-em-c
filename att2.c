#include <stdio.h>
#include <stdlib.h>

int main (){

    float salario = 0;
    float salarios = 0;
    int soma_filhos = 0;
    int filhos = 0;
    float maior_salario = 0;
    int salario_ate100 = 0;
    int cont = 0;

    while (1){
        printf("Digite seu salário (ou um valor negativo para sair): ");
        scanf("%f", &salario);

        if (salario < 0){
            break; 
        }

        printf("Digite o número de filhos: ");
        scanf("%d", &filhos);

        salarios += salario;
        soma_filhos += filhos;
        cont += 1;

        if (salario > maior_salario){
            maior_salario = salario;
        }
        if (salario <= 100){
            salario_ate100 += 1;
        }
    }

   
    if (cont > 0){                  //cont é a quantidade de pessoas que ele divide 
        printf("\nResultados da pesquisa:\n");
        printf("1º Media do salario da populacao: %.2f\n", salarios / cont);
        printf("2º Media do numero de filhos: %.2f\n", (float)soma_filhos / cont);
        printf("3º Maior salario: %.2f\n", maior_salario);
        printf("4º Percentual de pessoas com salario ate R$100,00: %.2f%%\n", (salario_ate100 * 100.0) / cont);
    } else {
        printf("\nNenhum dado foi informado.\n");
    }

    return 0;
}
//notas: Comecei a errar pra caramba no final do exercicio, ent a partir do if cont > 0
// ent dei uma pesquisada no chat gpt (mas ele não resolvel pra mim, somente me deu os passos para seguir)