#include "dinencnord.h"

struct encadeada
{
	int elemento;
	struct encadeada *prox;
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

int insere_elem(Lista **l, int n)
{
	Lista *temp;
	temp = (Lista *) malloc(sizeof(Lista));
	if(temp==NULL) return 0;
	temp->elemento = n;
	temp->prox = *l;
	*l=temp;
	return 1;
}

int remove_elem(Lista **l,int n)
{
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

int remove_todos(Lista **l, int elem)  
{
	int cont=0;
    Lista *temp = *l;
	if(lista_vazia(temp)) return 0;
	
	while(temp!=NULL){
		if(temp->elemento==elem){
			remove_elem(l,temp->elemento);
			cont++;
		}
		temp = temp->prox;
	}
return cont;
}

int insere_fim(Lista *l, int elem) 
{
	Lista *temp;
	temp = (Lista *) malloc(sizeof(Lista));
	
	if(temp==NULL) return 0;
	temp->elemento = elem;
	
	if(l==NULL){
		temp->prox = l;
		l = temp;
		return 1;
	}

	Lista *aux;
	aux = l;
	
	while(aux->prox!=NULL){
		aux = aux->prox;
	}
	
	temp->prox = aux->prox;
	aux->prox = temp;
	
return 1;	
}

int remove_pares(Lista **l)
{
	int cont=0;
	Lista *temp = *l;
	if(lista_vazia(temp)) return 0;
	
	while(temp!=NULL){
		if(temp->elemento%2==0){
			remove_elem(l,temp->elemento);
			cont++;
		}
		temp = temp->prox;
	}
return cont;
}

int tamanho(Lista *l)
{
 int cont = 0;
    Lista *no = l;
    while (no != NULL)
    {
        no = (no)->prox;
        cont++;
    }
    return cont;
}

int maior(Lista *l)
{
	Lista *aux = l;
	
	if(lista_vazia(aux))return 0;
	
	int maior = aux->elemento;
	
	while(aux != NULL){
		if(aux->elemento>maior) maior = aux->elemento;
	aux = aux->prox;
	}
	return maior;
}

Lista* concatenar(Lista **A, Lista **B)
{
	Lista *C = cria_lista();
	Lista *temp = *A;
	Lista *temp_aux = *B;
	
	while(temp!=NULL){
		insere_elem(&C,temp->elemento);
		temp = temp->prox;
		
	}
	while(temp_aux!=NULL){
		insere_elem(&C,temp_aux->elemento);
		temp_aux = temp_aux->prox;
		
	}
	return C;
}







