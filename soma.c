#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    gets(nome);
    int tm = strlen(nome);
    int soma = 0, res;
    for(int i = 0 ; i<tm ; i++){
        soma = soma+nome[i];
    }
    res = soma%50;
    printf("%i", res);
    return 0;
}