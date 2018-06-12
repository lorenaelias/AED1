#include "dinamica_enc.h"

struct encadeada{
	int elemento;
	struct encadeada *prox;
};

Lista *cria_lista(){
	return 0;//NULL
}

int lista_vazia(Lista *l){
	if(l->prox==NULL) return 1;
	return 0;
}

int insere_elem(Lista **l, int n){
	Lista *temp;
	temp = (Lista *) malloc(sizeof(Lista));
	if(temp==NULL) return 0;
	temp->elemento = n;
	temp->prox = *l;
	*l=temp;
	return 1;
}

int remove_elem(Lista **l,int n){
	if(lista_vazia(*l)) return 0;
	Lista *temp = *l;
	if(n==(*l)->elemento){
		*l = temp->prox;
		free(temp);
		return 1;
	}
	while(temp->prox!=NULL && temp->prox->elemento!=n) temp = temp->prox;
	if(temp->prox==NULL) return 0;
	Lista *temp_aux = temp->prox;
	temp->prox = temp_aux->prox;
	free(temp_aux);
	return 1;
}

void print_lista(Lista *l){
	Lista * temp;
	temp = l;
	printf("Lista = {");
	while(temp!=NULL){
		if(temp->prox!=NULL)printf("%d ",temp->elemento);
		else printf("%d",temp->elemento);
		temp = temp->prox;
	}
	printf("}\n");

}

int insere_ord(Lista **l, int n){
	
	Lista *temp = (Lista *) malloc(sizeof(Lista));
	
	if(temp==NULL) return 0;
	temp->elemento = n;
	
	if((*l)==NULL||n<=(*l)->elemento){
		temp->prox = *l;
		*l = temp;
		return 1;
	}

	Lista *aux = *l;
	
	while(aux->prox!=NULL&&aux->prox->elemento<n) aux = aux->prox;
	
	temp->prox = aux->prox;
	aux->prox = temp;
	
return 1;
}


int remove_ord(Lista **l, int n){
	
	if((*l)==NULL||n < (*l)->elemento) return 0;
	
	Lista *temp;
	Lista *temp_aux;

	temp = *l;
	
	if(n==(*l)->elemento){
		*l = temp->prox;
		free(temp);
		return 1;
	}
	
	while(temp->prox!=NULL && temp->prox->elemento < n){
		temp = temp->prox;
	}
	if(temp->prox==NULL||temp->prox->elemento > n) return 0;
	
	temp_aux = temp->prox;
	temp->prox = temp_aux->prox;
	free(temp_aux);
	
return 1;
}
