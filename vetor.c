#include <stdio.h>
#include <stdlib.h>

int main()
{
int vetA[10], vetB[10];
int i, j;
int vetSoma[10];
int vetProduto[10];
int vetUniao[20];
int vetIntersecao[10];
int vetdAB[10];//A-B
int vetdBA[10];//B-A
int contU, contI, contdAB, contdBA;
int achou, achouDif;

//Ler o primeiro vetor
for (i=0;i<10;i++)
{
printf("\nDigite o %d o. numero do vetor A:", (i+1));
scanf("%d", &vetA[i]);
}

//Ler o segundo vetor
for (i=0;i<10;i++)
{
printf("\nDigite o %d o. numero do vetor B:", (i+1));
scanf("%d", &vetB[i]);
}

//Calculando o Vetor SOMA
for (i=0;i<10;i++)
{
vetSoma[i] = vetA[i] + vetB[i];
}

//Imprimindo o Vetor SOMA
printf("\nVetor SOMA: ");
for (i=0;i<10;i++)
{
printf(" %d",vetSoma[i]);
}

//Calculando o Vetor PRODUTO
for (i=0;i<10;i++)
{
vetProduto[i] = vetA[i] * vetB[i];
}

//Imprimindo o Vetor PRODUTO
printf("\nVetor PRODUTO: ");
for (i=0;i<10;i++)
{
printf(" %d",vetProduto[i]);
}

//Calculando o Vetor UNIAO
//Passo 1: Alocar os elementos do Vetor A no Vetor UNIAO
contU = 0;
for (i=0;i<10;i++) // Percorrendo o Vetor A
{
achou = 0;//Falso
j = 0;
while ((j < contU) && (! achou)) //Percorre o Vetor UNIAO
{
//Verica se o elemento do Vetor A já está contido no Vetor UNIAO
//Estamos assumindo que podemos ter elementos repetidos no Vetor A
if (vetA[i] == vetUniao[j])
{
achou = 1;//Verdadeiro
}
j = j+1;
}

if (! achou)
{
vetUniao[contU] = vetA[i];
contU = contU + 1;
}

}

//Passo 2: Tenta alocar os elementos do Vetor B no Vetor UNIAO
for (i=0;i<10;i++) // Percorrendo o Vetor B
{
achou = 0;//Falso
j = 0;
while ((j < contU) && (! achou)) //Percorre o Vetor UNIAO
{
if (vetB[i] == vetUniao[j])
{
achou = 1;//Verdadeiro
}
j = j+1;
}

if (! achou)
{
vetUniao[contU] = vetB[i];
contU = contU + 1;
}
}

//Imprimindo o Vetor UNIAO
printf("\nVetor UNIAO: ");
for (i=0;i<contU;i++)
{
printf(" %d", vetUniao[i]);
}

// Calculando a Diferença A – B (vetA – vetB)
contdAB = 0;
for (i=0;i<10;i++) // Percorrendo o Vetor A
{
achou = 0;//Falso
j = 0;
while ((j < 10) && (! achou)) //Percorre o Vetor B
{
//Verica se o elemento de A está em B
if (vetA[i] == vetB[j])
{
achou = 1;//Verdadeiro
}
j = j + 1;
}

if (! achou)
{
achouDif = 0; //Falso
j = 0;
while ((j < contdAB) && (! achouDif)) //Percorre o Vetor A-B
{
//Verica se o elemento de A já está no Vetor A-B
//Estamos assumindo que o Vetor A pode ter elementos repetidos
if(vetA[i] == vetdAB[j])
{
achouDif = 1;//Verdadeiro
}
j = j + 1;
}
if (! achouDif)
{
vetdAB[contdAB] = vetA[i];
contdAB = contdAB + 1;
}
}
}

//Imprimindo o Vetor A-B
printf("\nVetor A-B: ");
for (i=0;i<contdAB;i++)
{
printf(" %d", vetdAB[i]);
}

// Calculando a Diferença B – A
contdBA = 0;
for (i=0;i<10;i++) // Percorrendo o Vetor B
{
achou = 0;//Falso
j = 0;
while ((j < 10) && (! achou)) //Percorre o Vetor A
{
//Verifica se o elemto de B está em A
if (vetB[i] == vetA[j])
{
achou = 1;//Verdadeiro
}
j = j + 1;
}

if (! achou)
{
achouDif = 0; //Falso
j = 0;
while ((j < contdBA) && (! achouDif)) //Percorre o Vetor B-A
{
if(vetB[i] == vetdBA[j])
{
achouDif = 1;//Verdadeiro
}
j = j + 1;
}

if (! achouDif)
{
vetdBA[contdBA] = vetB[i];
contdBA = contdBA + 1;
}
}
}

//Imprimindo o Vetor B-A
printf("\nVetor B-A: ");
for (i=0;i<contdBA;i++)
{
printf(" %d", vetdBA[i]);
}


// Calculando a Interseção entre A e B
contI = 0;
for (i=0;i<10;i++) // Percorrendo o Vetor A
{
achou = 0;//Falso
j = 0;
while ((j < 10) && (! achou)) //Percorre o Vetor B
{
//Verifica se o elemnto de A está em B
if (vetA[i] == vetB[j])
{
achou = 1;//Verdadeiro
}
j = j + 1;
}

if (achou)
{
achouDif = 0; //Falso
j = 0;
while ((j < contI) && (! achouDif)) //Percorre o Vetor Intersecao
{
//Verica se o elemto de A, que descobrimos estar em B, já foi adicionado em A interseção B
//Estamos assumindo que o Vetor A pode ter elementos repetidos
if(vetA[i] == vetIntersecao[j])
{
achouDif = 1;//Verdadeiro
}
j = j + 1;
}
if (! achouDif)
{
vetIntersecao[contI] = vetA[i];
contI = contI + 1;
}
}
}

//Imprimindo o Vetor Intersecao
printf("\nVetor Intersecao: ");
for (i=0;i<contI;i++)
{
printf(" %d", vetIntersecao[i]);
}

return 0;
}