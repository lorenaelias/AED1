#include "fila.h"
#include <stdlib.h>
#include <stdio.h>
#define max 20

struct fila
{
    int vetor[max];
    int ini,fim;
};

Fila cria_fila()
{
    Fila f;
    f = (Fila)malloc(sizeof(struct fila));
    if(f!=NULL){
        f->ini =0;
        f->fim = 0;
    }
return f;
}

int fila_vazia(Fila f)
{
    if(f->ini == f->fim) return 1;
return 0;
}

int fila_cheia(Fila f)
{
    if(f->ini == (f->fim+1%max)) return 1;
return 0;
}

int insere_fim(Fila f, int elem)
{
    if(fila_cheia(f)==1) return 0;

    f->vetor[f->fim] = elem;
    f->fim = (f->fim+1)%max;
return 1;
}

int remove_ini(Fila f, int *elem)
{
    if(fila_vazia(f)==1) return 0;
    *elem = f->vetor[f->ini];
    f->ini = (f->ini+1)%max;
return 1;
}

void imprime(Fila f)
{
    if(fila_vazia(f)){
        printf("Fila vazia!\n\n");
        return;
    }

	Fila tmp = f;
	int i;

	printf("Fila :\n");

	for(i=tmp->ini ; i < tmp->fim; i++)
		printf(" %d \n",tmp->vetor[i]);

	printf("\n\n");
}
