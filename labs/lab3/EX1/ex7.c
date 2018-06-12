#include <stdio.h>
#include <stdlib.h>

typedef struct dados{
    int num;
    char nome[30];
}dados;

void manipula_par(dados *par, int n);
void manipula_um_par(int *par);
void aloca_structs(dados **d, int n);

int main(){
    dados *d;
    int x=0,i;

    printf("NUMERO DE CADASTROS A SEREM REALIZADOS: "); scanf("%d",&x);

    aloca_structs(&d,x);

    for( i = 0 ; i < x ; i++){
        printf("\nNome: "); setbuf(stdin,NULL); scanf("%s",d[i].nome);
        printf("\nNumero: "); scanf("%d",&d[i].num);
    }

    printf("\e[H\e[2J");


    printf("CADASTROS: \n");
    for( i = 0 ; i < x ; i++){
        printf("Nome: %s\n",d[i].nome);
        printf("Numero: %d\n\n",d[i].num);
    }

    free(d);

    system("pause");
    return 0;
}


void manipula_par(dados *par, int n){
    int i;
    
    for (i = 0; i < n; i++)
    {
        if (par[i].num % 2 == 0)
            manipula_um_par(&par[i].num);
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d] = %d\n", i + 1, par[i].num);
    }
}

void manipula_um_par(int *par){
    *par/=2;
}

void aloca_structs(dados **d ,int n){
    *d = (dados*) malloc (n * sizeof(dados));
}
