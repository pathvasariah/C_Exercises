#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, i, soma=0;
    scanf("%d", &x);
    scanf("%d", &n);
    int vetor[n];
    for( i=0 ; i<n ; i++ ){
        scanf("%d", &vetor[i]);
        if(vetor[i]==x){
            soma++;
        }
    }
        
        printf("%d", soma);
}