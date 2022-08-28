#include <stdio.h>
#include <stdlib.h>

int main(){
    float temp_c, temp_f;
    printf("Digite a temperatura em Celsius:\n");
    scanf("%f",&temp_c);
    temp_f= (temp_c*9/5)+32;
    printf("A temperatura em Fahrenheit eh %.1f:\n", temp_f);
}