#include <stdio.h>
#include <stdlib.h>

int main(){
    int contaDigitos = 0, n, dig, resto, inicio=0, aux;
    scanf("%d", &n);
    int num = n;
       if (n == 0) contaDigitos = 1;
            else
                while (n != 0){
                    contaDigitos++;
                    n /= 10;
                }
      int fim=contaDigitos-1;
      int vetor[contaDigitos];
      for(int i = 0 ; i < contaDigitos ; i++){
          resto = num%10;
          dig = num/10;
          vetor[i] = resto;
          num = dig;
      }while(inicio<fim){
        aux=vetor[inicio];
        vetor[inicio]=vetor[fim];
        vetor[fim]=aux;
        inicio++;
        fim--;
    }
    for(int i=0; i<contaDigitos ; i++){
        printf("%d ", vetor[i]);
    }
}