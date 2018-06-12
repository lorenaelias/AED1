#include "encduplo.h"

struct no
{
int info;
struct no * prox;
struct no * ant;
};


Lista cria_lista(){
return NULL;
}

int lista_vazia(Lista L){
	if (L == NULL){
		return 1;
	}
	else return 0;
}

int insere_elemento(Lista *L, int elem)
{
		Lista N = (Lista)malloc(sizeof(struct no));
			if(N == NULL)return 0;
				
			N->info = elem;
			N->ant = NULL;
			N->prox = *L;
			
			if(lista_vazia(*L) == 0) 
			(*L)->ant = N;
			
			(*L) = N;
			return 1;
}

int remove_elemento(Lista *L, int elem)
{
	if(lista_vazia(*L)) return 0;
	
	Lista aux = *L;
	
	while(aux->prox != NULL && aux->info != elem) aux = aux->prox;
	
	if(aux->info != elem) return 0;
	
	if(aux->prox != NULL) aux->prox->ant = aux->ant;
	
	if(aux->ant != NULL) aux->ant->prox = aux->prox;
	
	if(aux == *L) *L = aux->prox;
	
	free(aux);
	
	return 1;
}

void print_lista(Lista L)
{
    Lista temp = L;
    printf("Lista = {");
    while (temp != NULL)
    {
       // if (temp->prox != NULL)
       //     printf("%d ", temp->elemento);
       // else
        printf("%d", temp->info);
        temp = temp->prox;
    }
    printf("}\n");
}



