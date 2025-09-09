#include <stdio.h>
#define MAX 5

int main()
{
  int quantidade[MAX] = {4, 8, 5, 7, 9};
  int *p = quantidade;

  for (int i = 0; i < MAX; i++)
  {
    printf("%d\n", *p);
    p++;
  }

  return 0;
}
