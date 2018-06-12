#include <stdio.h>
#include "lista.h"
#include "lista.c"
int main(){

    //lista_cria(&n);
    lista* n = lista_cria();

    lista_imprime(n);

    lista_insere( n , 0);
    lista_insere( n , 1);
    lista_insere( n , 2);
    lista_insere( n , 3);
    lista_insere( n , 4);
    lista_insere( n , 5);
    lista_insere( n , 6);
    lista_insere( n , 7);
    lista_insere( n , 8);
    lista_insere( n , 8);


    lista_imprime(n);

    remove_todos(n,8);

    lista_imprime(n);

    n = lista_cria();

    lista_imprime(n);


return 0;
}
