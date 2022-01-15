#include <stdio.h>
#include "dinencnord.h"
#include "dinencnord.c"

int main(){
    Lista* A = cria_lista();

    insere_elem(&A , 4);
    insere_elem(&A , 0);
    insere_elem(&A , 7);

    print_lista(A);

    Lista *B = cria_lista();

    insere_elem(&B, 4);
    insere_elem(&B, 0);

    print_lista(B);

    Lista* C = cria_lista();

    C = concatenar(&A, &B);

    print_lista(C);

    return 0;
}
