typedef struct no *Pilha;
Pilha cria_pilha();
int pilha_vazia(Pilha p);
int insere_elem(Pilha p, char elem);
int remove_elem(Pilha p, char *elem);
int insere_elem_INT(Pilha p, int elem);
int remove_elem_INT(Pilha p, double *elem);
void imprimir(Pilha p);

double calculo(char* str, int *val_literais);
int infixa_posfixa(const char *inf,char *pos);
void print_valor(char *str, int *val_literais);

int validacao(char *s);
int ehOperando(char ch);
int ehOperador(char ch);
int Precedencia(char ch);
