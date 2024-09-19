#include <stdio.h>

/* promedio curso.
LE programa, al escribir como dato el promedio de un alumno en un curso
universitario, escribe aprobado sis u promedio es mayor a igual a 6, o
reprobado en caso contrario.

PRO: variable de tipo real. */

void main(void)
{
    float PRO;
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 6.0);
        Printf("\nAprobado");
    else
        Printf("\nReprobado");
    }
