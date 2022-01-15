#include <stdio.h>
#include "estseqord.h"
#include "estseqord.c"

int main(){
    lista* A = lista_cria();

    insere_ord(A , 4);
    insere_ord(A , 0);
    insere_ord(A , 7);

    lista_imprime(A);

    lista *B = lista_cria();

    insere_ord(B, 4);
    insere_ord(B, 0);
    insere_ord(B, 7);

    lista_imprime(B);

    /*lista* C = lista_cria();

    C = intercala_ord(A, B);

    lista_imprime(C);

    A = lista_cria();
*/
    if(iguais(A, B)==1) printf("A e B sao iguais %d\n");
    else printf("A e B sao dif\n");

    //lista_imprime(C);

    return 0;
}

