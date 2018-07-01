
#include "pilha.h"
#include "pilha.c"
#define MAX 30

int main(){

    Pilha p = cria_pilha();

    push(&p,1);
    push(&p,2);
    push(&p,3);
    push(&p,4);
    push(&p,5);
    push(&p,6);

    imprimir(&p);
    printf("\n");

    pares_e_impares(&p);

return 0;
}
