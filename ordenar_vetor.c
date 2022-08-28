main() {
   int Vetor[100];
   int i, Menor, Ordenadas, Temp, n;

    scanf("%d", &n);

   for (i = 0; i < n; i++)
      scanf("%d", &Vetor[i]);

   Ordenadas = -1;

   do {
      Ordenadas++;

      Menor = Ordenadas;

      for (i = Ordenadas + 1; i < n; i++)
         if (Vetor[i] < Vetor[Menor])
            Menor = i;

      Temp = Vetor[Ordenadas];
      Vetor[Ordenadas] = Vetor[Menor];
      Vetor[Menor] = Temp;
   }
   while (Ordenadas < n);

   for (i = 0; i < n; i++)
      printf("%d ", Vetor[i]);
}