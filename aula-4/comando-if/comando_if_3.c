#include <stdio.h>

int main()
{
  int a = 10;
  int b = 30;
  int c = 20;
  if (a < b)
  {
    if (b < c)
      printf("a < b < c\n");
  }
  else
    printf("a >= b\n");
  printf("a, b, c: %d %d %d\n", a, b, c);
}
