#include <stdio.h>
#include <ctype.h>


/* Funciones para el manejo de caracteres de la biblioteca ctype.h. */

void main(void)
{
    char p1;
    printf("\nIngrese un caracter para analizar si este es un digito :");
    p1 = getchar();
    if (isdigit (p1))  /* La funci�n isdigit regresa 1 si p1 es un d�gito y 0 en caso contrario. */
        printf("%c es un digito \n", p1);
        else
        printf("%c no es un digito \n", p1);
    fflush(stdin);
    printf("\nIngrese un caracter para examinar sie ste es una letra: ");
    p1 = getchar();
    if (isalpha (p1))  /* La funci�n isalpha regresa 1 si p1 es una letra y 0 en caso contrario. */
        else
        printf("%c no es una letra \n", p1);
    fflush(stdin);
    printf("\nIngrese unc aracter para examinar si este es una letra minuscula: ");
    p1 = getchar();
    if (isalpha (p1))
        if (islower (p1))  /* La funci�n islower regresa 1 si p1 es una letra min�scula y 0 en caso contrario.
La funci�n isupper, por otra parte, regresa 1 si p1 es una letra may�scula y 0 en caso contrario. */
        printf("%c es una letra minuscula \n", p1);
    else
        printf("%c no es una letra minuscula \n", p1);
    else
        printf("%c no es una letra \n", p1);
    fflush(stdin);
    printf("\nIngrese una letra para convertirla de mayuscula a miniscula: ");
    p1 = getchar();
    if (isalpha (p1))
        if (isupper(p1)) /* La funci�n tolower convierte de may�scula a min�scula. Si laletra es min�scula no la modifica.
         La funci�n toupper, por otra parte, convierte de min�scula a may�scula. Si la letra es may�scula no la modifica. */
        printf("%c fue convertida de mayuscula a miniscula \n", tolower(p1));
    else
        printf("%c es una letra minuscula \n", p1);
    else
        printf("%c no es una letra \n", p1);
}
