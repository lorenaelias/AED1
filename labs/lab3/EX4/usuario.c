#include "racional.h"
#include "racional.c"

int main(int argc, char const *argv[])
{
	Racional *R,*S,*T,*U,*V,*W,*X,*Y,*A,*B,*C;
	R = generate();
	S = generate();
	T = generate();
	U = generate();
	V = generate();
	W = generate();
	X = generate();
	Y = generate();

	int n,d;

	printf("Digite um numero racional\n");
	printf("numerador:");
	scanf("%d",&n);
	printf("denominador:");
	scanf("%d",&d);
	set_value(R,n,d);
	
	printf("Digite outro numero racional\n");
	printf("numerador:");
	scanf("%d",&n);
	printf("denominador:");
	scanf("%d",&d);
	set_value(S,n,d);

	printf("Digite um numero racional\n");
	printf("numerador:");
	scanf("%d", &n);
	printf("denominador:");
	scanf("%d", &d);
	set_value(T, n, d);

	printf("Digite outro numero racional\n");
	printf("numerador:");
	scanf("%d", &n);
	printf("denominador:");
	scanf("%d", &d);
	set_value(U, n, d);

	printf("Digite um numero racional\n");
	printf("numerador:");
	scanf("%d", &n);
	printf("denominador:");
	scanf("%d", &d);
	set_value(V, n, d);

	printf("Digite outro numero racional\n");
	printf("numerador:");
	scanf("%d", &n);
	printf("denominador:");
	scanf("%d", &d);
	set_value(W, n, d);

	printf("Digite um numero racional\n");
	printf("numerador:");
	scanf("%d", &n);
	printf("denominador:");
	scanf("%d", &d);
	set_value(X, n, d);

	printf("Digite outro numero racional\n");
	printf("numerador:");
	scanf("%d", &n);
	printf("denominador:");
	scanf("%d", &d);
	set_value(Y, n, d);

	A = prod(sum(R, S), sum(T, U));
	delete (&S);
	delete (&T);
	B = sum(prod(U, V), prod(X, W));
	delete (&U);
	delete (&V);
	delete (&X);
	C = prod(W, sum(R, Y));
	delete (&W);
	delete (&R);
	delete (&Y);

	simplifica(A);
	printf("Expressao X = ");
	print_value(A);

	simplifica(B);
	printf("Expressao Y = ");
	print_value(B);

	simplifica(C);
	printf("Expressao Z = ");
	print_value(C);

	return 0;
}
