#include <stdio.h>
#define MAX 10

int main()
{
  char palavra[MAX] = {'C', 'u', 'r', 'i', 't', 'i', 'b', 'a', '\0'};
  char *p = palavra;

  while (*p != '\0')
  {
    putchar(*p);
    p++;
  }
  printf("\n"); // Adicionado para pular linha

  return 0;
}
