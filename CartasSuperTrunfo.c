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

    char nome[20];
    float populacao, pib;
    char codigo[10]; 

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]s", nome);
    printf("Insira o numero de habitantes: ");
    scanf("%f", &populacao);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib);
    printf("Insira o código da cidade: ");
    scanf("%s", codigo);

    printf("\n=== DADOS DA CIDADE ===\n");
    printf("Cidade: %s.\n", nome);
    printf("População: %.2f.\n", populacao);
    printf("Pib: %.2f.\n", pib);
    printf("Código: %s\n", codigo);


    return 0;
}
