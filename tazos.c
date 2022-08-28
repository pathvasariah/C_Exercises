#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, aux=0, maior=0, posicao=0;
    scanf ("%i", &n);
    int vetor[n], diferentes[30];

    for (int i=0; i<n; i++){
        scanf ("%i", &vetor[i]);
        if (vetor[i]!=vetor[i-1] && i>0 && i<n-1){
            diferentes[posicao]=vetor[i];
            posicao+=2;
        }else if (i==0){
            diferentes[posicao]=vetor[i];
            posicao+=2;
        }else if (i==n-1 && vetor[i]!=vetor[i-1]){
            diferentes[posicao]=vetor[i];
            posicao+=2;
        }
    }
    aux=posicao;
    for (int i=0; i<aux; i+=2){
        for (int j=0; j<n; j++){
            if (diferentes[i]==vetor[j] && vetor[j]!=0){
                maior++;
                vetor[j]=0;
            }
        }
        diferentes[i+1]=maior;
        maior=0;
    }
    for (int i=1; i<posicao; i=i+2){
        if (diferentes[i]>=maior){
            maior=diferentes[i];
        }
    }
    for (int i=1; i<posicao; i=i+2){
        if (diferentes[i]==maior && i<posicao-1){
            printf ("%i ", diferentes[i-1]);
        }
        else if (diferentes[i]==maior && i==posicao-1){
            printf ("%i", diferentes[i-1]);
        }
    }
    return 0;
}