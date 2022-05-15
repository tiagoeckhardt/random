//programa exemplo de comparação
#include <stdio.h>
#define se if
#define principal main
#define imprima printf
#define leia scanf
#define devolva return
#define por puts

int principal()
{
    int primeiro,segundo;
    imprima("insere o primeiro valor:");
    leia("%d",&primeiro);
    imprima("Insere o segundo valor:");
    leia("%d",&segundo);
    por ("A determinar o menor e maior valor..\n");
    se(primeiro<segundo)
    {
        imprima("%d é menor que %d.\n",primeiro,segundo);
    }
    se(primeiro>segundo)
    {
        imprima("%d é maior que %d.\n",primeiro,segundo);
    }
    devolva(0);
}
