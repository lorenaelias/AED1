#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include"pilha.c"

int main(){

    Pilha p;
    int num,n;

    p = cria_pilha();

    do{
        printf("Digite um numero natural: ");
        scanf("%d",&num);
    }while(num<=0);

    p = dec_bin(num);

    printf("\n%d em binario: ",num);
    imprime(p);

    printf("\n\n");

    //imprime_rev(p);

return 0;
}
