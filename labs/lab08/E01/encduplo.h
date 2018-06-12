#include <stdio.h>
#include <stdlib.h>

typedef struct no *Lista;

Lista cria_lista();

int lista_vazia(Lista L);

int insere_elemento(Lista *L, int elem);

int remove_elemento(Lista *L, int elem);

void print_lista(Lista L);
