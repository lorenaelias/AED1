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

void imprime(Fila f)
{
	if(fila_vazia(f)==1){
		printf("Fila vazia!\n\n");
		return;
	}
    struct no *no = f->ini;

	while (no != NULL)
    {
        printf(" %d ", no->info);
        no = no->prox;
    }
	printf("\n\n");
}

int insere_elem_ord(Fila *l,int elem,int pri)
{
	struct no *temp = (struct no*) malloc(sizeof(struct no));

	if(temp==NULL) return 0;

	temp->info = elem;
	temp->pri = pri;

	if(fila_vazia(*l) == 1){          //! se a fila esta vazia
        (*l)->ini = temp;
        (*l)->fim = temp;
        (temp)->prox = NULL;
		return 1;
	}

	if(pri <= (*l)->ini->pri){
        temp->prox = (*l)->ini;
        (*l)->ini = temp;
        return 1;
	}

	if(pri >= (*l)->fim->pri){
        temp->prox = NULL;
        (*l)->fim->prox = temp;
        (*l)->fim = temp;
        return 1;
	}

	struct no *aux = (*l)->ini;

	while( aux->prox != NULL && aux->prox->pri < pri ) aux = aux->prox;

	temp->prox = aux->prox;
	aux->prox = temp;
	return 1;
}
