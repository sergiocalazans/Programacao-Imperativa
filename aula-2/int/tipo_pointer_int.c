#include <stdio.h>

int main()
{
  int a = 10;
  printf("-------------------------------------------------------------");
  printf("\nEndereco	de	a:	%p\n", &a);
  printf("-------------------------------------------------------------");
  printf("\nTamanho	de	a:	%zu\n", sizeof(a));
  printf("-------------------------------------------------------------");
  int *p = &a;
  printf("\nValor	de	p:	%p\n", p);
  printf("-------------------------------------------------------------");
  printf("\nValor	apontado	por	p:	%d\n", *p);
  printf("-------------------------------------------------------------");
  printf("\nEndereco	de	p:	%p\n", &p);
  printf("-------------------------------------------------------------");
  printf("\nTamanho	de	p:	%zu\n", sizeof(p));
  return 0;
}
