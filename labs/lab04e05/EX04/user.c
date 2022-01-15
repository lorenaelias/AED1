#include <stdio.h>
#include "lista.h"
#include "lista.c"
int main(){

    /*inicialize a lista1;
     Insira os elementos na seguinte ordem : 4, 0, 7, 1, 9, 5;
     Imprima a lista1;
     Inicialize a lista2;
     Insira os elementos na seguinte ordem : 8, 2, 6, 3;
     Imprima a lista2;
     Gere a lista3 intercalando lista 1 e lista 2 de forma ordenada. 
 Imprima a lista3;
     Inicialize a lista1;
     Gere a lista3 intercalando lista 1 e lista 2 de forma ordenada. 
 Imprima a lista3;
    */
    //lista_cria(&n);
    lista* A = lista_cria();
    

    insere_ord( A , 4);
    insere_ord( A , 0);
    insere_ord( A , 7);
    insere_ord( A , 1);
    insere_ord( A , 9);
    insere_ord( A , 5);

    lista_imprime(A);

    lista *B = lista_cria();

    insere_ord(B, 8);
    insere_ord(B, 2);
    insere_ord(B, 6);
    insere_ord(B, 3);

    lista_imprime(B);

    lista* C = lista_cria();

    C = intercala_ord(A, B);

    lista_imprime(C);

    A = lista_cria();

    C = intercala_ord(A, B);

    lista_imprime(C);

    return 0;
}
