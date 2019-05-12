/*Brandon Ponce Aragon
 * Fibonacci sequence Practica 15
 * 02/19/2019
 * programa que arroja los primeros 20 numeros de la serie de fibonacci
 * Formulas: Secuencia de Fibonacci
 * Comentarios: El uso de For resulta mejor para este problema ya que sabes exactamente donde va a terminar
 */
#include<stdio.h>

int main() {
    int cont;
    int  numero=0,sig=1;

    int resul;
    printf("0,1,");
    for(cont = 1; cont<=18;cont++)
    {


        resul = numero+sig;
        //printf("%i,",numero);

        printf("%i,",resul);
        numero = sig;
        sig = resul;







    }

    return 0;
}