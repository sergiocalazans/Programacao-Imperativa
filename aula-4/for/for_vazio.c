#include <stdio.h>

int main()
{
  for (int i = 0, j = 10; i != j;)
  {
    printf("%d %d\n", i, j);
    i++;
    j--;
  }
  return 0;
}
