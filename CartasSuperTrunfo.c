#include <stdio.h>
#include <string.h>

int main () {
// Desafio Super Trunfo - Tema: Paises (Cadastro das Cartas - Nível Aventureiro)
// Declaração das variáveis para a primeira carta
char estado1 = 'A';
char codigo1[5] = "A01";
char nomeCidade1[50] = " Rio de janeiro";
int populacao1 = 1149789225;
float area1 = 35090;
float pib1 = 958563215;
int pontosTuristicos1 = 90;
float densidadePopulacional1 = populacao1 / area1;
float pibPerCapita1 = pib1 / populacao1;

// Declaração das variáveis para a segunda carta
char estado2 = 'B';
char codigo2[5] = "B02";
char nomeCidade2[50] = "Belo Horizonte";
int populacao2 = 23993445;
float area2 = 4398737234;
float pib2 = 257829675;
int pontosTuristicos2 = 75;
float densidadePopulacional2 = populacao2 / area2;
float pibPerCapita2 = pib2 / populacao2;

// Leitura dos dados da primeira carta
    printf("Digite os dados da Carta 1 (A): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da Carta 1 (A01): ");
    scanf("%4s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a populacao da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a area (em km²) da cidade da Carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais) da cidade da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da cidade da Carta 1: ");
    scanf("%d", &pontosTuristicos1);	 
  // Calculo da densidade populacional e PIB per capita
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)pib1 / populacao1;

// Leitura dos dados da segunda carta
    printf("\nDigite os dados da Carta 2 (B): ");
    scanf(" %c", &estado2);    
    printf("Digite o codigo da Carta 2 (B02): ");
    scanf("%4s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a populacao da cidade da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a area (em km²) da cidade da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais) da cidade da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da cidade da Carta 2: ");
    scanf("%d", &pontosTuristicos2);
    // Calculo da densidade populacional e PIB per capita
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / populacao2;

    // Exibicao da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.1f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  	
// Exibicao da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

	return 0;
}