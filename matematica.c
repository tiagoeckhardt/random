#include <stdio.h> //biblioteca padrão para comandos i/o
float main (void)
{
  float valor1, valor2;
  float resp_soma, resp_subtracao, resp_multiplicacao, resp_divisao;
 
  printf("Testando operadores aritmeticos\n\n");
  // \n desloca cursor para a próxima linha
 
  printf("Digite o primeiro valor: ");
  scanf("%f", &valor1);
  printf("Digite outro valor: ");
  scanf("%f", &valor2);
 
  resp_soma = valor1 + valor2;
  printf("\nSoma = %g", resp_soma);
 
  resp_subtracao = valor1 - valor2;
  printf("\nSubtracao = %g", resp_subtracao);
 
  resp_multiplicacao = valor1 * valor2;
  printf("\nMultiplicacao = %g", resp_multiplicacao);
 
  resp_divisao = valor1 / valor2;
  printf("\nDivisao = %g\n", resp_divisao);
  return (0); //valor de retorno da função main
}
