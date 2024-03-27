#include <stdio.h>
#include <math.h>

int main () {
  int altura = 0;
  int distancia = 0;
  float const PI = 3.14;

  printf("Digite a altura do avião: ");
  int deu_certo = scanf("%i", &altura);

  printf("Digite a distância do avião: ");
  deu_certo = scanf("%i", &distancia);

  const double seno = sin(distancia / altura * (PI/180));
  printf("A altura é: %i\n", seno);

  return 0;
}