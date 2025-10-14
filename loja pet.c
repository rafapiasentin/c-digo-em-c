#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    char etapa;
    float total = 0;

    while (1) {
        // Primeira etapa
        printf("=====================================\n");
        printf("[1] Atendimento clínico (R$75,00)\n");
        printf("[2] Vacinação (R$50,00)\n");
        printf("[3] Raio-X (R$100,00)\n");
        printf("[4] Cirurgia (R$350,00)\n");
        printf("[5] Tratar os Dentes (R$250,00)\n");
        printf("[0] Finalizar e sair\n");
        printf("Escolha uma das opções acima: ");
        scanf("%d", &opcao);
        printf("=====================================\n");

        switch (opcao) {
            case 1: total += 75.0; printf("Atendimento clínico adicionado!\n"); break;
            case 2: total += 50.0; printf("Vacinação adicionada!\n"); break;
            case 3: total += 100.0; printf("Raio-X adicionado!\n"); break;
            case 4: total += 350.0; printf("Cirurgia adicionada!\n"); break;
            case 5: total += 250.0; printf("Tratamento dentário adicionado!\n"); break;
            case 0: 
                printf("\nEncerrando atendimento...\n");
                printf("Subtotal: R$%.2f\n", total);
                printf("Acréscimo de 5%%: R$%.2f\n", total * 0.05);
                printf("Total final a pagar: R$%.2f\n", total * 1.05);
                return 0;
            default: 
                printf("Opção inválida!\n"); 
                continue;
        }

        printf("Deseja ir para a segunda etapa [S/N]: ");
        scanf(" %c", &etapa);

        if (etapa == 'n' || etapa == 'N') {
            printf("\nEncerrando atendimento...\n");
            printf("Subtotal: R$%.2f\n", total);
            printf("Acréscimo de 5%%: R$%.2f\n", total * 0.05);
            printf("Total final a pagar: R$%.2f\n", total * 1.05);
            break;
        }

        // Segunda etapa
        printf("=====================================\n");
        printf("[6] Doutor Marcelo (R$145,00)\n");
        printf("[7] Doutor neymar jr(R$200,00)\n");
        printf("[8] Doutor Dolittle (R$2000,00)\n");
        printf("[9] Doutor junin (R$350,00)\n");
        printf("[10] Doutor Scooby (R$1500,00)\n");
        printf("[0] Finalizar e sair\n");
        printf("Escolha uma das opções acima: ");
        scanf("%d", &opcao);
        printf("=====================================\n");

        switch (opcao) {
            case 6: total += 145.0; printf("Consulta com Doutor Marcelo marcada!\n"); break;
            case 7: total += 200.0; printf("Consulta com Doutor neymar jr marcada!\n"); break;
            case 8: total += 2000.0; printf("Consulta com Doutor Dolittle marcada!\n"); break;
            case 9: total += 350.0; printf("Consulta com Doutor junin marcada!\n"); break;
            case 10: total += 1500.0; printf("Consulta com Doutor Scooby marcada!\n"); break;
            case 0:
                printf("\nEncerrando atendimento...\n");
                printf("Subtotal: R$%.2f\n", total);
                printf("Acréscimo de 5%%: R$%.2f\n", total * 0.05);
                printf("Total final a pagar: R$%.2f\n", total * 1.05);
                return 0;
            default: printf("Opção inválida!\n"); continue;
        }

        printf("Total acumulado até agora: R$%.2f\n", total);
    }

    return 0;
}