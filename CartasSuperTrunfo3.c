#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Aline

int main() {
    int codigodacidade1, numerodepontosturisticos1, carta1;
    char estado1 [50];
    char nomedacidade1 [100];
    float populacao1;
    float area1;
    float pib1;

    float densidadepopulacional1;
    float pibpercapta1;

    int codigodacidade2, numerodepontosturisticos2, carta2;
    char estado2 [50];
    char nomedacidade2 [100];
    float populacao2;
    float area2;
    float pib2;

    float densidadepopulacional2;
    float pibpercapta2;


    printf("CARTA 1\n");
    printf("Digite o estado:\n");
    scanf("%s", estado1);

    printf("Digite o código:\n");
    scanf("%d", &codigodacidade1);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", nomedacidade1);

    printf("Digite a população:\n");
    scanf("%f", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numerodepontosturisticos1);

    //densidade populacional e pib per capta são calculados de acordo com divisão da população pela área e pelo pib respectivamente.
    densidadepopulacional1 = populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;

    printf("CARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigodacidade1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per capita: %.2f\n", pibpercapta1);


    printf("CARTA 2\n");
    printf("Digite o estado:\n");
    scanf("%s", estado2);

    printf("Digite o código:\n");
    scanf("%d", &codigodacidade2);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", nomedacidade2);

    printf("Digite a população:\n");
    scanf("%f", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numerodepontosturisticos2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;

    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigodacidade2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapta2);

    //Soma dos atributos população, área, pib, número de pontos turísticos, pib per capita e o inverso da densidade populacional.

    float superPoder1 = populacao1 + area1 + pib1 + numerodepontosturisticos1 + pibpercapta1 + (densidadepopulacional1 * area1);
    printf("Super Poder da carta 1 é: %.2f\n", superPoder1);

    float superPoder2 = populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapta2 + (densidadepopulacional2 * area2);
    printf("Super Poder da carta 2 é: %.2f\n", superPoder2);

    //comparação de cartas.
    printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
    printf("Número de pontos turísticos: Carta 1 venceu %d\n", numerodepontosturisticos1 > numerodepontosturisticos2);
    printf("Densidade Populacional: Carta 2 venceu %d\n", densidadepopulacional1 < densidadepopulacional2);
    printf("Pib per capita: Carta 1 venceu %d\n", pibpercapta1 > pibpercapta2);
    printf("Super poder: Carta 1 venceu %d\n", superPoder1 > superPoder2);

    return 0;
}
