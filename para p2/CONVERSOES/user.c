#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include"pilha.c"

int main(){

    Pilha p,p1,p2;
    int num=0,n;

    p = cria_pilha();
    p1 = cria_pilha();
    p2 = cria_pilha();

    do{
        printf("Digite um numero natural: ");
        scanf("%d",&num);
    }while(num<=0);


    p2 = dec_bin(num);

    printf("\n%d em bin: ",num);
    imprimeint(p2);

    p = dec_hexa(num);

    printf("\n%d em hexa: ",num);
    imprime(p);

    p1 = dec_octal(num);

    printf("\n%d em octal: ",num);
    imprimeint(p1);

    printf("\n\n");

return 0;
}
