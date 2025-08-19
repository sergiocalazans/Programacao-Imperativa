#include <stdio.h>
int main()
{
  int idade = -1;
  double altura = -1;
  printf("Digite a sua idade e a sua altura: ");
  scanf("%3d %5lf", &idade, &altura);
  printf("Sua idade: %d", idade);
  printf("\n");
  printf("Sua altura: %f", altura);
  printf("\n");
  return 0;
}