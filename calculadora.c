#include<stdio.h>
int main(){
    int n1, n2;
    char operador;
    scanf("%d",&n1);
    scanf("%d",&n2);
    //precisa de um espaço antes 
    scanf(" %c",&operador);
    if(operador == '/'&& n2!=0){
        printf("%d", n1/n2);
    }else if(operador == '*'){
        printf("%d", n1*n2);
    }else if(operador == '+'){
        printf("%d", n1+n2);
    }else if(operador == '-'){
        printf("%d", n1-n2);
    }else{
        printf("invalida");
    }
}

