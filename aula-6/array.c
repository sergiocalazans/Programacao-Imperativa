#include <stdio.h>

int main()
{

  float faturamentos[] = {800.00, 620.00, 900.00, 450.00, 800.00, 780.00};
  char dias_semana[][20] = {"Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado"};
  int n = sizeof(faturamentos) / sizeof(faturamentos[0]);

  printf("\nFaturamentos: \n");

  for (int i = 0; i < n; i++)
  {
    printf("\n%s:", dias_semana[i]);
    printf(" R$%.2f", faturamentos[i]);
  }

  printf("\n");

  return 0;
}
