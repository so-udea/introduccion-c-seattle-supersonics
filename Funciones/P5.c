/*
P5. Escriba una función que tome un valor entero y devuelva el número con sus dígitos en reversa. Por ejemplo, dado el
numero 7631, la función deberá devolver 1367.
*/

#include <stdio.h>

long reversa(long);

int main()
{
   long n, r;
   printf("Introduzca Un Numero: \n");
   scanf("%ld", &n);
   r = reversa(n);
   printf("El Numero Alreves Es: \n");
   printf("%ld\n", r);
   return 0;
}

long reversa(long n) {
   static long r = 0;

   if (n == 0)
      return 0;

   r = r * 10;
   r = r + n % 10;
   reversa(n/10);
   return r;
}
