#include "lista.h"

struct no
{
int info;
struct no *prox;
};

Lista cria_lista()
{
    // Aloca nó cabeçalho
    Lista cab;
    cab = (Lista)malloc(sizeof(struct no));
    // Coloca lista no estado de vazia
    if (cab != NULL)
    {
        // Só se alocação NÃO falhar
        (cab)->prox = NULL;
        (cab)->info = 0;
    }
    // Opcional: guardar qtde
    return cab;
}

int lista_vazia(Lista *lst)
{
    if (
        (*lst)->prox == NULL)
        return 1;
    // Lista vazia
    else
        return 0;
    // Lista NÃO vazia
}

int insere_elem(Lista *lst,int elem)
{
    // Aloca um novo nó
    Lista N = (Lista)malloc(sizeof(struct no));
    if (N == NULL)
    {
        return 0;
    }
    // Falha: nó não alocado
    // Preenche os campos do novo nó
    N->info = elem;
    // Insere o conteúdo (valor do elem)
    N->prox =
        (*lst)
            ->prox;
    // Aponta para o 1o nó atual da lista 
    (*lst)->prox = N;
    // Faz o nó cabeçalho apontar para o novo nó
    (*lst)->info++;
    // Opcional: Incrementa qtde de nós na lista
    return 1;
}

int remove_elem(Lista *lst, int elem)
{
    if (lista_vazia(lst) == 1) return 0;
    // Falha
    Lista aux = *lst;
    // Ponteiro auxiliar para o nó cabeçalho
    while (aux->prox != NULL && aux->prox->info != elem) aux = aux->prox;
    // Percorrimento até achar o elem ou final de lista
    if (aux->prox == NULL)
        // Trata final de lista
        return 0;
    // Falha
    Lista aux2 = aux->prox;
    // Aponta nó a ser removido
    aux->prox = aux2->prox;
    // Retira nó da lista
    free(aux2);
    // Libera memória alocada
    (*lst)->info--;
    // Opcional: Decrementa qtde de nós na lista
    return 1;
}

//item b

int tamanho_lista(Lista *l)
{
    int tam;
    Lista aux = *l;
    
    if(lista_vazia(l)) return 0;

    for (tam = 0; l != NULL; aux = aux->prox)
    {
        tam++;
    }
    return tam;
}

void print_lista(Lista *l) 
{
   Lista *temp;
   
	for(temp = l->prox; temp!=NULL; temp = temp->prox)
		printf("%d\n",temp->info);

}
