#include <stdio.h>
#include <math.h>

/* Volumen y area del cilindro
EL programa, al recibir como datos el radio y la altura de un cilindro,
calcula su area y volumen.

RAD, ALT, VOL y ARE: variables de tipo real. */

void main(void)
{
    float RAD,ALT, VOL, ARE;
    printf("Ingrese el radio y la altura del cilindro: ");
    scanf("%f %f", &RAD, &ALT);
    /* M_PI es una constante definidia en math,h que contiene el valor de PI */
    VOL = M_PI * pow (RAD, 2) * ALT;
    ARE = 2 * M_PI * RAD * ALT;
    printf("\nEl volumen es: %6.2f \t El �rea es: %6.2f", VOL, ARE);
}
