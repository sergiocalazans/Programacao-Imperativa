#include <stdio.h>

int main()
{
  int quantidade;
  float preco;
  int estoque[10];
  char palavra[10];

  // O nome de um vetor decai para um ponteiro para seu primeiro elemento
  printf("Endereço de palavra: %p\n", palavra);
  printf("Endereço de estoque: %p\n", estoque);

  // Para variáveis, usa-se o operador &
  printf("Endereço de preco: %p\n", &preco);
  printf("Endereço de quantidade: %p\n", &quantidade);

  return 0;
}
