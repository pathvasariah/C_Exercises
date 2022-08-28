#include <stdio.h>
#include <stdlib.h>

int main(){

    int fila, cont = 0;
    scanf("%i", &fila);
    int p[fila];

    for(int i = 0 ; i < fila ; i++){
        scanf("%i", &p[i]);
    }
    for(int i = 0 ; i < fila ; i++){
        if(i == 0){
            if(p[i] == 0 && p[i+1] != 1 ){
                cont++;
            }
        }else if(i == fila-1 && p[fila-1] == 0 && p[fila-2] == 0){
            cont++;
        }else if(p[i] == 0 && p[i] == p[i+1] && p[i] == p[i-1]){
            cont++;
        }
    }
    printf("%i", cont);
    return 0;
}