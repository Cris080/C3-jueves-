#include <stdio.h>

 /*Suma positivos.
 El programa, al recibir como datos N numeros enteros, obbtiene la suma de los enteros
 positivos.

 I, N, NUM: variables de tipo entero. */

 void main(void)
 {
     int I, N, NUM, SUM; /* declarando cuatro variables enteras*/
     SUM = 0; /* acumular la suma de los numeros positivos*/
    printf("Ingrese el numero de datos:\t"); /* Imprime mensajecuando ingrese los cuatro datos*/
     scanf("%d", &N); /* lee el valor y lo almacena en la vairiable N*/
     for (I=1; I<=N; I++) /* Inicia ciclo que se repite N veces, con i como contador que va de 1 hasta N*/
    {
       printf("Ingrese el dato numero %d:\t", I);
       scanf("%d", &NUM); /* lee el numero ingresado y lo almacena en la variable NUM*/
       if (NUM > 0) /* solo si NUM es mayor a 0, ejecuta la siguiente linea*/
       SUM = SUM + NUM; /* es el acumulado de la suma de los numeros positivos*/
     }
     printf("\nLa suma de los numeros positivos es: %d", SUM);
 }
