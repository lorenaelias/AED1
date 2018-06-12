#include <stdio.h>
#include <stdlib.h>

typedef struct dados{
    int num;
    char nome[30];
}dados;

void manipula_par(dados *p, int n);   
void manipula_um_par(dados * par);   

void manipula_par(dados *p, int n){
    int i;
    for(i=0;i<n;i++){
        //*par = *par/2;
        manipula_um_par(&p[i]);
    }
}

void manipula_um_par(dados *par){
    par->num = par->num/2;
}

int main(){
    dados *d;
    int x,i;

    printf("Quantos dados deseja inserir? "); scanf("%d",&x);

    aloca_structs(d,x);

    for( i = 0 ; i < x ; i++){
        printf("\nNome: "); scanf("%s",&d[i].nome);
        printf("\nNumero: "); scanf("%d",&d[i].num);
    }

    manipula_par(d,x);


    for( i = 0 ; i < x ; i++){
        printf("Nome: %s\n",d[i].nome);
        printf("Numero: %d\n",d[i].num);
    }


    free(d);

return 0;
}

void aloca_structs(dados **p, int n){
	d = (dados*) malloc (n * sizeof(dados));
}
