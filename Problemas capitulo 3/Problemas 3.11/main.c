#include <stdio.h>

/* Examen de admision.
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentra estas.

R1, R2, R3, R4, R5: variables de tipo entero.
CAL: variable de tipor real*/

void main(void) /* iniciamos la funcion principal*/
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; /* declaramos e iniciamos cinco variables de tipo entero*/
    float CAL; /* declaramos la variable de CAL de tipo Float */
    printf("Ingrese la calificacion del alumno: "); /* solicita que ingresemos la rpimera calificacion*/
    scanf("%f", &CAL);
    while (CAL != -1) /* comienza un ciclo que continuara ejecutandose mientras la calificacion ingresada sea distinta de -1*/
    {
        if (CAL < 4) /* si la calificacion es menor que 4 incrementa el contador */
            R1++;
        else
            if (CAL < 6) /* si la calificacion es mayor  o igual a 4 pero menos que 6, incrementa el contador*/
            R2++;
        else
            if (CAL < 8) /* si la calificacion es mayor o igual a 6 pero menor que 8, incrementa el contador*/
            R3++;
        else
            if (CAL < 9) /* si la calificacion es mayor o igual a 8 pero menor que , incrementa el contador*/
            R4++;
        else /* si ninguna condicion se cumple esto implica que la calificacion es mayor o igual a 9*/
            R5++;
        printf("Ingresa la calificacion del alumno: "); /* vuelbe a pedir otra calificacion*/
        scanf("%f", &CAL);
    }
    printf("\n0..3.99 = %d", R1); /* imprime el resultado*/
    printf("\n4..5.99 = %d", R2);
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8.99 = %d", R4);
    printf("\n9..10 = %d", R5);
}
