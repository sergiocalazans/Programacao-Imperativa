#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool b[] = {true, false, false, true, true, false};

  // A forma sizeof(b)/sizeof(b[0]) é mais robusta que sizeof(bool)
  int num_elementos = sizeof(b) / sizeof(b[0]);
  printf("Numero de elementos: %d\n", num_elementos);

  for (int i = 0; i < num_elementos; i++)
  {
    if (b[i])
    {
      puts("verdadeiro");
    }
    else
    {
      puts("falso");
    }
  }

  return 0;
}
