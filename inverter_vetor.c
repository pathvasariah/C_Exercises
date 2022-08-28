#include <stdio.h>
#include <stdlib.h>

int main(){

    int t,aux;
    scanf("%d", &t);
    int vetor[t], inicio=0, fim=t-1;
    for(int i=0; i<t ; i++){
        scanf("%d", &vetor[i]);
    }
    while(inicio<fim){
        aux=vetor[inicio];
        vetor[inicio]=vetor[fim];
        vetor[fim]=aux;
        inicio++;
        fim--;
    }
    for(int i=0; i<t ; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}