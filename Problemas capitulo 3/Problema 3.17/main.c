#include <stdio.h>

/* Numeros prefectos.
El programa, al recibir como dato un numero entero positivo como limite,
obtiene los numeros perfectos que hay entre 1 y ese numero, y ademas imprime
cuantos numeros perfectos hay en el intervalo.

I, J, NUM, SUM, C: variables de tipo entero. */

void main(void)
{
    int I, J, NUM, SUM, C = 0; /* declarando varibales*/
    printf("\nIngrese el numero limite: "); /* solicita que ingrese el numero*/
    scanf("%d", &NUM); /* este valor se almacena en NUM*/
    for (I = 1; I <= NUM; I++) /* inicia un ciclo for y recorre los numeros del 1 hasta el NUM dado*/
    {
        SUM = 0; /* empieza a sumar*/
        for (J = 1; J <= (I / 2); J++) /* este ciclo recorre todos los posibles devisores de I desde 1 a I*/
            if ((I % J) == 0)
            SUM += J;
        if (SUM == I)
        {
            printf("\n%d es un numero perfecto", I); /* imprime cuantos numeros perfectos fueron encontrados*/
            C++;
        }
    }
    printf("\mEntre 1 y %d hay %d numeros perfectos", NUM, C);
}
