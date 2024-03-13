#include <stdio.h> 

int main () {
  float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas = 100.0f;
  
  const float IR = 0.25f;
  const float INSS = 0.11f;
  
  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float imposto_de_renda = valor_salario_bruto * IR;
  float inss = valor_salario_bruto * INSS;
  float salario_liquido = valor_salario_bruto - imposto_de_renda - inss;
  
  printf("\x1b[31m");
  printf("----------------------------------------------------\n");
  printf("             C O N T R A - C H E Q U E              \n");
  printf("----------------------------------------------------\n");
  printf("\x1b[0m");
  printf("\x1b[34m");
  printf("Salario bruto: R$ %34.2f\n" ,valor_salario_bruto);
  printf("Imposto de Renda: R$ %31.2f\n" ,imposto_de_renda);
  printf("INSS: R$ %43.2f\n",inss);
  printf("Salario liquido: R$ %32.2f\n" , salario_liquido);
  printf("\x1b[0m");
  
  return 0;
}