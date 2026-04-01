#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Definição das variáveis para armazenar as propriedades das cidades
// Você pode utilizar o código do primeiro desafio

  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char cidade1[50], cidade2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int turistico1, turistico2;
  float densidadepop1, pibpercapta1, densidadepop2, pibpercapta2;
  float poder1, poder2;
  float inversodens1, inversodens2;
  
// Cadastro das Cartas:
// Implemente a lógica para solicitar ao usuário que insira os dados das cidades
// utilizando a função scanf para capturar as entradas.
// utilize o código do primeiro desafio    

// Exemplo:
// printf("Digite o código da cidade: ");
// scanf("%s", codigo);
// 
// (Repita para cada propriedade)

  printf("Digite a letra do estado - Uma letra de A a H: ");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta - Soma da letra do estado mais um digito de 1 a 4: ");
  scanf("%s", codigo1);
  
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite o numero da população: ");
  scanf("%lu", &populacao1);

  printf("Digite o numero da area da cidade: ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &turistico1);

//Area de calculo da densidade populacional e do PIB per capta da primeira carta

  densidadepop1 = (float) populacao1 / area1;
  pibpercapta1 = (float) (pib1 * 1000000000.0) / populacao1;
  inversodens1 = 1.0 / densidadepop1;
  poder1 = (float) populacao1 + area1 + pib1 + turistico1 + pibpercapta1 + inversodens1;

//Entrada da segunda carta

  printf("Digite a letra do estado - Uma letra de A a H: ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta - Soma da letra do estado mais um digito de 1 a 4: ");
  scanf("%s", codigo2);
  
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite o numero da população: ");
  scanf("%lu", &populacao2);

  printf("Digite o numero da area da cidade: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &turistico2);

//Area de calculo da densidade populacional e do PIB per capta da segunda carta

  densidadepop2 = (float) populacao2 / area2;
  pibpercapta2 = (float) (pib2 * 1000000000.0) / populacao2;
  inversodens2 = 1.0 / densidadepop2;
  poder2 = (float) populacao2 + area2 + pib2 + turistico2 + pibpercapta2 + inversodens2;

// Comparação de Cartas:
// Desenvolva a lógica de comparação entre duas cartas.
// Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

// Exemplo:
// if (populacaoA > populacaoB) {
//     printf("Cidade 1 tem maior população.\n");
// } else {
//     printf("Cidade 2 tem maior população.\n");
// }

    if(populacao1 > populacao2){
        printf("Cidade 1 tem maior população.\n");
    } else {
        printf("Cidade 2 tem maior população.\n");
    }

// Exibição dos Resultados:
// Após realizar as comparações, exiba os resultados para o usuário.
// Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

// Exemplo:
// printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if(populacao1 > populacao2){
        printf("A cidade vencedora é: %s pois tem uma população de: %lu pessoas que é maior do que a população de: %s que é de: %lu pessoas!\n", cidade1, populacao1, cidade2, populacao2);
    } else {
        printf("A cidade vencedora é: %s pois tem uma população de: %lu pessoas que é maior do que a população de: %s que é de: %lu pessoas!\n", cidade2, populacao2, cidade1, populacao1);
    }

    return 0;
}
