#include <stdio.h>

/* Nomina de profesores.
El programa, al recibir como datos los salarios de los profesores de una universidad
, obtiene la nomina y el mpromedio de los salaraios.

I: variable de tipo entero.
SAL, NOM y PRO: variables de tipo real. */

void main(void) /* define la funcion principal main*/
{
    int I = 0; /* declara variables */
    float SAL, PRO, NOM = 0;
    printf("Ingrese el salario del profesor:\t");/*imprime mensaje */
    /*observa que al menos se necesita ingresar el salario de un profesor para que
    no ocurra un error de ejecucion del programa.*/
    scanf("%f", &SAL); /* lee el salario ingresado por el usuario y lo almacena en SAL*/
    do
    {
        NOM = NOM + SAL; /* suma el salario actual SAL a la variable de NOM*/
        I = I + 1; /* incrementa en 1 el contador de profesores I*/
        printf("Ingrese el salario del profesor -0 para terminar- :\t");
    }
while (SAL); /* la condicion del ciclo verifica si el valor de SAL es distinto de 0. si el salario es 0 el ciclo termina.*/
PRO = NOM / I;
printf("\nNomina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);
}
