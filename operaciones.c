/*Programa basico para ver como funciona las operaciones matematicas basicas*/
#include <stdio.h>

int main(){
	int a;
	int b;
	printf("Ingrese dos numeros (separados por espacio): \n");
	scanf("%i %i", &a ,&b);

	//Mostrar los resultados
	printf("La suma de %i + %i es %i: \n", a, b, a + b);
	printf("La resta de %i - %i es %i: \n",a, b, a - b);
	printf("La multiplicacion de %i * %i es %i: \n",a, b, a * b);
	return 0;
}//Fin de la funcion main
