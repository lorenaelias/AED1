#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include"pilha.c"
#include<string.h>

int main(){

    char string[40];

    int i=0;
    char elem;
    Pilha p = cria_pilha();

    printf("String: "); scanf("%[^\n]s", string);

    for(i=0;i<strlen(string);i++)  push(p,string[i]);

    imprime(p);
    printf("\n");
    imprime_rev(p);

   if(palindromo(string)==0) printf("\nnao eh palindromo\n");
   else  printf("\neh palindromo\n");


return 0;

}
