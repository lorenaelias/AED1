#include <stdlib.h>
#include <stdio.h>
typedef struct no Lista;

Lista *cria_lista();
	
int lista_vazia(Lista *l);
	
int insere_ord(Lista **l, int elem);
	
int remove_ord(Lista **l, int elem);
	
void print_lista(Lista *l);

int tamanho(Lista *L);

int remove_impares(Lista **A);	
	
int menor(Lista *A);

int iguais(Lista *A, Lista *B);
	
Lista* intercalar(Lista **A,Lista **B);
