#include <stdio.h>
int main()
{
  int x = 0;
  while (x < 10000)
  {
    x++;
    printf("x: %d\n", x);
  }
  return 0;
}
