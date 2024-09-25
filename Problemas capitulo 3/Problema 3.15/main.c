#include <stdio.h>
#include <math.h>

/* Calculo de P.
El programa obtiene el valor de P aplicando una serie determinada.

I, B, C: variables de tipo entero.
RES: variable de tipo real de doble precision.*/

void main(void)
{
    int I = 1, B = 0, C; /* declara las variables*/
    double RES;
    RES = 4.0 / I; /* RES con el primer termino de la serie, que es 4 y C con 1, por que ya se ha calculado un termino de inicio*/
    C = 1;
    while ((fabs (3.1215 - RES)) > 0.0005) /* inicia un bucle hasta que la diferencia de P sea mayor que 0.0005*/
    {
        I += 2 ; /* incrementa el valor de I en 2*/
    if (B) /* alterna la suma y resta de los terminos*/
    {
        RES += (double) (4.0 / I);
        B = 0;
    }
    else
    {
        RES -= (double) (4.0 / I);
        B = 1;
    }
    C++; /* incrementa el contador de C para llevar la cuenta de cuantos terminos han sido procesado*/
}
printf("\nNumero de terminos:%d", C); /* imprime el numero total de terminos*/
}
