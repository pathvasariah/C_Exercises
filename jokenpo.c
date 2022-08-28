#include <stdio.h>
#include <stdlib.h>

int main(){
    //P paper R rock S scissor
    char jog1, jog2;
    scanf(" %c", &jog1);
    scanf(" %c", &jog2);
    if(jog1 == jog2){
        printf("empate");
    }else if(jog1=='P' && jog2=='R' || jog1=='R' && jog2=='S' || jog1=='S' && jog2=='P'){
        printf("jog1");
    }else if(jog2=='P' && jog1=='R' || jog2=='R' && jog1=='S' || jog2=='S' && jog1=='P'){
        printf("jog2");
    }
}