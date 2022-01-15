typedef struct lista  lista;

lista* lista_cria();

int lista_vazia(lista *L);

int lista_cheia(lista *L);

int lista_insere(lista *L,int elem);

int remove_elem (lista *L, int elem);

void lista_imprime(lista *L);

int valor_elem(lista *l, int i);
