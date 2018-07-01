#include<stdio.h>
#include<stdlib.h>

typedef struct fila *Fila;
Fila cria_fila();
int fila_vazia(Fila f);
int insere_fim(Fila f,int elem,int pri)
int remove_ini(Fila f, int *elem);
void imprime(Fila *f);
