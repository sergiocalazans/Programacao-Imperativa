#include <stdio.h>
#include <stdbool.h>

int main()
{
  int a = 10;
  int b = 30;
  int c = 20;
  bool resultado1 = a < b;
  printf("resultado1: %d\n", resultado1);
  bool resultado2 = (a < b) && (b < c);
  printf("resultado2: %d\n", resultado2);
  bool resultado3 = resultado1 || resultado2;
  printf("resultado3: %d\n", resultado3);
  bool resultado4 = (a < b || b < c) && a < c;
  printf("resultado4: %d\n", resultado4);
}