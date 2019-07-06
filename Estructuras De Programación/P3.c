/*
P3. Escriba un programa en C para imprimir la siguiente secuencia (dado el numero de renglones):

1
01
101
0101
10101
*/

#include <stdio.h>

int main()
{
    int numero;
    printf("Introduzca un numero: ");
    scanf("%d", &numero);
    int anterior = 0;
    int primer=1;
    int x=0;
    puts("");
    for(int i=1; i<= numero; i++){
        while(x<i){
            if(anterior==0){
               printf("1");
               anterior=1;
            }else{
                printf("0");
                anterior=0;
            }
            x++;
        }
        x=0;
        printf("\n");
            if(primer==1){
               anterior=1;
               primer=0;
            }else{
                anterior=0;
                primer=1;
            }

   }
    return 0;
}
