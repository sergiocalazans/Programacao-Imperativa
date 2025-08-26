#include <stdio.h>

int main()
{
  char a, b, c;

  printf("Digite tres letras distintas: ");
  scanf(" %c %c %c", &a, &b, &c);

  // Verifica se são distintas
  if (a == b || a == c || b == c)
  {
    printf("Erro: as letras devem ser distintas.\n");
    return 1; // encerra o programa
  }

  // Ordenação simples (bubble sort de 3 elementos)
  char temp;
  if (a > b)
  {
    temp = a;
    a = b;
    b = temp;
  }
  if (a > c)
  {
    temp = a;
    a = c;
    c = temp;
  }
  if (b > c)
  {
    temp = b;
    b = c;
    c = temp;
  }

  printf("Ordem alfabetica: %c %c %c\n", a, b, c);

  return 0;
}
