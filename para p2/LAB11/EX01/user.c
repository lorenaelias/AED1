#include "fila.h"
#include "fila.c"

int main(){
    Fila f = cria_fila();
    int elem;

    imprime(f);

    insere_fim(f,5);
    insere_fim(f,4);
    insere_fim(f,6);
    insere_fim(f,3);

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
