#include <stdio.h>
#include <stdlib.h>

int main () {

    int va, vb, c;


    printf("digite valor a: ");
    scanf("%d", &va);

    printf("digite valor b: ");
    scanf("%d", &vb);


        if (va == vb){
            c = va + vb;
        }

        else{
            c = va * vb;
        }

        printf("resultado:  %d" ,c);


    return 0;
}