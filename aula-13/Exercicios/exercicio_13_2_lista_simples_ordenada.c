#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct No No;
struct No
{
    int valor;
    No* proximo;
};

No* lista = NULL;

void inserir_ordenado(int novo_valor)
{
    No* novo_no = (No*) malloc(sizeof(No));
    novo_no->valor = novo_valor;

    No* p = NULL;
    No* q = lista;

    bool procurando = true;
    while(q && procurando)
    {
        if (novo_valor <= q->valor)
            procurando = false;
        else
        {
            p = q;
            q = q->proximo;
        }
    }
    if (p == NULL)
    {
        // insere no inicio da lista
        novo_no->proximo = lista;
        lista = novo_no;
    }
    else
    {
        p->proximo = novo_no;
        novo_no->proximo = q; 
    }
}

void imprimir_lista()
{
    No* p = lista;
    while (p)
    {
        printf("%d ", p->valor);
        p = p->proximo;
    }
    putchar('\n');
}

int main()
{
    FILE* arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) { puts("Erro na abertura do arquivo"); exit(1); }

    int valor;
    while(fscanf(arquivo, "%d", &valor) != EOF) inserir_ordenado(valor);
    fclose(arquivo);

    imprimir_lista();

    return 0;
}

/* Arquivo dados.txt:
5
3
7
1
4
8
9
0
2
6
*/