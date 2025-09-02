#include <stdio.h>

typedef int INTEIRO;

int main()
{
  INTEIRO x;

  printf("Digite um inteiro: ");
  scanf("%d", &x);
  printf("Valor digitado = %d\n", x);

  return 0;
}
