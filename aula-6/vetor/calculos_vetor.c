#include <stdio.h>

int main()
{
  float nota[6] = {7.0, 8.5, 6.2, 9.0, 4.5, 8.0};
  float soma = 0;

  for (int i = 0; i < 6; i++)
  {
    soma = soma + nota[i];
  }

  printf("soma: %.2f\n", soma);

  float media = soma / 6;

  printf("media: %.2f\n", media);

  return 0;
}
