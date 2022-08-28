#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, dif, absoluteDif, parkout = 0;
    scanf("%d",&n);
    int vetor[n];
    for(i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<n-1;i++){
        dif = vetor[i] - vetor[i+1];
        absoluteDif = abs(dif);
        if(absoluteDif > 1){
            parkout++; // parkout += 1 | parkout = parkout + 1
        }
    }
    printf("%d\n",parkout);

    

    return 0;
}

// 1133464221