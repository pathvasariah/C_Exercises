#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, soma_jedi=0, soma_sith=0;
    scanf("%d", &t);
    float aux=((1.0*t)/2);
    int v[t];
    for(int i=1; i<=aux; i++){
        scanf("%d",&v[i]);
        soma_jedi+=v[i];
    }for (int i=aux; i<t; i++){
        scanf ("%i", &v[i]);
        soma_sith+=v[i];
    }
    if(soma_jedi>soma_sith){
        printf ("Jedi");
    }else if(soma_jedi<soma_sith){
        printf ("Sith");
    }else if(soma_jedi==soma_sith){
    printf ("Empate");
    }
}