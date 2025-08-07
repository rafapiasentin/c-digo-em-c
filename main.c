//bibliuoteca que irá manipular a entrada e saida de dados 
#include <stdio.h>
#include <stdlib.h>

//método main para execução
int main () {
    //codigo a ser desenvolvido

    //TIPO DE VARIAVEIS
    //caractere(char)  -127 a 127 letras (%s string= caractere infinito) (%c uma letra)
    //inteiro(int) -32.767 a 32.767
    //ponto flutuante(float) seis digitos de precisão
    //ponto flutuante de precisão dupla(double) dez digitos de precisão
    //sem valor(void) 0

    // \n comando para pular linha no print
    printf ("hello, world!\n");

    char rafael[] = "rafael";
    printf("nome: %s\n", rafael);

    system("pause");

    //retorno da minha função
    return 0;
}