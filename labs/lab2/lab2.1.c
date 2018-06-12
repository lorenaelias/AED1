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


int main(){
ficha alunos[3];

situacao(alunos);

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
