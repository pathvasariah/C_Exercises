#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, contagem = 0;
    scanf("%d",&n);
    float viajantes[n], soma = 0, salario, media;
    for (int i = 0; i < n; i++){
        scanf("%f",&viajantes[i]);
        soma += viajantes[i];
        media= soma/n;
    }for(int i = 0; i < n ; i++){
        if(viajantes[i]>media){
            contagem++;
        }
    }
    printf("%d\n", contagem);  
    return 0;
}