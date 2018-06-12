#include "lista.h"
#include "lista.c"
#include <stdio.h>



int main()
{
    Lista A = cria_lista();

    print_lista(&A);

    //print("Tamanho da lista: %d",tamanho_lista(&A));

    insere_elem(&A , 5);
    insere_elem(&A , 4);
    insere_elem(&A , 1);
    insere_elem(&A , 6);
    insere_elem(&A , 3);

    print_lista(&A);

    //print("Tamanho da lista: %d", tamanho_lista(&A));

    remove_elem(&A , 1);

    print_lista(&A);

    printf("Tamanho da lista: %d",tamanho_lista(&A));
}
