#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

   // Declaração das variaveis para carta1

   char estado1 = 'A';
   char carta1 [] = "A01";
   char cidade1 [] = "Maranhao";
   int populaçao1 = 2000000;
   float area1 = 30000.000;
   float PIB1 = 30.000000;
   int pontos1 = 70;

   // Entrada de dados para carta1

    printf("Bem vindos ao desafio super trunfo (Novato)\n");

    printf("Estado1: ");
    scanf("%c", &estado1);
    printf("O estado e: %c\n", estado1);


   printf("Digite codigo da carta: ");
   scanf("%s", carta1);
   printf("Codigo da carta e: %s\n", carta1);


   printf("Digite sua cidade: ");
   scanf("%s", cidade1);
   printf("Sua cidade e: %s\n", cidade1);


   printf("Digite sua populaçao: ");
   scanf("%d", &populaçao1);
   printf("Sua populaçao e: %d\n", populaçao1);

   printf("Digite sua area: ");
   scanf("%f", &area1);
   printf("Sua area e: %.3f\n", area1);

   printf("Digite seu PIB: ");
   scanf("%f", &PIB1 );
   printf("Seu PIB e: %.6f\n", PIB1);

   printf("Digite numeros de pontos turisticos: ");
   scanf("%d", &pontos1);
   printf("Seus numeros de pontos turisticos e: %d\n", pontos1);


   // Declaração das variaveis para carta2


   char estado2 = 'B';
   char carta2 [] = "B02";
   char cidade2 [] = "Bahia";
   int populaçao2 = 50000;
   float area2 = 20.00000;
   float PIB2 = 50.00000;
   int pontos2 = 120;

    // Entrada de dados para carta2


    printf("Estado2: ");
    scanf(" %c", &estado2);
    printf("O estado e: %c\n", estado2);

    printf("Digite codigo da carta: ");
    scanf("%s", carta2);
    printf("Codigo da carta e: %s\n", carta2);

    printf("Digite sua cidade: ");
    scanf("%s", cidade2 );
    printf("Sua cidade e: %s\n", cidade2);

    printf("Digite sua populaçao: ");
    scanf("%d", &populaçao2);
    printf("A populaçao e: %d\n", populaçao2);

    printf("Digite sua area: ");
    scanf("%f", &area2);
    printf("Sua area e: %.5f\n", area2);

    printf("Digite seu PIB: ");
    scanf("%f", &PIB2);
    printf("Seu PIB e: %.5f\n", PIB2);

    printf("Digite numeros de pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("Seus numeros de pontos turisticos e: %d\n", pontos2);

       // ate aqui esta tranquilo































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
