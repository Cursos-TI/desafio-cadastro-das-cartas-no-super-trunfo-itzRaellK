#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    printf("\n\n-------------------- Desafio: Tema 1 - Cadastro das Cartas! --------------------\n\n");

    // Definição das variáveis
    char codigo_cidade[4];  // +1 para o caractere nulo
    char pais[31];          // +1 para o caractere nulo
    char cidade[31];        // +1 para o caractere nulo
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    printf("Cadastro de cartas - SUPER TRUNFO!\n\n");

    // Inserção de dados com mensagens adequadas
    printf("Código da cidade (máximo 3 caracteres): ");
    scanf("%3s", codigo_cidade);

    printf("País: ");
    scanf(" %30[^\n]", pais);

    printf("Cidade: ");
    scanf(" %30[^\n]", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &pib);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas
    printf("\n\n-------------------- Carta Cadastrada --------------------\n\n");
    
    printf("Código da cidade: %s\n", codigo_cidade);
    printf("País: %s\n", pais);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    printf("\n\n-------------------- Fim do programa! --------------------\n\n");

    return 0;
}
