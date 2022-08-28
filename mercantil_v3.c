#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont1 = 0, cont2 = 0;
    float aux;
    int n;
    
    scanf("%i", &n);

    float prod[n], prim[n];
    char seg[n];

    for(int i = 0 ; i<n ; i++){
        scanf("%f", &prod[i]);
    }
    for(int i = 0 ; i<n ; i++){
        scanf("%f", &prim[i]);
    }
    for(int i = 0 ; i<n ; i++){
        scanf("%s", &seg[i]);
    }

    for(int i = 0 ; i<n ; i++){
        if(prim[i]==prod[i]){
            cont1++;
        }
        if(prim[i]!=prod[i]){
            aux = prod[i]-prim[i];
            if(aux>0){
                if(seg[i] == 'M'){
                    cont2++;
                }else if(seg[i] == 'm'){
                    cont1++;
                }
            }
        }
    }
    if(cont1>cont2){
        printf("primeiro");
    }
    else if(cont1==cont2){
        printf("empate");
    }
    else if(cont1<cont2){
        printf("segundo");
    }
    return 0;   
}
