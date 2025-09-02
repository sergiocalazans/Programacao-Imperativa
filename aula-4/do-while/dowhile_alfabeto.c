#include <stdio.h>

int main()
{
  // código usando do-while:
  printf("Usando do-while:\n");
  char letra_do = 'a';
  do
  {
    putchar(letra_do);
    letra_do++;
  } while (letra_do <= 'z');
  printf("\n\n");

  // código usando while:
  printf("Usando while:\n");
  char letra_while = 'a';
  while (letra_while <= 'z')
  {
    putchar(letra_while);
    letra_while++;
  }
  printf("\n");

  return 0;
}
