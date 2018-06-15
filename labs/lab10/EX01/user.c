#include"pilhaestseq.h"
#include"pilha.c"

int main(){
	Pilha n = cria_pilha();
	int elem;
	
	push(n, 1);
	push(n, 3);
	push(n, 2);
	push(n, 4);
	
    imprimir(&n);
    
	le_topo(n,&elem);
	
	pop(n,&elem);
	
	printf("\n%d\n\n",elem);
	
	imprimir(&n);
	
	pop(n,&elem);
	pop(n,&elem);
	pop(n,&elem);
	
	imprimir(&n);
	
	Pilha aux = cria_pilha();
	aux = converte_dec_bin(42);
	
	imprimir(&aux);	
return 0;
}
