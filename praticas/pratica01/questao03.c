#include <stdio.h>

int main () {
  float pi = 3.14;
  float raio = 0.0;

  printf("Informe o valor do raio: ");
  int deu_certo = scanf("%f", &raio);
  scanf("%f", &raio);
  float area_da_pizza = pi*raio*raio;
  printf("--------------------------------\n");
  printf("A area da pizza é de: %f\n", area_da_pizza);
  printf("--------------------------------\n");
 
  return 0;
}