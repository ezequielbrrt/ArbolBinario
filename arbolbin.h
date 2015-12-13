#ifndef ARBOLBIN_H
#define ARBOLBIN_H
#include <stdio.h>
#include <stdlib.h>



typedef struct nodoarbol{ 
struct nodoarbol *izqnodo;
int valor;
struct nodoarbol *dernodo;
}NODO;
 
typedef NODO *ARBOL;

void nuevohijo(ARBOL *,char letra); 
void inorden(ARBOL);
void preorden(ARBOL);
void postorden(ARBOL);
void inicializar(NODO *ARBOL);
void raiz(ARBOL);
void buscar(ARBOL *,char elem_bus);

/*void eliminar();
void padre();
void hijo_derecho();
void hijo_izquierdo();

void nodo_null();
void leer_nodo();
*/
#endif

