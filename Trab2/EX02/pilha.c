#include"pilha.h"
#define max 20

struct pilha{
	struct pilha *prox;
	int info;
};

Pilha cria_pilha()
{
return NULL;
}

int pilha_vazia(Pilha p)
{
	if(p==NULL) return 1;
return 0;
}

int push(Pilha *p,char elem)
{
	Pilha N = (Pilha) malloc (sizeof(struct pilha));
	if(N == NULL) return 0;

	N->info = elem;
	N->prox = *p;
	*p = N;

return 1;
}

int pop (Pilha *p)
{
	if (pilha_vazia(*p) == 1) return 0;

	Pilha aux = *p;

	*p = aux->prox;
	free(aux);
return 1;
}

int le_topo(Pilha *p,int *elem)
{
	if(pilha_vazia(*p) == 1) return 0;
	*elem = (*p)->info;
return 1;
}

void imprimir(Pilha *p)
{
    if (pilha_vazia(*p) == 1) printf("Pilha vazia");

    Pilha aux = *p;
    int i;

    while(aux!=NULL){
        printf("\t%d\n",aux->info);
        aux = aux->prox;

    }
}

int pares_e_impares(Pilha *p)
{
    if (pilha_vazia(*p) == 1) return 0;

    Pilha aux = *p;
    Pilha pares = cria_pilha();
    Pilha impares = cria_pilha();
    int i;

    while(aux!=NULL){
        if(aux->info % 2 == 0) push(&pares,aux->info);
        if(aux->info % 2 == 1) push(&impares,aux->info);
    aux = aux->prox;
    }

    imprimir(&pares);
    imprimir(&impares);

return 1;
}
