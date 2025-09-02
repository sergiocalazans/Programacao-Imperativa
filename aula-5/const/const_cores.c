#include <stdio.h>

const int VERMELHO = 0;
const int VERDE = 1;
const int AMARELO = 2;

int main()
{
  int s1 = VERDE;    // cor do semáforo primário
  int s2 = VERMELHO; // cor do semáforo secundário

  printf("%d %d\n", s1, s2);

  if (s1 == VERDE)
    puts("permitido passar pelo semaforo primario");
  else if (s1 == VERMELHO)
    puts("obrigado a parar no semarofo primario");
  else
    puts("semaforo primario prestes a fechar, atencao!");

  return 0;
}
