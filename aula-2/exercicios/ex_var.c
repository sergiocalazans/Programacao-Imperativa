#include <stdio.h>
#include <stdbool.h>

int main()
{

  /*
  Exercício 3.4

  Faça a representação simbólica da memória do
  sistema para as variáveis definidas no programa
  abaixo.
  */

  short a = 10;
  double b = 45.9;
  char c = '$';
  bool d = true;

  printf("\nLocalidade na memoria\n");
  printf("%p\n", &a);
  printf("%p\n", &b);
  printf("%p\n", &c);
  printf("%p\n", &d);

  return 0;
}