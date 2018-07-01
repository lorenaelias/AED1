#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define max 20
#include<ctype.h>
#include<string.h>

struct pilha
{
int no[max];
int topo;
};

Pilha cria_pilha ()
{
    Pilha p;
    p = (Pilha) malloc (sizeof (struct pilha));

    if (p != NULL) p->topo = -1;

return p;
}

int pilha_vazia (Pilha p)
{
    if (p->topo ==-1) return 1;
return 0;
}

int pilha_cheia (Pilha p)
{
    if (p->topo ==max-1) return 1;

return 0;
}

int push (Pilha p, int elem)
{
    if (p == NULL || pilha_cheia(p) == 1) return 0;
    p->topo++;
    p->no[p->topo] = elem;

return 1;
}

int pop (Pilha p, int *elem)
{
    if (p == NULL || pilha_vazia(p) == 1) return 0;

    *elem= p->no[p->topo];
    p->topo--;

return 1;
}

int le_topo (Pilha p, int *elem)
{
    if (p == NULL || pilha_vazia(p) == 1) return 0;

    *elem= p->no[p->topo];

return 1;
}

int imprime(Pilha p)
{
    int i;

    if (p == NULL || pilha_vazia(p) == 1) return 0;

    for(i=p->topo;i>=0;i--){
      printf("%d",p->no[i]);
    }

return 1;
}

int imprime_rev(Pilha p)
{
    int i;
    if (p == NULL || pilha_vazia(p) == 1) return 0;

    for(i=0;i<=p->topo;i++){
      printf("%d",p->no[i]);
    }
return 1;
}
