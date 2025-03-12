#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste hudson

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo,populacao,pontosTuristicos, area, pib;
    char nome[50];
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Entre com os dados Cadastrais da Carta?");
    printf("Codigo da Cidade:\n");
    scanf("%i",&codigo);
    printf("Nome da Cidade:\n");
    scanf("%c",nome);
    printf("População da Cidade:\n");
    scanf("%i",&populacao);
    printf("Area da Cidade:\n");
    scanf("%i",&area);
    printf("PIB da Cidade:\n");
    scanf("%i",&pib);
    printf("Ponto Turistico da Cidade:\n");
    scanf("%i",&pontosTuristicos);


    printf("Código: %d\n",codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
   
    return 0;
}
