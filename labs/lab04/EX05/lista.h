#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef char* String;

typedef struct lista Lista;

Lista *cria_lista();

void apaga_lista(Lista **l);

int lista_vazia(Lista *l);

int lista_cheia(Lista *l);

int insere_elem(Lista *l,String s);

int insere_elem_ord(Lista *l,String s);

int remove_elem(Lista *l,String s);

int compara_string(String A,String B);

void print_lista(Lista *l);
