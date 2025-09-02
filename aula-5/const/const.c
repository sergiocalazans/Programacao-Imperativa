#include <stdio.h>

const double PI = 3.14159;
const int MAXIMO_POR_EQUIPE = 4;
const char ARROBA = '@';

int main()
{
  printf("%f\n", PI);
  printf("%d\n", MAXIMO_POR_EQUIPE);
  putchar(ARROBA);
  printf("\n"); // Adicionado para pular linha após o putchar
  return 0;
}
