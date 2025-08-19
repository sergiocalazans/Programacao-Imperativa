#include <stdio.h>
#include <stdbool.h>
int main()
{

  /*
  Estenda o programa a seguir com a inclusão de um
  ponteiro para cada uma das variáveis (a, b, c, d)
  definidas na função main. Imprima os endereços de
  todas as variáveis e o conteúdo (valor) apontado por
  cada ponteiro.
  */

  short a = 10;
  double b = 45.9;
  char c = '$';
  bool d = true;

  short *pa = &a;
  double *pb = &b;
  char *pc = &c;
  bool *pd = &d;

  printf("\nValor de a: %d\n", a);
  printf("Valor de pa: %p\n", pa);
  printf("Valor apontado de pa em decimal: %d\n", *pa);
  printf("-------------------------------------------------------------");
  printf("\nValor de b: %f\n", b);
  printf("Valor de pb: %p\n", pb);
  printf("Valor apontado de pb em decimal: %d\n", *pb);
  printf("-------------------------------------------------------------");
  printf("\nValor de c: %c\n", c);
  printf("Valor de pc: %p\n", pc);
  printf("Valor apontado de pc em decimal: %d\n", *pc);
  printf("-------------------------------------------------------------");
  printf("\nValor de d: %d\n", d);
  printf("Valor de pd: %p\n", pd);
  printf("Valor apontado de em decimal: %d\n", *pd);
  printf("-------------------------------------------------------------");
  return 0;
}