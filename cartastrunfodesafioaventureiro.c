#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(){


int jogar, voltar, cidades, criar, comparacao, escolhaJogador; 

char nome1[20], codigo1[10], estado1[20];
char nome2[20], codigo2[10], estado2[20];
float area1, pibPercapita1, pib1, densidadePopulacional1, superpoder1;
float area2, pibPercapita2, pib2, densidadePopulacional2, superpoder2;
int populacao1, pontosTuristicos1; 
int populacao2, pontosTuristicos2; 

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
            printf("\n==== LISTA DE ATRIBUTOS ====\n");
            printf("1 - POPULAÇAO\n");
            printf("2 - PONTOS TURISTICOS\n");
            printf("3 - ÁREA\n");
            printf("4 - PIB\n");
            printf("5 - PIB PER CAPITA\n");
            printf("6 - DENSIDADE \n");
            printf("7 - SUPER PODER\n");
            printf("Escolha um atributo para comparar: ");
            scanf("%d", &comparacao);

            switch (comparacao) {
                case 1:
                    if (populacao1 == populacao2)
                        printf("#### POPULAÇAO DEU EMPATE! ####\n");
                    else if (populacao1 > populacao2)
                        printf("População: %s venceu \n", nome1);
                    else
                        printf("População: %s venceu \n", nome2);
                    break;
                case 2:
                    if (pontosTuristicos1 == pontosTuristicos2)
                        printf("#### PONTOS TURISTICOS EMPATE! ####\n");
                    else if (pontosTuristicos1 > pontosTuristicos2)
                        printf("Pontos turisticos: %s venceu \n", nome1);
                    else
                        printf("Pontos turisticos: %s venceu \n", nome2);
                    break;
                case 3:
                    if (area1 == area2)
                        printf("#### ÁREAS EMPATE! ####\n");
                    else if (area1 > area2)
                        printf("Área: %s venceu \n", nome1);
                    else
                        printf("Área: %s venceu \n", nome2);
                    break;
                case 4:
                    if (pib1 == pib2)
                        printf("#### PIB EMPATE! ####\n");
                    else if (pib1 > pib2)
                        printf("PIB: %s venceu \n", nome1);
                    else
                        printf("PIB: %s venceu \n", nome2);
                    break;
                case 5:
                    if (pibPercapita1 == pibPercapita2)
                        printf("#### PIB PER CAPITA EMPATE! ####\n");
                    else if (pibPercapita1 > pibPercapita2)
                        printf("PIBPerCapita: %s venceu \n", nome1);
                    else
                        printf("PIBPerCapita: %s venceu \n", nome2);
                    break;
                case 6:
                    if (densidadePopulacional1 == densidadePopulacional2)
                        printf("#### DENSIDADE EMPATE! ####\n");
                    else if (densidadePopulacional1 < densidadePopulacional2)
                        printf("Densidade: %s venceu \n", nome1);
                    else
                        printf("Densidade: %s venceu \n", nome2);
                    break;
                case 7:
                    if (superpoder1 == superpoder2)
                        printf("#### SUPER PODER EMPATE! ####\n");
                    else if (superpoder1 > superpoder2)
                        printf("SuperPoder: %s venceu \n", nome1);
                    else
                        printf("SuperPoder: %s venceu \n", nome2);
                    break;
                default:
                    printf("Opção Inválida\n");
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
            printf("Opção Inválida\n");
    }
}
}