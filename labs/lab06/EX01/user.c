#include "dinamica_enc.h"
#include "dinamica_enc.c"

int main(){
	Lista *n = cria_lista();

    print_lista(n);

    insere_elem(&n, 4);
    insere_elem(&n, 8);
    insere_elem(&n, -1);
    insere_elem(&n, 19);
    insere_elem(&n, 2);  
    insere_elem(&n, 7);
    insere_elem(&n, 8);
    insere_elem(&n, 8);
    insere_elem(&n, 9);
    insere_elem(&n, 22);
    insere_elem(&n, 8);

    print_lista(n);

    remove_elem(&n, 8);

    print_lista(n);


return 0;
}
