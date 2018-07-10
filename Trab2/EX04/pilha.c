#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include<string.h>
#define max 50

struct no{
	char elem;
	struct no *prox;
};

Pilha cria_pilha(){
	return NULL;
}

int pilha_vazia(Pilha p)
{
	return !p;
}

int insere_elem(Pilha p, char elem)
{
	Pilha No = (Pilha) malloc(sizeof(struct no));
	if(No){
		No->elem = elem;
		if(pilha_vazia(p)){
			No->prox = NULL;
			p = No;
			return 1;
		}
		No->prox = p->prox;
		p = No;
		return 1;
	}
	return 0;
}

int remove_elem(Pilha p, char *elem)
{
	if(pilha_vazia(p)) return 0;
	Pilha No = p;
	if(No){
		*elem = No->elem;
		p = No->prox;
		free(No);
		return 1;
	}
	return 0;
}

int insere_elem_INT(Pilha p, int elem)
{
	Pilha No = (Pilha) malloc(sizeof(struct no));
	if(No){
		No->elem = elem;
		if(pilha_vazia(p)){
			No->prox = NULL;
			p = No;
			return 1;
		}
		No->prox = p->prox;
		p = No;
		return 1;
	}
	return 0;
}

int remove_elem_INT(Pilha p, double *elem)
{
	if(pilha_vazia(p)) return 0;
	Pilha No = p;
	if(No){
		*elem = No->elem;
		p = No->prox;
		free(No);
		return 1;
	}
	return 0;
}

void imprimir(Pilha p)
{
	if(pilha_vazia(p)) {
		printf("pilha: []\n");
		return;
	}
	printf("pilha: [");
	Pilha temp = p;
	while(temp!=NULL){
		printf("%c ",temp->elem);
		temp = temp->prox;
	}
	printf("\b]\n");
}

int validacao(char *s)
{
    int i=0, cont=0;
    Pilha aux;
    aux = cria_pilha();
    char elem;

    while(i<=strlen(s)){

        if(s[i]=='(' || s[i]=='[' || s[i]=='{') {insere_elem(aux,s[i]);cont++;}
        else if(s[i]==')' || s[i]==']' || s[i]=='}'){
            if(pilha_vazia(aux)==1) return 0;
            else
            if(s[i] == ')'){
                if(aux->elem == '(') {remove_elem(aux,&elem);cont--;}
                                        else return 0;
            }
            if(s[i] == ']'){
                if(aux->elem == '[') {remove_elem(aux,&elem);cont--;}
                                        else return 0;
            }
            if(s[i] == '}'){
                if(aux->elem == '{') {remove_elem(aux,&elem);cont--;}
                                        else return 0;
            }
        }
        i += 1;
    }
    if(pilha_vazia(aux)==0)return 0;
    if(cont!=0) return 0;

return 1;
}

double calculo(char* str, int *val_literais)
{
    int i,j;
	double x=0;
	double y=0;
	double elem;

	Pilha p=cria_pilha();

	for(i=0;i<strlen(str);i++){

		if(ehOperando(str[i])){
			insere_elem_INT(p,val_literais[i]);
		}

		if(ehOperador(str[i])){
            remove_elem_INT(p,&x); remove_elem_INT(p,&y);

            switch(str[i]){
                case'+': insere_elem_INT(p, y + x); break;
                case'-': insere_elem_INT(p, y - x); break;
                case'*': insere_elem_INT(p, y * x); break;
                case'/': insere_elem_INT(p, y / x); break;
            }
		}
	}

    remove_elem_INT(p,&elem);

return elem;
}

int ehOperando(char ch)
{
    return (ch >= 'a' && ch <= 'j') || (ch >= 'A' && ch <= 'J');
}

int ehOperador(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int infixa_posfixa(const char *inf,char *pos)
{
	if(inf==NULL || pos==NULL) return 0;
	char ch,x,y;
	int j=0;
	Pilha p=cria_pilha(); //guarda os operadores
	Pilha q=cria_pilha(); //guarda os operandos
    Pilha q1=cria_pilha(); // inverte q

	for(int i=0;i<strlen(inf);i++){

        if(ehOperador(inf[i]))	insere_elem(p,inf[i]);

        if(ehOperando(inf[i]))  insere_elem(q,inf[i]);

        if(inf[i]==')'){
			if( !remove_elem(q,&x) && !remove_elem(q,&y) && !remove_elem(p,&ch) ) return 0;

			insere_elem(q1,x); insere_elem(q1,y);
			remove_elem(q1,&x);remove_elem(q1,&y);
			pos[j++]=x;
			pos[j++]=y;
			pos[j++]=ch;
		}
	}

    pos[j]='\0';
	return 1;
}

void print_valor(char *str, int *val_literais)
{
	printf("Valor da expressao  [%s]  = %lf\n",str,calculo(str, val_literais));
}
