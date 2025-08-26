#include <stdio.h>

int main()
{
  int a = 10;
  int b = 30;
  int c = 20;

  if (a < b)
    printf("a < b\n");
  else
    printf("a >= b\n");
  if (a < b && b < c)
  {
    printf("a < b < c");
  }
  else
  {
    a = a * 2;
    b = c - a;
    c = c / 2;
  }
  printf("a, b, c: %d %d %d\n", a, b, c);
}