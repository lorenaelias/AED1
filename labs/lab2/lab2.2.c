#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ficha_alunos {
    int matricula;
    char nome[20];
    float n1;
    float n2;
    float n3;
    float media;
    int faltas;
    char situacao[20];
}ficha;

void situacao(ficha *alunos);
void Exibe(ficha *alunos);
void estatistica(ficha *A);


int main(){
ficha alunos[3];

situacao(alunos);

estatistica(alunos);

return 0;
}

void situacao(ficha *alunos){
int i;

//! atribucoes (a)
alunos[0].matricula = 111; strcpy(alunos[0].nome, "joana");
alunos[0].n1 = 50; alunos[0].n2 = 60; alunos[0].n3 = 80;
alunos[0].faltas = 55;

alunos[1].matricula = 112; strcpy(alunos[1].nome, "joao");
alunos[1].n1 = 50; alunos[1].n2 = 50.5; alunos[1].n3 = 60;
alunos[1].faltas = 60;

alunos[2].matricula = 113; strcpy(alunos[2].nome, "ana");
alunos[2].n1 = 65; alunos[2].n2 = 60; alunos[2].n3 = 70;
alunos[2].faltas = 5;


//! media(b)
for(i=0;i<3;i++){
    alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3);
}

//! situacao(c)
for(i=0;i<3;i++){
    if((alunos[i].media/3)<60){
            strcpy(alunos[i].situacao , "Reprovado por nota");
        }
        else{

            if(alunos[i].faltas >= (0.75*72)){
                strcpy(alunos[i].situacao , "Reprovado por falta");
            }
            else {
                strcpy(alunos[i].situacao , "Aprovado");
            }
        }
}
Exibe(alunos);

}

//! exibicao(d)
void Exibe(ficha *alunos){
    int i;

    for(i=0;i<3;i++){

        printf("Numero de matricula: %d\n",alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota 1: %.1f\n", alunos[i].n1);
        printf("Nota 2: %.1f\n", alunos[i].n2);
        printf("Nota 3: %.1f\n", alunos[i].n3);
        printf("Faltas: %d\n", alunos[i].faltas);
        printf("Media: %.1f\n", alunos[i].media/3);
        printf("Situacao: %s\n\n",alunos[i].situacao);

    }

}

//! estatistica (e)
void estatistica(ficha *A){
int Mm, mm, Mn1, mn1, Mn2, mn2, Mn3, mn3;
int i;
float maiormedia = -1, menormedia = 101, maiorn1 = -1, menorn1 = 101, maiorn2 = -1, menorn2 = 101, maiorn3 = -1, menorn3 = 101;

    for(i = 0; i < 3; i++) {
       if(A[i].n1 > maiorn1) {Mn1 = i, maiorn1 = A[Mn1].n1;}
       if(A[i].n2 > maiorn2) {Mn2 = i, maiorn2 = A[Mn2].n2;}
       if(A[i].n3 > maiorn3) {Mn3 = i, maiorn3 = A[Mn3].n3;}

       if(A[i].n1 < menorn1) {mn1 = i, menorn1 = A[mn1].n1;}
       if(A[i].n2 < menorn2) {mn2 = i, menorn2 = A[mn2].n2;}
       if(A[i].n3 < menorn3) {mn3 = i, menorn3 = A[mn3].n3;}

       if(A[i].media/3 > maiormedia) {Mm = i, maiormedia = A[Mm].media/3;}
       if(A[i].media/3 < menormedia) {mm = i, menormedia = A[mm].media/3;}
    }

    printf("Maior nota P1: %s\n", A[Mn1].nome);
    printf("Maior nota P2: %s\n", A[Mn2].nome);
    printf("Maior nota P3: %s\n", A[Mn3].nome);

    printf("Menor nota P1: %s\n", A[mn1].nome);
    printf("Menor nota P2: %s\n", A[mn2].nome);
    printf("Menor nota Ṕ3: %s\n", A[mn3].nome);

    printf("Maior media: %s\n", A[Mm].nome);
    printf("Menor media: %s\n", A[mm].nome);

    printf("\nAlunos acima da media:\n");
    for(i = 0; i < 3; i++) {
        if(A[i].media/3 >= 60) printf("%s\n", A[i].nome);
    }

}
