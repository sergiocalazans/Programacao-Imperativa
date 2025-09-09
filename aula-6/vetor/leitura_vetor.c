#include <stdio.h>

int main()
{
  float nota[6];

  // Leitura de todos os elementos
  for (int i = 0; i < 6; i++)
  {
    printf("Digite o valor do elemento %d: ", i);
    scanf("%f", &nota[i]);
  }

  // Opcional: imprimir para verificar
  printf("Valores digitados:\n");
  for (int i = 0; i < 6; i++)
  {
    printf("%.1f ", nota[i]);
  }
  printf("\n");

  return 0;
}
