#include <stdio.h>
#include <ctype.h>

/* Decodifica.
El programa decodifica una cadena de caracteres compuesta por n�meros y letras. */

void interpreta(char *);

void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    interpreta(cad);
}

void interpreta(char *cadena)
/* Esta funci�n se utiliza para decodificar la cadena de caracteres. */
{
    int i = 0, j, k;
    while (cad[i] != '\0')
    {
        if (isalpha (cad[i]))
        {
            k  = cad[i - 1] - 48;
            for (j = 0; j < k; J++)
                putchar(cad[i]);
        }
        I++;
    }
}
