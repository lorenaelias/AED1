#include<stdio.h>
#include<stdlib.h>

typedef struct fila *Fila;
Fila cria_fila();
int fila_vazia(Fila f);
int remove_ini(Fila f, int *elem);
void imprime(Fila f);
int insere_elem_ord(Fila *l,int elem,int pri);
