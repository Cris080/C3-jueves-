//Cristopher Fernandez
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_CARRERA 50
#define MAX_RECORDS 100

typedef struct //define estructura alumno
{
    char nombre[MAX_NAME];
    float promedio;
    char carrera[MAX_CARRERA];
} Alumno;

void nuevoArchivo(const char *filename)
{
    FILE *file = fopen(filename, "wb"); //crea el archivo
    if (!file)
    {
        perror("Error al crear el archivo");
        return;
    }
    fclose(file);
    printf("Archivo %s creado exitosamente.\n", filename);
}

void guardarAlumno(const char *filename, Alumno alumno)
{
    FILE *file = fopen(filename, "ab");
    if (!file)
    {
        perror("Error al abrir el archivo");
        return;
    }
    fwrite(&alumno, sizeof(Alumno), 1, file);
    fclose(file);
    printf("Alumno guardado exitosamente.\n");
}

void listarAlumnos(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (!file)
    {
        perror("Error al abrir el archivo");
        return;
    }

    Alumno alumno;
    int index = 0;

    printf("\nListado de alumnos:\n");
    while (fread(&alumno, sizeof(Alumno), 1, file))
    {
        printf("[%d] Nombre: %s, Promedio: %.2f, Carrera: %s\n", index, alumno.nombre, alumno.promedio, alumno.carrera);
        index++;
    }
    fclose(file);
}

void buscarAlumno(const char *filename, const char *nombreBuscado)
{
    FILE *file = fopen(filename, "rb");
    if (!file)
    {
        perror("Error al abrir el archivo");
        return;
    }

    Alumno alumno;
    int encontrado = 0;

    while (fread(&alumno, sizeof(Alumno), 1, file))
    {
        if (strcmp(alumno.nombre, nombreBuscado) == 0)
        {
            printf("Alumno encontrado:\nNombre: %s, Promedio: %.2f, Carrera: %s\n", alumno.nombre, alumno.promedio, alumno.carrera);
            encontrado = 1;
            break;
        }
    }
    fclose(file);

    if (!encontrado)
    {
        printf("Alumno no encontrado.\n");
    }
}

int main()
{
    int opcion;
    char filename[100];
    char nombreBuscado[MAX_NAME];
    Alumno alumno;

    printf("Sistema de Gestion de Alumnos\n");

    do
    { //Menun
        printf("\nMenu:\n");
        printf("1. Crear nuevo archivo\n");
        printf("2. Abrir archivo existente\n");
        printf("3. Guardar nuevo alumno\n");
        printf("4. Listar alumnos\n");
        printf("5. Buscar alumno por nombre\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingrese el nombre del archivo: ");
            scanf("%s", filename);
            nuevoArchivo(filename);
            break;
        case 2:
            printf("Ingrese el nombre del archivo: ");
            scanf("%s", filename);
            printf("Archivo %s abierto.\n", filename);
            break;
        case 3:
            printf("Ingrese nombre del alumno: ");
            scanf(" %[^\n]s", alumno.nombre);
            printf("Ingrese promedio del alumno: ");
            scanf("%f", &alumno.promedio);
            printf("Ingrese carrera del alumno: ");
            scanf(" %[^\n]s", alumno.carrera);
            guardarAlumno(filename, alumno);
            break;
        case 4:
            listarAlumnos(filename);
            break;
        case 5:
            printf("Ingrese el nombre del alumno a buscar: ");
            scanf(" %[^\n]s", nombreBuscado);
            buscarAlumno(filename, nombreBuscado);
            break;
        case 0:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opcion no valida.\n");
        }
    }
    while (opcion != 0);

    return 0;
}
