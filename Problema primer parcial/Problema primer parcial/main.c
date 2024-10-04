#include <stdio.h>

int main()
{
    float Precio; // Costo del combustible por gal�n en peso
    float LPG = 3.78541; // Litros en un gal�n
    int ConsumoMin, ConsumoMax; // Consumo m�nimo y m�ximo (L/100 km)

    /*  Solicita el precio del combustible y los valores de consumo */
    printf("Ingrese el costo del combustible por galon (peso): ");
    scanf("%f", &Precio);
    printf("Ingrese el consumo minimo (litros/100 km): ");
    scanf("%d", &ConsumoMin);
    printf("Ingrese el consumo maximo (litros/100 km): ");
    scanf("%d", &ConsumoMax);

    /* tabla */
    printf("\nTabla de costo por kil�metro:\n");
    printf("Consumo (L/100 km) | Costo por kil�metro (peso)\n");
    printf("------------------------------------------\n");

    for (int Consumo = ConsumoMin; Consumo <= ConsumoMax; Consumo++)
    {
        float CostoPorKm = (Precio / LPG) * (Consumo / 100.0); // Calcula el costo por kil�metro
        printf("       %d          |        %.2f\n", Consumo, CostoPorKm);
    }

    return 0;
}
