#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

   setlocale(LC_ALL, "Portuguese_Brazil");

   int num, i, resultado = 0;
   printf("Digite o numero que deseja saber se eh primo: \n");
   scanf("%d", &num);
   for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
         resultado++;
         break;
      }
   }
   if (resultado == 0)
      printf("Número primo");
   else
      printf("Número não primo");
   return 0;
}