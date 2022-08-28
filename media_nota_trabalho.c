#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,n2,n3,trabalho,maior,segunda,media;
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&trabalho);
    if(n1>n2 && n1>n3){
        maior=n1;
        if(n2>n3){
            segunda=n2;
        }else{
            segunda=n3;
        }
    }else if(n2>n1 && n2>n3){
        maior=n2;
        if(n1>n3){
            segunda=n1;
        }else{
            segunda=n3;
        }
    }else if(n3>n2 && n3>n1){
        maior=n3;
        if(n2>n1){
            segunda=n2;
        }else{
            segunda=n1;
        }
    }else if(n1==n2 && n2>n3){
        maior=n1;
        segunda=n2;
    }else if(n2==n3 && n2>n1){
        maior=n2;
        segunda=n3;
    }else if(n1==n3 && n1>n2){
        maior=n1;
        segunda=n3;
    }else if(n1==n2 && n2==n3){
        maior=n1;
        segunda=n2;
    }
    media=(maior+segunda+trabalho)/3;
    if(media>=7){
        printf("Aprovado com %.1f", media);
    }else{
        printf("Final com %.1f", media);
    }
}