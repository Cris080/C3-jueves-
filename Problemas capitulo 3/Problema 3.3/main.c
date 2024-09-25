#include <stdio.h>

/* suma de pagos.
EL programa, al recibir como datos un conjunto de pagos realizados en el ultimo mes, obtiene la suma de los mismos.

PAG y SPA: variables de tipo real. */

void main(void)
{
    float PAG, SPA; /* declara dos variables de tipo float numeros reales*/
    SPA = 0; /* empieza acumular la suma de los pagos desde cero*/
    printf("Ingrese el primer pago:\t"); /*imprime solicitando que ingresen el valor*/
    scanf("%f", &PAG); /* lee el valor del pago ingresado por el usuario y lo almacena en la variable PAG*/
        while (PAG); /* inicia un ciclo que se repetira mientras el valor de PAG no sea 0*/
        /* observa que la condicion es verdadera mientras el pago es diferente de cero. */
    {
        SPA = SPA + PAG; /* suma el valor actual del pago al acumulardor de pagos */
        printf("Ingrese el siguiente pago:t "); /* Imprime para que indique el siguiente pago*/
        scanf("%f", &PAG);/* lee el valor de siguiente pago ingresado por el usuario y lo almacena en la variable PAG*/
        /*observa que la proposicion que modifica la condicion es una lectura. */
    }
    printf("\nEL total de pagos del mes es: %.2f", SPA);
}
