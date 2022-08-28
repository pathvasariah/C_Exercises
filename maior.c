#include <stdio.h>
#include <stdlib.h>

int main(void){
    float maior, n1,n2,n3,n4;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    if(n2>n1 && n2>n3 && n2>n4){
        maior=n2;
    }else if(n1>n2 && n1>n3 && n1>n4){
        maior=n1;
    }else if(n3>n2 && n3>n1 && n3>n4){
        maior=n3;
    }else if(n4>n2 && n4>n3 && n4>n1){
        maior=n4;
    }else if(n1==n2 && n3==n4 && n1==n4){
        maior=n1;
    }
        printf("%.0f",maior);
}