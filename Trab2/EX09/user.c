#include "fila.h"
#include "fila.c"

int main(){
    Fila f = cria_fila();
    int elem;

    imprime(f);

    insere_fim(&f,5,2);
    insere_fim(f,4,1);
    insere_fim(f,6,3);
    insere_fim(f,3,4);

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
