#include <stdio.h>
#include "lista.h"
#include "lista.c"
int main(){

    //lista_cria(&n);
    lista* n = lista_cria();

    lista_imprime(n);

    insere_ord( n , 0);
    insere_ord( n , 1);
    insere_ord( n , 2);
    insere_ord( n , 3);
    insere_ord( n , 4);
    insere_ord( n , 5);
    insere_ord( n , 6);
    insere_ord( n , 7);
    insere_ord( n , 8);
    insere_ord( n , 9);
    insere_ord( n , 10);


    lista_imprime(n);

    remove_ord(n,8);

    lista_imprime(n);

    n = lista_cria();

    lista_imprime(n);


return 0;
}
