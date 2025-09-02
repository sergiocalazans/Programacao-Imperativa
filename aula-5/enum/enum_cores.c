#include <stdio.h>

enum Cor
{
  VERMELHO,
  VERDE,
  AMARELO
};

int main()
{
  enum Cor s1 = VERDE;    // cor do semáforo primário
  enum Cor s2 = VERMELHO; // cor do semáforo secundário

  printf("%d %d\n", s1, s2);

  if (s1 == VERDE)
    puts("permitido passar pelo semaforo primario");
  else if (s1 == VERMELHO)
    puts("obrigado a parar no semarofo primario");
  else
    puts("semaforo primario prestes a fechar, atencao!");

  return 0;
}
