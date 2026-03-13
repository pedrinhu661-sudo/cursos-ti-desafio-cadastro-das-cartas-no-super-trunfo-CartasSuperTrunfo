#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    //VARIAVEIS CARTA1
    char estado1;
    char codigo1[5];
    char nome1[15];
    int população1;
    float area1, densidade1, percapita1;
    float pib1;
    int pontos_turisticos1;



    //VARIAVEIS CARTA2
    char estado2;
    char codigo2[5];
    char nome2[15];
    int população2;
    float area2, densidade2, percapita2;
    float pib2;
    int pontos_turisticos2;
      //INTRODUÇÃO DO JOGO
    printf("=================================\n");
    printf("BEM VINDOS AO JOGO SUPER TRUNFO!\n");
    printf("=================================\n");

    //CADASTRO DA PRIMEIRA CARTA
    printf("===> CADASTRO DA PRIMEIRA CARTA <===\n");
    printf("Carta 1\n");
    printf("Digite uma letra representando o Estado (A  H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da carta (ex A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a População: ");
    scanf("%d", &população1);

    printf("Digite a Área em km: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = população1 / area1;
    percapita1 = pib1 / população1;

    printf("CARTA 1: \n");


    //EXIBIÇÃO DA PRIMEIRA CARTA 
    printf("ESTADO: %c\n", estado1);
    printf("CODIGO DA CARTA: %s\n", codigo1);
    printf("NOME DA CIDADE: %s\n", nome1);
    printf("POPULAÇÃO: %d\n", população1);
    printf("ÁREA EM KM: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos1);
    printf("A densidade populacional é: %.2f\n", densidade1);
    printf("O PIB per capita é: %.2f\n",percapita1);



    //CADASTRO DA SEGUNDA CARTA
    printf("===> CADASTRO DA SEGUNDA CARTA <===\n");
    printf("Carta 2\n");
    printf("Digite uma letra representando o Estado (A H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da carta (ex A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a População: ");
    scanf("%d", &população2);

    printf("Digite a Área em km: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);


    densidade2 = população2 / area2;
    percapita2 = pib2 / população2;


    printf("CARTA 2: \n");


    //EXIBIÇÃO DA SEGUNDA CARTA
    printf("ESTADO: %c\n", estado2);
    printf("CODIGO DA CARTA: %s\n", codigo2);
    printf("NOME DA CIDADE: %s\n", nome2);
    printf("POPULAÇÃO: %d\n", população2);
    printf("ÁREA EM KM: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos2);
    printf("A densidade populacional é: %.2f\n", densidade2);
    printf("O PIB per capita é: %.2f\n",percapita2);



    









    
    return 0;
}
