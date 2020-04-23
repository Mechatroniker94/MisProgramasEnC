/*Este programa es el 6.23 del libro de Como Programar en C/C++ y Java.
 *
 * Esta diseñado para simular el juego de Graficos de tortuga.*/


#include <stdio.h>
#include <stdlib.h>
#define TX 50
#define TY 50

void mostrarTablero(int b[][TY]);


int tablero[TX][TY] = {{0},{0}};
char comandos[6] = {'d','u','r','l','m','x'};


int main(){
	int selector = 0;
	printf("\tBienvenido a Graficos de tortuga\n");
	printf("Por favor seleccione una de las siguientes opciones\n");
	printf("1.- Bajar la pluma\n2.- Subir la pluma\n3.- Girar a la derecha\n4.- Girar a la izquierda\n5.- Mover X adelante\n6.- Salir\n");
	scanf("%i",&selector);

	while( selector != 6){
		switch(selector){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			default:
				printf("La opcion selecciona es invalida");
				break;
		//printf("\n");
		//mostrarTablero(tablero);
		}//Fin del switch
		system("clear");
		printf("Por favor seleccione una de las siguientes opciones\n");
		printf("1.- Bajar la pluma\n2.- Subir la pluma\n3.- Girar a la derecha\n4.- Girar a la izquierda\n5.- Mover X adelante\n6.- Salir\n");
		scanf("%i",&selector);
	}//Fin del while
	printf("Vuelva pronto\n");

}//Fin de la funcion main


void mostrarTablero(int b[][TY]){
	for(int i = 0; i < TX;i++){
		for(int j = 0; j < TY;j++){
			printf("%i ", b[i][j]);
		}//Fin del for J
		printf("\n");
	}//Fin del for I
}//Fin de la funcion mostrar tablero
