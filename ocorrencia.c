#include <stdio.h>
#include <string.h>

int main(){
    char frase[100], letra;
    int cont = 0;
    gets(frase);
    scanf("%c",&letra);
    int tm = strlen(frase);
    for(int i = 0 ; i < tm ; i++){
        if(frase[i]== letra){
            cont++;
        }
    }
    printf("%i", cont);
}