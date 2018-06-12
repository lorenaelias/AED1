#include <stdlib.h>
#include <stdio.h>
typedef struct no* Lista;

Lista cria_lista();

int lista_vazia(Lista lst);

int insere_ord (Lista *lst,	int elem);

int remove_ord (Lista *lst, int elem);

void print_lista(Lista *l);
