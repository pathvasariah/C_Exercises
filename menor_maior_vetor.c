#include <stdio.h>
int main(){
    int vetor[5], menor, maior, i = 1, soma;
    scanf("%d", &vetor[0]);
    maior = vetor[0];
    menor = vetor[0];
    while( i < 5){
        scanf("%d", &vetor[i]);
        if(vetor[i]<=menor){
            menor = vetor[i];
        }
        if(vetor[i]>=maior){
            maior = vetor[i];
        }
        i++;
    }
    soma = maior + menor;
    printf("%d", soma);
    return 0; 
}