#include <stdio.h>

int main()
{
  // Variáveis para cada dia da semana
  float faturamento_2 = 800.00; // segunda-feira
  float faturamento_3 = 620.00; // terça-feira
  float faturamento_4 = 900.00; // quarta-feira
  float faturamento_5 = 450.00; // quinta-feira
  float faturamento_6 = 800.00; // sexta-feira
  float faturamento_7 = 780.00; // sábado

  // Cálculo do faturamento semanal
  float faturamento_semanal = faturamento_2 + faturamento_3 + faturamento_4 +
                              faturamento_5 + faturamento_6 + faturamento_7;
  printf("Faturamento semanal: R$%.2f\n", faturamento_semanal);

  // Cálculo do faturamento diário médio
  float faturamento_medio = faturamento_semanal / 6;
  printf("Faturamento medio: R$%.2f\n", faturamento_medio);

  // Identificação do dia da semana com o menor faturamento
  float menor_faturamento = faturamento_2;
  int dia_menor = 2;

  if (faturamento_3 < menor_faturamento)
  {
    menor_faturamento = faturamento_3;
    dia_menor = 3;
  }
  if (faturamento_4 < menor_faturamento)
  {
    menor_faturamento = faturamento_4;
    dia_menor = 4;
  }
  if (faturamento_5 < menor_faturamento)
  {
    menor_faturamento = faturamento_5;
    dia_menor = 5;
  }
  if (faturamento_6 < menor_faturamento)
  {
    menor_faturamento = faturamento_6;
    dia_menor = 6;
  }
  if (faturamento_7 < menor_faturamento)
  {
    menor_faturamento = faturamento_7;
    dia_menor = 7;
  }
  printf("Dia com o menor faturamento: %d\n", dia_menor);
  printf("Menor faturamento: R$%.2f\n", menor_faturamento);

  // Identificação do dia da semana com o maior faturamento
  float maior_faturamento = faturamento_2;
  int dia_maior = 2;

  if (faturamento_3 > maior_faturamento)
  {
    maior_faturamento = faturamento_3;
    dia_maior = 3;
  }
  if (faturamento_4 > maior_faturamento)
  {
    maior_faturamento = faturamento_4;
    dia_maior = 4;
  }
  if (faturamento_5 > maior_faturamento)
  {
    maior_faturamento = faturamento_5;
    dia_maior = 5;
  }
  if (faturamento_6 > maior_faturamento)
  {
    maior_faturamento = faturamento_6;
    dia_maior = 6;
  }
  if (faturamento_7 > maior_faturamento)
  {
    maior_faturamento = faturamento_7;
    dia_maior = 7;
  }
  printf("Dia com o maior faturamento: %d\n", dia_maior);
  printf("Maior faturamento: R$%.2f\n", maior_faturamento);

  return 0;
}
