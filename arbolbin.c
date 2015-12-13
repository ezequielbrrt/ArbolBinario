#include <stdio.h>
#include <stdlib.h>
#include "arbolbin.h"

void inicializar(NODO *ARBOL){
	ARBOL->dernodo=NULL;
	ARBOL->izqnodo=NULL;
}

void nuevohijo(ARBOL *raiz,char letra){
	if(*raiz==NULL){ 
		*raiz=(NODO *)malloc(sizeof(NODO));
		if(*raiz!=NULL){
		(*raiz)->valor=letra;
		(*raiz)->izqnodo =NULL;
		(*raiz)->dernodo=NULL;
		}
	}
	else
		if(letra<(*raiz)->valor) 
		nuevohijo(&((*raiz)->izqnodo),letra); 
		else
		if(letra>(*raiz)->valor) 
		nuevohijo(&((*raiz)->dernodo),letra); 
}

void preorden(ARBOL raiz){
	if(raiz!=NULL){
		printf(" %c ",raiz->valor);
		preorden(raiz->izqnodo);
		preorden(raiz->dernodo);
	}
}

void inorden(ARBOL raiz){
	if(raiz!=NULL){
	inorden(raiz->izqnodo);
	printf(" %c ",raiz->valor);
	inorden(raiz->dernodo);
	}
}

void postorden(ARBOL raiz){
	if(raiz!=NULL){
	postorden(raiz->izqnodo);
	postorden(raiz->dernodo);
	printf(" %c ",raiz->valor);
	}
free(raiz);
}




int profundidad(ARBOL raiz,char elem_bus)
{
    if(!raiz)
        return 0;
    else{
        int profund_I=profundidad(raiz->izqnodo,elem_bus);
        int profund_D=profundidad(raiz->dernodo,elem_bus);
        if(profund_I<profund_D)
            return profund_I+1;
        else
            return profund_D+1;
    }
}

void buscar(ARBOL *raiz,char elem_bus){
	

}
