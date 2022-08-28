#include <stdio.h>
#include <stdlib.h>
/*
MDC(Máximo Divisor Comum)
*/
int main()
{
int n1, n2, n3, resto, mdc;

printf("Digite os 3 numeros que deseja saber o MDC: \n");
scanf("%d %d %d", &n1, &n2, &n3);

while (n2!=0)
{
    resto = n1%n2;
    n1=n2;
    n2=resto;
}
while (n3!=0)
{
    resto = n1%n3;
    n1=n3;
    n3=resto;
}

printf("%d", n1);
return 0;
}