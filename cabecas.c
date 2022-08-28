#include<stdio.h>
int main(){
    int i, n, ini, numeroDeVivos, caraComAEspada, alguemMorreu, conseguiuPassarAEspada;
    scanf("%d",&n);
    scanf("%d",&ini);

    int filaCircular[n];
    for(i=0;i<n;i++){
        filaCircular[i] = i+1; 
    }
    numeroDeVivos = n;
    caraComAEspada = ini-1; // 0 ... n-1    |    1  ....    n
    while(numeroDeVivos != 1){

        // Mostrar a fila
        // for(i=0;i<n;i++){
        //     printf("%d ",filaCircular[i]);
        // }
        // printf("\n");

        // Matar com espada
        alguemMorreu = 0;
        i = caraComAEspada + 1;
        while (alguemMorreu == 0){
            if(i == n){
                i = 0; // fila circular
            }
            else if(filaCircular[i] == 0){
                i = i+1; // se o cara não tiver morto
            }
            else{
                filaCircular[i] = 0;
                alguemMorreu = 1;
            }
        }
        // Passar a espada
        conseguiuPassarAEspada = 0;
        i = caraComAEspada+1;
        // printf("i:%d\n",i);
        while (conseguiuPassarAEspada == 0){
            if(filaCircular[i] == 0){
                i++;
            }
            else if(i == n){
                i = 0;
            }
            else{
                caraComAEspada = i;
                conseguiuPassarAEspada = 1;
            }
            // printf("i:%d\n",i);
        }
        numeroDeVivos--;
    }
    // // Mostrar a fila
    // for(i=0;i<n;i++){
    //     printf("%d ",filaCircular[i]);
    // }
    // printf("\n");

    for(i=0;i<n;i++){
        if(filaCircular[i] != 0){
            printf("%d\n",filaCircular[i]);
        }
    }



    return 0;
}