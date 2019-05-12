/*Brandon Ponce Aragon
 * Practica 14 Tablas de multiplicar
 * 19/02/19
 * Programa que dado un numero por el usuario y la cantidad de tablas que quiere
 * arroja las tablas de multiplicar de dicho numero
 * Formulas:Tablas de multiplicar
 * Comentarios: Pese a que se solicito solo hacerlo hasta el 10, mi programa abre la opcion al usuario para hacer cuantas tablas se quieran
 */
#include <stdio.h>
#include <string.h>
int main() {
    int cont,tabla,valor;
    int exit;


    while(1){
        cont = 0;
    printf("que tabla quiere? \n");
    scanf("%i",&tabla);
    printf("hasta que numero la quiere");
    scanf("%i", &valor);
        while(cont <= valor){
        printf("%i*%i=%i\n",tabla,cont,tabla*cont);
        cont++;}
        printf("desea salir? (presione 1 para si, 0 para no)");
        scanf("%i", &exit);
        if(exit == 1){
            system("pause");
            return 0;

        }
        else{


        }
    }


}