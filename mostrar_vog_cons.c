#include <stdio.h>
#include <string.h>

int main(){
    char frase[100], frase_nova[100];
    gets(frase);
    int tm = strlen(frase);
    for(int i = 0 ; i < tm ; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            frase_nova[i] = 'v';
        }else if(frase[i] != 'A' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U' && frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != ' '){
            frase_nova[i] = 'c';
        }else{
            frase_nova[i] = frase[i];
        }
    }
    for(int i = 0 ; i < tm ; i++){
        printf("%c", frase_nova[i]);
    }
}