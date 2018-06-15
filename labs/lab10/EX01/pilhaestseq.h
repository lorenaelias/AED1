#define max 20
#include <stdio.h>
#include <stdlib.h>

typedef struct pilha *Pilha;

Pilha cria_pilha();
int pilha_vazia(Pilha p);
int push(Pilha p,int elem);
int pop(Pilha p,int *elem);
int le_topo(Pilha p,int *elem);
void imprimir(Pilha *p) ;
Pilha converte_dec_bin(int dec);
