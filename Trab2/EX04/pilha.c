#include"pilha.h"
#define max 20

struct pilha{
	struct pilha *prox;
	char info;
};

Pilha cria_pilha()
{
return NULL;
}

int pilha_vazia(Pilha p)
{
	if(p==NULL) return 1;
return 0;
}

int push(Pilha *p,char elem)
{
	Pilha N = (Pilha) malloc (sizeof(struct pilha));
	if(N == NULL) return 0;

	N->info = elem;
	N->prox = *p;
	*p = N;

return 1;
}

int pop (Pilha *p)
{
	if (pilha_vazia(*p) == 1) return 0;

	Pilha aux = *p;

	*p = aux->prox;
	free(aux);
return 1;
}

int le_topo(Pilha *p,int *elem)
{
	if(pilha_vazia(*p) == 1) return 0;
	*elem = (*p)->info;
return 1;
}

void imprimir(Pilha *p)
{
    if (pilha_vazia(*p) == 1) printf("Pilha vazia");

    Pilha aux = *p;
    int i;

    while(aux!=NULL){
        printf("\t%c\n",aux->info);
        aux = aux->prox;

    }
}

int infixa_posfixa(const char *inf, char *pos)
{
	if(inf==NULL || pos==NULL) return 0;

	Pilha p = cria_pilha();

    int x,i,j=0;

	for(i=0;inf[i]!='\0';i++){
        if(inf[i]==')'){
			if(!remove_elem(&p,&x)) return 0;
			pos[j++]=x;
			pos[j++]=')';
		}
		else if(inf[i]=='+' || inf[i]=='-' || inf[i]=='*' || inf[i]=='/' || inf[i]=='^'){
			insere_elem(&p,inf[i]);
		}
		else{
			pos[j++]=inf[i];
		}
	}

	pos[j]='\0';
return 1;
}
