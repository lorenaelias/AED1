typedef struct lista  lista;

lista* lista_cria();

int lista_vazia(lista *L);

int lista_cheia(lista *L);

int insere_elem(lista *L,int elem);

int remove_elem (lista *L, int elem);

int remove_todos (lista *L, int elem);

void lista_imprime(lista *L);

int insere_inicio(lista *L, int elem);

int remove_impares(lista *L);

int menor_elem(lista *L);

int tamanho(lista *L);

lista* concatenar(lista *A,lista *B);
