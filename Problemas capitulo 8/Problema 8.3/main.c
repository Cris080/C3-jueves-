#include <stdio.h>
#include <string.h>

/* Estructuras-3.
El programa muestra la manera en que se declara una estructura anidada, as� como la
forma de acceso a los campos de las variables o apuntadores de tipo estructura, tanto
 para lectura como para escritura. Se utiliza adem�s una funci�n que recibe como par�metro
 un apuntador de tipo estructura. */

 typedef struct
 {
     char calle[20];
     int numero;
     int cp;
     char localidad[20];
 }

 domicilio;

 struct empleado
 {
   char nombre[20];
   char departamento[20];
   float sueldo;
   domicilio direccion;
 };

void Lectura(struct empleado *a)
{
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);

    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);

    printf("�-Ingrese la direccion del empleado�-");
    printf("\n\tcalle:");
    gets(a->direccion.calle);
    printf("\n\tNumero:");
    scanf("%d", &a->direccion.numero);
    printf("\tCodigo postal: ");
    scanf("%d", &a->direccion.cp);

    printf("\tLocalidad:");
    gets(a->direccion.localidad);
}

void main(void)
{
    struct empleado e0 = {"Arturo", "Compras", 15500.75, "San Jeronimo", 120, 3490, "Toluca"};
    struct empleado *e1, *e2, e3, e4;

    e1 = new (struct empleado);
    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", &(*e1).nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e1->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    printf("�-Ingrese la direcci�n del empleado�-");
    printf("\n\tCalle:" );
    fflush(stdin);
    gets(e1->direcci�n, calle);
    printf("\tN�mero:");
    scanf("%d", &e1->direccion.numero);
    printf("\tC�digo Postal:");
    scanf("%d", &e1->direccion.cp);
    printf("\tLocalidad:");
    fflush(stdin);
    gets(e1->direccion.localidad);

    printf("\nIngrese el nombre del empleado 3:");
    scanf("%s", &e3.nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa:");
    gets(e3.departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    printf("�-Ingrese la direcci�n del empleado�-");
    printf("\n\tCalle:");
    fflush(stdin);
    gets(e3.direccion.calle);
    printf("\tN�mero:");
    scanf("%d", &e3.direccion.numero);
    printf("\tC�digo Postal:");
    scanf("%d", &e3.direccion.cp);
    printf("\tLocalidad:");
    fflush(stdin);
    gets(e3.direccion.localidad);

    e2 = new (struct empleado);
    Lectura(e2);

    Lectura(&e4);

    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e1-nombre, e1->departamento, e1>sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp,
           e1->direccion.localidad);

    printf("\nDatos del empleado 4n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e4.nombre, e4.departamento, e4.sueldo, e4.direccion.calle,
            e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);


}
