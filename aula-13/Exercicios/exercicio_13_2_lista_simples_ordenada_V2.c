#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Elemento Elemento;
struct Elemento {
    int valor;
    Elemento* proximo;
};

void imprimir(Elemento* p) {
    while (p) {
        printf("%d ", p->valor);
        p = p->proximo;
    }
    putchar('\n'); // muda de linha na saida
}

void descobrir_local(Elemento* lista, Elemento* novo_elemento,
     Elemento** anterior, Elemento** posterior) {
        Elemento* p = lista;
        Elemento* q = NULL;
        bool descoberto = false;
        while (!descoberto && p != NULL) {
            if (p->valor > novo_elemento->valor) {
                descoberto = true;
                *posterior = p;
                *anterior = q;
            }
            else
            {
                q = p;
                p = p->proximo;
            }
        }
        if (p == NULL) // inserir no final
        {
            *anterior = q;
            *posterior = NULL;
        }
     }

void inserir(Elemento** lista, Elemento* novo_elemento) {
    if (*lista == NULL) // lista está vazia
    {
        *lista = novo_elemento;
    }
    else
    {
        Elemento* anterior = NULL;
        Elemento* posterior = NULL;
        descobrir_local(*lista, novo_elemento, &anterior, &posterior);

        if (anterior == NULL) // inserir no começo da lista
        {
            novo_elemento->proximo = *lista;
            *lista = novo_elemento;
        }
        else if (posterior == NULL) // inserir no final da lista
        {
            anterior->proximo = novo_elemento;
        }
        else // inserir entre dois elementos existentes na lista
        {
            novo_elemento->proximo = posterior;
            anterior->proximo = novo_elemento;
        }
    }
}

int main() {
    Elemento* L = NULL; // primeiro elemento da lista

    Elemento* p = (Elemento*) calloc(1, sizeof(Elemento));
    p->valor = 4; p->proximo = NULL;
    inserir(&L, p);

    p = (Elemento*) calloc(1, sizeof(Elemento));
    p->valor = 7; p->proximo = NULL;
    inserir(&L, p);

    p = (Elemento*) calloc(1, sizeof(Elemento));
    p->valor = 5; p->proximo = NULL;
    inserir(&L, p);

    p = (Elemento*) calloc(1, sizeof(Elemento));
    p->valor = 1; p->proximo = NULL;
    inserir(&L, p);

    p = (Elemento*) calloc(1, sizeof(Elemento));
    p->valor = 8; p->proximo = NULL;
    inserir(&L, p);

    imprimir(L);
}