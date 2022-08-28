#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main (){ 
    char vet[100]; 
    gets(vet); 
    int u; 
    u=strlen(vet); 
    for (int i = u-1 ; i >= 0; i--) { 
        printf("%c",vet[i]); 
    } 
    return 0; 
}