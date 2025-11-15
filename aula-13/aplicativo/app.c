#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo Nodo;
struct Nodo
{
  int valor;
  Nodo *proximo;
}

Nodo *lista_ordenada = NULL;

void inserir(Nodo *p)
{
  // L: ponteiro para o inicio da lista
  // p: ponteiro para o novo elemento da lista

  if (lista_ordenada == NULL)
  {
    lista_ordenada = p;
  }
  else
  {
    Nodo *maior = lista_ordenada;
    Nodo *antecessor = NULL;
    while (maior != NULL && p->valor > maior->valor)
    {
      antecessor = maior;
      maior = maior->proximo;
    }
    if (maior == NULL)
    {
      antecessor->proximo = p;
    }
    else if (maior == lista_ordenada)
    {
      p->proximo = lista_ordenada;
      lista_ordenada = p;
    }
    else
    {
      p->proximo = maior;
      antecessor->proximo = p;
    }
  }
}

int main()
{
  int dados[] = {8, 9, 5, 1, 3, 7};
  int quantidade = sizeof(dados) / sizeof(int);

  for (int i = 0; i < quantidade; i++)
  {
    Nodo *p = (Nodo *)calloc(1, sizeof(Nodo));
    p->valor = dados[i];
    p->proximo = NULL;
    inserir(p);
  }

  return 0;
}
