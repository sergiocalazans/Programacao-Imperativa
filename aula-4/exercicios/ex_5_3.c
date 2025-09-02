/*
(5.3) Elabore um programa em C para simular uma
calculadora com as quatro operações básicas
(adição, subtração, multiplicação e divisão),
usando a estrutura switch. O programa deve
receber, como entrada, dois operandos (double)
e um operador (char). Como saída, o programa
deve exibir o resultado da aplicação do
operador sobre os dois operandos.
*/
#include <stdio.h>

int main()
{
  double op1, op2, resultado;
  char operador;

  printf("Digite a operacao (ex: 5 * 3): ");
  scanf("%lf %c %lf", &op1, &operador, &op2);

  switch (operador)
  {
  case '+':
    resultado = op1 + op2;
    printf("Resultado: %.2lf\n", resultado);
    break;
  case '-':
    resultado = op1 - op2;
    printf("Resultado: %.2lf\n", resultado);
    break;
  case '*':
    resultado = op1 * op2;
    printf("Resultado: %.2lf\n", resultado);
    break;
  case '/':
    if (op2 != 0)
    {
      resultado = op1 / op2;
      printf("Resultado: %.2lf\n", resultado);
    }
    else
    {
      printf("Erro: Divisao por zero!\n");
    }
    break;
  default:
    printf("Erro: Operador invalido!\n");
    break;
  }

  return 0;
}
