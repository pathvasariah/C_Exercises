#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura, b_maior, b_menor, area;

	printf("Digite o valor da altura do trapezio:\n");
	scanf("%f",&altura);
	printf("Digite o valor da base menor do trapezio:\n");
	scanf("%f",&b_menor);
	printf("Digite o valor da base maior do trapezio:\n");
	scanf("%f",&b_maior);
	area = ((b_menor+b_maior)*altura)/2;
	printf("O valor da area do trapezio eh: %.1f m^2", area);
}