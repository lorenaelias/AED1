#include <stdio.h>
#include "ponto.h"
#include "ponto.c"

int main(){

Ponto *p;
Ponto *q;
float x , y;
float  d;

p = pto_cria();
q = pto_cria();

printf("Insira as coordenadas (x,y) do ponto 1 que deseja criar: "); scanf("%f%f",&x,&y);
pto_atribui(p, x, y);

printf("Insira as coordenadas (x,y) do ponto 2 que deseja criar: "); scanf("%f%f",&x,&y);
pto_atribui(q, x, y);

d = pto_distancia(p, q);

printf("Distancia entre pontos: %.2f\n",d);

pto_libera(&q);
pto_libera(&p);

return 0;
}
