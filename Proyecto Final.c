#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Node{
	char q[60];
	struct Node* si;
	struct Node* no;
};

typedef struct Node ARBOL;


void def_arb(ARBOL**);
ARBOL* crear_ARBOL();

int main(){
	
	ARBOL* a=NULL;
	def_arb(&a);

	return 0;
}

ARBOL* crear_arbol(){
	ARBOL* a=(ARBOL*)malloc(sizeof(ARBOL));
	a->si=NULL;
	a->no=NULL;
	return a;
}
void def_arb(ARBOL** a){	
	int  ans;
	printf("***** ASISTENTE PARA LA SELECCION DE UNA ESTRUCTURA DE DATOS *****\n\n\n");
	*a=crear_arbol();
	strcpy((*a)->q, "La estructura de datos es lineal? (1=SI, 2=NO):  ");
	do{	
		printf("%s", (*a)->q);
		scanf("%d", &ans);
	}while(ans<1||ans>2);

	if(ans==1){
		(*a)->si=crear_arbol();
		strcpy((*a)->si->q, "Necesita insertar datos en medio? (1=SI, 2=NO): ");
		do{
			printf("%s", (*a)->si->q);
			scanf("%d", &ans);
		}while(ans<1||ans>2);
		
			if(ans==1){
			(*a)->si->si=crear_arbol();
			strcpy((*a)->si->si->q, "Necesita acceder inmediatamente a un elemento? (1=SI, 2=NO): ");
				do{	
					printf("%s", (*a)->si->si->q);
					scanf("%d", &ans);
				}while(ans<1||ans>2);
			
					if(ans==1){
						(*a)->si->si->si=crear_arbol();
						strcpy((*a)->si->si->si->q, "Arreglo dinamico");		//HOJA
						printf("\n\nNecesita una estructura de  %s.", (*a)->si->si->si->q);
						printf("\nUn arreglo dinamico, tambien conocido como matriz dinamica, es un arreglo ");
						printf("\nde elementos de un mismo tipo pero que puede crecer su capacidad en tiempo de ejecucion. ");
					}else if(ans==2){
						(*a)->si->si->no=crear_arbol();
						strcpy((*a)->si->si->no->q, "Lista enlazada simple");		//HOJA
						printf("\n\nNecesita una estructura de %s.", (*a)->si->si->no->q);
						printf("\nUna lista es una coleccion o secuencia de elementos denominados nodos, ");
						printf("\nconectados mediante enlaces. Consta de un numero de nodos con dos componentes: ");
						printf("\nun enlace al siguiente nodo de la lista y un valor que puede ser de cualquier tipo.");
					}
						
			}else if(ans==2){
				(*a)->si->no=crear_arbol();
				strcpy((*a)->si->no->q, "Necesita borrar datos por enfrente (1=SI, 2=NO):");
					do{
						printf("%s", (*a)->si->no->q);
						scanf("%d", &ans);
					}while(ans<1||ans>2);
				
					if(ans==1){
						(*a)->si->no->si=crear_arbol();
						strcpy((*a)->si->no->si->q, "Necesita insertar datos por enfrente? (1=SI, 2=NO):");
							do{
								printf("%s", (*a)->si->no->si->q);
								scanf("%d", &ans);
							}while(ans<1||ans>2);
					
							if(ans==1){
								(*a)->si->no->si->si=crear_arbol();
								strcpy((*a)->si->no->si->si->q, "Pila");  //HOJA
								printf("\n\nNecesita una estructura de %s.", (*a)->si->no->si->si->q);
								printf("\nUna pila es una estructura de datos de entradas ordenadas tales que solo ");
								printf("\nse pueden introducir y eliminar elementos por un extremo llamado cima. ");
							}else if(ans==2){
								(*a)->si->no->si->no=crear_arbol();
								strcpy((*a)->si->no->si->no->q, "Cola");  //HOJA
								printf("\n\nNecesita una estructura de %s.", (*a)->si->no->si->no->q);
								printf("\nUna cola es una estructura de datos cuyos elementos conservan un orden");
								printf("\nde modo que solo se puedan insertar elementos por un extremo de nombre ");
								printf("\ncola y eliminar por el otro extremo, llamado frente. ");
							} 
					}else if(ans==2){
						(*a)->si->no->no=crear_arbol();
						strcpy((*a)->si->no->no->q, "Lista enlazada doble"); //HOJA
						printf("\n\nNecesita una estructura de %s.", (*a)->si->no->no->q);
						printf("\nUna lista es una coleccion o secuencia de elementos denominados nodos, conectados");
						printf("\nmediante enlaces. Consta de un numero de nodos con tres componentes: enlaces ");
						printf("\nal siguiente y al anterior nodo de la lista y un valor que puede ser de cualquier tipo.");
					}
			}
	}else if(ans==2){
		(*a)->no=crear_arbol();
		strcpy((*a)->no->q, "Necesita mas de dos decisiones? (1=SI, 2=NO): ");
			do{
				printf("%s", (*a)->no->q);
				scanf("%d", &ans);
			}while(ans<1||ans>2);
		
			if(ans==1){
				(*a)->no->si=crear_arbol();
				strcpy((*a)->no->si->q, "Necesita acceder a los elementos de forma secuencial? (1=SI, 2=NO): ");
					do{
						printf("%s", (*a)->no->si->q);
						scanf("%d", &ans);
					}while(ans<1||ans>2);
			
					if(ans==1){
						(*a)->no->si->si=crear_arbol();
						strcpy((*a)->no->si->si->q, "Arbol B+");		//HOJA
						printf("\n\nNecesita una estructura de %s.", (*a)->no->si->si->q);						
						printf("\nLos arboles B+ son arboles n-arios, cada nodo tiene como maximo n hijos, "),
						printf("\nno tienen subarboles vacios y estan perfectamente equilibrados. Ademas");
						printf("\ntoda la informacion se encuentra organizada en las paginas.");
					}else if(ans==2){
						(*a)->no->si->no=crear_arbol();
						strcpy((*a)->no->si->no->q, "Arbol B");			//HOJA
						printf("\n\nNecesita una estructura de %s.", (*a)->no->si->no->q);
						printf("\nLos arboles B son arboles n-arios, cada nodo tiene como maximo n hijos, "),
						printf("\nno tienen subarboles vacios y estan perfectamente equilibrados. ");
					}
			}else if(ans==2){
				(*a)->no->no=crear_arbol();
				strcpy((*a)->no->no->q, "Necesita mantener ordenados los elementos? (1=SI, 2=NO): ");
					do{
						printf("%s", (*a)->no->no->q);
						scanf("%d", &ans);
					}while(ans<1||ans>2);
				
					if(ans==1){
						(*a)->no->no->si=crear_arbol();
						strcpy((*a)->no->no->si->q, "Necesita acceder rapidamente a la informacion? (1=SI, 2=NO): ");
							do{
								printf("%s", (*a)->no->no->si->q);
								scanf("%d", &ans);
							}while(ans<1||ans>2);
						
							if(ans==1){
								(*a)->no->no->si->si=crear_arbol();
								strcpy((*a)->no->no->si->si->q, "Arbol AVL");		//HOJA
								printf("\n\nNecesita una estructura de %s.", (*a)->no->no->si->si->q);
								printf("\nUn arbol AVL es aquel arbol ordenado de busqueda que, ");
								printf("\nademas, cumple la funcion de balanceo para cada uno de sus nodos. ");
							}else if(ans==2){
								(*a)->no->no->si->no=crear_arbol();
								strcpy((*a)->no->no->si->no->q, "Arbol binario de busqueda");		//HOJA
								printf("\n\nNecesita una estructura de %s.", (*a)->no->no->si->no->q);
								printf("\nUn arbol binario de busqueda es aquel que, dado un nodo, todos los datos");
								printf("\ndel subarbol izquierdo son menores que los datos de ese nodo, mientras ");
								printf("\nque todos los datos del subarbol derecho son mayores que sus propios datos.");
							}
					}else if(ans==2){
						(*a)->no->si=crear_arbol();
						strcpy((*a)->no->si->q, "Arbol Binario");  //HOJA
						printf("\n\nNecesita una estructura de %s.", (*a)->no->si->q);
						printf("\nUn arbol binario consta de un conjunto finito de elementos y un conjunto ");
						printf("\nfinito de lineas dirigidas, llamadas ramas que conectan los nodos de la ");
						printf("\nforma que cada nodo puede tener mas de dos hijos (subarboles).");
					}
			}
	}

}

