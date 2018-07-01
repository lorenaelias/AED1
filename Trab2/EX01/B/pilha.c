#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#define max 40

struct pilha
{
	char no[max];
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

int push (Pilha p, char elem)
{
    if (p == NULL || pilha_cheia(p) == 1) return 0;
    p->topo++;
    p->no[p->topo] = elem;

return 1;
}

int pop (Pilha p, char *elem)
{
    if (p == NULL || pilha_vazia(p) == 1) return 0;

    *elem= p->no[p->topo];
    p->topo--;

return 1;
}

int le_topo (Pilha p, char *elem)
{
    if (p == NULL || pilha_vazia(p) == 1) return 0;

    *elem= p->no[p->topo];

return 1;
}

int imprime(Pilha p)
{
    int i=0;

    if (p == NULL || pilha_vazia(p) == 1) return 0;

    for(i=p->topo;i!=-1;i--){
      printf("%c",p->no[i]);
    }

return 1;
}

int palindromo(char *s)
{
    int i=0;
    Pilha p = cria_pilha();
    char elem;
    int posicao=0;

    for(i=0,posicao=0; i<strlen(s); i++,posicao++){
        if(s[posicao]==' '){
            posicao++;
        }
        s[i]=s[posicao];
    }

    for(i=0;i<strlen(s);i++){
       //if(s[i]==' ')break;
       push(p, s[i]);
    }

    int cont=0;
    i=0;
    int flag=0;

    for(cont=0; cont<strlen(s); cont++) {
        pop(p,&elem);
        if (elem == s[cont])flag++;
    }

   if(flag==strlen(s)) return 1;

return 0;
}

int imprime_rev(Pilha p)
{
    int i;
    if (p == NULL || pilha_vazia(p) == 1) return 0;

    for(i=0;i<=p->topo;i++){
      printf("%c",p->no[i]);
    }
return 1;
}
