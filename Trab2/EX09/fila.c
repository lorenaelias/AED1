#include"fila.h"

struct no
{
    int info;
    struct no * prox;
    int pri;
};

struct fila
{
    struct no * ini;
    struct no * fim;
};

Fila cria_fila()
{
     Fila f;
     f = (Fila) malloc(sizeof(struct fila));
     if (f != NULL) {
         f->ini = NULL;
         f->fim = NULL;
     }
     return f;
}

int fila_vazia(Fila f)
{
     if (f->ini == NULL) return 1;
     else
        return 0;
}

int insere_fim(Fila f, int elem,int pri)
{
    struct no *N = (struct no*) malloc(sizeof(struct no));
    if (N == NULL) { return 0; }

    N->info = elem;
    // Insere o conteúdo (valor do elem)
    if (fila_vazia(f) || elem <= (f)->info) {
        N->prox = f;
        // Aponta para o primeiro nó atual da lista
        *f = *N;
        // Faz a lista apontar para o novo nó
        return 1;
    }

    // Percorrimento da lista (elem > primeiro nó da lista)
    Fila aux = *f;
    // Faz aux apontar para primeiro nó
    while (aux->prox != NULL && aux->prox->pri < pri) aux = aux->prox;
        // Insere o novo elemento na lista
    N->prox = aux->prox;
    aux->prox = N;
    return 1;
}

int remove_ini(Fila f, int *elem)
{
 if (fila_vazia(f) == 1) return 0;
 struct no * aux = f->ini;
 *elem = aux->info;

 if (f->ini == f->fim) f->fim = NULL;

 f->ini = aux->prox;
 free(aux);

return 1;
}

void imprime(Fila *f)
{
	if(fila_vazia(*f)==1){
		printf("Fila vazia!\n\n");
		return;
	}
    struct no* no = f->ini;

	while (no != NULL)
    {
        printf(" %d ", no->info);
        no = no->prox;
    }
	printf("\n\n");
}
