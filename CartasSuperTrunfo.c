#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
 int código da cidade, numero de pontos turisticos;
    char estado [50];
    char nome da cidade[50];
    float população,area, pib;

    prinf("Digite o estado:\n");
    scanf("%s",&estado);

    printf("Digite o código:\n");
    scanf("%d", &codigo);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &nome da cidade);

    printf("Digite a população:\n");
    scanf("%f", &populacao);

    printf("Digite a área:\n");
    scanf("%f", &area");

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numero de pontos turisticos);

    printf("Estado:%s - Código:%d", estado, codigo);
    printf("Nome da Cidade:%s", nome da cidade);
    printf("População:%f", populacao);
    printf("Área:%f", area);
    printf("PIB:%f", pib);
    printf("Número de pontos turísticos:%d", numero de pontos turisticos);
    

    
    
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
