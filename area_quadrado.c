#include <stdio.h>
#include <stdlib.h>

int main(){
    float lado, area;
    printf("Digite o valor do lado:\n");
    scanf("%f", &lado);
    area = lado*lado;
    printf("O valor da area do quadrado eh: %.2f m^2", area);

}