/*
P1. El propietario de Harry’s Car Sales paga a cada vendedor una comisión basada en sus ventas trimestrales. Los rangos de ventas y las correspondientes tasas son mostrades en la tabla que aparece a continuación:

Ventas trimestrales ($)	Comisión
0 - 20000	||  Multiplicar las ventas por 5%
20001-50000	||  Multiplicar la ventas sobre 20000 por 7% y entonces agregue 1000 al resultado
50001 o mas	||  Multiplicar la ventas sobre 50000 por 10% y entonces agregue 3100 al resultado

Teniendo en cuenta lo anterior lleve a cabo las siguientes tareas:

Comprenda el problema y realice casos de obteniendo las comisiones para los siguientes valores de ventas: 20000, 20001, 30000, 50000, 50001, 75000, y –3.
Codifique el algoritmo en C de modo que permita el calculo de las comisiones. Lleve a cabo las pruebas con los casos de test elegidos en el item anterior.
*/

#include <stdio.h>
float calcularComision(x);

int main()
{
    int x;
    float comision;
    printf("Introduzca las ventas del trimestre: \n");
    scanf("%d", &x);
    comision = calcularComision(x); /* llamada a la funcion */
    printf("La comision del trimestre es % .4f \n", comision);
    return 0;
}

float calcularComision(int x)
{
    double comision;
    switch (x)
    {
    case 0 ... 20000:
        comision = (float) 0.05 * x;
        return comision;
        break;

    case 20001 ... 50000:
        comision = 1000 + 0.07 * x;
        return comision;
        break;

    case 50001 ... 500000:
        comision = 3100 + 0.1 * x;
        return comision;
        break;

    default:
        printf("\n Introduzca Un Numero Mayor a 0 !!!!\n");
        break;
    }
}
