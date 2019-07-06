/*
P10. La utilización de las computadoras en la educación se conoce como Instrucción Asistida por Computadora (CAI). Un
problema que se desarrolla en los entornos CIA es la fatiga del alumno. Este problema puede ser enfrentado variando el
diálogo de la computadora para retener la atención del alumno. Modifique el programa del ejercicio anterior de modo que
este escoja de forma aleatoria uno de cuatro posibles mensajes tanto para respuestas correctas como para respuestas
incorrectas. Los cuatro posibles mensajes en cada caso son:

Respuestas correctas:

Muy bien!
Excelente!
Buen trabajo!
Sigue haciéndolo bien!

Respuestas incorrectas:

No. Por favor trata de nuevo.
Incorrecto. Trata una vez más.
No te rindas!
No. Trata de nuevo

Nota: Mediante el generador de números aleatorios, seleccione un número entre 1 y 4 para desplegar un mensaje diferente
para cada respuesta. Presente la respuesta mediante una estructura switch.
*/

#include <stdio.h>
#include <time.h>
#include <ctype.h>

//Declaracion De Funciones
int answerQuestion(int a, int b);
int asignarNumero();
char * rightAnswer(int asignarRespuesta, int estado);
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
           //Invoca La Respueta Buena
           char *buena = rightAnswer(asignarRespuesta(), 0);
           printf("%s \n", buena);
           bandera = 0;
       } else {
           //Invoca La Respueta Mala
           char *mala = rightAnswer(asignarRespuesta(), 1);
           printf("%s \n", mala);
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

int asignarRespuesta() {
    int respuesta = ((rand()% 4) + 1); // rango entre 1 y 4
    return respuesta;
}

char * rightAnswer(int asignarRespuesta, int estado) {
    char *answer;

    switch (asignarRespuesta)
    {
    case 1:
        answer = (estado == 0) ? "Muy bien!" : "No. Por favor trata de nuevo.";
        return answer;
        break;
    case 2:
        answer = (estado == 0) ? "Excelente!" : "Incorrecto. Trata una vez más.";
        return answer;
        break;
    case 3:
        answer = (estado == 0) ? "Buen trabajo!" : "No te rindas!";
        return answer;
        break;
    case 4:
        answer = (estado == 0) ? "Sigue Haciéndolo Bien!" : "No. Trata de nuevo";
        return answer;
        break;
    default:
        break;
    }
}

