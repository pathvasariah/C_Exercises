#include <stdio.h>
#include <stdlib.h>

int main(){
    int jog1,jog2,jog3;
    scanf("%d%d%d", &jog1,&jog2,&jog3);
    if(jog1==1 && jog1!=jog2 && jog1!=jog3||jog1==0 && jog1!=jog2 && jog1!=jog3){
        printf("jog1");
    }else if(jog2==1 && jog2!=jog1 && jog2!=jog3||jog2==0 && jog2!=jog1 && jog2!=jog3){
        printf("jog2");
    }else if(jog3==1 && jog3!=jog1 && jog3!=jog2||jog3==0 && jog3!=jog1 && jog3!=jog2){
        printf("jog3");
    }else{
        printf("empate");
    }
}