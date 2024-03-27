#include <stdio.h>
#include <math.h>

int main () {
  int numero1;
  int numero2;
  const double PI = 3.14;

  printf("Digite o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  int subtrair = numero1 - numero2;
  int multiplicar = numero1 * numero2;
  float dividir = 1.0f * numero1 / numero2; //conversão implicita

  printf("A soma é %i\n", soma);
  printf("A subtração é %i\n", subtrair);
  printf("A multiplicação é %i\n", multiplicar);
  printf("A divisão é %f\n", dividir);

  int resto = numero1 % numero2;
  printf("O resto da divisão é %i\n", resto);

  //numero1 = numero1 + 1;
  numero1++; //incremneto
  ++numero1;
  printf("o incremento do primeiro numero é %i\n", numero1++);
  printf("o incremento do primeiro numero é %i\n", ++numero1);

  //numero1 = numero1 - 1;
  //decremento

  --numero1;
  numero1--;
  printf("o decremento do primeiro numero é %i\n", numero1--);
  printf("o decremento do primeiro numero é %i\n", --numero1);

  double raiz = sqrt(numero1);
  double potencia = pow(numero1, 2);
  double logaritmo = log(numero1);
  double seno = sin(numero1 * (PI / 180)); //angulo em radianos ou seja * PI/180
  double cosseno = cos(numero1);
  
  printf("A raiz quadrada do primeiro numero é: %f\n", raiz);
  printf("O quadrado do primeiro numero é: %f\n", potencia);
  printf("O logaritmo do primeiro numero é: %f\n", logaritmo);
  printf("O seno do primeiro numero é: %f\n", seno);
  printf("O cosseno do primeiro numero é: %f\n", cosseno);
  
  return 0;
}