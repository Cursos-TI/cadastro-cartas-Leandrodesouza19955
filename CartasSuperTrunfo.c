#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // LEITURA DA PRIMEIRA CARTA
    printf("=== CARTA 1 ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // LEITURA DA SEGUNDA CARTA
    printf("\n=== CARTA 2 ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Codigo (ex: B02): ");
    scanf("%3s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // EXIBIÇÃO DAS CARTAS
    printf("\n=== CARTAS CADASTRADAS ===\n");
    
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}