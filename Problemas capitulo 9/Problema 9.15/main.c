#include <stdio.h>
#include <ctype.h>

/* Letras min�sculas y may�sculas.
El programa, al recibir como dato un archivo formado por cadenas de
caracteres, determina el n�mero de letras min�sculas y may�sculas que hay en el archivo. */

void minyway(FILE *); /* Prototipo de funci�n. */

void main(void)
{
    FILE *ap;
    if((ap = fopen ("arc.txt", "r")) != NULL)
    {
        minyway(ap);
        fclose(ap);
    }
    else
        printf("No se puede abrir el archivo");
}

void minyway(FILE *ap1)
{
    char cad[30];
    int i, mi = 0, ma = 0;
    while (!feof(ap1))
    {
        fgets(cad, 30, ap1); /* Se utiliza la funci�n fgets() para leer cadenas de caracteres del archivo. */
        i=0;
        while (cad[1] != '\0')
        {
            if (islowe(cad[i]))
                mi++;
            else
                if (isupper(cad[i]))
                ma++
                i++;
        }
    }
    printf("\n\nNumero de letras minusculas: %d", mi);
    printf("\n\nNumero de letras mayusculas: %d", ma);
}
