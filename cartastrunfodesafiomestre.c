#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() {
    int jogar, voltar, cidades, criar, comparacao, escolhaJogador; 
    char primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;
    char nome1[20], codigo1[10], estado1[20];
    char nome2[20], codigo2[10], estado2[20];
    float area1, pibPercapita1, pib1, densidadePopulacional1, superpoder1;
    float area2, pibPercapita2, pib2, densidadePopulacional2, superpoder2;
    int populacao1, pontosTuristicos1; 
    int populacao2, pontosTuristicos2; 

    // loop pra voltar pro menu
    while (1) {
        printf("\n==== CARTAS SUPER TRUNFO ====\n");
        printf("1 - JOGAR\n");
        printf("2 - CRIAR CIDADES\n");
        printf("3 - MOSTRAR CIDADES\n");
        printf("0 - SAIR\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolhaJogador);

        switch (escolhaJogador) {
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
                superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapita1 + (1.0 / densidadePopulacional1);

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
                superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1.0 / densidadePopulacional2);

                printf("\nCidades cadastradas com sucesso!\n");
                break; // Volta para o menu principal
              
            case 1:
                // MENU DE JOGO
                printf("\n==== JOGANDO ====\n");
                printf("Escolha um atributo:\n");
                printf("A - POPULACAO\n");
                printf("B - PIB\n");
                printf("C - PONTOS TURISTICOS\n");
                printf("0 - SAIR\n");

                printf("Escolha a comparação: ");
                scanf(" %c", &primeiroAtributo);

                // Escolha do primeiro atributo
                float valor1_cidade1, valor1_cidade2;
                switch (primeiroAtributo) {
                    case 'a': case 'A':
                        valor1_cidade1 = populacao1;
                        valor1_cidade2 = populacao2;
                        break;
                    case 'b': case 'B':
                        valor1_cidade1 = pib1;
                        valor1_cidade2 = pib2;
                        break;    
                    case 'c': case 'C':
                        valor1_cidade1 = pontosTuristicos1;
                        valor1_cidade2 = pontosTuristicos2;
                        break;
                    default:
                        printf("Opção inválida\n");
                        continue;
                }

                printf("Escolha o segundo atributo:\n");
                printf("A - POPULACAO\n");
                printf("B - PIB\n");
                printf("C - PONTOS TURISTICOS\n");
                printf("0 - SAIR\n");

                printf("Escolha a comparação: ");
                scanf(" %c", &segundoAtributo);

                if (primeiroAtributo == segundoAtributo) {
                    printf("ERROR! Você escolheu o mesmo atributo\n");
                    continue;
                }

                // Escolha do segundo atributo
                float valor2_cidade1, valor2_cidade2;
                switch (segundoAtributo) {
                    case 'a': case 'A':
                        valor2_cidade1 = populacao1;
                        valor2_cidade2 = populacao2;
                        break;
                    case 'b': case 'B':
                        valor2_cidade1 = pib1;
                        valor2_cidade2 = pib2;
                        break;    
                    case 'c': case 'C':
                        valor2_cidade1 = pontosTuristicos1;
                        valor2_cidade2 = pontosTuristicos2;
                        break;
                    default:
                        printf("Opção inválida\n");
                        continue;
                }

                // Soma dos valores escolhidos
                float somaCidade1 = valor1_cidade1 + valor2_cidade1;
                float somaCidade2 = valor1_cidade2 + valor2_cidade2;

                // Exibição clara do resultado
                printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
                printf("%s (Cidade 1) VS %s (Cidade 2)\n", nome1, nome2);
                printf("-----------------------------------------\n");
                printf("Atributo 1: %c | %s: %.2f | %s: %.2f\n", primeiroAtributo, nome1, valor1_cidade1, nome2, valor1_cidade2);
                printf("Atributo 2: %c | %s: %.2f | %s: %.2f\n", segundoAtributo, nome1, valor2_cidade1, nome2, valor2_cidade2);
                printf("-----------------------------------------\n");
                printf("Soma total: %s (%.2f) VS %s (%.2f)\n", nome1, somaCidade1, nome2, somaCidade2);
                printf("-----------------------------------------\n");

                // Resultado final da comparação
                if (somaCidade1 > somaCidade2) {
                    printf("🏆 %s venceu!\n", nome1);
                    printf("Parabéns, você venceu!\n");
                } else if (somaCidade2 > somaCidade1) {
                    printf("🏆 %s venceu!\n", nome2);
                    printf("Você perdeu\n");
                } else {
                    printf("⚖️ EMPATE!\n");
                }
                break; // Volta para o menu principal

            case 0:
                printf("Saindo do jogo...\n");
                return 0; // Encerra o programa

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }
}
