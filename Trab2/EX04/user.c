#include "pilha.h"
#include "pilha.c"

int main(){

	char lit[12] = "abcdefghij";
	int literais=0, val_literais[11];
	int i;
	int op=2;
	char* str;
	char* pos;
	str = (char *) malloc(max*sizeof(char));
    pos = (char *) malloc(max*sizeof(char));

        while(literais<1 || literais >11){
            printf("Numero de literais: ");
            scanf("%d",&literais);
        }
        for(i=0;i<literais;i++){
            printf("Valor do literal '%c' : ",lit[i]);
            scanf("%d",&val_literais[i]);
        }

        printf("Expressao: "); 	scanf("%s",str);


    if(op == 2){
		infixa_posfixa(str,pos);
		printf("Forma posfixa: %s\n",pos);
		print_valor(str,val_literais);
	}

    else
        print_valor(str,val_literais);

return 0;
}
