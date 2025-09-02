/*
(5.1) Escreva um programa na linguagem C que, dados dois números inteiros distintos
fornecidos pelo usuário (via teclado), imprima-os em ordem crescente.
Obs: o programa deve certificar-se de que os dois números sejam distintos.
*/
#include <stdio.h>

int main()
{
  int num1, num2;

  // Loop para garantir que os números sejam distintos
  do
  {
    printf("Digite dois numeros inteiros distintos: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
    {
      printf("Erro: Os numeros devem ser distintos. Tente novamente.\n");
    }
  } while (num1 == num2);

  // Imprime em ordem crescente
  printf("Numeros em ordem crescente: ");
  if (num1 < num2)
  {
    printf("%d, %d\n", num1, num2);
  }
  else
  {
    printf("%d, %d\n", num2, num1);
  }

  return 0;
}
