#include <stdio.h>
#include <stdlib.h>

int main(){
    float horas, valor_horas, extra, valor_extra, salario_min, salario_final;
    printf("Digite a quantidade de horas trabalhadas:\n");
    scanf("%f", &horas);
    printf("Digite a quantidade de horas extras trabalhadas:\n");
    scanf("%f", &extra);
    printf("Digite o valor do salario minimo:\n");
    scanf("%f", &salario_min);

    valor_horas = (horas*(salario_min/8));
    valor_extra = (extra*(salario_min/4));
    salario_final = valor_extra + valor_horas; 
    printf("O salario final sera: %.2f\n", salario_final);

}