#include "fila.h"
#include "fila.c"

int main(){
    Fila f = cria_fila();
    int elem;

    imprime(f);

    //insere_ordenada(f,5,2);
    //insere_ordenada(f,4,1);
    //insere_ordenada(f,6,3);
    //insere_ordenada(f,3,4);

    insere_elem_ord(&f,2,4);
    insere_elem_ord(&f,4,1);
    insere_elem_ord(&f,6,3);
    insere_elem_ord(&f,3,5);

    imprime(f);

    remove_ini(f,&elem);

    imprime(f);

    printf("\n\n%d\n\n",elem);

    imprime(f);

    remove_ini(f,&elem);
    remove_ini(f,&elem);
    remove_ini(f,&elem);

    imprime(f);
}
