#include <stdio.h>

enum Dia
{
  SEGUNDA,
  TERCA,
  QUARTA,
  QUINTA,
  SEXTA,
  SABADO,
  DOMINGO
};

int main()
{
  enum Dia dia_semana;

  printf("Digite um dia da semana [0 a 6]: ");
  scanf("%d", (int *)&dia_semana); // Casting para evitar warning

  switch (dia_semana)
  {
  case SEGUNDA:
  case TERCA:
  case QUARTA:
  case QUINTA:
  case SEXTA:
    puts("trabalho");
    break;
  case SABADO:
    puts("compras");
    break;
  case DOMINGO:
    puts("descanso");
    break;
  default:
    puts("ERRO!");
  }
  return 0;
}
