#include <stdio.h>
#include <stdlib.h>

void main(){

    int n;
    printf("Escolha o numero que deseja a tabuada:");
    scanf("%d", &n);
    int i = 0;
   
    while(i < 11){
        int m = 0;
        int p = n * i;
        printf("%d x %d = %d \n",n, i, p );
        i++;
    }
}