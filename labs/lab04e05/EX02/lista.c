#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#define max 10

struct lista {
int no[max];
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
    if(L->Fim == max){
        return 1;
    }
return 0;
}

int lista_insere(lista *L,int elem) {
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
    int i=0,j, Aux = 0;

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

    if (! lista_vazia(L) ){
        for (i = 0; i < L->Fim ; i++) printf("%d\n",L->no[i]);
    }
    printf("\n");
}

