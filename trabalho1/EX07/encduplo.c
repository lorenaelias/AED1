#include "encduplo.h"

struct no
{
int info;
struct no * prox;
struct no * ant;
};

Lista *cria_lista(){
	
	Lista *L = (Lista *) malloc(sizeof(Lista));
	if(L){
		L->prox=NULL;
		L->ant=NULL;
		L->info=0;
	}
return L;
}

int lista_vazia(Lista *L)
{
	if(L->prox==NULL && L->ant==NULL) return 1;
return 0;
}

int insere_elemento(Lista *L, int elem)
{
	if(L==NULL) return 0;
	
	Lista *temp = L;
	Lista *no = cria_lista();
	
	if(no){
		no->info = elem;
		no->prox = temp->prox;
		no->ant = temp;
		temp->prox = no;
	return 1;
	}
return 0;
}

int remove_elemento(Lista *L, int elem)
{
	if(L == NULL) return 0;
	if(lista_vazia(L)) return 0;
	
	Lista *temp = L;
	Lista *temp_aux;
	
	while(temp->prox != NULL && temp->prox->info != elem){
		temp = temp->prox;
	}
	
	if(temp->prox==NULL) return 0; 
	
	temp_aux = temp->prox;
	temp->prox = temp_aux->prox;
	
	if(temp_aux->prox!=NULL){
		Lista *aux = temp_aux->prox;
		aux->ant = temp_aux->ant;
	}
	free(temp_aux);
return 1;
}

void print_lista(Lista *L)
{
    if(L==NULL) return;
    
	if(lista_vazia(L)) {
		printf("{ }\n");
		return;
	}
	
	Lista *temp = L;
	
	printf("{ ");
	while((temp)->prox!=NULL){
		printf("%d  ",(temp)->prox->info);
		(temp) = (temp)->prox;
	}
printf(" }\n\n");
}

int tamanho(Lista *l)
{
	if(l==NULL||lista_vazia(l)) return 0;
	
	Lista *temp = l;
	int tam = 0;
	
	while((temp)->prox!=NULL){
		tam++;
		(temp) = (temp)->prox;
	}
return tam;
}

int remove_todos(Lista *l,int elem) //nao funciona corretamente
{
	
	if(l==NULL) return 0;
	if(lista_vazia(l)) return 0;
	
	int removido = 0;
	Lista *temp = l->prox;
	Lista *temp_aux;
	
	while(temp != NULL){
		
		if(temp->info == elem){
			temp_aux = temp;
			temp = temp_aux->prox;
						
			if(temp_aux->prox != NULL){
				Lista *aux = temp_aux->prox;
				aux->ant = temp_aux->ant;
			}
			free(temp_aux);
		removido++;
		}
		
		temp = temp->prox;
	}
	
	if(removido)return 1;
return 0;
}

int remove_maior(Lista *l)
{
	if(l==NULL || lista_vazia(l)) return 0;
	
	int maior = l->prox->info;
	Lista *temp = l;
	
	while(temp->prox!=NULL){
		if(temp->prox->info > maior) maior=temp->prox->info;
		temp = temp->prox;
	}
	remove_elemento(l,maior);
return 1;
}

Lista *multiplo_3(Lista *l)
{
	Lista *C = cria_lista();
	
	if(C){
		Lista *temp = l;
		
		while(temp->prox!=NULL){
			if(temp->prox->info%3==0){
				insere_elemento(C,temp->prox->info);
			}
			temp = temp->prox;
		}
	}
return C;
}

int main()
{
    Lista *A = cria_lista();

    //print_lista(A);

    insere_elemento(A , 5);
    insere_elemento(A , 4);
    insere_elemento(A , 5);
    insere_elemento(A , 6);
    insere_elemento(A , 3);

    print_lista(A);

	//remove_todos(A,5);
	
    //print_lista(A);
        
}

