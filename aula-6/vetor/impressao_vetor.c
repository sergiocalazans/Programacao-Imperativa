#include <stdio.h>

int main()
{
  float nota[6] = {7.0, 8.5, 6.2, 9.0, 4.5, 8.0};

  // Modo 2: Usando um laço for
  for (int i = 0; i < 6; i++)
  {
    printf("%.1f ", nota[i]);
  }
  printf("\n"); // Adicionado para pular a linha no final

  return 0;
}
