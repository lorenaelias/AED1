#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct encadeada Lista;

Lista *cria_lista();

int insere_elem(Lista **l, int n);

int remove_elem(Lista **l, int n);

int lista_vazia(Lista *l);

void print_lista(Lista *l);

int insere_ord(Lista **l, int n);

int remove_ord(Lista **l, int n);
