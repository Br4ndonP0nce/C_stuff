/*
 * Practica 1.1: Area de un cuadrado
 * Brandon Ponce Aragon
 *31/01/19
 * Programa que calcula el area de un cuadrado con valores dados por el usuario
 * Datos de entrada: lado del cuadrado
 * Datos de salida: Area del cuadrado
 *Conclusiones:el codigo puede hacerse más corto utilizando la libreria math y la funcion pow
 *
*/
#include <stdio.h>
#include <math.h>
int main() {
    float lado;
    printf("inserte la medida del lado de su cuadrado");
    scanf("%02f", &lado);
    printf("el cuadrado con lado %02f tiene de area: %02f\n", lado, pow(lado,2));
    system("pause");
    return 0;
}