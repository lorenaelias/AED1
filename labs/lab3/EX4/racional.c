#include "racional.h"
#include <stdio.h>
#include <stdlib.h>

struct rac{
	int numerador,denominador;
};

Racional* generate(){
	Racional *R = (Racional*) malloc(sizeof(Racional));
	return R;
}
int set_value(Racional* R,int n,int d){
	if(R==NULL||d==0) return 0;
	R->numerador = n;
	R->denominador = d;
	return 1;
}
Racional* sum(Racional *R1,Racional *R2){
	Racional *R = generate();
	if (set_value(R, R1->numerador * R2->denominador + R2->numerador * R1->denominador, R1->denominador * R2->denominador))
	{
		return R;
	}
	return NULL;
}

int prod(Racional *R1,Racional *R2){
	Racional *R = generate();
	if (set_value(R, R1->numerador * R2->numerador, R1->denominador * R2->denominador))
	{
		return R;
	}
	return NULL;
}

int print_value(Racional *R){
	printf("Numero racional: ");
	printf("%d/%d\n",R->numerador,R->denominador);
	return 0;
}

void delete (Racional **R){
	free(*R);
	*R = 0;
}

void simplifica(Racional *R){
	int n;
	if (R->numerador >= R->denominador){
		n = R->numerador;
	}else
		n = R->denominador;

	for (; n > 0; n--){
		if (R->numerador % n == 0 && R->denominador % n == 0){
			R->numerador /= n;
			R->denominador /= n;
			break;
		}
	}
}
