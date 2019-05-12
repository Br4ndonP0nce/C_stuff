/*Brandon Ponce Aragon
 * Practica 10 tipo de triangulo
 * 07/02/2019
 * Programa que lee los lados de un triangulo y arroja el tipo de triangulo del que se habla
 * Datos de entrada: lados del triangulo
 * Datos de salida: tipo de triangulo
 * No se usaron formulas simplemente las propiedades de 3 tipos de triangulos
 * Comentarios: es importante saber que las expresiones de comparacion solo pueden comparar dos variables a la vez
 *
 *
 */
#include <stdio.h>

int main() {
    float lado1;
    float lado2;
    float lado3;
    printf("inserte los lados del triangulo\n");
    scanf("%f", &lado1);
    scanf("%f",&lado2);
    scanf("%f",&lado3);
    if(lado1 == lado2 && lado1 ==lado3 && lado2 == lado3){
        printf("su triangulo es equilatero\n");
        system("pause\n");
    }


    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("su triangulo es isoceles\n");
            system("pause\n");}

    else{
        if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
            printf("su triangulo es escaleno\n");
            system("pause");}
}
