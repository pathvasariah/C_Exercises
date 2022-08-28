#include <stdio.h>
#include <stdlib.h>


int main(){

int tamanho, i=0, j=0;
float mediana=0, soma=0, aux=0, conta=0;

//pegando valores do usuario
scanf("%i", &tamanho);
float cont[tamanho], v[tamanho];
if(tamanho>0){

	for(i=0;i<tamanho;i++){
	scanf("%f", &v[i]);
	soma+=v[i];
	}
}
//mediana
 for(i=0;i<tamanho-1;i++){
        for(j=i+1;j<tamanho;j++){
        	
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    if(tamanho%2){
         mediana = v[tamanho/2];
    } else {
         mediana = (v[tamanho/2-1]+v[tamanho/2])/2;
    }

printf("%.1f", mediana);
return 0;
}