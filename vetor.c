#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
int vetor[5];
int x, i;
printf ("insira 5 números\n");
for (i = 0; i < 5; i++)  
{
scanf("%d", &vetor[i]);
}
i = 1;
x = vetor[0];
while (i < 5)
{
if (vetor[i] > x)
{
x = vetor[i];
}
i++;
}
printf("\n O que aconteceu aos números? %d .\n",x);
return 0;
}
