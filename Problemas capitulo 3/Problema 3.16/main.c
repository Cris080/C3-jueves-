#include <stdio.h>

 /* Calificaiones.
 El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio
 de calificaciones de cada uno de ellos y, los alumnos con el meejor o peor promedio.

 I, MAT, MAMAT, y MEMAT: variables de tipo entero.
 CAL, SUM, MAPRO, MEPRO, y PRO: variables de tipo real.*/

 void main(void)
 {
     int I, MAT, MAMAT, MEMAT; /* declarando las variables*/
     float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;
     printf("Ingrese la matricula del primer alumno:\t"); /* ingrsa la matricula del primer alumno*/
     scanf("%d", &MAT);
     while (MAT) /* el bucle continuara hasta que la matricula no sea 0*/
     {
         SUM = 0; /* inicializa SUM en 0 para acumular las calificaciones*/
         for (I = 1; I <= 5; I++) /* un ciclo for para iterar 5 veces, solicitando 5 calificiaciones por alumno y se alamecena en CAL y se suma a SUM*/
         {
             printf("\tIngrese la calificacion del alumno: ", I);
             scanf("%f", &CAL);
             SUM += CAL;
         }
         PRO = SUM / 5; /* calcula el promedio de las 5 calificaciones diviendo la suma total a 5*/
         printf("\nMatricula: %d\tPromedio:%5.2f", MAT, PRO); /* imprime la matricula y el promedio*/
         if (PRO > MAPRO) /* si el promedio del alumno actual es mayor que MAPRO, actualiza MAPRO con el nuevo mejor promedio*/
         {
             MAPRO = PRO;
             MAMAT = MAT;
         }
         if (PRO < MEPRO) /* si el promedio actual es menor a MEPOR, actualiza MEPRO con el nuevo promedio*/
         {
             MEPRO = PRO;
             MEMAT = MAT;
         }
         printf("\n\nIngrese la matricula del siguiente alumno: ");
         scanf("%d", &MAT);
     }
     printf("\n\nAlumno con mejor promedio:\t%d\t%5.2f", MAMAT, MAPRO); /* imprime el mejor promedio*/
     printf("\n\nAlumno con peor promedio:\t%d\t%5.2f", MEMAT, MEPRO);/* imprime el peor promedio*/

 }
