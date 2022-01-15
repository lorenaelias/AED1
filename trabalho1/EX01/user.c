#include<stdio.h>
#include"estseqnord.h"
#include"estseqnord.c"
int main(){

     lista* A = lista_cria();

    insere_elem( A , 4);
    insere_elem( A , 7);

    lista_imprime(A);

    lista *B = lista_cria();

    insere_inicio(B, 4);
    insere_inicio(B, 2);

    lista_imprime(B);

    lista* C = lista_cria();

    C = concatenar(A, B);

    lista_imprime(C);

    printf("tam C : %d\n",tamanho(C));

    remove_impares(A);
    printf("A sem impares: \n\n");
    lista_imprime(A);

    printf("menor elemento: %d \n",menor_elem(C));
    remove_elem(C,2);

    remove_todos(C,4);

    lista_imprime(C);

return 0;
}
