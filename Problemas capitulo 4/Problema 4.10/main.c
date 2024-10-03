#include <stdio.h>

/* Multiplo. */

int multiplo(int, int);

void main(voi)
{
    int NU1, NU2, RES;
    printf("\nIngrese los dos numeros: ");
    scanf("%d", &NU1, NU2);
    RES = multiplo(NU1, NU2);
    if (RES)
        printf("\nEl segundo numero multiplo del primero");
    else
        printf("\nEl segundo numero no es multiplo del primero");
}

int multiplo(int N1, int N2)
{
    int RES;
    if((N2 % N1) == 0)
        RES = 1;
        else
        RES = 0;
        return (RES);

}
