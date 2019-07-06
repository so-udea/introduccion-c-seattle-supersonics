/*
 P1. Escriba una función llamada múltiplo que tome dos enteros y determine si el segundo es múltiplo del primero.
 La función deberá tomar dos argumentos enteros y devolver 1 si el segundo es un múltiplo del primero y 0 si no. Luego,
 utilice esta función en un programa que acepte como entrada una serie de pares de enteros.
 */

#include <stdio.h>

int main() {
	int primero;
	int segundo;
	int resultado;
	printf("ingrese primer digito:");
	scanf("%d", &primero);
	printf("ingrese segundo digito:");
	scanf("%d", &segundo);
	resultado = multiplo(primero, segundo);

	if (resultado == 1) {
		printf("\n%d es multiplo de %d", segundo, primero);
	} else {
		printf("\n%d no es multiplo de %d", segundo, primero);
	}
	return 0;
}

int multiplo(int x, int y) {
	if ((y % x) == 0) {
		return 1;
	} else {
		return 0;
	}
}
