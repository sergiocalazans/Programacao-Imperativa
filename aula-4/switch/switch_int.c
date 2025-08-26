#include <stdio.h>

int main()
{
  int k;
  printf("Digite um numero inteiro: ");
  scanf("%d", &k);
  printf("\n");
  switch (k)
  {
  case 1:
    printf("UM");
    break;
  case 2:
    printf("DOIS");
    break;
  case 3:
    printf("TRÊS");
    break;
  default:
    printf("DESCONHECIDO");
  }
  return 0;
}
