// TAD Ponto (x,y)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto Ponto;

//Aloca e retorna um ponto
Ponto* pto_cria();

//Libera a memória de um ponto previamente criado
void pto_libera(Ponto **p);

//Retorna os valores das coordenadas de um ponto
void pto_acessa(Ponto *p, float *x, float *y);

//Atribui novos valores ao ponto
void pto_atribui(Ponto *p, float x, float y);

//distância entre dois pontos
float pto_distancia(Ponto *p1, Ponto *p2);