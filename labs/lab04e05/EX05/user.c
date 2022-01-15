#include "lista.c"
#include "lista.h"

int main(){
	char s[MAX];
	char e[MAX];
	
    Lista* n = cria_lista();
    
    scanf("%^[\n]s",s);

    print_lista(n);

    insere_elem(n,s);
    
    print_lista(n);
    
    printf("Apagar: \n");
    setbuf(stdin,NULL);
	scanf("%[^\n]s",e);
    remove_elem(n,e);

    print_lista(n);

    n = cria_lista();

    print_lista(n);


return 0;
}
