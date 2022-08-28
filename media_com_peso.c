#include <stdio.h>
#include <stdlib.h>

int main(){
    
float n1, n2, media;

printf("digite a primeira nota:\n");
scanf("%f",&n1);
printf("digite a segunda nota :\n");
scanf("%f",&n2);

media = ((n1*2)+(n2*3))/5;
printf("%.1f", media);

}