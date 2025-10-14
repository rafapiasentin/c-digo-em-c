#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5

int main(){

int vlr[NUMBER];
int troca;
int j;
int par[NUMBER];
int impar[NUMBER];
int pari = 0;
int impari = 0;


for (int i = 0; i < NUMBER; i++)
{
    printf("Digite um valor\n");
    scanf("%d", &vlr[i]);

    if (vlr[i] % 2 == 0)
    {
        par[pari] = vlr[i];
        pari++;
    }else{
        impar[impari] = vlr[i];
        impari++; 
    }
}
    for (int i = 0; i < pari-1; i++)
 {
   for (int i = 0; i < pari-1; i++)
   {
     j = i+1;
     if (par[i] > par[j])
     {
       troca = par[i];
       par[i] = par[j];
       par[j] = troca;
       
     }
     
   
   
 }
}

     for (int i = 0; i < impari-1; i++)
 {
   for (int i = 0; i < impari-1; i++)
   {
     j = i+1;
     if (impar[i] < impar[j])
     {
       troca = impar[i];
       impar[i] = impar[j];
       impar[j] = troca;
       
     }
     
   }
   
 }
    printf("\nOrdem final:\n");
     for (int i = 0; i < pari; i++)
 {
      printf(" %d\n", par[i]);
 }
     for (int i = 0; i < impari; i++)
 {
      printf(" %d\n", impar[i]);
 }
    
system("pause");

return 0;


}