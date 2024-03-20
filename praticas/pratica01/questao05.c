#include <stdio.h>

int main () {

  int unsigned gb = 1024 * 1024 * 1024;
  int unsigned bytes = 0;
  int valor = 0;
  int valor_final = 0;
  
  printf("---------------------------------------\n");
  printf("Informe o valor em GB: ");
  scanf("%i", &valor);
  printf("---------------------------------------\n");
  bytes = valor * gb;
  printf("O valor em bytes é: %i\n", bytes);
  printf("---------------------------------------\n");
  valor_final = bytes * 0.9;
  printf("O valor final é: %i\n bytes", valor_final);

  return 0;
}