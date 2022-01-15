typedef struct pilha * Pilha;

Pilha cria_pilha();
int pilha_vazia(Pilha p);
int pilha_cheia(Pilha p);
int push(Pilha p, char elem);
int pop(Pilha p, int *elem);
int le_topo(Pilha p, int *elem);
int imprime(Pilha p);
Pilha dec_bin(int n);
int imprime_rev(Pilha p);
Pilha dec_octal(int n);
Pilha dec_hexa(int n);
int push2 (Pilha p, int elem);
int imprimeint(Pilha p);
