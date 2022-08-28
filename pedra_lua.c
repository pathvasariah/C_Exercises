int main(){
    int n;
    float vencedor=-10;
    scanf ("%i", &n);
    int pedras[(2*n)];
    int pontuacao[n];
    for (int i=0; i<(2*n); i++){
        scanf ("%i", &pedras[i]);
        if (i%2==1 && pedras[i]>=10 && pedras[i-1]>=10){
            pontuacao[i]=abs((pedras[i])-(pedras[i-1]));
        }else if (pedras[i]<10 || pedras [i-1]<10){
            pontuacao[i]=100;
        }
        
    }
    for (int i=0; i<=(2*n); i++){
        if (i%2==1){
            if (pontuacao[i]<pontuacao[i-2]){
                vencedor=((1.0*i)-1)/2;
            }
        }
    }
    if (vencedor!=-10){
    printf ("%.0f", vencedor);
    }else {
    printf ("sem ganhador");
    }
    return 0;
}