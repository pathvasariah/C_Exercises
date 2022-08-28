#include <stdio.h>
#include <stdlib.h>

void main(){
    float produto, desconto;
    
    printf("Digite o valor do produto:\n");
    scanf("%f",&produto);
    desconto = produto*0.9;
    printf("O valor do produto apos o desconto eh:\n%.2f", desconto);
}