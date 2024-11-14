#include <stdio.h>

/* Incrementa salarios.
El programa incrementa el salario de los empleados de una empresa
�actualiza el archivo correspondiente� si sus ventas son superiores al mill�n de pesos anuales. */

typedef struct  /* Declaraci�n de la estructura empleado. */
{
    int clave;
    int departamento;
    float salario
    float venta[12];
} empleado;

void incrementa(FILE *);  /* Prototipo de funci�n. */

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad5.dat", "r+")) != NULL)
        else
        printf("\nEl archivo no se puede abrir");
    rewind(ar);
    fclose(ar);
}

void incrementa(FILE *ap)
/* Esta funci�n se utiliza para incrementar el salario de todos aquellos
empleados que hayan tenido ventas anuales por m�s de $1,000,000.
actualiza adem�s el archivo correspondiente. */
{
    int i, j, t;
    float sum;
    empleado emple;

    t = sizeof(empleado); /* La funci�n sizeof se utiliza para conocer el tama�o de la estructura empleado. */

    fread(&emple, sizeof(empleado), 1, ap); /* Se lee el primer registro del archivo. */

    while(!feof(ap))
    {
        i = ftell(ap) / t;

        sum = 0;
        for (j=0; j<12; j++)
            sum += emple.ventas[j]; /* Se calculan las ventas de cada vendedor. */

        if (sum > 1000000)
        {
            emple.salario = emple.salario * 1.10; /* Se incrementa el salario. */

            fseek(ap, (i-1)*sizeof(empleado), 0); /* Nos posicionamos para escribir el registro actualizado. */
            fwrite(&emple, sizeof(empleado), 1, ap);
            fseek(ap, i*sizeof(empleado), 0);
        }
        fread(&emple, sizeof(empleado), 1, ap);
    }
}
