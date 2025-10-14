    #include <stdio.h>
    #include <locale.h>

    #define NUM_CANDIDATOS 7

    int main() {
        setlocale(LC_ALL, "Portuguese"); 

        int votos[NUM_CANDIDATOS] = {0};
        int opcao; 
        int voto; 
        int emVotacao = 0; 

        while (1) {
            printf("===== ELEIÇÕES UNICESUMAR 2025 =====\n");
            printf("1 - Iniciar Votação\n");
            printf("2 - Encerrar Eleitores\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao); 

            if (opcao == 1) {
                if (emVotacao) {
                    printf("\nA votação já está em andamento!\n");
                } else {
                    emVotacao = 1;  
                    printf("\nVotação Iniciada!\n");
                    while (emVotacao) {
                        
                        printf("========= CANDIDATOS =========\n");
                        printf("1 - Cris\n");
                        printf("2 - Edenilson\n");
                        printf("3 - Cesar\n");
                        printf("4 - Filó\n");
                        printf("5 - Rinaldo\n");
                        printf("6 - Léo\n");
                        printf("7 - Anderson\n");
                        printf("0 - NULO\n");
                        printf("============================\n");

                        printf("\nDigite o número do seu voto (0 para NULO): ");
                        scanf("%d", &voto); 

                        if (voto >= 0 && voto <= NUM_CANDIDATOS) {
                            if (voto == 0) {
                                printf("Você votou NULO.\n");
                            } else {
                                votos[voto - 1]++; 
                            }
                        } else {
                            printf("Voto inválido. Tente novamente.\n");
                        }

                        printf("\nDeseja continuar votando? (1 - Sim, 0 - Não): ");
                        int continuar;
                        scanf("%d", &continuar); 
                        if (continuar == 0) {
                            emVotacao = 0; 
                            printf("\nVotação Encerrada!\n");
                        }
                    }
                }
            }
            
            else if (opcao == 2) {
                if (emVotacao) {
                    printf("\nVotação ainda está em andamento. Não é possível encerrar ainda.\n");
                } else {

                    printf("\n===== RESULTADOS =====\n");
                    for (int i = 0; i < NUM_CANDIDATOS; i++) {
                        printf("Candidato %d - %d votos\n", i + 1, votos[i]);
                    }
                    break;
                }
            } 
            else {
                printf("Opção inválida. Tente novamente.\n");
            }
        }

        return 0;
    }
