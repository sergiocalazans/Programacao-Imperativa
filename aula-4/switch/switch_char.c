#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool vogal;
  char letra;
  printf("Digite um letra: ");
  letra = getchar();

  switch (letra)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    vogal = true;
    break;
  default:
    vogal = false;
  }

  printf("\n");

  if (vogal)
    printf("vogal\n");
  else
    printf("consoante\n");

  return 0;
}
