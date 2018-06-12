#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
typedef struct rac Racional;
Racional * generate();
int set_value(Racional *R,int n,int d);
Racional * sum(Racional *R1,Racional *R2);
int print_value(Racional *R);
void delete (Racional **R);
void simplifica(Racional *R);
int prod(Racional *R1, Racional *R2);