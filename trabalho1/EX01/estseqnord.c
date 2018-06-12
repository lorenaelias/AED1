#include "estseqnord.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct lista {
int no[MAX];
int Fim;
};

lista* lista_cria(){
    lista *L;
    L = (lista*)malloc(sizeof(lista));
    if(L != NULL)   L->Fim = 0;
    return L;
}

int lista_vazia(lista *L){
    if(L->Fim == 0){
        return 1;
    }
return 0;
}

int lista_cheia(lista *L){
    if(L->Fim == MAX){
        return 1;
    }
return 0;
}

int insere_elem(lista *L,int elem) {
    if (L == NULL || lista_cheia(L))return 0;
    L->no[L->Fim] = elem;
    L->Fim++;
    return 1;
}

int remove_elem (lista *L, int elem) {
    if (L == NULL || lista_vazia(L) == 1) return 0;
    int i, Aux = 0;

    while (Aux < L->Fim && L->no[Aux] != elem) Aux++;

    for (i = Aux+1; i < L->Fim; i++) L->no[i-1] = L->no[i];

    L->Fim--;
return 1;
}

int remove_todos (lista *L, int elem) {
    if (L == NULL || lista_vazia(L) == 1) return 0;
    int i=0,j;

    	while(i<L->Fim){
		if(L->no[i] == elem){
			if(i == L->Fim-1){
				L->Fim--;
				return 1;
			}
			else{
				for(j=i;j<L->Fim-1;j++){
					L->no[j] = L->no[j+1];
				}
				L->Fim--;
			}
		}
		else i++;
	}
return 0;
}

void lista_imprime(lista *L){
int i;
	printf("{ ");
    if (! lista_vazia(L) ){
        for (i = 0; i < L->Fim ; i++) printf("%d  ",L->no[i]);
    }
    printf("}");
    printf("\n\n");
}

int insere_inicio(lista *L, int elem)
{
	int i;
	
	if (L == NULL || lista_cheia(L))return 0;
        
      
    for(i=L->Fim+1; i>0; i--){
		L->no[i] = L->no[i-1];
		
	}
	L->no[0] = elem;
	L->Fim++;
	
return 1;
}

int remove_impares(lista *L)
{
	int i;
	
	if (L == NULL || lista_vazia(L) == 1) return 0;
	
	for(i=0; i<L->Fim;i++){
		if(L->no[i] % 2 != 0){
			remove_elem(L, L->no[i]);
		}
	}

return 1;	
}

int menor_elem(lista *L)
{
	if (L == NULL || lista_vazia(L) == 1) return -10000;
	
	int menor = L->no[0];
	int i;
	
	for(i=0;i<L->Fim;i++){
		if(L->no[i]<menor){
			menor = L->no[i];
		}
	}
	
return menor;	
}

int tamanho(lista *L)
{
	int tam;
	if(L == NULL || lista_vazia(L) == 1) return 0;
	
	tam = L->Fim;
		
return tam;
}

lista* concatenar(lista *A,lista *B)
{
	lista *C = lista_cria();
	if(C==NULL) return NULL;
	int i;
	
	if(A->Fim < MAX){
		
		for(i=0;i<A->Fim;i++){
			
			insere_elem(C,A->no[i]);
		} 
		if(B->Fim < MAX-A->Fim){
			
			for(i=0;i<B->Fim;i++){
				
				insere_elem(C,B->no[i]);
			}
		}
		else return NULL;
		return C;
	}
return NULL;
}
