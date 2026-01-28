#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4], nome_cid1[30], nome_cid2[30];
  float area_cid1, area_cid2, pib_cid1, pib_cid2;
  int populacao_cid1, populacao_cid2, pontos_cid1, pontos_cid2;

  // Área para entrada de dados

  //Entrada de dados da primeira carta
  printf("CADASTRO DA PRIMEIRA CARTA \n");
  printf("Digite o Estado (uma letra de A a H): \n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (letra + número de 01 a 04): \n");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome_cid1);

  printf("Digite o número de habitantes: \n");
  scanf("%d", &populacao_cid1);

  printf("Digite a área da cidade (em km²): \n");
  scanf("%f", &area_cid1);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib_cid1);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &pontos_cid1); 

  printf("\n");

  //Entrada de dados da segunda carta
  printf("CADASTRO DA SEGUNDA CARTA \n");
  printf("Digite o Estado (uma letra de A a H): \n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (letra + número de 01 a 04): \n", codigo2);
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome_cid2);

  printf("Digite o número de habitantes: \n");
  scanf("%d", &populacao_cid2);

  printf("Digite a área da cidade (em km²): \n");
  scanf("%f", &area_cid2);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib_cid2);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &pontos_cid2);
    
  printf("\n");

  // Área para exibição dos dados da cidade

  //Exibir dados da primeira carta

  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", nome_cid1);
  printf("População: %d \n", populacao_cid1);
  printf("Área: %.2f km² \n", area_cid1);
  printf("PIB: %.2f bilhões de reais \n", pib_cid1);
  printf("Número de Pontos Turísticos: %d \n", pontos_cid1); 

  printf("\n");

  //Exibir dados da segunda carta

  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", nome_cid2);
  printf("População: %d \n", populacao_cid2);
  printf("Área: %.2f km² \n", area_cid2);
  printf("PIB: %.2f bilhões de reais \n", pib_cid2);
  printf("Número de Pontos Turísticos: %d", pontos_cid2);

return 0;
} 
