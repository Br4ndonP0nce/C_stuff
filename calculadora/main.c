/*Brandon Ponce Aragon
 * practica 13
 * Calculadora
 * Programa que recibe 2 numeros y da opciones al usuario para trabajar con diversas operaciones sobre ellos,
 * ademas de que permite al operador hacer cuantas operaciones desee hasta que diga que no al programa
 * Datos de entrada:numeros enteros
 * datos de salida:dependiendo de la opcion deseada
 * suma-->1
   resta --> 2
   multiplicacion --> 3
   division --> 4
   modulo --> 5
   potencia -->
   Formulas: suma resta multiplicacion division modulo y potencia
 */
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int a;
    int b;
    int seleccion;
    int salida;
    char exit[2];
    while (salida == 0) {
    printf("inserte su primer numero\n");
    scanf("%i", &a);
    printf("inserte su segundo numero");
    scanf("%i", &b);
    printf("que desea hacer con sus numeros\n");
    printf("suma-->1\nresta --> 2\nmultiplicacion --> 3\ndivision --> 4\nmodulo --> 5\npotencia --> 6\n");

    scanf("%i", &seleccion);

        switch (seleccion) {
            case 1:
                printf("%d\n", a + b);
                printf("desea salir?");
                scanf("%s", &exit);
                if(strcmp(exit,"si")==0){
                    return 0;
                }

                break;
            case 2:
                printf("%d\n", a - b);
                printf("desea salir?");
                scanf("%s", &exit);
                if(strcmp(exit,"si")==0){
                    return 0;
                }

                break;
            case 3:
                printf("%d\n", a * b);
                printf("desea salir?");
                scanf("%s", &exit);
                if(strcmp(exit,"si")==0){
                    return 0;
                }

                break;
            case 4:
                printf("%d\n", a / b);
                printf("desea salir?");
                scanf("%s", &exit);
                if(strcmp(exit,"si")==0){
                    return 0;
                }
                break;
            case 5:
                printf("%d", a % b);
                printf("desea salir?");
                scanf("%s", &exit);
                if(strcmp(exit,"si")==0){
                    return 0;
                }
                break;
            case 6:
                printf("%f\n", pow(a, b));
                printf("desea salir?");
                scanf("%s", &exit);
                if(strcmp(exit,"si")==0){
                    return 0;
                }
                break;
            default:
                printf("fuera de rango\n");
                system("pause\n");
        }



        }


        }


