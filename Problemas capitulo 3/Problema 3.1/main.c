#include <stdio.h>
#include <stdlib.h>

/* Nomina.
El programa, al recibir los salarios de 15 profesores, obtiene el total
de la nomina de la universidad.

I: variable de tipo entero.
SAL y NOM: variables de tipo real. */

void main(void)
{
    int I;
    float SAL, NOM;
    NOM = 0; /* se empieza el calculo total de la nomina en 0 */
    for (I=1; I<=15; I++) /* Inicia un ciclo que se repite 15 veces una por cada profesor*/
    {
        printf("*\Ingrese el salario del profresor%d:\t", I); /* Imprime el mensaje en la pantall*/
        scanf("%f", &SAL); /* lee el valor ingresado y lo almacena en la variable SAL*/
        NOM = NOM + SAL; /* suma el salario actual y el acumulado NOM*/
    }
    printf("\nEl total de la nomina es: %.2f", NOM); /*Imprime el valor total de la nomina acumulado*/
}
