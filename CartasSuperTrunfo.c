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

    char nome[20], codigo[10], estado[10];
    float area, pibPercapita, pib;
    int populacao, pontosTuristicos; 

    printf("Insira o nome da cidade:\n"); // nome da cidade
    scanf("%s", &nome);    // recebe o nome
    printf("Insira o numero de habitantes:\n");
    scanf("%d", &populacao); // recebe a quantidade de habitantes
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib); //  recebe o pib 
    printf("Qual a area da cidade?\n");
    scanf("%f", &area);
    printf("Insira o estado: \n");
    scanf("%s", &estado);
    printf("Quantos pontos Turisticos tem? \n");
    scanf("%d.", &pontosTuristicos);
    printf("Insira o código da cidade:\n");
    scanf("%s", &codigo); // /recebe o codigo da cidade

    // Cálculo do PIB per capita
    pibPercapita = pib / populacao;

    printf("\n=== DADOS DA CIDADE ===\n");
    printf("Cidade: %s. \n", nome);
    printf("População: %d. ", populacao);
    printf("Pib: %.2f.\n", pib);
    printf("PibPercapta: %.2f. \n", pibPercapita);
    printf("Área: %.2f.\n", area);
    printf("Estado: %s.\n", estado);
    printf("Código: %s.\n", codigo);
    printf("Pontos Turisticos: %d", pontosTuristicos);

    return 0;
}
