#include <stdio.h>
#include <math.h>

/* Funcion matematica.
EL programa obtiene el resultado de una funcion.

OP y T: variable de tipo entero
RES: variable de tipo real. */

void main(void)
{
    int OP, T;
    float RES;
    printf("ingrese la opcion del calculo y el valor entero: ");
    scanf("%d, %d", &OP, &T);
    switch(OP)
    {
        case 1: RES = T / 5;
        break;
        case 2: RES = pow(T,T);
        /* La funcion POW esta definida en la biblioteca de math.h*/
        case 3:
        case 4: RES = 6 * T/2;
        break;
        default: RES = 1;
        break;
     }
printf("\nResultado: %7.2f", RES);
}
