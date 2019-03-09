#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
int main(int argc, char *argv[]) {
	int o1,o2,op;float val;fl *f;fv *v;v=fvcria();
	do{
		printf("MENU:\n1-Fila de lista\n2-Fila de vetor \t");
		scanf("%d",&op);
		switch(op){
	case 1:
	do{
		printf("Menu fila com lista simples:\n");
printf("1-Cria\n2-Insere\n3-Remove\n4-Mostra\n5-Libera\n6-Inverte\n0-Fechar \t ");
		scanf("%d",&o1);
		switch(o1){
			case 1:f=flcria();break;
			case 2:
				printf("valor: ");scanf("%f",&val);
				if(flvazia(f)==0||flvazia(f)==1){
					f=flpini(f,val);
				}else{flpush(f,val);}break;
			case 3:f=flremo(f);break;
			case 4:flimp(f);break;
			case 5:fllibera(f);break;
			case 6:f=flinverte(f);break;
			default: printf("Opcao invalida\n");break;
		}
	}while(o1!=0);break;
	case 2:
		do{
			printf("Menu de fila de vetor:\n");
	printf("1-Cria\n2-Inserir\n3-Remover\n4-Mostrar\n5-Liberar \t");
			scanf("%d",&o2);
			switch(o2){
				case 1:v=fvcria();break;
				case 2:
				printf("Valor: ");scanf("%f",&val);
				v=fvpush(v,val);break;
				case 3:fvremo(v);break;
				case 4:fvimp(v);break;
				case 5:fvlibera(v);break;
				default: printf("Opcao invalida\n");break;
			}
		}while(o2!=0);break;
		default:printf("Opcao invalida\n");break;
}
}while(op!=0);
}
