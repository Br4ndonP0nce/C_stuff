
 * /*Brandon Ponce Aragon
 practica 23 Figuras con asteriscos
 Programa que contiene un menu con opciones para mostrar ciertas figuras hechas a base de astericos
 Formulas: n/a
 Datos de entrada: Seleccion de ejercicio:
 Datos de salida: figura



 */
#include <stdio.h>
int main() {
    int seleccion, left, right = 0, a = 1, x, i, j;;
    while (seleccion != 0) {
        printf("a donde quieres ir?");
        scanf("%i", &seleccion);
        switch (seleccion) {
            case 1:

                while (a <= 4) {
                    printf("\n");
                    for (left = 0; left <= 20; left++) {
                        printf("*");
                        if (left == 20) {
                            printf("\n");
                            for (right = 0; right <= 20; right++) {
                                printf("*");

                            }
                        }

                    }
                    a++;

                }
                printf("\n");
                system("pause");
                break;


            case 2:

                for (i = 1; i <= 10; i++) {


                    if (i == 1 || i == 10)
                        for (j = 1; j <= 25; j++) {
                            printf("*");
                        }
                    else {
                        {
                            printf("*");
                        }
                        for (j = 1; j <= 25 - 2; j++)
                            printf(" ");
                        printf("*");
                    }

                    printf("\n");

                }
                system("PAUSE");
                break;


            case 3:
                for (i = 0; i <= 5; i++) {
                    for (j = 0; j < i; j++)
                        printf("*");
                    printf("\n");
                }
            case 4:


                    return 0;
                }
        }


    }
}
