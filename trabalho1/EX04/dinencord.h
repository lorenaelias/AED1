#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct encadeada Lista;

Lista *cria_lista();

int lista_vazia(Lista *l);

void print_lista(Lista *l);

int insere_elem_ord(Lista **l, int n);

int remove_elem_ord(Lista **l, int n);

Lista * intercala_ord(Lista **A, Lista **B);

int remove_impares(Lista **l);

int menor(Lista **l);

int iguais(Lista *A, Lista *B);
