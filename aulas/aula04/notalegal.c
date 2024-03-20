#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;

  printf("Encontre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Encontre com a quantidade do produto: ");
  deu_certo = scanf("%i", &quantidade);

  printf("Encontre com o valor: ");
  deu_certo = scanf("%f", &valor);

  printf("------------------------------------\n");
  printf("----------N O T A L E G A L---------\n");
  printf("------------------------------------\n");
  printf("ITEM                QTD        VALOR\n");
  printf("%-19s %3.3i %12.2f\n", nome, quantidade, valor);
  printf("------------------------------------\n");

  return 0;
}