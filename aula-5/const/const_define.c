#include <stdio.h>

#define PI 3.14159
#define MAXIMO_POR_EQUIPE 4
#define ARROBA '@'

int main()
{
  printf("%f\n", PI);
  printf("%d\n", MAXIMO_POR_EQUIPE);
  putchar(ARROBA);
  printf("\n"); // Adicionado para pular linha após o putchar
  return 0;
}
