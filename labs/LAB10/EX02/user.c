
#include "pilha.h"
#include "pilha.c"
#define MAX 30

int main(){

    int qnt,i;
    char s[MAX];

    setbuf(stdin,NULL);
    printf("Expressao: ");
    scanf("%s",s);

    if(validacao(s)==1) printf("\nA expressao eh valida!\n");
    else printf("\nA expressao nao eh valida!\n");

return 0;
}
