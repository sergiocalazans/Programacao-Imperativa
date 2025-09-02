#include <stdio.h>
#include <stdbool.h>
int main()
{
  int x = 0;
  bool rodando = true;
  while (x < 10 && rodando)
  {
    if (x == 7)
      rodando = false;
    x++; // x = x + 1
  }
  printf("x: %d\n", x);
  return 0;
}
