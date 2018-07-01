#include <stdio.h>
#include <assert.h>
#include"deque.c"
#include"deque.h"

int main()
{
    Deque *d = cria_deque();

    insere_ini_deque(d,1);
    insere_ini_deque(d,2);
    insere_ini_deque(d,3);

    print_deque(d);


    insere_fim_deque(d,1);

    print_deque(d);

    remove_ini_deque(d);

    print_deque(d);

    remove_fim_deque(d);

    print_deque(d);

return 0;
}
