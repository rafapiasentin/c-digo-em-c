#include <stdio.h>
#include <stdlib.h>


int main () {

    int op1;
    int escolha;
    float total;
        while(1){
            printf("Digite [1] para abrir o menu (ou digite [2] para sair): ");
                scanf("%d", &op1);
            
            if(op1 == 2){
                printf("Encerrando...");
                break;
            }

            printf("[1]Hamburguer .......... R$ 18,00\n"
                    "[2]Pizza ............... R$ 32,00\n"
                    "[3]Suco Natural ........ R$ 8,00\n"
                    "[4]Refrigerante ........ R$ 6,00\n"
                    "[5]Batata Frita ........ R$ 12,00\n");
            printf("Escolha uma das opcoes acima: ");
            scanf("%d", &escolha);

            switch (escolha) { 
                case 1:
                    printf("Otima escolha, somando Hamburguer para sua conta.");
                    total += 18.00;
                    break;
                case 2:
                printf("Otima escolha, somando pizza para sua conta.");
                    total -= 32.00;
                    break;
                case 3:
                printf("Otima escolha, somando Suco natural a sua conta.");
                    total += 8.00;
                    break;
                case 4:
                printf("Otima escolha, somando refrigerante a sua conta.");
                    total += 6.00;
                    break;
                case 5:
                printf("Otima escolha, somando Batara Frita a sua conta.");
                    total += 12.00;
                    break;
            }
            printf("O total atual deu %d R$\n", total); 
        printf("Conta final %d", total);
              


                

            
        

        }
      
        

    return 0;
}