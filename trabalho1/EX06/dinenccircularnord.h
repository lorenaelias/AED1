#include <stdlib.h>
#include <stdio.h>

typedef struct lista Lista;

Lista *cria_lista();

int lista_vazia(Lista **l);

int insere_elem(Lista *l, int elem);

int remove_elem(Lista **l, int elem);

int tamanho(Lista *l);

void imprime_lista(Lista *l);

int insere_inicio(Lista **l, int elem);

int insere_posicao(Lista *l, int elem,int posicao);

int remove_posicao(Lista **l, int posicao);

int maior(Lista *l);
