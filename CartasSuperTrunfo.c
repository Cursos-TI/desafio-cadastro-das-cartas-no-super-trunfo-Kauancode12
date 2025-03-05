#include <stdio.h>

int main(){

    //Declara as variaveis
    char estado[30], estado2[30];
    char codigo[30], codigo2[30];
    char cidade[30], cidade2[30];
    int populacao, populacao2, resultado_populacao;

    int pontos_turisticos, pontos_turisticos2, resultado_pontos_turisticos;

    float area, area2, resultado_area;

    float pib, pib2, resultado_pib;

    float densidade_populacional, densidade_populacional2, resultado_densidade_populacional;

    float pib_per_capita, pib_per_capita2, resultado_pib_per_capita;

    float super_poder, super_poder2, resultado_super_poder;

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

    //Operações que forçam o resultado da divisão a adotar o tipo float
    densidade_populacional = (float)populacao / area;

    pib_per_capita = (float)pib / populacao;

    super_poder = (float)(populacao + area + pib + pontos_turisticos + pib_per_capita) + (1 / densidade_populacional);

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
    printf("Super Poder: %.1f\n", super_poder);

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

    //Operações que forçam o resultado da divisão a adotar o tipo float
    densidade_populacional2 = (float)populacao2 / area2;

    pib_per_capita2 = (float)pib2 / populacao2;

    super_poder2 = (float)(populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2) + (1 / densidade_populacional2);


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
    printf("Super Poder: %.1f\n", super_poder2);

    resultado_populacao = populacao > populacao2;
    resultado_pontos_turisticos = pontos_turisticos > pontos_turisticos2;
    resultado_area = area > area2;
    resultado_pib = pib > pib2;
    resultado_densidade_populacional = densidade_populacional < densidade_populacional2;
    resultado_pib_per_capita = pib_per_capita > pib_per_capita2;
    resultado_super_poder = super_poder > super_poder2;




    //Esse programa funciona como um sistema simples de cadastro de cartas para um jogo


    return 0;
   



}