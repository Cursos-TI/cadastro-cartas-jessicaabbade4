#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[10] = "A";
  char Codigo [10] = "A01";
  char Cidade[10] = "RJ";
  float populacao = 621.8;
  float area = 1200.330;
  float PIB = 359.6;
  int pontosturisticos = 100; 

  char Estado2[10] = "B";
  char Codigo2 [10] = "B02  ";
  char Cidade2[10] = "SP";
  float populacao2 = 1184.6;
  float area2 = 1521.0;
  float PIB2 = 589.3;
  int pontosturisticos2 = 150;

  // Área para entrada de dados
  scanf("%10s", &Estado);
  scanf("%10s", &Codigo);
  scanf("%10s", &Cidade);
  scanf("%f", &populacao);
  scanf("%f", &area);
  scanf("%f", &PIB);
  scanf("%d", &pontosturisticos);

  scanf("%10s", &Estado2);
  scanf("%10s", &Codigo2);
  scanf("%10s", &Cidade2);
  scanf("%f", &populacao2);
  scanf("%f", &area2);
  scanf("%f", &PIB2);
  scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade
  printf("Estado: %10s\n", Estado);
  printf("Código: %10s\n", Codigo);
  printf("Cidade: %10s\n", Cidade);
  printf("População: %.3f\n", populacao);
  printf("Área: %.3f\n", area);
  printf("PIB: %.1f\n", PIB);
  printf("Pontos Turísticos: %d\n", pontosturisticos); 

  printf("Estado: %10s\n", Estado2);
  printf("Código: %10s\n", Codigo2);
  printf("Cidade: %10s\n", Cidade2);
  printf("População: %.3f\n", populacao2);
  printf("Área: %.3f\n", area2);
  printf("PIB: %.1f\n", PIB2);
  printf("Pontos Turísticos: %d\n", pontosturisticos2);
return 0;
} 
