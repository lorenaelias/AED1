#include "ponto.h"
#include <math.h>

struct ponto{
    float x;
    float y;
};

Ponto* pto_cria(){
    return (Ponto *)malloc(sizeof(Ponto));
}

void pto_libera(Ponto **p){
    free(*p);
}

void pto_acessa(Ponto *p, float *x, float *y){
    *x = p -> x;
    *y = p -> y;
}

void pto_atribui(Ponto *p, float x, float y){
    p -> x = x;
    p -> y = y;
}

float pto_distancia(Ponto *p1, Ponto *p2){
    float dx = p2->x - p1 -> x;
    float dy = p2->y - p1 -> y;
    return (dx * dx + dy * dy) * (dx * dx + dy * dy);
}