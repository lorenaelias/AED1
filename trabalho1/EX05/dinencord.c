#include "dinencord.h"

struct no
{
	int elemento;
	struct no * prox;
};

Lista *cria_lista()
{
	Lista *L = (Lista *) malloc(sizeof(Lista));
	
	if(L){
		L->elemento=0;
		L->prox =NULL;
	}
return L;
}

int lista_vazia(Lista *l)
{
	if((l->prox=NULL)) return 1;
	return 0;
}

int insere_ord(Lista **l, int elem)
{
	Lista *no = (Lista *) malloc(sizeof(Lista));
	
	if(no){
		no->elemento = elem;
		Lista *temp = *l;
		while(temp->prox!=NULL && temp->prox->elemento < elem){
			temp = temp->prox;
		}
		no->prox = temp->prox;
		temp->prox = no;
		(*l)->elemento++;
		return 1;
	}
	
return 0;
}

int remove_ord(Lista **l, int elem)
{
	
	if((*l)==NULL) return 0;
	Lista *temp = (*l)->prox;
	
	if(elem==(*l)->prox->elemento){
		(*l)->prox = temp->prox;
		free(temp);
		(*l)->elemento--;
		return 1;
	}
	
	while(temp!=NULL && temp->prox->elemento!=elem) temp = temp->prox;
	
	if(temp->prox==NULL) {
		return 0;
	}
	
	Lista *temp_aux = temp->prox;
	temp->prox = temp_aux->prox;
	free(temp_aux);
	(*l)->elemento--;

return 1;
}

void print_lista(Lista *l)
{
	
	printf("{ ");
	Lista *temp= l->prox;
	while(temp!=NULL){
		printf(" %d ",temp->elemento);
		temp = temp->prox;
	}
	printf(" }\n");
}

int tamanho(Lista *L)
{
	if(lista_vazia(L)) return 0;
	
	int tam=0;
	
	while(L!=NULL){
		L = L->prox;
		tam++;
	}
	
return tam;
}

int iguais(Lista *A, Lista *B)
{
	if(lista_vazia(A)&&lista_vazia(B)) return 1;
	
	int iguais = 0;
	
	if(tamanho(A)!=tamanho(B)) return 0;
	
	Lista *temp = A->prox, *temp_aux = B->prox;
	
	while(temp!=NULL){
		if(temp->elemento!=temp_aux->elemento) return 0;
		temp = temp->prox;
		temp_aux = temp_aux->prox;
		iguais++;
	}
	
	if(iguais==tamanho(A)) return 1;
return 0;
}

int remove_impares(Lista **A)
{

	if(lista_vazia(*A)) return 0;
	
	Lista *temp = (*A)->prox;
	
	int removido=0;
	
	while(temp!=NULL){
		if(temp->elemento%2!=0){
			remove_ord(A,temp->elemento);
			removido++;
		}
		temp = temp->prox;
		
	}
	
return removido;
}

int menor(Lista *A)
{
	
	if(lista_vazia(A)) return 0;
	
	Lista *temp = A;
	
	int menor = temp->prox->elemento;
	
	while(temp->prox!=NULL){
		if(temp->prox != NULL && temp->prox->elemento<menor)menor = temp->prox->elemento;
		temp = temp->prox;
		
	}
	
return menor;
}

Lista* intercalar(Lista **A, Lista **B) 
{ 
	Lista *C = (Lista *) malloc(sizeof(Lista));
	
	if(C==NULL) return NULL;
	
	Lista *temp = (*A)->prox;
	
	Lista *temp_aux = (*B)->prox;
	
	while(temp!=NULL){
	
		insere_ord(&C,temp->elemento);
		temp = temp->prox;
		
	}
	while(temp_aux!=NULL){
		
		insere_ord(&C,temp_aux->elemento);
		temp_aux = temp_aux->prox;
		
	}
	
	C->elemento = (*A)->elemento+(*B)->elemento;
	
return C;
}

