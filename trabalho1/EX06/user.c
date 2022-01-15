#include "dinenccircularnord.h"
#include "dinenccircularnord.c"
#include<stdio.h>

int main()
{

    Lista* A = cria_lista();
    insere_elem(A , 6);

    imprime_lista(A);

    printf("Maior: %d\n",maior(A));

 }
