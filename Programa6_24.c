#include <stdio.h>


#define TX 8            //Numero de columnas
#define TY 8            //numero de filas

void mostrarTablero(int b[][TX]);
void moverCaballo(int b[][TX]);
int columnas[8] = {2,1,-1,-2,-2,-1,1,2};      //Vector horizontal de movimientos
int filas[8] = {-1,-2,-2,-1,1,2,2,1};        //Vector vertical de movimientos

int posColumnas = 1;              //Posicion inicial en  X del caballo
int posFilas = 1;
int control = 0;             //Posicion inicial en Y del caballo


int main(){
    int tablero[TX][TY] ={{0},{0}};
    tablero[posColumnas][posFilas] = 1;
    for(int k = 0; k < 10; k++){
        moverCaballo(tablero);
    }
    mostrarTablero(tablero);
    return 0;

}//Fin del main

void moverCaballo(int b[][TX]){
    int auxX = posColumnas;
    int auxY = posFilas;
    for(int i = 0; i < 7; i++){
        auxX += columnas[i];
        auxY += filas[i];
        //printf("%i, %i",auxX,auxY);
        if(auxX >= 0 && auxX <= 7 && auxY >= 0 && auxY <= 7 && b[auxY][auxX] == 0 ){
            b[auxY][auxX] = 1;
            posColumnas = auxX;
            posFilas = auxY;
            printf("%i \n", i);
            break;
        }//Fin del if
        auxX = posColumnas;
        auxY = posFilas;
    }//FIn del for

}//FIn de la funcion caballo

void mostrarTablero(int b[][TX]){
    for(int i = 0; i < TX;i++ ){
        for(int j = 0; j < TY; j++){
            printf("%i ", b[i][j]);
        }//Fin del for J
        printf("\n");
    }//Fin del for I FILAS
}//Fin de la funcion mostrar tablero
