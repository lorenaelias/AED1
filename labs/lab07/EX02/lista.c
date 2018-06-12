#include "lista.h"

struct no
{
int info;
struct no * prox;
};

Lista cria_lista() {
	Lista cab;
	cab = (Lista) malloc(sizeof(struct no));
	if (cab != NULL) { 
		cab->prox = NULL;
		cab->info = 0; 
	} 
	return cab;
}

int lista_vazia(Lista lst) {
	if (lst->prox== NULL) return 1; 
	return 0; 
}

int insere_ord (Lista *lst,	int elem) {
	
	Lista N = (Lista) malloc(sizeof(struct no));

	if (N == NULL) return 0;  

	N->info = elem; 
	Lista aux = *lst; 
	
	while (aux->prox != NULL && aux->prox->info < elem)
		aux = aux->prox; 

	N->prox = aux->prox;
	aux->prox = N;
	lst->info++; 
	return 1;  
}

int remove_ord (Lista *lst, int elem) {
	
	if (lista_vazia(lst) == 1) return 0;
	
	Lista aux = *lst;
	
	while (aux->prox != NULL && aux->prox->info < elem) aux = aux->prox;
	
	if (aux->prox == NULL || aux->prox->info > elem) return 0; 

	Lista aux2 = aux->prox; 
	
	aux->prox = aux2->prox;
	free(aux2); 
	(*lst)->info--;
	return 1;  
}


void print_lista(Lista *l){
	Lista * temp;
	temp = l;
	
	while(temp->prox!=NULL){
		printf("%d",temp->prox->elemento);
		temp = temp->prox;
	}
}
