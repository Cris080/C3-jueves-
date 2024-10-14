#include <stdio.h>

/* Eleccion.
El programa almacena los votos emitidos en una eleccion en la que hubo cinco candidatos
e imprime el total de votos que obtuvo cada uno de ellos. */

void main(void)
{
    int ELE[5] = {0};  /* Declaracion del arreglo entero ELE de cinco elementos. todos sus elementos se inicicalizan en 0. */
    int I, VOT;
    printf("Ingresa el primer voto (0 - para terminar): ");
    scanf("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6))  /* se verifica que el voto sea correcto*/
            ELE[VOT-1]++; /*los votos se almacenan en el arreglo. */
        else
            printf("\nEl voto ingresado es incorrecto. \n");
        printf("ingresa el siguiente voto (0 - para terminar): ");
        scanf("%d", &VOT);
    }
    printf("\n\nResultados de la Eleccion\n");
    for (I = 0; I < 4; I++);
        printf("\nCandidato %d: %d", I + 1, ELE[I]);
}
