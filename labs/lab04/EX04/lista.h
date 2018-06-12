typedef struct lista  lista;

lista* lista_cria();

int lista_vazia(lista *L);

int lista_cheia(lista *L);

int lista_insere(lista *L,int elem);

int remove_elem (lista *L, int elem);

int remove_todos (lista *L, int elem);

void lista_imprime(lista *L);

int insere_ord(lista *L, int elem);

int remove_ord(lista *L, int elem);

lista *intercala_ord(lista *A, lista *B);