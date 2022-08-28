#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char l[21];
    char l2[21];
    char copia[21];
    char copia_n[21];
    gets(l);
    gets(l2);
    //scanf("%s" , l); 
    //scanf("%[^\n]" , l);
    printf("%s \n", l);
    int i = sizeof(l)/sizeof(char);
    printf("Retorna 0 se forem iguais, 1 se o primeiro for menor e -1 se o primeiro for maior(alfabeticamente) \n");
    printf("%i \n", strcmp(l, l2));
    printf("A cadeia possui %i caracteres \n", i);
    printf("Tamanho da string: ");
    printf("%i \n",strlen(l));
    printf("Converte para minusculo: ");
    printf("%s \n", strlwr(l));
    printf("Converte para maiusculo: ");
    printf("%s \n", strupr(l));
    printf("Copia de um lugar para outro: ");
    strcpy(copia, l);
    printf("%s \n", copia);
    printf("Copia de um lugar para outro(n caracteres): ");
    strncpy(copia_n, l, 2);
    printf("%s \n", copia_n);
    printf("Concatena(junta): ");
    printf("%s \n", strcat(l, l2));
    printf("Concatena n caracteres(junta): ");
    printf("%s \n", strncat(l, l2, 3));
    
    
}