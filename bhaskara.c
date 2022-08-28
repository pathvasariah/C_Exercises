#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

float a, b, c;
float delta;
float raizPositiva, raizNegativa;

scanf("%f ", &a);
scanf("%f ", &b);
scanf("%f", &c);

delta = b * b - (4 * a * c);

raizPositiva = ( -b + sqrt(delta) ) / (2 * a);
raizNegativa = ( -b - sqrt(delta) ) / (2 * a);

if( delta > 0 )
printf("%.2f\n%.2f", raizPositiva, raizNegativa);
else if( delta == 0 )
printf("%.2f", raizPositiva);
else
printf("nao ha raiz real");

return 0;
}