#include "pilha.h"
#include "pilha.c"

int main(){

	char lit[12] = "abcdefghij";
	int literais=0, val_literais[11];
	int i;
	int op=2;
	char* str;
	str = (char *) malloc(max*sizeof(char));

	/*printf("1 - entrar com expressao posfixa\n");
	printf("2 - entrar com expressao infixa\n");
    scanf("%d",op);
    printf("\n");
*/

        while(literais<1 || literais >11){
            printf("quantos literais a expressao possui? ");
            scanf("%d",&literais);
        }
        for(i=0;i<literais;i++){
            printf("valor do literal '%c' : ",lit[i]);
            scanf("%d",&val_literais[i]);
        }

        printf("Expressao: "); 	scanf("%s",str);

    if(op == 2){
		str = converter_posfixa(str);
		printf("Forma posfixa: %s\n",str);
		print_valor(str,val_literais);
	}
    else
        print_valor(str,val_literais);

return 0;
}
