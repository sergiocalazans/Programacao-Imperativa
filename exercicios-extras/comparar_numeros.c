#include <stdio.h>
#include <stdlib.h>

// Função de comparação usada pelo qsort
int comparar(const void *a, const void *b)
{
  int ia = *(const int *)a;
  int ib = *(const int *)b;
  return (ia > ib) - (ia < ib); // evita overflow de subtração
}

int main()
{
  int n;

  printf("Digite a quantidade de numeros: ");
  scanf("%d", &n);

  // Aloca dinamicamente o vetor
  int *numeros = (int *)malloc(n * sizeof(int));
  if (numeros == NULL)
  {
    printf("Erro de alocacao de memoria.\n");
    return 1;
  }

  // Entrada dos números
  for (int i = 0; i < n; i++)
  {
    int valido = 0;
    while (!valido)
    {
      printf("Digite o %d numero: ", i + 1);
      scanf("%d", &numeros[i]); // CORREÇÃO: usar &numeros[i]

      // Verifica se o número é distinto dos anteriores
      valido = 1;
      for (int j = 0; j < i; j++)
      {
        if (numeros[i] == numeros[j])
        {
          printf("Nmero deve ser diferente dos anterior!\n");
          valido = 0;
          break;
        }
      }
    }
  }

  // Ordenação usando qsort
  qsort(numeros, n, sizeof(int), comparar);

  // Impressão dos números em ordem crescente
  printf("\nNumeros em ordem crescente:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  // Libera a memória
  free(numeros);

  return 0;
}
