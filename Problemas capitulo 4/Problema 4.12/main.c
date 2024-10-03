#include <stdio.h>

/* MaXimo Comun divisor. */

int mcd(int, int);

void main(void)
{
    int NU1, NU2, RES;
    printf("\nIngresa los dos numeros enteros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = mcd (NU1, NU2);
    printf("\nEl maximo comun divisor de %d y %d es: %d", NU1, NU2, RES);
}

int mcd(int NU1, int NU2)
{
    int I;
    if (NU1 < NU2)
        I = NU1 / 2;
    else
        I = NU2 / 2;
        while ((NU1 % I) || (NU2 % I))
        I --;
    return I;
        }
