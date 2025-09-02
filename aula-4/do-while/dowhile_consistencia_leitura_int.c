#include <stdio.h>

int main()
{
  int k; // um valor entre 10 e 20, inclusive
  do
  {
    printf("Digite um valor inteiro entre 10 e 20: ");
    scanf("%d", &k);
  } while (k < 10 || k > 20);

  printf("Valor digitado: %d\n", k);
  return 0;
}
