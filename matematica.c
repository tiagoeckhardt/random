#include <stdio.h> //biblioteca padrão para comandos i/o
int main (void)
{
  int valor1, valor2;
  int resp_soma, resp_subtracao, resp_multiplicacao, resp_divisao;
 
  printf("Testando operadores aritmeticos\n\n");
  // \n desloca cursor para a próxima linha
 
  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);
  printf("Digite outro valor: ");
  scanf("%d", &valor2);
 
  resp_soma = valor1 + valor2;
  printf("\nSoma = %d", resp_soma);
 
  resp_subtracao = valor1 - valor2;
  printf("\nSubtracao = %d", resp_subtracao);
 
  resp_multiplicacao = valor1 * valor2;
  printf("\nMultiplicacao = %d", resp_multiplicacao);
 
  resp_divisao = valor1 / valor2;
  printf("\nDivisao = %d\n", resp_divisao);
  return (0); //valor de retorno da função main
}
