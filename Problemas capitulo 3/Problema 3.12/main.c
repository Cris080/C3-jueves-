#include <stdio.h>
#include <math.h> /* incluye la libreria que incluye funciones matematicas*/

/* Serie de ULAM.
El programa, al recibir como dato un entero positivo, obtiene y escribe la serie de ULAM.

NUM: variable de tipo entero. */

void main(void)
{
    int NUM; /* declara la variable de NUM*/
    printf("Ingrese el numero para calcular la serie: "); /* solicita el ingreso del numero entero*/
    scanf("%d", &NUM); /* captura el valor ingresado y lo guarda en la variable de NUM*/
    if (NUM > 0) /* verifica si el numero entero es positivo, si NUM es mayor que 0, entonces empieza a calcular la serie*/
    {
        printf("\nSerie de ULAM\n"); /* si NUM es positivo, se imprime un encabezado indicando que s eva a generar la serie de ULAM. */
        printf("%d \t", NUM);
        while (NUM != 1) /* inicia un ciclo que se repetira hasta que el valor de NUM sea 1*/
        {
            if (pow(-1, NUM) > 0) /* verifica si NUM es par o impar */
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1; /* si NUM es impar se multiplica por 3 y se suma 1*/
            printf("%d \t", NUM); /* imprime el valor actualizado de NUM*/
        } /* cierra el ciclo*/
    }
    else /* si se ingresa un numero negativo o cero, el programa imprime un mensaje de error*/
        printf("\n NUM debe ser un entero positivo");
}
