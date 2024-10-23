#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/* Minúsculas y mayúsculas.
El programa, al recibir como dato un arreglo unidimensional de tipo
cadena de caracteres, determina el número de minúsculas y mayúsculas que hay en cada cadena. */

void minymay(char cad);

void main(void)
{
    int i, n;
    char FRA[20][50]; /* observa como se declara el arreglo unidimensional de cadena de caracteres. */

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Ingrese la linea %d de texto: ", i+1);
        gets(FRA[i]);
    }
    printf("\n\n");
    for (i=0; i<n; i++)
        minymay(FRA[i]);
}

void minymay(char *cadena)
/* Esta función se utiliza para calcular el número de minúsculas y mayúsculas que hay en cada cadena. */
{
    int i = 0, mi = 0, ma = 0;
    while(cadena[i] != '\0')
    {
        if(islower(cadena[i]))
            mi++;
        else
            if (isupper(cadena[i]))
            ma++;
        i++;
    }
    printf("\n\nNumero de letras minusculas: %d", mi);
    printf("\n\nNumero de letras mayusculas: %d", ma);
}
