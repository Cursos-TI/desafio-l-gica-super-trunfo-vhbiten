#include <stdio.h>
int main() {
  //variáveis
  char card1_estado[20], card2_estado[20];
  char card1_codigo[20], card2_codigo[20];
  char card1_cidade[20], card2_cidade[20];
  int card1_populacao, card2_populacao;
  float card1_area, card2_area;
  float card1_pib, card2_pib;
  int card1_pontosturisticos, card2_pontosturisticos;
  float card1_densidade, card2_densidade;
  float card1_pibpercapita, card2_pibpercapita;
  float card1_superpoder, card2_superpoder;
  

  //cadastro das cartas
  //primeira carta
  printf("Cadastre sua primeira carta.\n Digite o Estado: ");
  scanf(" %[^\n]", card1_estado);

  printf("Digite a primeira letra do Estado + um número para ser o código da sua carta (exemplo: A01, B02, C03)\n R: ");
  scanf(" %19s", card1_codigo);

  printf("Qual o nome da cidade?\n R:");
  scanf(" %[^\n]", card1_cidade);
  
  printf("Quantos habitantes tem a sua cidade?\n R:");
  scanf("%d", &card1_populacao);

  printf("Quantos quilômetros quadrados (km²) tem a sua cidade?\n R:");
  scanf("%f", &card1_area);
  
  printf("Qual o PIB da sua cidade?\n R:");
  scanf("%f", &card1_pib);

  printf("Quantos pontos turísticos a sua cidade tem?\n R:");
  scanf("%d", &card1_pontosturisticos);

  //cadastro da segunda carta
  printf("Cadastre sua segunda carta.\n Digite o Estado: ");
  scanf(" %[^\n]", card2_estado);

  printf("Digite a primeira letra do Estado + um número para ser o código da sua carta (exemplo: A01, B02, C03)\n R: ");
  scanf(" %19s", card2_codigo);

  printf("Qual o nome da cidade?\n R:");
  scanf(" %[^\n]", card2_cidade);
  
  printf("Quantos habitantes tem a sua cidade?\n R:");
  scanf("%d", &card2_populacao);

  printf("Quantos quilômetros quadrados (km²) tem a sua cidade?\n R:");
  scanf("%f", &card2_area);
  
  printf("Qual o PIB da sua cidade?\n R:");
  scanf("%f", &card2_pib);

  printf("Quantos pontos turísticos a sua cidade tem?\n R:");
  scanf("%d", &card2_pontosturisticos);

  //calculo das variaveis "Densidade Populacional" e "PIB per capita"

  card1_pibpercapita = (float) card1_pib / card1_populacao;
  card1_densidade = (float) card1_populacao / card1_area;

  card2_pibpercapita = (float) card2_pib / card2_populacao;
  card2_densidade = (float) card2_populacao / card2_area;
  
  //calculo do superpoder das cartas

  card1_superpoder = (float) (card1_populacao + card1_area + card1_pib + card1_pontosturisticos + 1/card1_densidade + card1_pibpercapita);
  card2_superpoder = (float) (card2_populacao + card2_area + card2_pib + card2_pontosturisticos + 1/card2_densidade + card2_pibpercapita);

  //listagem das cartas cadastradas
  printf("------- CARTA 1 ---------\n");
  printf("Estado: %s\n", card1_estado);
  printf("Código: %s\n", card1_codigo);
  printf("Nome da Cidade: %s\n", card1_cidade);
  printf("População: %d habitantes\n", card1_populacao);
  printf("Área: %f km²\n", card1_area);
  printf("PIB: %f bilhões de reais\n", card1_pib);
  printf("Números de Pontos Turísticos: %d\n", card1_pontosturisticos);
  printf("Densidade populacional: %f hab/km²\n", card1_densidade);
  printf("PIB per capita: %f reais\n", card1_pibpercapita);

  
  printf("------- CARTA 2 --------\n");
  printf("Estado: %s\n", card2_estado);
  printf("Código: %s\n", card2_codigo);
  printf("Nome da Cidade: %s\n", card2_cidade);
  printf("População: %d habitantes\n", card2_populacao);
  printf("Área: %f km²\n", card2_area);
  printf("PIB: %f bilhões de reais\n", card2_pib);
  printf("Números de Pontos Turísticos: %d\n", card2_pontosturisticos);
  printf("Densidade populacional: %f hab/km²\n", card2_densidade);
  printf("PIB per capita: %f reais\n", card2_pibpercapita);

  //comparação entre as cartas

  printf("-------COMPARAÇÃO---------\n");

  if (card1_populacao > card2_populacao)  
  {
    printf ("População: Carta 1 venceu!\n");
  } else {("População: Carta 2 venceu!\n");}

  if (card1_area > card2_area)  
  {
    printf ("Área: Carta 1 venceu!\n");
  } else {printf ("Área: Carta 2 venceu!\n");}

  if (card1_pontosturisticos > card2_pontosturisticos)  
  {
    printf ("Pontos turísticos: Carta 1 venceu!\n");
  } else {printf ("Pontos turísticos: Carta 2 venceu!\n");}

  if (card1_densidade < card2_densidade)  
  {
    printf ("Densidade: Carta 1 venceu!\n");
  } else {printf ("Densidade: Carta 2 venceu!\n");}
  

  if (card1_pibpercapita > card2_pibpercapita)  
  {
    printf ("PIB per capita: Carta 1 venceu!\n");
  } else {printf ("PIB per capita: Carta 2 venceu!\n");}

  if (card1_superpoder > card2_superpoder)  
  {
    printf ("Super poder: Carta 1 venceu!\n");
  } else {printf ("Super poder: Carta 2 venceu!\n");}
  
  return 0;
}