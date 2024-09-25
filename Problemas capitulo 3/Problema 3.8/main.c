#include <stdio.h>

/* factorial.
El programa calcula el factorial de un numero entero.

FAC, I, NUM: variables de tipo entero. */

void main(void)
{
    int I, NUM; /* declara las variables I, NUM, FAC */
    long FAC;
    printf("\nIngrese el numero: "); /* solicita que ingrese un numero entero. este valor se almacena en la variable NUM */
    scanf("%d", &NUM);
    if (NUM >= 0) /* verifica que el numero ingresado NUM sea mayor o igual a 0*/
    {
        FAC = 1;
        for(I=1; I <= NUM; I++)
            FAC *= I;
        printf("\EL factorial de %d es: %ld", NUM, FAC);
    }
    else /* si el numero ingresado es negativo, imprime un mensaje de error*/
        printf("\nError en el dato ingresado");
}
