#include "dinencord.h"
#include "dinencord.c"
#include<stdio.h>

int main()
{

    Lista* A = cria_lista();

    insere_ord(&A , 4);
    insere_ord(&A , 6);
    insere_ord(&A , 3);

    print_lista(A);

    Lista* B = cria_lista();

    insere_ord(&B , 5);
    insere_ord(&B , 4);
    insere_ord(&B , 1);

    print_lista(B);

    Lista *C = cria_lista();

    C = intercalar(&A,&B);

    print_lista(C);

 }
