#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  int resultado;
  if ( argc != 3 )
  {
    printf("O uso deste programa ao executar necessita de dois valores, por exemplo 2 e 3.\\n");
    return 0;
  }

  resultado = atoi(argv[1]) + atoi(argv[2]);

  printf("\nO resultado é que %s e %s vão dar: %d\n", argv[1], argv[2], resultado);
}
