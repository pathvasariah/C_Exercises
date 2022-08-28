#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, par=0, impar=0;
    scanf("%d",&n);
    int vetor[n];
    for( i=1 ; i<=n ; i++ ){
        scanf("%d", &vetor[i]);
        if(vetor[i]%2==0){
            par=par+vetor[i];
        }else if(vetor[i]%2==1){
            impar=impar+vetor[i];
        }
    }
        if(par>impar){
            printf("rebeldes");
        }else if(impar>par){
            printf("soldados");
        }else{
            printf("empate");
        }

}