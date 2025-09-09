#include <stdio.h>
#define MAX 5

int main()
{
  int quantidade[MAX] = {4, 8, 5, 7, 9};

  for (int i = 0; i < MAX; i++)
  {
    printf("%d\n", quantidade[i]);
  }

  return 0;
}
