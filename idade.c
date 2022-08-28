#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano_nasc, ano_atual, meses, dias, semanas, anos, dif_anos;
    
    printf("Digite o ano do nascimento:\n");
    scanf("%i", &ano_nasc);
    printf("Digite o ano atual:\n");
    scanf("%i", &ano_atual);
    dif_anos = ano_atual - ano_nasc;
    printf("a idade dessa pessoa em anos eh: %i ano(s)\n",dif_anos);
    printf("a idade dessa pessoa em meses eh aproximadamente: %i mes(es)\n",dif_anos*12);
    printf("a idade dessa pessoa em semanas eh aproximadamente: %i semana(s)\n",dif_anos*12*4);
    printf("a idade dessa pessoa em dias eh aproximadamente: %i dia(s)\n",dif_anos*365);


}