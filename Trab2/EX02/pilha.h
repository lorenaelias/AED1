#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pilha *Pilha;
Pilha cria_pilha();
int pilha_vazia(Pilha p);
int push(Pilha *p,char elem);
int pop(Pilha *p);
int le_topo(Pilha *p,int *elem);
int pares_e_impares(Pilha *p);
