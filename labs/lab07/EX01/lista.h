#include <stdio.h>
#include <stdlib.h>

typedef struct no* Lista;

Lista cria_lista();

int lista_vazia(Lista *lst);

int insere_elem(Lista *lst, int elem);

int remove_elem(Lista *lst, int elem);

int tamanho_lista(Lista *l);

void print_lista(Lista *l);
