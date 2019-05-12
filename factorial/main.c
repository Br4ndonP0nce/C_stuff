/*Brandon Ponce Aragon
 * Practica 16
 * 02/21/19
 * factorial de un numero
 * Programa que dado un numero por el usuario arroja el factorial del mismo, y el progreso
 * Formulas= factorial
 * Comentarios:el uso de for ayuda con el desglose del numero.
 *
 */
#include <stdio.h>

int main() {
    int num,resultado=1,cont;
    int con,contrue,exit;
    printf("deme su numero\n");
    scanf("%i",&num);
    if(num<=0){
        printf("no puede usar negativos\n");
        system("pause");
        return 0;
    }
    con = num;
    contrue= num;
    while(1) {
        for (cont = 0; cont < contrue - 1; cont++) {
            if (resultado < num) {
                resultado *= num;
            }
            num -= 1;
            resultado *= num;
            printf("%ix%i=%i ", con, num, resultado);

            con = resultado;

        }
        printf("\ndesea salir? 1 para si 2 para no\n");
        scanf("%i",&exit);
        if(exit==1){
            return 0;
        }
        system("pause");
    }

}