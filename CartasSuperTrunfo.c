#include <stdio.h>

int main(){

    //Declara as variaveis
    char estado[30], estado2[30];
    char codigo[30], codigo2[30];
    char cidade[30], cidade2[30];
    int populacao, populacao2;
    int pontos_turisticos, pontos_turisticos2;
    float area, area2;
    float pib, pib2;
    float densidade_populacional, densidade_populacional2;
    float pib_per_capita, pib_per_capita2;

    //Função printf exibe na tela e scanf coleta as informações referente a carta 01
    printf("Carta 01: \n");
    printf("Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Cidade: \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Área em km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    densidade_populacional = (float)populacao / area;

    pib_per_capita = (float)pib / populacao;

    //Printf exibe na tela todas as informações digitadas pelo usuário referente a carta 01
    printf("Carta 01: \n");
    printf("Nome do Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População total: %d\n", populacao);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Área em km²: %f\n", area);
    printf("PIB total: %f\n", pib);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    //Função printf exibe na tela e scanf coleta as informações referentes a carta 02
    printf("Carta 02: \n");
    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Área em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    densidade_populacional2 = (float)populacao2 / area2;

    pib_per_capita2 = (float)pib2 / populacao2;


    //Printf exibe na tela todas as informações digitadas pelo usuário referente a carta 02
    printf("Carta 02: \n");
    printf("Nome do Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População total: %d\n", populacao2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área em km²: %f\n", area2);
    printf("PIB total: %f\n", pib2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    //Esse programa funciona como um sistema simples de cadastro de cartas para um jogo


    return 0;
   



}