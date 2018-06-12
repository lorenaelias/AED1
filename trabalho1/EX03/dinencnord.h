#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct encadeada Lista;

Lista *cria_lista();

int insere_elem(Lista **l, int n);

int remove_elem(Lista **l, int n);

int lista_vazia(Lista *l);

void print_lista(Lista *l);

int remove_todos(Lista **l, int elem);

int insere_fim(Lista *l, int elem);

int remove_pares(Lista **l);

int tamanho(Lista *l);

int maior(Lista *l);

Lista* concatenar(Lista **A, Lista **B);
