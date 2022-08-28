#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Entrada:

Um inteiro n , representando os 9 primeiros dígitos do CPF.
Saida:

O número do CPF com os dois dígitos verificadores.
*/
int main()
{
    int num, b, c, i=0, soma=0, g=0, j, resto, resto2, d, e, f, m, k, o, parte;
    scanf("%d", &num);
    o = num;
    parte = num;
    while(num!=0){
        b=num%10;
        num=num/10;
        c=b*(2+i);
        i++;
        soma = soma + c;
    }
    resto = soma%11;
    if(resto==0||resto==1){
        j = 0;
    }
    else if(resto!=0||resto!=1){
        j = (11-resto);
    }
    f = j*2;
    while(o!=0){
        d=o%10;
        o=o/10;
        e=d*(3+g);
        g++;
        f = f + e;
    }
    resto2 = f%11;
    if(resto2==0||resto2==1){
        k = 0;
    }
    else if(resto2!=0||resto2!=1){
        k = (11-resto2);
    }
    printf("%d-%d%d", parte, j, k);
    return 0;
}