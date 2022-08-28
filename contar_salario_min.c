#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario_min, salario, qtd_salario;
    salario_min = 1045;
    printf("Digite o salario do funcionario:\n");
    scanf("%f",&salario);
    qtd_salario = salario/salario_min;
    printf("O funcionario recebe uma quantidade que equivale a %.2f salarios minimos", qtd_salario);
}