#include <stdio.h>

/* lluvias. */

void Mayor(float, float, float);

void main(void)
{
    int I;
    float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
    for (I = 1; I <= 12; I++)
    {
        printf("\n\nIngresa las lluvias del  mes %d", I);
        printf("\nRegiones Golfo, Pacifico y Caribe: ");
        scanf("%f %f %f", &GOL, &PAC, &CAR);
        AGOL += GOL;
        APAC += PAC;
        ACAR += CAR;
    }
    printf("\n\nPromedio de lluvias region Golfo: %6.2", (AGOL / 12));
    printf("\n\nPromedio de lluvias region Pacifico: %6.2", (APAC / 12));
    printf("\n\nPromedio de lluvias region Caribe: %6.2", (ACAR / 12));
    Mayor(AGOL, APAC, ACAR);
}

void Mayor(float R1, float R2, float R3)
{
    if (R1 > R2)
    if (R1 > R3)
        printf("\nregion con mayor promedio: region Golfo. Promedio: %6.2f", R1 / 12);
    else
        printf("\nRegion con mayor promedio: Region Caribe. Promedio: %6.2f", R3 /12);
    else
        if (R2 > R3)
        printf("\nRegion con mayor promedio: Region pacifico. Promedio: %6.2f", R2 / 12);
    else
        printf("\nRegion con mayor promedio: Region Caribe. Promedio: %6.2f", R3 / 12);
}
