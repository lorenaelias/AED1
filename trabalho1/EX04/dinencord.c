#include "dinencord.h"

struct encadeada
{
	int elemento;
	struct encadeada* prox;
};

Lista *cria_lista()
{
	return 0;//NULL
}

int lista_vazia(Lista *l)
{
	if(l->prox==NULL) return 1;
	return 0;
}

int insere_elem_ord(Lista **l,int elem)
{
	Lista *temp = (Lista *) malloc(sizeof(Lista));
	
	if(temp==NULL) return 0;
	temp->elemento = elem;
	
	if((*l)==NULL||elem<=(*l)->elemento){
		temp->prox = *l;
		*l = temp;
		return 1;
	}

	Lista *aux = *l;
	while(aux->prox!=NULL&&aux->prox->elemento<elem){
		aux = aux->prox;
	}
	temp->prox = aux->prox;
	aux->prox = temp;
	return 1;
}

int remove_elem_ord(Lista **l, int n)
{
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

void print_lista(Lista *l)
{
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

Lista * intercala_ord(Lista **A, Lista **B)
{
	Lista *C = cria_lista();
	Lista *temp;
	Lista *temp_aux;
	temp = *A;
	
	while(temp!=NULL){
		insere_elem_ord(&C,temp->elemento);
		temp = temp->prox;
	}
	
	temp_aux = *B;
	
	while(temp_aux!=NULL){
		insere_elem_ord(&C,temp_aux->elemento);
		temp_aux = temp_aux->prox;
	}
	return C;
}

int remove_impares(Lista **l)
{
	int cont=0;
	Lista *temp = *l;
	
	if(lista_vazia(temp)) return 0;
	
	while(temp!=NULL){
		if((temp->elemento) % 2 != 0){
			remove_elem_ord(l,temp->elemento);
			cont++;
		}
	temp = temp->prox;
	}
return cont;
}

int menor(Lista **l)
{
	Lista *temp = *l;
	
	if(lista_vazia(temp))return 0;
	
	int menor = temp->elemento;
	
	while(temp != NULL){
		if(temp->elemento<menor)menor = temp->elemento;
	temp = temp->prox;
	}
	return menor;
}

int tamanho(Lista **l)
{
		int tam=0;
		Lista *temp = *l;
		if(lista_vazia(temp))return 0;
		
		while(temp != NULL){
			temp = temp->prox;
			tam++;
		}
return tam;
}

int iguais(Lista *A, Lista *B)
{
	if(lista_vazia(A) && lista_vazia(B))return 1;
	
	int cont = 0;
	
	if(tamanho(&A)!= tamanho(&B))return 0;
	
	Lista *temp = A, *temp_aux = B;
	
	while(temp != NULL){
		if(temp->elemento != temp_aux->elemento) return 0;
		temp = temp->prox;
		temp_aux = temp_aux->prox;
		cont++;
	}
	if(tamanho(&A) == cont) return 1;
return 0;
}

