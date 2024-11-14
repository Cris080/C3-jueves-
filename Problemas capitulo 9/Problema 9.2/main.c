#include <stdio.h>

/* Archivos y caracteres.
el programa lee caracteres de un archivo. */

void main(void)
{
    char p1;
    FILE *ar;
    if((ar = fopen("arc.txt", "r")) != NULL)   /* Se abre el archivo para lectura. */
/* Observa que las dos instrucciones del programa 9.1 necesarias para abrir un archivo y verificar
que �ste en realidad se haya abierto, se pueden agrupar en una sola instrucci�n. */
    {
        while (!feof(ar))
            /* se leen caracteres del archivo mientras no se detecte el fin del archivo*/
        {
            p1 = fgetc(ar); /* lee el caracter del archivo */
            putchar(p1);  /* despliega el caracter en la pantalla */
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
}
