typedef struct no *Pilha;
Pilha cria_pilha();
int pilha_vazia(Pilha p);
int insere_elem(Pilha p, char elem);
int remove_elem(Pilha p, char *elem);
int insere_elem_INT(Pilha p, int elem);
int remove_elem_INT(Pilha p, double *elem);
void imprimir(Pilha p);

void converter_posfixa(char* str, int formato);
double calcular_expressao(char* str, int *val_literais);
int validacao(char *s);
int ehOperando(char ch);
int Precedencia(char ch);
int infixa_posfixa(char *exp);
double valor(char ch);
