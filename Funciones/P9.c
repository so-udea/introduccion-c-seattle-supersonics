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
int answerQuestion(int a, int b);
int asignarNumero();
time_t t;

int main () {
   int repeat = 0;
   int a, b, answer; //numeros multiplicandos
   int bandera = 0; 
   srand((unsigned) time(&t)); // Inicializada una sola vez
   
   printf("-------------Programa Para Enseñar a Multiplicar---------------\n");
   printf("---------------------------------------------------------------\n");
   
   //Empieza Programa
   do {
       
       // Asignar Numeros
       if (bandera == 0) {
           a = asignarNumero();
           b = asignarNumero();
       }
       
       //Realizar Pregunta
       printf("¿Cuánto es %d veces %d?: ", a, b);
       scanf("%d", &answer);

       if (answerQuestion(a, b) == answer) {
           printf("Muy Bien!\n");
           bandera = 0;
       } else {
           printf("No. Por favor intentanuevamente\n");
           bandera = 1;
       }
       
       if (bandera == 0) {
           printf("Desea Volver A Responder Otra Pregunta: \n");
           printf("Presione 0 para si, Cualquier Numero > 0 para no: \n");
           scanf("%d", &repeat);
       }
   } while(repeat == 0);
   printf("Hasta Luego...\n");
   printf("---------------------------------------------------------------\n");
   return 0;
}


int answerQuestion(int a, int b) {
    int answer = (a * b);
    return answer;
}

int asignarNumero() {
    int numero = ((rand()% 9) + 1); // rango entre 1 y 9
    return numero;
}
