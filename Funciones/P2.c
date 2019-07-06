/*
 P2. Escribir un programa que lea dos números x y n y en una función, calcule la suma de la progresión geométrica:

 1 + x + x^2 + x^3 + x^4 + ⋯ + x^n
 */

#include <stdio.h>
#include <math.h>
int sumaGeometrica(int x, int n);
void mostrarSerie(int x, int n);

int main() {
	int base;
	int termino;
	int sumaGeo;
	printf("Ejemplo Serie Geometrica \n1 + x + x^2 + x^3 + x^4 + ⋯ + x^n \n");
	printf("======================================== \n");
	printf("Ingrese El Numero x: ");
	scanf("%d", &base);
	printf("Ingrese el Numero del Limite de la Suma n: ");
	scanf("%d", &termino);
	printf("El Numero: %d , y Numero De Secuencias: %d \n", base, termino);

	mostrarSerie(base, termino);
	sumaGeo = sumaGeometrica(base, termino);
	printf("La Suma Geometrica es: %d", sumaGeo);
	return 0;
}

int sumaGeometrica(int x, int n) {
	int suma = 0;
	int elevado;
	for (int i = 0; i <= n; i++) {
		elevado = pow(x, i);
		suma = suma + elevado;
	}
	return suma;
}

void mostrarSerie(int x, int n) {
	printf("1 + ");
	if (x != 0) {
		for (int i = 1; i <= n; i++) {
			printf("%d^%d + ", x, i);
		}
	}
	printf("\b\b =\n");
}
