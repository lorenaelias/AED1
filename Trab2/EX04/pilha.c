#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include<string.h>
#define max 30

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

void converter_posfixa(char* str, int formato)
{

	if(formato==2){//infixa
		char* aux = (char*) malloc(max*sizeof(char));
        infixa_posfixa(str);
		strcpy(str,aux);
		return;
	}

	else{//infixa parenteses eventuais

		char* aux = (char*) malloc(max*sizeof(char));
		infixa_posfixa(str);
		strcpy(str,aux);
		return;
	}
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

double calcular_expressao(char* str, int *val_literais)
{
	double retorno = 0.0, parcial=0.0;
	char lit[12] = "abcdefghij";
	int i=0,j;
	double x=0;
	double y=0;
	char pos[12];
	double elem;

	Pilha p=cria_pilha();

	for(i=0;i<strlen(str);i++){
		if(ehOperando(str[i])){
			insere_elem_INT(p,valor(str[i]));
		}
		else
            switch(str[i]){
                remove_elem_INT(p,&x);remove_elem_INT(p,&y);
                case'+': insere_elem_INT(p, x + y); break;
                case'-': insere_elem_INT(p, x - y); break;
                case'*': insere_elem_INT(p, x * y); break;
                case'/': insere_elem_INT(p, x / y); break;
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

int Precedencia(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;
    }
    return -1;
}

int infixa_posfixa(char *exp)
{
    if(exp==NULL) return 0;

	int i;
	char elem;

	Pilha p = cria_pilha(); // guarda os operadores

	for(i=0 ; i<strlen(exp) ; i++){

        if(ehOperando(exp[i])) printf("%c",exp[i]);

        if(ehOperador(exp[i])) insere_elem(p,exp[i]);

        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            remove_elem(p,&elem);
            printf("%c",elem);
		}
    }

    if(pilha_vazia(p)==1) return 0;
return 1;
}

double valor(char ch)
{
    double r;

    printf("Digite o valor de %c: ",ch);
    scanf("%lf",&r);
return r;
}
