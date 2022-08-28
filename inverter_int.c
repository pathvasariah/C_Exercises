#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, novo = 0, dig, id, num2;
    scanf("%d",&num);
    num2 = num;
    while (num>0){
    dig = num%10;
    num = num/10;
    novo = novo*10+dig;
    }
    if(num2 == novo){
        id=1;
    }else{
        id=0;
    }
    printf("%d\n",id);
}