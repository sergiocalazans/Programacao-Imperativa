/*
(5.7) Converta o programa em Python ao lado para
um programa em C, usando while e break.
# Python
i=10
while i > 0 :
    i = i - 0.25
    print (i)
    if (i**2) + 1 >= 1.45 :
        i = i + 0.20
    else:
        break
*/
#include <stdio.h>

int main()
{
  double i = 10.0;

  while (i > 0)
  {
    i = i - 0.25;
    printf("i = %f\n", i);

    if ((i * i) + 1 >= 1.45)
    {
      i = i + 0.20;
    }
    else
    {
      break;
    }
  }

  printf("Fim do loop.\n");

  return 0;
}
