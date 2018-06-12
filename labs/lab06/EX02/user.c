#include "dinamica_enc.h"
#include "dinamica_enc.c"

int main(){
	Lista *n = cria_lista();

    print_lista(n);

    insere_ord(&n, 4);
    insere_ord(&n, 8);
    insere_ord(&n, -1);
    insere_ord(&n, 19);
    insere_ord(&n, 2);  
    insere_ord(&n, 7);
    insere_ord(&n, 8);
    insere_ord(&n, 8);
    insere_ord(&n, 9);
    insere_ord(&n, 22);
    insere_ord(&n, 8);

    print_lista(n);

    remove_ord(&n, 8);

    print_lista(n);


return 0;
}
