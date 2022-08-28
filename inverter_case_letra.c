#include <stdio.h>
int main(){
   char letra;
   scanf("%c", &letra);
   if(letra >= 97 && letra <= 122){
       printf("%c", letra-32);
   }else if(letra >= 65 && letra <= 90){
       printf("%c", letra+32);
   }else{
       printf("%c", letra);
   }
   return 0;
}
