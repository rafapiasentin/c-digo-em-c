#include <stdio.h>
#include <stdlib.h>

int main() {

    int escolha;
    float total = 0;
    float vendas;
    float gastos;
    float totalVendas = 0;
    float totalGastos = 0;

    while (1) {
        printf("\n\n=== MENU ===\n");
        printf("[1] Vendas\n");
        printf("[2] Gastos\n");
        printf("[3] Balanco diario\n");
        printf("[4] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Valor das vendas: ");
                scanf("%f", &vendas);

                if (vendas <= 0) {
                    printf("Digite um valor valido.\n");
                } else {
                    total += vendas;
                    totalVendas += vendas;
                    printf("Valor de vendas adicionado! O total agora e: %.2f\n", total);
                }
                break;

            case 2:
                printf("Valor dos gastos: ");
                scanf("%f", &gastos);

                if (gastos <= 0) {
                    printf("Digite um valor valido.\n");
                } else {
                    total -= gastos;
                    totalGastos += gastos;
                    printf("Gastos adicionados! Balanco diario atualizado: %.2f\n", total);
                }
                break;

            case 3:
                printf("Balanco diario atual: %.2f\n", total);
                break;

            case 4:
                printf("\n=== RELATORIO FINAL ===\n");
                printf("Total de vendas: %.2f\n", totalVendas);
                printf("Total de gastos: %.2f\n", totalGastos);
                printf("Saldo final: %.2f\n", total);

                if (total > 0) {
                    printf("Resultado: LUCRO\n");
                } else if (total < 0) {
                    printf("Resultado: PREJUIZO\n");
                } else {
                    printf("Resultado: NULO (sem lucro nem prejuizo)\n");
                }

                printf("Encerrando o programa...\n");
                return 0;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
