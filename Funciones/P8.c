/*
P8. Escriba un programa que simule el lanzamiento de una moneda. En cada línea de entrada aparece el número de
lanzamientos de la moneda. En la línea de salida correspondiente debe aparecer una secuencia con el resultado de cada
lanzamiento ('C' cuando fue cara y 'S' cuando fue sello) junto con el número de veces que aparece cada lado. El programa
deberá usar una función que se encargue de simular el lanzamiento de la moneda una sola vez, que no tome argumentos y
que retorne 0 para la cara ('C') ó 1 para el sello ('T').

Ayuda: Use las funciones srand() y rand() para simular el lanzamiento de la moneda.

Ejemplo de algunos casos de entrada:

585

Casos de salida correspondientes:

CCSSS, #de caras = 2, # de sellos = 3 SCCSCSCC, #de caras = 5, # de sellos = 3 SCSCC, # de caras = 3, # de sellos = 2
*/

#include <stdio.h>
#include <time.h>
#include <ctype.h>

int lanzada();
time_t t;

int main()
{
    int tiros, contc=0, conts=0;
    printf(" Ingrese el numero de tiros: ");
    scanf("%d",&tiros);

    printf(" La Secuencia Es: ");
    srand((unsigned) time(&t)); // Inicializada una sola vez
    for(int i=1;i<=tiros;i++){
        if (lanzada() == 0) {
            contc++;
            printf("C");
        } else {
            conts++;
            printf("S");
        }
    }
    printf("\n Numero de veces que cayo cara: %d",contc);
    printf("\n Numero de veces que cayo sello: %d",conts);

    return 0;
}

int lanzada() {
    int ale;
        ale = rand()% 2; // ranfo entre 0 y (2-1)
        ale = (ale == 0) ?  0 : 1; //Expresion Condicional
        return ale;
}
