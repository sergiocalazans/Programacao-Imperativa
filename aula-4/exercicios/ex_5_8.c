/*
(5.8) Sendo H = 1 + 1/2 + 1/3 + ... + 1/N, elaborar um programa em C para
gerar o número H. O valor de N deverá ser fornecido pelo usuário. Use a estrutura for
para somar a sequência de termos.
*/
#include <stdio.h>

int main()
{
  int N;
  double H = 0.0;
  int i;

  printf("Digite um valor inteiro positivo para N: ");
  scanf("%d", &N);

  if (N <= 0)
  {
    printf("N deve ser positivo.\n");
    return 1; // Termina com erro
  }

  for (i = 1; i <= N; i++)
  {
    H = H + (1.0 / i);
  }

  printf("O valor de H para N = %d e: %f\n", N, H);

  return 0;
}
