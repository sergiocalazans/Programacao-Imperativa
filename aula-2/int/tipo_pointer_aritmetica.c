#include <stdio.h>
int main()
{
  int a = 1, b = 2, c = 3;
  printf("\nendereco	de	a:	%p\n", &a);
  printf("endereco	de	b:	%p\n", &b);
  printf("endereco	de	c:	%p\n", &c);
  printf("-------------------------------------------------------------");
  int *p = &c;
  printf("\np:	%p\n", p);
  printf("conteudo	de	p:	%d\n", *p);
  printf("-------------------------------------------------------------");
  p += 1;
  printf("\np:	%p\n", p);
  printf("conteudo	de	p:	%d\n", *p);
  printf("-------------------------------------------------------------");
  p += 1;
  printf("\np:	%p\n", p);
  printf("conteudo	de	p:	%d\n", *p);
  return 0;
}
