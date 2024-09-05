#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
  

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   char codigo[4];
   char nome [10];
   int populacao;
   float area;
   double PIB;
   int pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("seja bem vindo ao jogo de super trunfo -paises- \n");
    printf("insira seu nome: \n");
    scanf("%s", nome);
    printf("cadastro de cartas: \n");
    printf("digite o codigo da cidade (ex: A01): \n");
    scanf("%s", codigo);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área (em km²): \n");
    scanf("%f", &area);

    printf("PIB (em bilhões): \n");
    scanf("%lf", &PIB);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("dados cadastrados de %s: \n", nome);
    printf("codigo da cidade: %s\n", codigo);
    printf("populacao: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    
    return 0;

}
