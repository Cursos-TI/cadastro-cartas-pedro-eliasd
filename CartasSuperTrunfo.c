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

  //carta 1
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

  //Carta 2
  printf("Agora vamos cadastrar a segunda carta:\n");
  printf("Digite o estado da carta 2(Letra de A a H):\n");
  scanf(" %c", &estadoCarta2);
  printf("Digite o código da carta 2(Letra do estado + numero de 01 a 04):\n");
  scanf("%s", codigoCarta2);
  printf("Digite o nome da cidade:\n");
  scanf(" %[^\n]", nomeCarta2);
  printf("Digite o número de habitantes da cidade:\n");
  scanf("%d", &populacaoCarta2);
  printf("Digite a área da cidade (km²):\n");
  scanf("%f", &areaCarta2);
  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pibCarta2);
  printf("Digite o número de pontos turisticos da cidade:\n");
  scanf("%d", &pontoTuristicoCarta2);
  
  // Área para exibição dos dados da cidade
  printf("\nCartas Cadastradas:\n");
  printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f Bilhões de reais\nNúmero de pontos turisticos: %d\n", estadoCarta1, codigoCarta1, nomeCarta1, populacaoCarta1, areaCarta1, pibCarta1, pontoTuristicoCarta1);
  printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f Bilhões de reais\nNúmero de pontos turisticos: %d\n", estadoCarta2, codigoCarta2, nomeCarta2, populacaoCarta2, areaCarta2, pibCarta2, pontoTuristicoCarta2);


return 0;
} 
