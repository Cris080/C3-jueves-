
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() // Se usaran los caracteres dentro del rango 32-126
{
	char frase[100]; // Declarar variables
	int key; // variable para la clave de cifrado
	int i,salto=0; //variable para ajustar el cifrado
	while(1) // Siempre repite el proceso
	{
		system("cls"); // Limpia la pantalla de la terminal
		printf("Ingresa la frase a decifrar: "); //Muestra el mensaje
            gets(frase); // Obtener la frase
		do{
			printf("Inserte la clave de cifrado: ");
			scanf("%d",&key ; //lee la clave de cifrado y la guarda en key
		}while(key<1 || key>10);  // Obtener la llave, que debe ser una unidad
		printf("\n\n----------------------------------\nFrase decifrada:\n");

		for(i=0; i<(int)strlen(frase); i++,salto=0)  // mientras i sea menor que el tama�o de la frase
		{
			if(frase[i]<32+key) //verifica el valor del caracter mas la clave
			{
				salto=95; // Se asigna un salto para volver al inicio del ciclo
			}
			printf("%c",frase[i]-key+salto);// Se imprime la letra codificada: sumandole la llave en el codigo ascii, si salto es distinto de 0 se mantendra dentro del rango de simbolos seleccionados. En este caso para descifrar invertimos los signos
		}

		printf("\n\n"); // Espacio N%its,y%ymnsp%N,qq%j{jw%ljy%zxj%yt%gjnsl%|nymtzy%mnr
		system("pause"); // Se pide que se presione una tecla para continuar
	}
}
