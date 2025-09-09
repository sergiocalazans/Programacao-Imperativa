#include <stdio.h>

int main()
{
  float nota[] = {7.0, 8.5, 6.2, 9.0, 4.5, 8.0};

  // O tipo 'size_t' é o tipo retornado por sizeof, %zu é seu especificador de formato.
  size_t tamanho_vetor = sizeof(nota);
  printf("Tamanho do vetor: %zu bytes\n", tamanho_vetor);

  size_t tamanho_elemento = sizeof(nota[0]);
  printf("Tamanho de um elemento: %zu bytes\n", tamanho_elemento);

  int capacidade_vetor = tamanho_vetor / tamanho_elemento;
  printf("Logo, o vetor possui %d elementos.\n", capacidade_vetor);

  return 0;
}
