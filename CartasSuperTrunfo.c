#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Variáveis para armazenar os dados das duas cidades
    char nome1[20], codigo1[10], estado1[20];
    char nome2[20], codigo2[10], estado2[20];
    float area1, pibPercapita1, pib1, densidadePopulacional1;
    float area2, pibPercapita2, pib2, densidadePopulacional2;
    int populacao1, pontosTuristicos1; 
    int populacao2, pontosTuristicos2; 

    // Entrada de dados para a primeira cidade
    printf("==CADASTRO PRIMEIRA CIDADE===\n");
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", nome1); 
    printf("Insira o numero de habitantes:\n");
    scanf("%d", &populacao1);
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib1);
    printf("Qual a área da cidade? (em km²)\n");
    scanf("%f", &area1);
    printf("É de qual estado?\n");
    scanf(" %[^\n]", estado1); 
    printf("Quantos pontos turisticos a cidade possui?\n");
    scanf("%d", &pontosTuristicos1);
    printf("Insira o Código da cidade\n");
    scanf(" %[^\n]", codigo1); 

    // Cálculos para a primeira cidade
    pibPercapita1 = pib1 / populacao1;
    densidadePopulacional1 = populacao1 / area1;

    // Entrada de dados para a segunda cidade
    printf("==CADASTRO SEGUNDA CIDADE===\n");
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", nome2); 
    printf("Insira o numero de habitantes:\n");
    scanf("%d", &populacao2);
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);
    printf("Qual a área da cidade? (em km²)\n");
    scanf("%f", &area2);
    printf("É de qual estado?\n");
    scanf(" %[^\n]", estado2); 
    printf("Quantos pontos turisticos a cidade possui?\n");
    scanf("%d", &pontosTuristicos2);
    printf("Insira o Código da cidade\n");
    scanf(" %[^\n]", codigo2); 

    // Cálculos para a segunda cidade
    pibPercapita2 = pib2 / populacao2;
    densidadePopulacional2 = populacao2 / area2;

    // Exibição dos dados das duas cidades    
    printf("===== PRIMEIRA CIDADE =====\n");
    printf("CIDADE: %s\n", nome1);
    printf("ESTADO: %s\n", estado1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("PONTOS TURISTICOS: %d\n", pontosTuristicos1);
    printf("ÁREA: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB PER CAPITA: %.2f\n", pibPercapita1);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidadePopulacional1);
    printf("CÓDIGO: %s\n", codigo1);

    // SEGUNDA CIDADE
    printf("===== SEGUNDA CIDADE =====\n");
    printf("CIDADE: %s\n", nome2);
    printf("ESTADO: %s\n", estado2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("PONTOS TURISTICOS: %d\n", pontosTuristicos2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB PER CAPITA: %.2f\n", pibPercapita2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidadePopulacional2);
    printf("CÓDIGO: %s\n", codigo2);    

    return 0;
}