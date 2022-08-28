#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, soma=0;
    scanf("%d", &A);
    scanf("%d", &B);
    if(A>B){
        printf("invalido");
    }else{
        for(int i=A; i<=B; i++){
            if(i%2==0){
                soma=i+soma;
            }
        }
        printf("%d",soma);
    }
}