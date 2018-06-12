#include "pilhaestseq.h"

struct pilha{
	int vetor[max];
	int topo;
};

Pilha cria_pilha()
{
	Pilha p = (Pilha)malloc(sizeof(struct pilha));
	if(p != NULL) p->topo = -1;
return p;
}

int pilha_vazia(Pilha p)
{
	if(p->topo == -1) return 1;
return 0;
}

int pilha_cheia(Pilha p)
{
	if(p->topo == max-1) return 1;
return 0;
}

int push(Pilha p,int elem)
{
	if(p==NULL||pilha_cheia(p) == 1) return 0;

	p->topo++;
	p->vetor[p->topo]=elem;
	return 1;
}

int pop(Pilha p,int *elem)
{
	if(p==NULL||pilha_vazia(p)==1)return 0;

	*elem = p->vetor[p->topo]; //retorna elemento
	p->topo--; //remove elemento do topo
return 1;
}

int le_topo(Pilha p,int *elem)
{
	if(p==NULL||pilha_vazia(p)==1)return 0;

	*elem = p->vetor[p->topo];
return 1;
}


void imprimir(Pilha *p) 
{
	int i;
    Pilha ponteiro = (*p);
     
		for(i=(*p)->topo;i>-1;i--){
           printf("%d\n", (ponteiro)->vetor[i]);
		}        
		printf("\n");  
    
}



