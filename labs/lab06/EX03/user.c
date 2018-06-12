#include "dinamica_enc.h"
#include "dinamica_enc.c"

int main(){
	Lista *n = cria_lista();

    //print_lista(n);

    insere_ord(&n, 4);
    insere_ord(&n, 8);
    insere_ord(&n, -1);
    insere_ord(&n, 19);
  
    print_lista(n);
    
    Lista *p = cria_lista();
    
    insere_ord(&p, 6);
    insere_ord(&p, -4);
    insere_ord(&p, 0);
    insere_ord(&p, 33);
 
 
    
    print_lista(p);
    
    Lista *q = intercala_ord(&n,&p);
    
    print_lista(q);
   
return 0;
}
