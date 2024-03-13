#include <stdio.h> 

int main() {
  printf("\x1b[31m----------------------------------------------\n");
  printf("--------------N O T A L E G A L---------------\n");
  printf("----------------------------------------------\n");
  printf("\x1b[0m\n");
  printf("\x1b[32m" "ITEM                      QND     VALOR       \n");
  printf("%-25s %03i %9.2f\n" , "Banana nanica", 2, 20.00);
  printf("%-25s %03i %9.2f\n" , "Uva Globo", 1, 15.00    );
  printf("%-25s %03i %9.2f\n" , "Laranja Lima", 1, 18.00 );
  printf("----------------------------------------------\n");
  printf("\x1b[0m");
  printf("\x1b[35m");
  printf("TOTAL:                            53.00\n"); 
  printf("\x1b[0m");
  return 0;
}