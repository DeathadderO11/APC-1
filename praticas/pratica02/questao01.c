#include <stdio.h>

int main () {

  int n1 = 0;
  int n2 = 0;
  int n3 = 0;
  int valor_final = n1 + n2 + n3/ 3;
  
  printf("Informe o primeiro valor: ");
  scanf("%i", &n1);
  printf("Informe o segundo valor: ");
  scanf("%i", &n2);
  printf("Informe o terceiro valor: ");
  scanf("%i", &n3);
  printf("---------------------------------------\n");
  printf("O valor final é: %i\n", valor_final);
  printf("---------------------------------------\n");
  
  return 0;
}