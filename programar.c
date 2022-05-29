#include <stdio.h>
#include <string.h>

int main ()
{
  char frase[] ="Vamos programar?";
  char * palavra;
  palavra = strstr (frase,"programar");
  strncpy (palavra,"estudar.",9);
  puts (frase);
  return 0;
}
