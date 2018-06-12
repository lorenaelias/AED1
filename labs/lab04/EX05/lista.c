#include "lista.h"

struct lista{
	String* vet;
	int fim;
};

Lista* cria_lista(){
	Lista *S;
	S = (Lista*) malloc(sizeof(Lista));
	if(S!=NULL){
		S->vet = (String*)malloc(MAX*sizeof(char*));
		for (int i = 0; i < MAX; i++) {
			S->vet[i] = (char*) malloc(MAX*sizeof(char));
		}
		S->fim=0;
	}
	return S;
}

void apaga_lista(Lista **l){
	free(*l);
	*l = NULL;
}

int lista_vazia(Lista *l){
	if(l->fim==0) return 1;
	return 0;
}

int lista_cheia(Lista *l){
	if(l->fim==MAX) return 1;
	return 0;
}

int insere_elem(Lista *l,String s){
	int i;
	if(l==NULL||lista_cheia(l)) return 0;
	i = l->fim;
	strcpy(l->vet[l->fim++],s);
	if(l->fim>i) return 1;
	return 0;
}

int insere_elem_ord(Lista *l,String s){
	if(l==NULL||lista_cheia(l)) return 0;
	int fim,i,temp=l->fim;
	fim = l->fim;
	if(lista_vazia(l)){
		strcpy(l->vet[0],s);
		l->fim++;
		return 1;
	}
	for(i=0;i<l->fim;i++){
		if(compara_string(s,l->vet[i])){
			temp = i;
			break;
		}
	}
	if(temp>l->fim) strcpy(l->vet[l->fim++],s);
	else{
		for(i=l->fim;i>temp;i--){
			strcpy(l->vet[i],l->vet[i-1]);
		}
		strcpy(l->vet[temp],s);
		l->fim++;
	}
	if(l->fim>i) return 1;
	return 0;
}
int compara_string(String A,String B){
	int i,c=0;
	for(i=0;i<MAX;i++){
		if(A[i]<B[i]) return 1;
		return 0;
	}
	return 0;
}

int remove_elem(Lista *l,String s){
	if(l==NULL||lista_vazia(l)) return 0;
	int i,j;
	for(i=0;i<l->fim;i++){
		if(strcmp(l->vet[i],s)==0){
			if(i==l->fim){
				l->fim--;
				return 1;
			}
			else{
				for(j=i;j<l->fim;j++){
					strcpy(l->vet[j],l->vet[j+1]);
				}
				l->fim--;
				return 1;
			}
		}
	}
	return 0;
}

void print_lista(Lista *l){
	int i=0;
	printf("Lista\n{");
	for(i=0;i<l->fim;i++){
		if(i<l->fim-1)printf("%s; ",l->vet[i]);
		else printf("%s",l->vet[i]);
	}
	printf("}\n");
}
