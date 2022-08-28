#include <stdio.h>
#include <stdlib.h>

int main(void){
    int menor = 30, n;
    for(int i=1;i<=5;i++){
        scanf("%d", &n);
        if(n<menor){
            menor=n;
        }else{
            menor=menor;
        }
    }printf("%d", menor);    
}