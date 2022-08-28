#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	int animais[100],animais2[100],tam,i,j,aux,diferentes=1;
	
    scanf("%d",&tam);
	
	for(i=0;i<tam;i++){
		scanf("%d",&animais[i]);
		animais2[i]=animais[i];
	}
    //remover iguais
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
		    if(i != j){
			    if (animais2[i] == animais2[j]){
				    diferentes++;
				    animais2[i]=0;
			    }
		    }
		}
	}
    /*/função que deixa os valores ordenados*/
    for(i=0;i<tam-1;i++){
        for(j=i+1;j<tam;j++){
            if(animais2[j]  < animais2[i]){
                aux         = animais2[i];
                animais2[i] = animais2[j];
                animais2[j] = aux;
            }
        }
    }
	printf("\n");
	j=1;
	diferentes=0;
	for(i=0;i<tam;i++){
        if(animais2[i]!=0){
            j++;
            diferentes++;
            }
	}
	printf("%d",diferentes);
	return 0;
}