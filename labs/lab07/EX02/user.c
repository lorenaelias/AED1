#include "lista.h"
#include "lista.c"


int main()
{
    Lista A = cria_lista();

    print_lista(&A);

    //print("Tamanho da lista: %d",tamanho_lista(&A));

    insere_ord(&A , 5);
    insere_ord(&A , 4);
    insere_ord(&A , 1);
    insere_ord(&A , 6);
    insere_ord(&A , 3);

    print_lista(&A);

    //print("Tamanho da lista: %d", tamanho_lista(&A));

    remove_ord(&A , 1);

    print_lista(&A);

    //printf("Tamanho da lista: %d",tamanho_lista(&A));
}

