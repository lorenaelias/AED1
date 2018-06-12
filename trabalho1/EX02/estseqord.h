#include <stdio.h>
#include <stdlib.h>

typedef struct lista  lista;

lista* lista_cria();

int lista_vazia(lista *L);

int lista_cheia(lista *L);

int lista_insere(lista *L,int elem);

int remove_elem (lista *L, int elem);

int remove_todos (lista *L, int elem);

void lista_imprime(lista *L);

int insere_ord(lista *L, int elem);

int remove_ord(lista *L, int elem);

lista *intercala_ord(lista *L1, lista *L2);

int remove_pares(lista *L);

int maior(lista *L);

int tamanho(lista *L);

int iguais(lista *L1, lista *L2);
