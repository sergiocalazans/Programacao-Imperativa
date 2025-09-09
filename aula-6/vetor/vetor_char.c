#include <stdio.h>
#include <stdlib.h> // Biblioteca que define a função setbuf e outras.

int main()
{
  printf("Digite o comprimento da string: ");
  int *comprimento;
  scanf("%d", &comprimento);

  // Array de tamanho variável (recurso do C99)
  char cadeia[comprimento];

  printf("Digite a string: ");

  // Limpa o buffer de entrada. É importante notar que setbuf(stdin, NULL)
  // pode ter comportamentos diferentes dependendo do sistema.
  // Uma alternativa comum é consumir o caractere de nova linha restante.
  // Ex: while(getchar() != '\n');
  setbuf(stdin, NULL);

  for (int i = 0; i < comprimento; i++)
  {
    cadeia[i] = getchar();
  }

  // Imprime a cadeia de caracteres lida
  printf("Você digitou: ");
  for (int i = 0; i < comprimento; i++)
  {
    putchar(cadeia[i]);
  }
  printf("\n");

  return 0;
}
