#include <stdio.h>

/* B�squeda secuencial en arreglos ordenados en forma creciente. */

const int MAX = 100;

void Lectura(int, int);  /* Prototipos de funciones. */
int Busca(int *, int, int);

void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tama;o del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE);  /* Se llama a la funci�n que busca en el arreglo. */
    if (RES) /* Si RES tiene un valor verdadero �diferente de 0�, se escribe la posici�n en la que se encontr� al elemento. */
        printf("\nEl elemento se encuentra en la posicion: %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
}

void Lectura(int A[], int T)  /* La funci�n Lectura se utiliza para leer un arreglo unidimensional de T
elementos de tipo entero. */
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
int Busca(int A[], int T, int E)
{
    int RES, I = 0, BAN = 0;
    while ((I < T) && (E >= A[I]) && !BAN)
        if (A[I] == E)
        BAN++;
    else
        I++;
    if (BAN)
        RES = I + 1;
    else
        RES = BAN;
    return (RES);
}
