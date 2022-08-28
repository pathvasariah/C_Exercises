#include <stdio.h>
#include <stdlib.h>

void main(){
    float salario_fixo, vendas, salario;
    
    printf("Digite o salario fixo:\n");
    scanf("%f",&salario_fixo);
    printf("Digite o valor das vendas:\n");
    scanf("%f",&vendas);
    salario = ((vendas*0.04)+salario_fixo);
    printf("O salario total(com comissao) eh: %.2f", salario);

}