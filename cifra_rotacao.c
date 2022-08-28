#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char l;
    int change;
    scanf("%c",&l);
    scanf("%i", &change);
    if(l+change > 122){
        l = (l+change)-26;
        printf("%c", l);
    }else if(l+change < 97){
        l = (l+change)+26;
        printf("%c", l);
    }else{
        printf("%c", l+change);
    }
    return 0;
}