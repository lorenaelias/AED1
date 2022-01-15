#include "encduplo.h"
#include "encduplo.c"
int main()
{
    Lista A = cria_lista();

    print_lista(A);

    insere_elemento(&A , 5);
    insere_elemento(&A , 4);
    insere_elemento(&A , 5);
    insere_elemento(&A , 6);
    insere_elemento(&A , 3);

    print_lista(A);

    remove_maior(A);

    print_lista(A);
}
