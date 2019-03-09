#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
struct filavetor{
	int n;
	float val[20];
};
fv *fvcria(){
	printf("Fila de vetor criada\n");
	fv *f=(fv*)malloc(sizeof(fv));
	f->n=-1;
	return f;
}
int fvvazia(fv *f){
	if(f->n==-1)return 0;	
	else return 1;
}
fv *fvpush(fv *f,float v){
		if(f->n<=10){
		f->n++;f->val[f->n]=v;return f;
	}else printf("Cheio\n"); return f;
}
void fvremo(fv *f){
	if(fvvazia(f)!=0){
	int i;
	printf("%.2f removido\n",f->val[0]);
	for(i=0;i<f->n;i++){
		f->val[i]=f->val[i+1];
	}f->n--;
}else printf("nao ha dados\n");
}
void fvimp(fv *f){
	if(fvvazia(f)!=0){
		int i;
		for(i=0;i<=f->n;i++){
			printf("%.2f \t",f->val[i]);
		}printf("\n");
	}else printf("nao ha dados\n");
}
void fvlibera(fv *f){
	if(fvvazia(f)!=0){
		f->n=-1;
	}else printf("nao ha dados");
}
