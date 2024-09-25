#include <stdio.h>

/* Eleccion.
El programa obtiene el total de votos de cada candidato y el porcentaje correspondiente. tambien considera votos nulos.

VOT, C!, C2, C3, C4, C5, NU, SVO: variables de tipo entero.
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real. */

void main(void)
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO; /* declara las variables*/
    float PO1, PO2, PO3, PO4, PO5, PON;
    printf("Ingrese el primer voto: ");
    scanf("%d", &VOT); /*pide que ingresemos el primer voto y lo almacena en la variable de VOT*/
    while (VOT) /* comienza un ciclo que continua el voto hasta que el voto ingresado no sea 0*/
    {
        switch(VOT) /* evalua el valor de VOT usando un switch*/
        {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
            default: NU++; break;
        }
        printf("Ingrese el siguiente voto -0 para terminar-: "); /* solicita que ingresemos el siguiente voto o 0 */
        scanf("%d", &VOT);
    }
    SVO = C1 + C2 + C3 + C4 + C5 + NU; /* calcula el total de votos*/
    PO1 = ((float) C1 / SVO) * 100; /* calcula los porcentaje de votos*/
    PO2 = ((float) C2 / SVO) * 100;
    PO3 = ((float) C3 / SVO) * 100;
    PO4 = ((float) C4 / SVO) * 100;
    PO5 = ((float) C5 / SVO) * 100;
    PON = ((float) NU / SVO) * 100;
    printf("\nTotal de votos: %d", SVO); /* imprime el total*/
    printf("\n\nCandidato 1: %d cotos -- Porcentaje: %5.2f", C1, PO1); /* imprime los resultados*/
    printf("\n\nCandidato 2: %d cotos -- Porcentaje: %5.2f", C2, PO2);
    printf("\n\nCandidato 3: %d cotos -- Porcentaje: %5.2f", C3, PO3);
    printf("\n\nCandidato 4: %d cotos -- Porcentaje: %5.2f", C4, PO4);
    printf("\n\nCandidato 5: %d cotos -- Porcentaje: %5.2f", C5, PO5);
    printf("\n\nNulos:       %d cotos -- Porcentaje: %5.2f", NU, PON);
}
