#include <stdio.h>

/* Archivos y cadenas de caracteres.
el programa escribe cadenas de caracteres en un archivo. */

void main(void)
{
    char cad[50];
    int res;
    FILE *ar;
    if((ar = fopen("arc.txt", "w")) != NULL)
        /* Se abre el archivo para escritura. En la misma instrucción se verifica si se pudo abrir. */
    {
        printf("\nDesea ingresar una cadena de caracteres? si-1 No-0");
        scanf("%d", &ares);
        while (res)
        {
            fflush(stdin);
            printf("Ingrese la cadena: ");
            gets(cad);
            fputs(cad, ar); /* Observa la forma como se escribe la cadena en el archivo.*/
            printf("\nDesea ingresar otra cadena de caracteres? Si-1 No-0: ");
            scanf("%d", &ares);
            if (res)
            fputs("\n", ar);
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
}
