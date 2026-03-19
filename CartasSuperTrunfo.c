#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    //VARIAVEIS CARTA1
    char estado1;
    char codigo1[5];
    char nome1[15];
    unsigned long int populacao1;
    float area1, densidade1, percapita1, inverso_densidade1;
    float pib1, poder1;
    int pontos_turisticos1;
    



    //VARIAVEIS CARTA2
    char estado2;
    char codigo2[5];
    char nome2[15];
    unsigned long int populacao2;
    float area2, densidade2, percapita2, inverso_densidade2;
    float pib2, poder2;
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
    scanf("%lu", &populacao1);

    printf("Digite a Área em km: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    inverso_densidade1 = 1.0 / densidade1;
    poder1 = (float)populacao1 + area1 + pib1 + (float) pontos_turisticos1 + percapita1 + inverso_densidade1;

    



    

    printf("CARTA 1: \n");


    //EXIBIÇÃO DA PRIMEIRA CARTA 
    printf("ESTADO: %c\n", estado1);
    printf("CODIGO DA CARTA: %s\n", codigo1);
    printf("NOME DA CIDADE: %s\n", nome1);
    printf("POPULAÇÃO: %lu\n", populacao1);
    printf("ÁREA EM KM: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos1);
    printf("A densidade populacional é: %.2f\n", densidade1);
    printf("O PIB per capita é: %.2f\n",percapita1);
    printf("O poder da carta 1 é: %f\n", poder1);



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
    scanf("%lu", &populacao2);

    printf("Digite a Área em km: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    inverso_densidade2 = 1.0 / densidade2;
    poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + percapita2 + inverso_densidade2;

    printf("CARTA 2: \n");


    //EXIBIÇÃO DA SEGUNDA CARTA
    printf("ESTADO: %c\n", estado2);
    printf("CODIGO DA CARTA: %s\n", codigo2);
    printf("NOME DA CIDADE: %s\n", nome2);
    printf("POPULAÇÃO: %lu\n", populacao2);
    printf("ÁREA EM KM: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos2);
    printf("A densidade populacional é: %.2f\n", densidade2);
    printf("O PIB per capita é: %.2f\n",percapita2);




    //* **Comparação de Cartas** *
    printf("==== COMPARAÇÃO DA CARTA MAIS FORTE! ====\n");
    printf("******** C A R T A  1 ********\n");
    printf("População: Carta 1 venceu? %d\n", populacao1 > populacao2);
    printf( "Area: Carta 1 venceu? %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu? %d\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu? %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu? %d\n", densidade1 < densidade2);
    printf("PIB per capita: Carta 1 venceu? %d\n", percapita1 > percapita2);
    printf( " Super Poder: Carta 1 venceu? %d\n", poder1 > poder2);


    printf("******** C A R T A  2 ********\n");
    printf("População: Carta 2 venceu? %d\n", populacao2 > populacao1);
    printf( "Area: Carta 2 venceu? %d\n", area2> area1);
    printf("PIB: Carta 2 venceu? %d\n", pib2 > pib1);
    printf("Pontos Turisticos: Carta 2 venceu? %d\n", pontos_turisticos2 > pontos_turisticos1);
    printf("Densidade Populacional: Carta 2 venceu? %d\n", densidade2 < densidade1);
    printf("PIB per capita: Carta 2 venceu? %d\n", percapita2 > percapita1);
    printf( " Super Poder: Carta 2 venceu? %d\n", poder2 > poder1);




    









    
    return 0;
}