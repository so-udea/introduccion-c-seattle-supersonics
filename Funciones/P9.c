/*
P9. Las computadoras están jugando un papel creciente en la educación. Escriba un programa que ayudaría a un alumno de
escuela primaria a aprender a multiplicar. Utilice rand() para producir dos enteros positivos de un dígito. A continuación
debería imprimir una pregunta coma la siguiente:

¿Cuánto es 6 veces 7?
A continuación el alumno escribe la respuesta. Su programa verifica la respuesta del alumno. Si es correcta imprime "Muy
bien!" y a continuación solicita otra multiplicación. Si la respuesta es incorrecta imprimirá "No. Por favor intenta
nuevamente" y a continuación permitirá que el alumno vuelva a intentar con la misma pregunta de forma repetida hasta que
al final la conteste correctamente. El programa debe indicarle al alumno una forma de terminar la ejecución.
*/

#include <stdio.h>
#include <time.h>
#include <ctype.h>

//Declaracion De Funciones
int answerQuestion(int divisor, int dividendo);
time_t t;


int main () {

   int repeat = 0;
   int divisor, dividendo;
   srand((unsigned) time(&t)); // Inicializada una sola vez

   //Empieza El Cuestionario

   do {
       divisor = ((rand()% 10) + 1); // rango entre 1 y 10
       dividendo = ((rand()% 101) + divisor); // rango entre 1 y 10



       /*
       if () {

       } else {
           //contestar pregunta metodo

       }
       */

       int div;
       div = dividendo;
       printf ("%d \n", div);


       printf("Desea Volver A Responder Otra Pregunta: \n");
       printf("Presione 0 para si, Numero >0 para no: ");
       scanf("%d", &repeat);
   } while(repeat == 0);

   return 0;
}


int answerQuestion(int divisor, int dividendo) {
    int answer = (dividendo / divisor);
    return answer;
}
