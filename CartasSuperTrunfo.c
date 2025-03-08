#include <stdio.h>

int main(){

    //Declara as variaveis
    char estado[30], estado2[30];
    char codigo[30], codigo2[30];
    char cidade[30], cidade2[30];

    int populacao, populacao2; int escolhaJogador;

    int pontos_turisticos, pontos_turisticos2;

    float area, area2;

    float pib, pib2;

    float densidade_populacional, densidade_populacional2;

    float pib_per_capita, pib_per_capita2;

    float super_poder, super_poder2;

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

    //Operações que declaram uma nova variavel a partir da divisão do valor de outras e forçam o resultado da divisão a adotar o tipo float
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
    printf("Super Poder: %.3f\n", super_poder);

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

    //Operações que declaram uma nova variavel a partir da divisão do valor de outras e forçam o resultado da divisão a adotar o tipo float
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
    printf("Super Poder: %.3f\n", super_poder2);

    printf("Escolha o atributo para comparação\n");
    printf("1.Populção\n");
    printf("2.pontos turísticos\n");
    printf("3.Área em km²\n");
    printf("4.PIB\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capita\n");
    printf("7.Superpoder\n");
    scanf("%d", &escolhaJogador);

    //compara os valores e indica quem venceu por meio de uma condição estabelecida
    switch(escolhaJogador)
    {
    case 1:

    if(populacao > populacao2){
        printf("População: %d x %d carta 1 venceu\n", populacao, populacao2);
    } else if (populacao < populacao2){
        printf("População: %d x %d carta 2 venceu\n", populacao, populacao2);
    } else {
        printf("EMPATE!\n");
    }
    break;
    case 2:

    if(pontos_turisticos > pontos_turisticos2){
        printf("Pontos turísticos: %d x %d carta 1 venceu\n", pontos_turisticos, pontos_turisticos2);
    } else if (pontos_turisticos < pontos_turisticos2){
        printf("Pontos turísticos: %d x %d carta 2 venceu\n", pontos_turisticos, pontos_turisticos2);
    } else {
        printf("EMPATE!\n");
    }
    break;
    case 3:
    if(area > area2){
        printf("Área em km²: %f x %f carta 1 venceu\n", area, area2);
    } else if (area < area2){
        printf("Área em km²: %f x %f carta 2 venceu\n", area, area2);
    } else {
        printf("EMPATE!\n");
    }
    break;
    case 4:

    if(pib > pib2){
        printf("PIB: %f x %f carta 1 venceu\n", pib, pib2);
    } else if (pib < pib2){
        printf("PIB: %f x %f carta 2 venceu\n", pib, pib2);
    } else {
        printf("EMPATE!\n");
    }
    break;
    case 5:

    if(densidade_populacional < densidade_populacional2){
        printf("Densidade populacional: %f x %f carta 1 venceu\n", densidade_populacional, densidade_populacional2);
    } else if (densidade_populacional > densidade_populacional2){
        printf("Densidade populacional: %f x %f carta 2 venceu\n", densidade_populacional, densidade_populacional2);
    } else{
        printf("EMPATE!\n");
    }
    break;
    case 6:

    if(pib_per_capita > pib_per_capita2){
        printf("PIB per capita: %f x %f carta 1 venceu\n", pib_per_capita, pib_per_capita2);
    } else if (pib_per_capita < pib_per_capita2){
        printf("PIB per capita: %f x %f carta 2 venceu\n", pib_per_capita, pib_per_capita2);
    } else {
        printf("EMPATE!\n");
    }
    break;
    case 7:

    if(super_poder > super_poder2){
        printf("Superpoder: %f x %f carta 1 venceu\n", super_poder, super_poder2);
    } else if (super_poder < super_poder2){
        printf("Superpoder: %f x %f carta 2 venceu\n", super_poder, super_poder2);
    } else {
        printf("EMPATE!\n");
    }
    break;
    default:
    printf("Opção inválida\n");
    }

    //Esse programa funciona como um jogo de cartas simples

    return 0;
}