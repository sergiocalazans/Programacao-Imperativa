#include <stdio.h>
int main()
{
  /*
  getchar

  Função que retorna o
  próximo caractere
  disponível no fluxo de
  dados da entrada padrão.
  */

  printf("Digite um carater e ENTER: ");
  char c = getchar(); // lê apenas um caráter
  printf("Carater digitado: ");
  putchar(c);
  putchar('\n');
  return 0;
}
