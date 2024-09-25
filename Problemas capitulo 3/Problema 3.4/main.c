#include <stdio.h>
#include <math.h>

/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el cuadrado
de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void)
{
    int NUM;
    long CUA, SUC = 0; /* declara variables*/
    printf("\nIngrese un numero entero -0 para terminar-:\t"); /* imprimeun mensaje solicitando al usuario que ingrese un numero entero. */
    scanf("%d", &NUM); /* lee el numero ingresado por el usuario y lo almacena en la variable de NUM */
    while (NUM) /* inicia el ciclo que se ejecutara mientras el calor de NUM no sea 0, si se ingresa 0 se termina el ciclo */
    /* observa que la condicion es verdadera mientras el entero es diferente de cero. */
    {
        CUA = pow (NUM, 2); /* calcula el cuadrado de NUM usando la funcion pow y lo almacena en la variable CUA */
        printf("%d al cuadrado es %ld", NUM, CUA); /* imprime el numero ingresado NUM y su Cuadrado CUA*/
        SUC = SUC + CUA; /* suma el valor de CUA al acumulador de la suma SUC*/
        printf("\nIngrese un numero entero -0 terminar-:\t"); /* Imprime el mensaje solicitando otro numero entero*/
        scanf("%d", &NUM); /* lee el siguiente numero ingresado*/
    }
   printf("\nLa suma de los cuadrados es %ld", SUC); /* imprime el valor acumulado de la suma de los cuadrados*/
}
