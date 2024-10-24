#include <stdio.h>
/*Cristopher Fernandez*/

void numeroYLetras(int numero);
void repetirPrograma();

int main()
{
    repetirPrograma();
    return 0;
}

void repetirPrograma()
{
    double numero;
    int parteEntera, centavos;
    char opcion;

    do
        {
        printf("Introduce un numero del 1 al 1000: \n");
        scanf("%lf", &numero);

        parteEntera = (int)numero;
        centavos = (int)((numero - parteEntera) * 100); // Obtener decimales

        printf("El numero es: ");
        numeroYLetras(parteEntera); // Solo se le da la parte entera a la función
        printf(" con %d centavos.\n", centavos); // Se le añade los centavos

        printf("Deseas convertir otro numero (si/no): \n");
        scanf(" %c", &opcion); // Espacio antes de %c para ignorar el salto de línea

    } while (opcion == 's' || opcion == 'S');
    printf("\n");
}

void numeroYLetras(int numero)
 {
    const char *unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    const char *decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    const char *centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    const char *miles[] = {"", "mil", "dos mil", "tres mil", "cuatro mil", "cinco mil", "seis mil", "siete mil", "ocho mil", "nueve mil"};

    if (numero < 10)
        {
        printf("%s", unidades[numero]);
    }
    else
     if (numero < 100)
      {
        printf("%s", decenas[numero / 10]);
        if
        (numero % 10 > 0)
         {
            printf(" y %s", unidades[numero % 10]);
        }
    }
    else
        if
        (numero < 1000) {
        printf("%s", centenas[numero / 100]);
        if
        (numero % 100 > 0) {
            printf(" ");
            numeroYLetras(numero % 100);
        }
    }
    else
        {
        printf("%s", miles[numero / 1000]);
        if
        (numero % 1000 > 0)
        {
            printf(" ");
            numeroYLetras(numero % 1000);
        }
    }
}
