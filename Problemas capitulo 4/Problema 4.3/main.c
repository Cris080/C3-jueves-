#include <stdio.h>

/* conflicto de variables con el mismo nombre. */

void f1(void);
int K = 5;

void main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
        f1();
    }
    void f1(void)
    {
        int K = 2;
        K += K;
        printf("\n\nEl valor de la variable locas es: %d", K);
        ::K = ::K + K;
        printf("\nEl valor de la variable global es: %d", ::K);

    }
