#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int mmc(int vet[], int t);
int main(){
    int num, min;
    printf("Digite a quantidade de numeros: ");
    scanf("%i", &num);
    int vet[num];
    for (int i = 0; i < num; i++){
        printf("Digite o numero: \n");
        scanf("%i", &vet[i]);
    }
    min = mmc(vet, num);
     printf("%i", min);
}
int mmc(int *vet, int t){
    int mmc, maior = 0, multi = 1, ctrl;
    for (int i = 0; i < t; i++){
        if (vet[i] > maior){
            maior = vet[i];
        }
    } 
    while (ctrl != t){
        ctrl = 0;
        for (int i = 0; i < t; i++){
            if (maior * multi % vet[i] == 0){
                ctrl++;
            }
        }
        multi++;
    }
    mmc = maior * (multi - 1);
    return mmc;    
}