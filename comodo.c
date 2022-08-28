#include <stdio.h>
#include <stdlib.h>

int main(){
    float largura, comprimento, area, potencia;
    printf("Digite as dimensoes do comodo que quer iluminar em metros:\n");
    scanf("%f%f", &largura, &comprimento);
    area = largura*comprimento;
    printf("A area do comodo eh: %.2f m^2\n", area);
    potencia = area*18;
    printf("A potencia que deve ser utilizada eh: %.1f W", potencia);
}