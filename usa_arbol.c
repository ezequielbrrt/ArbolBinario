#include <stdio.h>
#include <stdlib.h>
#include "arbolbin.h"


int main(){
	int opc;
	char letra,elem_bus;
	ARBOL raiz=NULL;
	NODO ARBOL;
	inicializar(&ARBOL);
	
/********Entrdada del archivo de texto**********/

	FILE *cfPtr; 	
	if ((cfPtr = fopen("ARBOL3.txt", "r")) == NULL)
		printf("El archivo no se pudo abrir\n");
	else{
		fscanf(cfPtr, "%c", &letra);	
		while(!feof(cfPtr)){
			nuevohijo(&raiz,letra);
			fscanf(cfPtr, "\n%c", &letra);
		}
		fclose(cfPtr);
	}

/*********Menu de opciones ********************/
while (1){
	printf("\nSelecciona alguna opcion:\n");
	printf("1.Recorrer Arbol, en Preorden, Inorde, Postorden\n");
	printf("2.Buscar algun elemento\n");
	printf("3.Salir\n");
	scanf("%d",&opc);
	switch(opc){
		case 1:
			printf("\npreorden \n");
			preorden(raiz); 
			printf("\ninorden \n");
			inorden(raiz); 
			printf("\npostorden \n");
			postorden(raiz); 
			break;
		case 2:
			printf("\nEscribe la letra a buscar:\n");
			scanf("%c",&elem_bus);
			//buscar(&raiz,elem_bus);
			//printf("\nProfundidad de %d\n", profundidad(raiz,elem_bus));
			break;
		case 3:
			return 0;
		default:
			printf("Error\n");
			break;
	}
}
return 0;
}
