#include "dinencord.h"
#include "dinencord.c"
#include <stdio.h>
int main()
{
    Lista A = cria_lista();

    print_lista(&A);

    insere_elem_ord(&A , 5);
    insere_elem_ord(&A , 4);
    insere_elem_ord(&A , 1);
    insere_elem_ord(&A , 6);
    insere_elem_ord(&A , 3);

    print_lista(&A);

    printf("%d\n",menor(A));

}

