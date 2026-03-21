#include <stdio.h>

// Desafio Super Trunfo 
// Desafio atual: tema 3 nível aventureiro - Interatividade no Super Trunfo

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2;
  char codigo1[4], codigo2[4], nome_cid1[30], nome_cid2[30];
  float area_cid1, area_cid2, pib_cid1, pib_cid2;
  float densidade1, densidade2, pibpercapita1, pibpercapita2;
  int pontos_cid1, pontos_cid2, opcao;
  unsigned long int populacao_cid1, populacao_cid2;
  float superpoder_cid1, superpoder_cid2;

  // Área para entrada de dados
  // Entrada de dados da primeira carta

  printf("CADASTRO DA PRIMEIRA CARTA \n");
  printf("Digite o Estado (uma letra de A a H): \n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (letra + número de 01 a 04): \n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_cid1);

  printf("Digite o número de habitantes: \n");
  scanf("%lu", &populacao_cid1);

  printf("Digite a área da cidade (em km²): \n");
  scanf("%f", &area_cid1);

  printf("Digite o PIB da cidade (em bilhões de reais): \n");
  scanf("%f", &pib_cid1);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &pontos_cid1);

  printf("\n");

  // Entrada de dados da segunda carta

  printf("CADASTRO DA SEGUNDA CARTA \n");
  printf("Digite o Estado (uma letra de A a H): \n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (letra + número de 01 a 04): \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_cid2);

  printf("Digite o número de habitantes: \n");
  scanf("%lu", &populacao_cid2);

  printf("Digite a área da cidade (em km²): \n");
  scanf("%f", &area_cid2);

  printf("Digite o PIB da cidade (em bilhões de reais): \n");
  scanf("%f", &pib_cid2);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &pontos_cid2);

  printf("\n");

  // Área para calcular densidade e PIB per capita

  densidade1 = (float)populacao_cid1 / area_cid1;
  pibpercapita1 = (pib_cid1 * 1000000000) / (float)populacao_cid1;

  densidade2 = (float)populacao_cid2 / area_cid2;
  pibpercapita2 = (pib_cid2 * 1000000000) / (float)populacao_cid2;

  // Calcular o super poder

  superpoder_cid1 = (float)populacao_cid1 + area_cid1 + (pib_cid1 * 0.000000001) + (float)pontos_cid1 + pibpercapita1 + (1 / densidade1);

  superpoder_cid2 = (float)populacao_cid2 + area_cid2 + (pib_cid2 * 0.000000001) + (float)pontos_cid2 + pibpercapita2 + (1 / densidade2);

  // Área para exibição dos dados ds cartas
  // Exibir dados da primeira carta

  printf("CARTA 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", nome_cid1);
  printf("População: %lu \n", populacao_cid1);
  printf("Área: %.2f km² \n", area_cid1);
  printf("PIB: %.2f bilhões de reais \n", pib_cid1);
  printf("Número de Pontos Turísticos: %d \n", pontos_cid1);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
  printf("PIB per Capita: %.2f reais \n", pibpercapita1);
  printf("Super Poder: %.2f \n\n", superpoder_cid1);

  // Exibir dados da segunda carta

  printf("CARTA 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", nome_cid2);
  printf("População: %lu \n", populacao_cid2);
  printf("Área: %.2f km² \n", area_cid2);
  printf("PIB: %.2f bilhões de reais \n", pib_cid2);
  printf("Número de Pontos Turísticos: %d \n", pontos_cid2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf("PIB per Capita: %.2f reais \n", pibpercapita2);
  printf("Super Poder: %.2f \n\n", superpoder_cid2);

  /*
  // Comparação das cartas - Tema 2

  printf("Comparação de Cartas: \n");
  printf("(1 para verdadeiro, 0 para falso\n");

  printf("População: Carta 1 venceu (%lu) \n", populacao_cid1 > populacao_cid2);
  printf("Área: Carta 1 venceu (%d) \n", area_cid1 > area_cid2);
  printf("PIB: Carta 1 venceu \n", pib_cid1 > pib_cid2);
  printf("Pontos Turísticos: Carta 1 venceu \n", pontos_cid1 > pontos_cid2);
  printf("Densidade Populacional: Carta 1 venceu \n", densidade1 < densidade2);
  printf("PIB per Capita: Carta 1 venceu \n", pibpercapita1 > pibpercapita2);
  printf("Super Poder: Carta 1 venceu \n", superpoder_cid1 > superpoder_cid2);
  */

  /*Comparação de um atributo de cartas (pontos turísticos) - Tema 3 

  printf("Comparação de Cartas (Atributo: Número de Pontos Turísticos) \n");
  printf("Carta 1 - %s: %d \n", nome_cid1, pontos_cid1);
  printf("Carta 2 - %s: %d \n", nome_cid2, pontos_cid2);
  if (pontos_cid1 > pontos_cid2){
    printf("Resultado: Carta 1 venceu! \n");
  } else {
    printf("Resultado: Carta 2 venceu! \n");
  }
  */

  // Menu interativo para comparação de cartas
  printf("COMPARAÇÃO DE CARTAS \n");
  printf("Escolha o atributo (apenas número de 1 a 5): \n");
  printf("1. População \n");
  printf("2. Área \n");
  printf("3. PIB \n");
  printf("4. Número de Pontos Turísticos \n");
  printf("5. Densidade Demográfica \n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Atributo: População \n");
    printf("Carta 1 - %s - %lu habitantes \n", nome_cid1, populacao_cid1);
    printf("Carta 2 - %s - %lu habitantes \n", nome_cid2, populacao_cid2);
    if (populacao_cid1 > populacao_cid2)
    {
      printf("Carta 1 venceu!! \n");
    }
    else if (populacao_cid2 > populacao_cid1)
    {
      printf("Carta 2 venceu!! \n");
    }
    else
    {
      printf("Empate!! \n");
    }
    break;
  case 2:
    printf("Atributo: Área \n");
    printf("Carta 1 - %s - %.2f km² \n", nome_cid1, area_cid1);
    printf("Carta 2 - %s - %.2f km² \n", nome_cid2, area_cid2);
    if (area_cid1 > area_cid2)
    {
      printf("Carta 1 venceu!! \n");
    }
    else if (area_cid2 > area_cid1)
    {
      printf("Carta 2 venceu!! \n");
    }
    else
    {
      printf("Empate!! \n");
    }
    break;
  case 3:
    printf("Atributo: PIB \n");
    printf("Carta 1 - %s - %.2f bilhões de reais \n", nome_cid1, pib_cid1);
    printf("Carta 2 - %s - %.2f bilhões de reais \n", nome_cid2, pib_cid2);
    if (pib_cid1 > pib_cid2)
    {
      printf("Carta 1 venceu!! \n");
    }
    else if (pib_cid2 > pib_cid1)
    {
      printf("Carta 2 venceu!! \n");
    }
    else
    {
      printf("Empate!! \n");
    }
    break;
  case 4:
    printf("Atributo: Número de Pontos Turísticos \n");
    printf("Carta 1 - %s - %d pontos\n", nome_cid1, pontos_cid1);
    printf("Carta 2 - %s - %d pontos \n", nome_cid2, pontos_cid2);
    if (pontos_cid1 > pontos_cid2)
    {
      printf("Carta 1 venceu!! \n");
    }
    else if (pontos_cid2 > pontos_cid1)
    {
      printf("Carta 2 venceu!! \n");
    }
    else
    {
      printf("Empate!! \n");
    }
    break;
  case 5:
    printf("Atributo: Densidade Demográfica \n");
    printf("Carta 1 - %s - %.2f hab/km² \n", nome_cid1, densidade1);
    printf("Carta 2 - %s - %.2f hab/km² \n", nome_cid2, densidade2);
    if (densidade1 < densidade2)
    {
      printf("Carta 1 venceu!! \n");
    }
    else if (densidade2 < densidade1)
    {
      printf("Carta 2 venceu!! \n");
    }
    else
    {
      printf("Empate!! \n");
    }
    break;
  default:
    printf("Opção inválida. \n");
    break;

    return 0;
  }
}