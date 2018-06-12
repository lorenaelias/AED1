#include"pilhadinenc.h"
#include"pilhadinenc.c"

int main(){
	Pilha n = cria_pilha();
	int elem;

	imprimir(&n);

	push(&n, 1);
	push(&n, 3);
	push(&n, 2);
	push(&n, 4);
	
    imprimir(&n);
	
	pop(&n,&elem);
	
	printf("\n%d\n",elem);
	
	printf("\n");
	imprimir(&n);
	
	pop(&n,&elem);
	pop(&n,&elem);
	pop(&n,&elem);
	
	imprimir(&n);
	
return 0;
}
