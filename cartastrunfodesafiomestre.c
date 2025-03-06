#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() {

    int escolherJogarNovamente, jogar, voltar, cidades, criar, comparacao, escolhaJogador; 
    char nome1[30], codigo1[10], estado1[30];
    char nome2[30], codigo2[10], estado2[30];
    float area1, pibPercapita1, pib1, densidadePopulacional1, superpoder1;
    float area2, pibPercapita2, pib2, densidadePopulacional2, superpoder2;
    int populacao1, pontosTuristicos1; 
    int populacao2, pontosTuristicos2; 
    int atributo1, atributo2, resultado1, resultado2, escolha1, escolha2;

    while (1) {
        // MENU PRINCIPAL
        printf("\n==== CARTAS SUPER TRUNFO ====\n");
        printf("1 - JOGAR\n");
        printf("2 - CRIAR CIDADES\n");
        printf("3 - MOSTRAR CIDADES\n");
        printf("0 - SAIR\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolhaJogador);

        switch (escolhaJogador) {
            case 1:
                //escolhendo o primeiro atributo
                printf("\n==== LISTA DE ATRIBUTOS ====\n");
                printf("1 - POPULAÇAO\n");
                printf("2 - PONTOS TURISTICOS\n");
                printf("3 - ÁREA\n");
                printf("4 - PIB\n");
                printf("5 - PIB PER CAPITA\n");
                printf("6 - DENSIDADE \n");
                printf("7 - SUPER PODER\n");
                printf("Escolha um atributo para comparar: \n");            
                scanf("%d", &atributo1);
                printf("\n");
                // Escolha do segundo atributo
                printf("\nEscolha um segundo atributo para continuar: \n");
                scanf("%d", &atributo2);
                printf("\n");
        //determinando os vencedores           
        switch (atributo1) {
            case 1: resultado1 = (populacao1 > populacao2) ? 1 : 0; break;
            case 2: resultado1 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0; break;
            case 3: resultado1 = (area1 > area2) ? 1 : 0; break;
            case 4: resultado1 = (pib1 > pib2) ? 1 : 0; break;
            case 5: resultado1 = (pibPercapita1 > pibPercapita2) ? 1 : 0; break;
            case 6: resultado1 = (densidadePopulacional1 > densidadePopulacional2) ? 1 : 0; break;
            case 7: resultado1 = (superpoder1 > superpoder2) ? 1 : 0; break;
        }

        switch (atributo2) {
            case 1: resultado2 = (populacao1 > populacao2) ? 1 : 0; break;
            case 2: resultado2 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0; break;
            case 3: resultado2 = (area1 > area2) ? 1 : 0; break;
            case 4: resultado2 = (pib1 > pib2) ? 1 : 0; break;
            case 5: resultado2 = (pibPercapita1 > pibPercapita2) ? 1 : 0; break;
            case 6: resultado2 = (densidadePopulacional1 > densidadePopulacional2) ? 1 : 0; break;
            case 7: resultado2 = (superpoder1 > superpoder2) ? 1 : 0; break;
        }

        //EXIBINDO O RESULTADO DO JOGO
        printf("\n====== RESULTADO ======\n");
        printf("\nAtributo 1:");
        switch (atributo1) {
            case 1: printf("POPULAÇÃO\n%s: %d habitantes\n%s: %d habitantes\n", nome1, populacao1, nome2, populacao2); break;
            case 2: printf("PONTOS TURÍSTICOS\n%s: %d pontos\n%s: %d pontos\n", nome1, pontosTuristicos1, nome2, pontosTuristicos2); break;
            case 3: printf("ÁREA\n%s: %.2f km²\n%s: %.2f km²\n", nome1, area1, nome2, area2); break;
            case 4: printf("PIB\n%s: R$ %.2f bilhões\n%s: R$ %.2f bilhões\n", nome1, pib1, nome2, pib2); break;
            case 5: printf("PIB PER CAPITA\n%s: R$ %.2f\n%s: R$ %.2f\n", nome1, pibPercapita1, nome2, pibPercapita2); break;
            case 6: printf("DENSIDADE POPULACIONAL\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nome1, densidadePopulacional1, nome2, densidadePopulacional2); break;
            case 7: printf("SUPER PODER\n%s: %.1f\n%s: %.1f\n", nome1, superpoder1, nome2, superpoder2); break;    
        }

        printf("\nAtributo 2: ");
        switch(atributo2){
            case 1: printf("POPULAÇÃO\n%s: %d habitantes\n%s: %d habitantes\n", nome1, populacao1, nome2, populacao2); break;
            case 2: printf("PONTOS TURÍSTICOS\n%s: %d pontos\n%s: %d pontos\n", nome1, pontosTuristicos1, nome2, pontosTuristicos2); break;
            case 3: printf("ÁREA\n%s: %.2f km²\n%s: %.2f km²\n", nome1, area1, nome2, area2); break;
            case 4: printf("PIB\n%s: R$ %.2f bilhões\n%s: R$ %.2f bilhões\n", nome1, pib1, nome2, pib2); break;
            case 5: printf("PIB PER CAPITA\n%s: R$ %.2f\n%s: R$ %.2f\n", nome1, pibPercapita1, nome2, pibPercapita2); break;
            case 6: printf("DENSIDADE POPULACIONAL\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nome1, densidadePopulacional1, nome2, densidadePopulacional2); break;
            case 7: printf("SUPER PODER\n%s: %.1f\n%s: %.1f\n", nome1, superpoder1, nome2, superpoder2); break;       
        }

        // determinando o vencedor
        if (resultado1 == 1 && resultado2 == 1){
            printf("\n\nParabéns! %s venceu!\n", nome1);
        } else if (resultado1 == 0 && resultado2 == 1){
            printf("\n\nEMPATE!\n");
        } else {
            printf("\n");
            printf("OH NÃO,\n%s venceu! :C\n", nome2);
        }            
                // Perguntar se deseja jogar novamente
                printf("\nDeseja jogar novamente? (1 - SIM / 0 - NÃO): ");
                scanf("%d", &escolherJogarNovamente);
                if (escolherJogarNovamente == 0) {
                    break;  // Volta ao menu principal
                }            
                break;

            case 2:
                printf("\n== CADASTRO PRIMEIRA CIDADE ===\n");
                printf("Nome da cidade: ");
                scanf(" %[^\n]", nome1);
                printf("Número de habitantes: ");
                scanf("%d", &populacao1);
                printf("PIB da cidade: ");
                scanf("%f", &pib1);
                printf("Área da cidade (em km²): ");
                scanf("%f", &area1);
                printf("Estado: ");
                scanf(" %[^\n]", estado1);
                printf("Pontos turísticos: ");
                scanf("%d", &pontosTuristicos1);
                printf("Código da cidade: ");
                scanf(" %[^\n]", codigo1);

                // Cálculos para a primeira cidade
                pibPercapita1 = pib1 / populacao1;
                densidadePopulacional1 = populacao1 / area1;
                superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapita1 + (1 / densidadePopulacional1);

                printf("\n== CADASTRO SEGUNDA CIDADE ===\n");
                printf("Nome da cidade: ");
                scanf(" %[^\n]", nome2);
                printf("Número de habitantes: ");
                scanf("%d", &populacao2);
                printf("PIB da cidade: ");
                scanf("%f", &pib2);
                printf("Área da cidade (em km²): ");
                scanf("%f", &area2);
                printf("Estado: ");
                scanf(" %[^\n]", estado2);
                printf("Pontos turísticos: ");
                scanf("%d", &pontosTuristicos2);
                printf("Código da cidade: ");
                scanf(" %[^\n]", codigo2);

                // Cálculos para a segunda cidade
                pibPercapita2 = pib2 / populacao2;
                densidadePopulacional2 = populacao2 / area2;
                superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1 / densidadePopulacional2);

                printf("\nCidades cadastradas com sucesso!\n");
                break;     

            case 3: 
                printf("\n===== PRIMEIRA CIDADE =====\n");
                printf("CIDADE: %s | ESTADO: %s\n", nome1, estado1);
                printf("POPULAÇÃO: %d | PIB: %.2f | ÁREA: %.2f km²\n", populacao1, pib1, area1);
                printf("PONTOS TURISTICOS: %d | PIB PER CAPITA: %.2f\n", pontosTuristicos1, pibPercapita1);
                printf("DENSIDADE POPULACIONAL: %.2f hab/km² | CÓDIGO: %s\n", densidadePopulacional1, codigo1);

                printf("\n===== SEGUNDA CIDADE =====\n");
                printf("CIDADE: %s | ESTADO: %s\n", nome2, estado2);
                printf("POPULAÇÃO: %d | PIB: %.2f | ÁREA: %.2f km²\n", populacao2, pib2, area2);
                printf("PONTOS TURISTICOS: %d | PIB PER CAPITA: %.2f\n", pontosTuristicos2, pibPercapita2);
                printf("DENSIDADE POPULACIONAL: %.2f hab/km² | CÓDIGO: %s\n", densidadePopulacional2, codigo2);
                break;    

            case 0:
                printf("Saindo do programa...\n");
                return 0; 

            default:
                printf("Escolha inválida! Tente novamente.\n");
                break;
        }


    }

    return 0;
}
