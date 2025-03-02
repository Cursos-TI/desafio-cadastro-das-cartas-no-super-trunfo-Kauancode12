#include <stdio.h>

int main(){
    char estado[30], estado2[30];
    char cidade[30], cidade2[30];
    int populacao, populacao2;
    int pontos_turisticos, pontos_turisticos2;
    float area, area2;
    float pib, pib2;

    printf("Carta 01: \n");
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Área em km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Carta 02: \n");
    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Área em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Carta 01: \n");
    printf("Nome do Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População total: %d\n", populacao);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Área em km²: %f\n", area);
    printf("PIB total: %f\n", pib);

    printf("Carta 02: \n");
    printf("Nome do Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População total: %d\n", populacao2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área em km²: %f\n", area2);
    printf("PIB total: %f\n", pib2);

    return 0;
   



}