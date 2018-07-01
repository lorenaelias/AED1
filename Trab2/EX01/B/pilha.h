typedef struct pilha * Pilha;

Pilha cria_pilha();
int pilha_vazia(Pilha p);
int pilha_cheia(Pilha p);
int push(Pilha p, char elem);
int pop(Pilha p, char *elem);
int le_topo(Pilha p, char *elem);
int imprime(Pilha p);
int palindromo(char *s);
int imprime_rev(Pilha p);
