#include <stdio.h>
#include <math.h>

int main (){
  int numero1;
  int numero2;
  int numero3;

  printf("Digite o primeiro numero ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo numero ");
  deu_certo = scanf("%i", &numero2);

  printf("Digite o terceiro numero ");
  deu_certo = scanf("%i", &numero3);

  double bhaskara = pow(-numero2, 2) - 4 * numero1 * numero3;
  
  printf("O valor de bhaskara é: %f\n", bhaskara);
  
  return 0;
}