#include <stdio.h>
#include <math.h>

/* suma-Cuadrados. */
/*El programa calcula la suma del cuadrado de los elementos de un arreglo
unidimensional de 100 elementos de tipo real. */

const int MAX = 0; /* MAX se utiliza para reservar el espacio máximo que podrá ocupar el arreglo. */
 void Lectura(float *, int);
 double Suma(float *, int);

 void main(void)
 {
    float VEC[MAX];
    double RES;
    Lectura(VEC, MAX);
    RES = Suma(VEC, MAX);
    printf("\n\nSuma del arreglo: %.21f", RES);
 }

 void Lectura(float A[], int T)
 {
     int I;
     for (I=0; I<T; I++)
     {
         printf("Ingrese el elemento %d: ", I+1);
         scanf("%d", &A[I]);
     }
 }

 double Suma(float A[], int T)
 {
     int I;
     double AUX = 0.0;
     for (I=0; I<T; I++)
        AUX += pow(A[I], 2);
     return(AUX);
 }
