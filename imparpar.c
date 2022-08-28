#include <stdio.h>
#include <stdlib.h>

int main(){
int par[10], impar[10], num, n, i, pares = 0, impares = 0;

    scanf("%i", &num);
    for(int j = 0 ; j<num ; j++){
    scanf("%i", &n);
    if (n % 2 == 0){
                par[pares] = n;
                pares++;
            } else {
                impar[impares] = n;
                impares++;
            }
    }
        for (int p=0; p< pares; p++){
            printf("%i ", par[p]); 
        }
        printf("\n");
        for (int im=0; im<impares; im++){
            printf("%i ", impar[im]);
        }
}