#include <stdio.h>

/* Fibonacci.
El programa calcula y escribe los primeros 50 numeros de fibonacci.

I, PRI, SEG, SIG: variables de tipo entero. */

void main(void)
{
    int I, PRI = 0, SEG = 1, SIG; /* declara las variables I, PRI, SEG, SIG*/
    printf("\t %d \t %d", PRI, SEG); /* imprime los dos primeros numeros de la serie*/
    for (I = 3; I<= 50; I++) /* inicia el ciclo en bucle que comienza en 3 y se ejecuta 50 veces*/
    {
        SIG = PRI + SEG; /* calcula el siguiente numero de la serie sumando los dos numeros PRI y SEG*/
        PRI = SEG; /* actualiza los valors*/
        SEG = SIG;
        printf("\t %d", SIG); /* imprime el numero de fibonacci*/
    }
}
