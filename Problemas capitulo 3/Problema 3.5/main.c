#include <stdio.h>

 /* Suma pagos.
 El programa obtiene la suma de los pagos realizados el ultimo mes.
 PAG y SPA: variables de tipo real.*/

 void main(void) /* define la funcion principal main*/
 {
     float PAG, SPA = 0; /* declara dos tipos de variables tipo float*/
     printf("Ingrese el primer pago:\t"); /* imprime un mensaje*/
     scanf("%f", &PAG);/* lee el primer pago ingresado y lo almacena en la variable PAG*/
     /*obeserva que al utilizar la estructura do-while al menos se encesita un pago.*/
     do /* inicia una estructura do-while garantiza que el bloqueo de codigo dentro del ciclo se ejecutara al menos una vez*/
     {
         SPA = SPA + PAG; /* suma el valor de pago actual PAG a la variable acumulada SPA*/
         printf("Ingrese el siguiente pago -0 para terminar -:\t ");
         scanf("%f", &PAG); /* lee el siguiente pago y lo almacena en PAG*/
     }
     while (PAG); /* comprueba si el valor de PAG es diferente de 0, so PAG es 0 el ciclo se detiene*/
     printf("\nEl total de pagos del mes es: %.2f", SPA);
 }
