#include <stdio.h>

/* Archivos y caracteres.
El programa escribe caracteres en un archivo. */

void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "W"); /* Se abre el archivo arc.txt para escritura */
    if (ar != NULL)
    {
        while ((p1=getchar()) != '\N')
            /* Se escriben caracteres en el archivo mientras no se detecte el caracter que indica el fin de la l�nea. */
            fputc(p1, ar);
        fclose(ar);  /* se cierra el archivo */
    }
    else
        printf("No se puede abrir el archivo");
}
