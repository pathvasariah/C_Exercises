#include <stdio.h>
#include <string.h>

int main(){
    char frase[100], frase_nova[100];
    gets(frase);
    int tm = strlen(frase);
    for(int i = 0 ; i < tm ; i++){
        if(frase[i] >= 97 && frase[i] <= 122){
            frase_nova[i] = frase[i]-32;
        }else if(frase[i] >= 65 && frase[i] <= 90){
            frase_nova[i] = frase[i]+32;
        }else{
            frase_nova[i] = frase[i];
        }
    }
    for(int i = 0 ; i < tm ; i++){
        printf("%c", frase_nova[i]);
    }
}