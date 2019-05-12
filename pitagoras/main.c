/*Brandon Ponce Aragon
 * Tabla Pitagorica 22
 * 03/07/2019
 * Programa que arroja la tabla pitagorica hasta un numero dado en el codigo
 * Datos de entrada: numero x
 * Datos de salida: tabla pitagorica
 *
 *
 */
#include <stdio.h>

int main() {
    int x,y;
    printf("  x|  1   2   3   4   5   6   7   8   9   10\n");
    printf("   -----------------------------------------\n");


    for(x=1;x<=10;x++){
        printf("%3i|",x);
        for(y=1;y<=10;y++){
            //printf("%i ",x);

            printf("%3i ",x*y);
        }

        printf("\n");

    }
    printf("\n");
    system("pause");
    return 0;
}