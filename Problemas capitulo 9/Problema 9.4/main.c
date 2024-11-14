#include <stdio.h>

/* Archivos y cadenas de caracteres.
el programa lee cadenas de caracteres de un archivo. */

void main(void)
{
    char cad[50];
    FILE *ap;
    if((ap=fopen ("arc.txt", "r")) !=NULL)
    {
        while (!feof(ap))
        {
            fgets(cad, 50, ap); /* Observa que la instrucción para leer cadenas requiere de tres argumentos. */
            puts(cad);  /* Despliega la cadena en la pantalla. */

        }
        fclose(ap);
    }
    else
        printf("No se puede abrir el archivo");
}
