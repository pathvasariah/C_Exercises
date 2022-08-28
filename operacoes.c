#include<stdio.h>
#include <stdlib.h>

int main(){
int A,B;
scanf("%d%d",&A,&B);
printf("%d ",A+B);
printf("%d ",A-B);
printf("%d ",A*B);

if(B!=0){
printf("%.2f ",(1.0*A)/B);
printf("%d",A%B);
}
else{
printf("impossivel dividir por zero");
}
return 0;
}