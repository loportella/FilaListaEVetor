#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
struct filalista{
	float v;
	struct filalista *prox;
};
fl *flcria(){
	printf("Fila de lista criada\n");
	return NULL;
}
int flvazia(fl *f){
	if(f==NULL)return 0;
	else if(f->prox==NULL)return 1;
	else if(f->prox->prox==NULL)return 2;
	else return 3;
}
fl *flpini(fl *f,float i){
	fl *no=(fl*)malloc(sizeof(fl));
	no->v=i;
	if(flvazia(f)==0){
	no->prox=NULL;return no;}
	else{
		no->prox=NULL;f->prox=no;
	}
}
void flpush(fl *f,float i){
		fl *a=f->prox,*n=(fl*)malloc(sizeof(fl));
		n->v=i; n->prox=NULL;
		while(a->prox!=NULL){
			a=a->prox;
		}a->prox=n;
}
fl *flremo(fl *f){
	if(flvazia(f)==0){	printf("nao ha dados\n");
	}
	else if(flvazia(f)==1){
		printf("%.2f removido\n",f->v);f=NULL;return f;
	}else if(flvazia(f)==2){
		printf("%.2f removido\n",f->prox->v);
		f->prox=NULL;return f;
	}else{
	fl *a=f->prox,*b;
	while(a->prox){
	b=a;a=a->prox;
	}printf("%.2f removido\n",b->prox->v);
	b->prox=NULL;return f;
}
}
void flimp(fl *f){
	if(flvazia(f)!=0){
	fl *i=f;
	while(i!=NULL){
		printf("%.2f \t",i->v);
		i=i->prox;
	}printf("\n");}else printf("nao ha dados\n");
}
void fllibera(fl *f){
	if(flvazia(f)!=0){
	fl *a=f;
	while(f->prox!=NULL){
		a=f;
		f=f->prox;
	}free(a);free(f);}
	else printf("nao ha dados\n");
}
fl *flinverte(fl *f){
	if(flvazia(f)!=0){
		if(flvazia(f)==1){
			return f;
		}else if(flvazia(f)==2){
		fl *no=(fl*)malloc(sizeof(fl));
			no->v=f->prox->v;f->prox->v=f->v;
			f->v=no->v;return f;
		}else{
			fl *a,*n=NULL;
			for(a=f;a!=NULL;a=a->prox){
				n=flmais(n,a->v);
			}return n;
		}
	}
}
fl *flmais(fl *f,float v){
	fl *n=(fl*)malloc(sizeof(fl));
	if(flvazia(f)==0){
		n->v=v;n->prox=NULL;return n;
	}else {
		n->v=v; n->prox=f;return n;
	}
}
