#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    // rock, fire, scissors, human, sponge, paper, air, water, gun
    // 0,1,2,3,4,5,6,7,8

    char jog1[10], jog2[10];
    scanf("%s", jog1);
    scanf("%s", jog2);


    // printf("%s\n", jog1);
    // printf("%s\n", jog2);

    if(strcmp(jog1,jog2) == 0){
        printf("empate\n");
        return 0;
    }


    int escolhaJog1 = -1, escolhaJog2 = -1;

    if(strcmp(jog1,"rock") == 0){
        escolhaJog1 = 0;
    }
    else if(strcmp(jog1,"fire") == 0){
        escolhaJog1 = 1;
    }
    else if(strcmp(jog1,"scissors") == 0){
        escolhaJog1 = 2;
    }
    else if(strcmp(jog1,"human") == 0){
        escolhaJog1 = 3;
    }
    else if(strcmp(jog1,"sponge") == 0){
        escolhaJog1 = 4;
    }
    else if(strcmp(jog1,"paper") == 0){
        escolhaJog1 = 5;
    }
    else if(strcmp(jog1,"air") == 0){
        escolhaJog1 = 6;
    }
    else if(strcmp(jog1,"water") == 0){
        escolhaJog1 = 7;
    }
    else if(strcmp(jog1,"gun") == 0){
        escolhaJog1 = 8;
    }



    if(strcmp(jog2,"rock") == 0){
        escolhaJog2 = 0;
    }
    else if(strcmp(jog2,"fire") == 0){
        escolhaJog2 = 1;
    }
    else if(strcmp(jog2,"scissors") == 0){
        escolhaJog2 = 2;
    }
    else if(strcmp(jog2,"human") == 0){
        escolhaJog2 = 3;
    }
    else if(strcmp(jog2,"sponge") == 0){
        escolhaJog2 = 4;
    }
    else if(strcmp(jog2,"paper") == 0){
        escolhaJog2 = 5;
    }
    else if(strcmp(jog2,"air") == 0){
        escolhaJog2 = 6;
    }
    else if(strcmp(jog2,"water") == 0){
        escolhaJog2 = 7;
    }
    else if(strcmp(jog2,"gun") == 0){
        escolhaJog2 = 8;
    }


    // printf("%d %d", escolhaJog1, escolhaJog2);

    int indexJ1 = 0;
    int j1[4];

    int i = escolhaJog1 + 1;
    while (indexJ1 < 4){
        if(i == 9){
            i = 0;
        }
        else{
            j1[indexJ1] = i;
            i++;
            indexJ1++;
        }
    }

    for(i=0;i<4;i++){
        if(j1[i] == escolhaJog2){
            printf("jog1\n");
            return 0;
        }
    }

    printf("jog2\n");
    return 0;
}