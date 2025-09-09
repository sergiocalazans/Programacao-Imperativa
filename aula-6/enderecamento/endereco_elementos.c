#include <stdio.h>

int main()
{
  char palavra[10];

  for (int i = 0; i < 10; i++)
  {
    // O especificador %p é para ponteiros (endereços)
    printf("endereco de palavra[%d]: %p\n", i, &palavra[i]);
  }

  return 0;
}
