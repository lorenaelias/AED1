typedef struct deque Deque;
Deque* cria_Deque();
void libera_deque(Deque *d);
int tamanho_Deque(Deque *d);
int deque_vazio(Deque *d);
int insere_ini_deque(Deque *d, int n);
int insere_fim_deque(Deque *d, int n);
int remove_ini_deque(Deque *d);
int remove_fim_deque(Deque *d);
void print_deque(Deque *d);

