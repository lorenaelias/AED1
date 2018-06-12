#include "estseqord.h"
#define max 10

struct lista {
int no[max];
int Fim;
};

lista* lista_cria(){
    lista *L;
    L = (lista*)malloc(sizeof(lista));
    if(L != NULL)   L->Fim = 0;
    return L;
}

int lista_vazia(lista *L){
    if(L->Fim == 0){
        return 1;
    }
return 0;
}

int lista_cheia(lista *L){
    if(L->Fim == max){
        return 1;
    }
return 0;
}

void lista_imprime(lista *L){
	int i;
	printf("{ ");
    if (! lista_vazia(L) ){
        for (i = 0; i < L->Fim ; i++) printf("%d  ",L->no[i]);
    }
    printf("}\n\n");
}

int insere_ord(lista *L, int elem){
    int i;

    if(L == NULL || lista_cheia(L)) return 0;

    for(i=0;i<L->Fim;i++){
        if(elem < L->no[i]) break;
    }

    if(i > L->Fim-1){
        L->no[i] = elem;
        L->Fim++;
    return 1;
    }

    else{
        int aux = 0;
        while (elem >= L->no[aux]) aux++;
        for (i = L->Fim; i > aux; i--)  L->no[i] = L->no[i - 1];
        L->no[aux] = elem;
    }
    L->Fim++;
return 1;
}

int remove_ord(lista *L, int elem){
    if (L == NULL || lista_vazia(L) == 1 ) return 0;
    
    int i,j;

    for (i = 0; i < L->Fim; i++)
    {
        if (L->no[i] == elem)
        {
            if (i == L->Fim)
            {
                L->Fim--;
                return 1;
            }
            else
            {
                for (j = i; j < L->Fim; j++)
                {
                    L->no[j] = L->no[j + 1];
                }
                L->Fim --;
                return 1;
            }
        }
    }
    return 0;

    return 1;  
    
}

lista* intercala_ord(lista *L1, lista *L2)
{
    lista *C;
    C = lista_cria();
    int i;
    for (i = 0; i < L1->Fim; i++)
    {
        insere_ord(C, L1->no[i]);
    }
    for (i = 0; i < L2->Fim; i++)
    {
        insere_ord(C, L2->no[i]);
    }
    return C;
}

int remove_pares(lista *L)
{
	if(L==NULL||lista_vazia(L)) return 0;
	
	int i=0,j,controle=L->Fim;

	while(i<L->Fim)
	{
		if(L->no[i]%2==0){
			if(i==L->Fim-1){
				L->Fim--;
				return 1;
			}
			else{
				for(j=i;j<L->Fim-1;j++){
					L->no[j] = L->no[j+1];
				}
				L->Fim--;
			}
		}
		else i++;
	}
	if(L->Fim<controle) return 1;
return 0;	
}

int maior(lista *L)
{
	if(L == NULL || lista_vazia(L) == 1) return -10000;
	
return L->no[L->Fim-1];	
}

int tamanho(lista *L)
{
	return L->Fim;
}

int iguais(lista *L1, lista *L2)
{
	if(L1->Fim != L2->Fim) return 0;
	int flag=0,i;
	
	for(i=0;i<L1->Fim;i++){
		if(L1->no[i] != L2->no[i])flag++;
	}
	
	if(flag != 0)return 0;
	
return 1;	
}
