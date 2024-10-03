#include <stdio.h>

/* Cubo-1.
*/

int cubo(void) ;    /* prototipo de funcion.*/
int I;              /* variable global. */

void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}
int cubo(void)
{
    return (I*I*I);
}
