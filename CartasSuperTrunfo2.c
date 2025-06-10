#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Aline

int main() {
 int codigodacidade1, numerodepontosturisticos1;
    char estado1 [50];
    char nomedacidade1 [100];
    float populacao1;
    float area1;
    float pib1;
    float densidadepopulacionall;
    float pibpercapta1;
 
 int codigodacidade2, numerodepontosturisticos2;
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
 
    printf("CARTA 1\n");
    printf("Estado:%s\n",estado1);
    printf("Código:%d\n", codigodacidade1);
    printf("Nome da Cidade:%s\n", nomedacidade1);
    printf("População:%f\n", populacao1);
    printf("Área:%f km2\n", area1);
    printf("PIB:%f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos:%d\n", numerodepontosturisticos1);

    densidadepopulacionall = populacao1/area1;
    pibpercapta1 = populacao1/pib1;
 //densidade populacional e pib per capta são calculados de acordo com divisão da população pela área e pelo pib respectivamente.

    printf("Densidade pupolacional:%.2f\n", densidadepopulacional1);
    printf("PIB per capta:%.2f\n",pibpercapta1);

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
 
    printf("CARTA 2\n");
    printf("Estado:%s \n", estado2);
    printf("Código:%d \n", codigodacidade2);
    printf("Nome da Cidade:%s\n", nomedacidade2);
    printf("População:%f\n", populacao2);
    printf("Área:%f km2\n", area2);
    printf("PIB:%f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos:%d\n", numerodepontosturisticos2);
    
    densidadepopulacional2 = populacao2/area2;
    pibpercapta2 = populacao2/pib2;
    
    printf("Densidade pupolacional:%.2f\n", densidadepopulacional2);
    printf("PIB per capta:%.2f\n",pibpercapta2);
        
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
