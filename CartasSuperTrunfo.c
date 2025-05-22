#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Aline

int main() {
 int codigodacidade, numerodepontosturisticos;
    char estado [50];
    char nomedacidade[100];
    float populacao;
    float area;
    float pib;

    printf("CARTA 1\n")
    printf("Digite o estado:\n");
    scanf("%s",&estado);

    printf("Digite o código:\n");
    scanf("%d", &codigodacidade);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &nomedacidade);

    printf("Digite a população:\n");
    scanf("%f", &populacao);

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numerodepontosturisticos);
 
    printf("CARTA 1\n")
    printf("Estado:%s - Código:%d\n", estado, codigodacidade);
    printf("Nome da Cidade:%s\n", nomedacidade);
    printf("População:%f\n", populacao);
    printf("Área:%f\n", area);
    printf("PIB:%f\n", pib);
    printf("Número de pontos turísticos:%d\n", numerodepontosturisticos);

 printf("CARTA 2\n")
    printf("Digite o estado:\n");
    scanf("%s",&estado);

    printf("Digite o código:\n");
    scanf("%d", &codigodacidade);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &nomedacidade);

    printf("Digite a população:\n");
    scanf("%f", &populacao);

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numerodepontosturisticos);
 
    printf("CARTA 2\n")
    printf("Estado:%s - Código:%d\n", estado, codigodacidade);
    printf("Nome da Cidade:%s\n", nomedacidade);
    printf("População:%f\n", populacao);
    printf("Área:%f\n", area);
    printf("PIB:%f\n", pib);
    printf("Número de pontos turísticos:%d\n", numerodepontosturisticos);
    

    
    
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
