/*Este programa es el 6.23 del libro de Como Programar en C/C++ y Java.
 *
 * Esta diseñado para simular el juego de Graficos de tortuga.*/


#include <stdio.h>
#include <stdlib.h>
#define TX 50
#define TY 50

void mostrarTablero(int b[][TY]);
void avanzar(int b[][TY],int desp,int giro,int estPlum);

int tablero[TX][TY] = {{0},{0}};
char comandos[6] = {'d','u','r','l','m','x'};
int estadoPluma =0;
int posX = 0;
int posY = 0;

int main(){
	int selector = 0;
	int giro = 0;
	int distancia = 0;
	printf("\tBienvenido a Graficos de tortuga\n");
	printf("Por favor seleccione una de las siguientes opciones\n");
	printf("1.- Subir la pluma\n2.- Bajar la pluma\n3.- Girar a la derecha\n4.- Girar a la izquierda\n5.- Mover X adelante\n6.- Visualizar tablero\n7.- Salir\n");
	scanf("%i",&selector);

	while( selector != 8){
		switch(selector){
			case 1:
				estadoPluma = 0;
				printf("La pluma NO escribe\n");
				system("sleep 2");
				break;
			case 2:
				estadoPluma = 1;
				printf("La pluma SI escribe\n");
				system("sleep 2");
				break;
			case 3:
				giro++;
				printf("Giro es %i",giro);
				if(giro > 3){
					giro = 0;
				}
				//system("sleep 3");
				break;
			case 4:
				giro--;
				printf("Giro es %i",giro);
				if(giro < 0){
					giro = 3;
				}
				//system("sleep 3");
				break;
			case 5:
				printf("Cuanta distancia quiere avanzar\n");
				scanf("%i",&distancia);
				avanzar(tablero,distancia,giro,estadoPluma);
				break;
			case 6:
				mostrarTablero(tablero);
				system("sleep 5 ");
				break;
			case 7:
				printf("El estado actual es:\n");
				printf("La pluma %i\n",estadoPluma);
				printf("La direccion es %i\n",giro);
				printf("La posicion actual es %i , %i\n",posX,posY);
				printf("El valor de la posicion %i,%i es:  %i \n",posX,posY,tablero[posX][posY]);
				system("sleep 3");

			case 8:
				printf("El programa finaliza en 2 seg \nVuelva pronto\n");
				system("clear");
			default:
				printf("La opcion selecciona es invalida");
				break;
		//printf("\n");
		}//Fin del switch
		system("clear");
		printf("Por favor seleccione una de las siguientes opciones\n");
		printf("1.- Subir la pluma\n2.- Bajar la pluma\n3.- Girar a la derecha\n4.- Girar a la izquierda\n5.- Mover X adelante\n6.- Visualizar tablero\n7.- Salir \n");
		scanf("%i",&selector);
	}//Fin del while

}//Fin de la funcion main


void mostrarTablero(int b[][TY]){
	for(int i = 0; i < TX;i++){
		for(int j = 0; j < TY;j++){
			if(b[i][j] == 1){
				printf("* ");
			}//Fin del if
		}//Fin del for J
		printf("\n");
	}//Fin del for I
}//Fin de la funcion mostrar tablero


void avanzar(int b[][TY],int desp,int giro,int estPlum){
	switch(giro){
		case 0:			//Y disminuye
			for(int i = 0; i < desp; i++){
				if(estPlum == 1){
					b[posY][posX] = 1;
					posY--;
				}//Fin del if
			}//Fin del for
			break;
		case 1:			//X aumenta
			for(int i = 0; i < desp; i++){
				if(estPlum == 1){
					b[posY][posX] = 1;
					posX++;
				}//Fin del if
			}//Fin del for
			break;
		case 2:			//Y aumenta
			for(int i = 0; i < desp;i++){
				if(estPlum == 1){
					b[posY][posX] = 1;
					posY++;
				}//Fin del if
			}//Fin del for
			break;
		case 3:			//X disminuye
			for(int i = 0; i < desp; i++){
				if(estPlum == 1){
					b[posY][posX] = 1;
					posX--;
				}//Fin del if
			}//Fin del for
			break;
		default:
			break;

	}//Fin del switch

}//Fin de la funcion avanzar

