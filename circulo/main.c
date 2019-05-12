/*
 * Practica 1.1: Area de un circulo
 * Brandon Ponce Aragon
 *31/01/19
 * Programa que calcula el area de un circulo con valores dados por el usuario y una constante llamada PI
 * Datos de entrada: radio del circulo
 * Datos de salida: Area del circulo
 *Conclusiones:el uso de la constante PI hace mas fadcil la ejecucion del programa ya que se tiene como variable global
 *
*/
#include <stdio.h>
#include <math.h>
#define PI  3.1416
int main() {
    int radio;
    printf("escriba el radio del circulo");
    scanf("%d", &radio);
    printf("el area del circulo con radio %d es: %f",radio,PI*pow(radio,2) );
    system("pause");
    return 0;
}