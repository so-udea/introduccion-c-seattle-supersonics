/*
 P3. Escriba un programa en C para encontrar la suma de las series:

 1 - x^2/2! + x^4/4! - ...
 Test data:

 Valor de entrada de x: 2
 Numero de terminos: 5
 Salida esperada:

 suma: -0.415873
 */

#include <stdio.h>
#include <math.h>
float serieSuma(int x, int n);
int factorial(int n);

int main() {
	int x, n;
	float serieSum;
	printf("Introduzca valor de x: \n");
	scanf("%d", &x);
	printf("Introduzca número de términos: \n");
	scanf("%d", &n);
	serieSum = serieSuma(x, n);
	printf("\nLa suma de la serie es: %f", serieSum);

	return 0;
}

float serieSuma(int x, int n) {
	int t = 1;
	int y = 2;
	float suma = 1;
	for (int i = 1; i < n; i++) {
		t = -1 * t;
		double term = t * (pow(x, y)) / factorial(y);
		suma = suma + term;
		y = y + 2;
	}
	return suma;
}

int factorial(int n) {
	int fact = n;
	for (int i = n - 1; i > 1; i--) {
		fact = fact * i;
	}
	return fact;
}
