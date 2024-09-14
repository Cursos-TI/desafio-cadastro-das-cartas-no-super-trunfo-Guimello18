#include <stdio.h>

int main() {
    
    // Atributos das primeiras cidades
    char codigo[4];
    char nome [10];
    int populacao;
    float area;
    double PIB;
    int pontos_turisticos;

    // Boas-vindas ao jogo
    printf("Seja bem-vindo ao Super Trunfo - Países!\n");
    printf("Vamos cadastrar as cidades e comparar suas características.\n");

    // Cadastro da primeira cidade
    printf("\nVamos começar com a primeira cidade.\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nome);
    printf("Agora, insira o código da cidade (ex: A01): ");
    scanf("%s", codigo);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%lf", &PIB);
    printf("Quantos pontos turísticos a cidade possui? ");
    scanf("%d", &pontos_turisticos);

    // Cálculos
    float densidade_populacional = populacao / area;
    float pib_per_capita = PIB / populacao;

    // Exibir dados da cidade
    printf("\nAqui estão os dados cadastrados da cidade de %s:\n", nome);
    printf("Código da cidade: %s\n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f bilhões por habitante\n", pib_per_capita);

    // Atributos da segunda cidade
    char codigo2[4];
    int populacao2;
    float area2;
    double PIB2;

    // Cadastro da segunda cidade
    printf("\nAgora vamos cadastrar a segunda cidade.\n");
    printf("Digite o código da segunda cidade (ex: B01): ");
    scanf("%s", codigo2);
    printf("Informe a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB da segunda cidade (em bilhões): ");
    scanf("%lf", &PIB2);

    // Cálculos
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = PIB2 / populacao2;

    // Exibir dados da segunda cidade
    printf("\nAqui estão os dados da segunda cidade:\n");
    printf("Código da cidade: %s\n", codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f bilhões por habitante\n", pib_per_capita2);

    // Comparação simples entre as cidades
    printf("\nAgora vamos comparar as duas cidades!\n");
    printf("Cidade 1: %s (Código: %s)\n", nome, codigo);
    printf("Cidade 2: Código %s\n", codigo2);
    printf("População: %d  |  %d\n", populacao, populacao2);
    printf("Área: %.2f km²  |  %.2f km²\n", area, area2);
    printf("PIB: %.2f bilhões  |  %.2f bilhões\n", PIB, PIB2);
    printf("Densidade Populacional: %.2f habitantes/km²  |  %.2f habitantes/km²\n", densidade_populacional, densidade_populacional2);
    printf("PIB per Capita: %.2f  |  %.2f\n", pib_per_capita, pib_per_capita2);

    printf("\nObrigado por jogar o Super Trunfo - Países!\n");

    return 0;
}
