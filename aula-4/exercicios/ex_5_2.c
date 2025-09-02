/*
(5.2) Escreva um programa na linguagem C que, dadas três letras distintas
fornecidas pelo usuário (via teclado), imprima-as em ordem alfabética.
Obs: o programa deve certificar-se de que as três letras sejam distintas.
*/
#include <stdio.h>

int main()
{
  char l1, l2, l3;

  // Loop para garantir que as letras sejam distintas
  do
  {
    printf("Digite tres letras distintas: ");
    // Espaço antes de %c para consumir quebras de linha/espaços anteriores
    scanf(" %c %c %c", &l1, &l2, &l3);

    if (l1 == l2 || l1 == l3 || l2 == l3)
    {
      printf("Erro: As letras devem ser distintas. Tente novamente.\n");
    }
  } while (l1 == l2 || l1 == l3 || l2 == l3);

  // Lógica de ordenação
  char temp;
  if (l1 > l2)
  {
    temp = l1;
    l1 = l2;
    l2 = temp;
  }
  if (l2 > l3)
  {
    temp = l2;
    l2 = l3;
    l3 = temp;
  }
  if (l1 > l2)
  {
    temp = l1;
    l1 = l2;
    l2 = temp;
  }

  printf("Letras em ordem alfabetica: %c, %c, %c\n", l1, l2, l3);

  return 0;
}
