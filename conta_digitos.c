#include <stdio.h>
#include <stdlib.h>

int main() {
    int contaDigitos = 0, a, b;
    scanf("%d %d", &a, &b);
    while (b != 0) {
        if (b % 10 == a){
        contaDigitos++;
        }
        b /= 10;
    }
    printf("%d\n", contaDigitos);
 }