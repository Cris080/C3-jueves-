#include <stdio.h>

/* serie.
El programa imprime los terminos y obtiene la suma de una determinada serie.

I SSE y CAM: variable de tipo entero, */

void main(void) /* define la Funcion principal*/
{
    int I = 2, CAM = 1; /* I entero que comienza en 2 y es el termino actual de la serie */
    long SSE = 0;
    while (I <= 2500) /* Inicia un ciclo que se ejecuta mientras I sea menor o igual a 2500. */
    {
        SSE = SSE + I;
        printf ("\t %d", I);
        if (CAM) /* entero que alterna entre 1 y 0, para decidir si sumar 5 o sumar 3 al valor de I*/
        {
            I += 5;
            CAM--;
        }
        else /* si CAM es 0, aumenta el valor de I en 3 y establece CAM nuevamente en 1 */
        {
            I += 3;
            CAM++;
        }
    }
    printf("\nLa suma de la serie es: %ld", SSE); /* imprime el valor actual de I */
}
