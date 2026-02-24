#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estadoCarta1, estadoCarta2;
  char codigoCarta1[4], codigoCarta2[4], nomeCarta1[50], nomeCarta2[50];
  int populacaoCarta1, populacaoCarta2, pontoTuristicoCarta1, pontoTuristicoCarta2;
  float areaCarta1, areaCarta2, pibCarta1, pibCarta2;
  // Área para entrada de dados
  printf("Olá seja bem vindo ao cadastro de cartas do Super Trunfo\nVamos começar cadastrando os dados da Carta 1\n");
  printf("Digite o estado da carta 1(Letra de A a H):\n");
  scanf(" %c", &estadoCarta1);
  printf("Digite o código da carta 1(Letra do estado + numero de 01 a 04):\n");
  scanf("%s", codigoCarta1);
  printf("Digite o nome da cidade:\n");
  scanf(" %[^\n]", nomeCarta1);
  printf("Digite o número de habitantes da cidade:\n");
  scanf("%d", &populacaoCarta1);
  printf("Digite a área da cidade (km²):\n");
  scanf("%f", &areaCarta1);
  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pibCarta1);
  printf("Digite o número de pontos turisticos da cidade:\n");
  scanf("%d", &pontoTuristicoCarta1);

  // Área para exibição dos dados da cidade

return 0;
} 
