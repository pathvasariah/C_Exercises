#include <stdio.h>
#include <stdlib.h>

int main(){
    float kg, g;

    printf("Digite o peso em quilogramas(kg):\n");
    scanf("%f", &kg);
    g = kg*1000;
    printf("O peso convertido em gramas eh: %.1fg", g);
}