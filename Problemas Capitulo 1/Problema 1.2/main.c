#include <stdio.h>
 /* Invierte datos
 El programa, al recibir dato un conjunto de datos de entrada, invierte el orden de los mismos cuando imprime.

 A, B, C, D: variable de tipo. */

 void main (void)
 {
int A, B, C, D;
printf("ingrese cuatro datos de tipo entero: ");
scanf("%d %d %d %d", &A, &B, &C, &D);
printf("\n %d %d %d %d ", D, C, B, A);
}
