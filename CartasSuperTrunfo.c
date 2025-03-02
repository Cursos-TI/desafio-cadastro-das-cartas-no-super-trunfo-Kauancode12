#include <stdio.h>

int main(){
    char estado[30];
    char cidade[30];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;

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

    printf("Nome do Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População total: %d\n", populacao);
    printf("Número de pontos turísticos: \n", pontos_turisticos);
    printf("Área em km²: %f\n", area);
    printf("PIB total: %f\n", pib);

    return 0;
   



}