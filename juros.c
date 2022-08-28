#include <stdio.h>
#include <stdlib.h>

void main(){

    float entrada;
    int mes = 1;
    printf("qual o valor entrada de investimento?:");
    scanf("%f", &entrada);
    while(mes < 13){
        float porcentagem;
        float juros;
        float montante;
        printf("qual o valor do juros mensal?: ");
        scanf("%f", &porcentagem);
        juros = entrada*porcentagem/100;
        montante = entrada+juros;
        entrada = montante;
        printf("o saldo do mes %d eh %0.2f R$ \n",mes ,montante);
        if(mes == 12){
            printf("o saldo final eh %0.2f R$",montante);
        }
        mes++;
    }
}