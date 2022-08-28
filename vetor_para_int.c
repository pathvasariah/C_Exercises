#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int tamanho, aux, novo=0, exp, soma, ini=0;
    scanf("%d",&tamanho);
    int v[tamanho];
    aux = tamanho;
    exp = tamanho-1;
    for (int i = 0; i < tamanho; i++){
        scanf("%d",&v[i]);  
    }    
    for (int i = 0; i < aux; i++){
        soma = v[i]*(pow(10,exp));
        novo = novo + soma;
        exp--;
    }
    printf("%d\n", novo);
}