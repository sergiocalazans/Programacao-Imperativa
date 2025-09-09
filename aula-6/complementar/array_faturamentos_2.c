#include <stdio.h>
#define MAX 6

int main()
{

  // float faturamentos[] = {800.00, 620.00, 900.00, 450.00, 800.00, 780.00};
  // utilizando uma constante para definir a quantidade de elementos do vetor com MAX
  float faturamentos[MAX];

  // Dias da semana
  char dias_semana[][20] = {"Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado"};

  // n -> tamanho do vetor dividido pelo tamanho do elemento -> quantidade de elementos
  // int n = sizeof(faturamentos) / sizeof(faturamentos[0]);
  // int n = sizeof(dias_semana) / sizeof(dias_semana[0]);

  for (int i = 0; i < MAX; i++)
  {
    printf("\nDigite o faturamento de %s: ", dias_semana[i]);
    scanf("%f", &faturamentos[i]);
  }

  float total_faturamentos = 0;

  printf("\nFaturamentos: \n");

  for (int i = 0; i < MAX; i++)
  {
    printf("\n%s:", dias_semana[i]);
    printf(" R$ %.2f", faturamentos[i]);
    total_faturamentos += faturamentos[i];
  }

  float media_faturamentos = total_faturamentos / MAX;

  printf("\n\n");

  printf("Total do faturamento semanal: R$ %.2f\n", total_faturamentos);
  printf("Media do faturamento semanal: R$ %.2f\n", media_faturamentos);

  return 0;
}