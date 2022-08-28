#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario,novo_salario;
    scanf("%f", &salario);
    if(salario<=1000){
        novo_salario = salario+(salario*20)/100;
    }else if(1000<salario && salario<=1500){
        novo_salario = salario+(salario*15)/100;
    }else if(1500<salario && salario<=2000){
        novo_salario = salario+(salario*10)/100;
    }else if(salario>2000){
        novo_salario = salario+(salario*5)/100;
    }
    printf("%.2f",novo_salario);
}