#include <stdio.h>

/* Cuenta-nuemros.
El programa, al recibor como datos un arreglo unidimensional de tipo entero
y un numero entero, determina cuantas se encuentra el numero en el arreglo. */

void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[100];
    for (I=0; I<100; I++) /* declaracion de variable*/
    {
        printf("Ingrese el elemento %d del arreglo: ", I+1);
    scanf("%d", &ARRE[I]); /*lectura asignacion - del arreglo */
    }
    printf("\n\nIngrese el numero que se va a buscar en el arreglo: ");
    scanf("&d", &ARRE[I]);
    for (I=0; I<100; I++)
        if (ARRE[I] == NUM) /* comparacion del numero con los elementos del arreglo */
        CUE++;
    printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}
