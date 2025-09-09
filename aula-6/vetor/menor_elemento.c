#include <stdio.h>

int main()
{
  float nota[6] = {7.0, 8.5, 6.2, 9.0, 4.5, 8.0};
  float menor_nota = nota[0];
  int indice_menor_nota = 0;

  for (int i = 1; i < 6; i++)
  {
    if (nota[i] < menor_nota)
    {
      menor_nota = nota[i];
      indice_menor_nota = i;
    }
  }

  printf("Menor nota: %.2f\n", menor_nota);
  printf("Indice da menor nota: %d\n", indice_menor_nota);

  return 0;
}
