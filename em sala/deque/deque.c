#include <stdlib.h>
#include "deque.h"
#include<stdio.h>

struct no {
	struct no *prox;
	struct no *ant;
	int info;
};

struct deque {
	struct no *ini;
	struct no *fim;
	int info;
};

Deque * cria_deque()
{
        Deque *d = (Deque*)malloc(sizeof(Deque));
        if(d != NULL){
            d->fim = NULL;
            d->ini = NULL;
            d->info = 0;
        }
return d;
}

void libera_deque(Deque *d)
{
	if(d != NULL){
        struct no* no;
        while(d->ini != NULL){
            no = d->ini;
            d->ini = d->ini->prox;
            free(no);
        }
    free(d);
	}
}

int tamanho_Deque(Deque *d)
{
    if(d == NULL) return 0;
return d->info;
}

int deque_vazio(Deque *d)
{
    if(d == NULL) return 1;
    if(d->ini == NULL) return 1;
return 0;
}

int insere_ini_deque(Deque *d, int n)
{
	if(d == NULL) return 0;
	struct no *no = (struct no*)malloc(sizeof(struct no));
	if(no == NULL ) return 0;

	no->info = n;
	no->prox = d->ini;
	no->ant = NULL;

	if(d->ini == NULL) //! entao deque era vazio
        d->fim = no;
	else d->ini->ant = no;//! deque nao vazio: apontar para ant

	d->ini = no;
	d->info++;
return 1;
}

int insere_fim_deque(Deque *d, int n)
{
	if(d == NULL ) return 0;
	struct no *no = (struct no*)malloc(sizeof(struct no));
	if(no == NULL) return 0;

	no->info = n;
	no->prox = NULL;

	if(d->fim == NULL){ //! deque vazio
        no->ant = NULL;
        d->ini = no;
	}
	else{
        no->ant = d->fim; //! no ant eh o novo final para que se insira o novo no fim
        d->fim->prox = no; //! o proximo no passa a ser o novo
	}
	d->fim = no;
	d->info++;
return 1;
}

int remove_ini_deque(Deque *d)
{
	if(deque_vazio(d) == 1) return 0; //! deque vazio?

	struct no *no = d->ini; //! remocao do inicio
	d->ini = d->ini->prox;

	if(d->ini == NULL) //! se deque ficou vazio
        d->fim == NULL;
    else              //! se deque nao ficou vazio
        d->ini->ant = NULL;

    free(no);
    d->info--;
return 1;
}

int remove_fim_deque(Deque *d)
{
	if(deque_vazio(d)==1) return 0;

	struct no *no = d->fim;
	if(no == d->ini){ //! so tem um elemento
        d->ini = NULL;
        d->fim = NULL;
	}else{
        no->ant->prox = NULL;
        d->fim = no->ant;
	}
	free(no);
	d->info--;
return 1;
}


void print_deque(Deque *d)
{
    if(deque_vazio(d)==1) {printf("Deque vazio!\n");return;}

    struct no *no= d->ini;

    printf("Deque = {");
    while (no != NULL)
    {
        printf(" %d ", no->info);
        no = no->prox;
    }
    printf("}\n");
}
