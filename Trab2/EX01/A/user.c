#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include"pilha.c"

int main(){

    Pilha p;
    int num,n;

    p = cria_pilha();

    push(p,1);
    push(p,2);
    push(p,3);
    push(p,4);

    imprime(p);

    printf("\n\n");

    imprime_rev(p);

return 0;
}
