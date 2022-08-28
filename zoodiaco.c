#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, indexU, aux, deveIncluir;
    scanf("%d", &n);
    int vetor[n], unico[n];

    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }



    indexU = 0;
    for (i = 0; i < n; i++){
        deveIncluir = 1;
        for(j=0;j<indexU;j++){
            if(vetor[i] == unico[j]){
                deveIncluir = 0;
                break;
            }
        }
        if(deveIncluir == 1){
            unico[indexU] = vetor[i];
            indexU++;
        }
    }

    for (i = 0; i < indexU; i++){
        printf("%d ",unico[i]);
    }
    printf("\n");

    return 0;
}