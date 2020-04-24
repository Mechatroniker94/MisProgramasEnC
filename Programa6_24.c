#include <stdio.h>


#define TX 8            //Numero de columnas
#define TY 8            //numero de filas

void mostrarTablero(int b[][TX]);
void moverCaballo(int b[][TX]);
int horizontal[8] = {2,1,-1,-2,-2,-1,1,2};      //Vector horizontal de movimientos
int vertical[8] = {-1,-2,-2,-1,1,2,2,1};        //Vector vertical de movimientos

int posX = 4;              //Posicion inicial en  X del caballo
int posY = 4;              //Posicion inicial en Y del caballo


int main(){
    int tablero[TX][TY] ={{0},{0}};
    tablero[posX][posY] = 1;
    for(int k = 0; k < 64; k++){
        moverCaballo(tablero);
    }
    mostrarTablero(tablero);
    return 0;

}//Fin del main

void moverCaballo(int b[][TX]){
    int auxX = posX;
    int auxY = posY;
    for(int i = 0; i < 3; i++){
        auxX += vertical[i];
        auxY += horizontal[i];
        printf("%i, %i\n",auxX,auxY);
            if(auxX > 0 && auxX < 7 && auxY > 0 && auxY < 7 && b[auxX][auxY] == 0 ){
                b[auxX][auxY] = 1;
                posX = auxX;
                posY = auxY;
                break;
        }//Fin del if
        auxX = posX;
        auxY = posY;
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
