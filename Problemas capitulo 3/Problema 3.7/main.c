#include <stdio.h>

/* Lanzamiento de martillo.
El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio de
los lanzamientos de la atleta cubana.

I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */

void main(void)
{
int I, N;
float LAN, SLA = 0; /* declara variables */
do /* asegura de que el numero de lanzamientos N este entre 1 y 11*/
{
    printf("Ingrese el numero de lanzamientos:\t");
    scanf("%d", &N);
}
while (N < 1 || N > 11); /* verifica que el numero de lanzamientos sea valido entre 1 y 11*/
/* Se utiliza la estructura do-while para verifivar que el valor de N sea correcto. */
for (I=1; I<=N; I++) /* recorre desde 1 hasta N, en cada interacion, solicita el valor del lanzamiento I. */
{
    printf("\nIngrese el lanzamiento %d: ", I);
    scanf("%f", &LAN);
    SLA = SLA + LAN;
}
SLA = SLA / N;  /* calcula el promedio de los lanzamiento */
printf("\nEl promedio de lanzamientos es: %.2f", SLA); /* imprime el promedio de los lanzamientos*/
}
