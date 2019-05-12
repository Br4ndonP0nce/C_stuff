/*Actividad 1.5 Volumen de una esfera
 * Brandon Ponce Aragon
 *Este programa calcula el volumen de una esfera con radio dado por el usuario
 * Datos de entrada:radio
 * Datos de salida:volumen
 * Conclusiones: usando de nuevo define es más util como y rapido utilizar numeros grandes y complejos como pi
 */
#include <math.h>
#include <stdio.h>
#define PI 3.1416
int main() {
    float radio;
    printf("inserte el radio de su esfera");
    scanf("%f", &radio);
    printf("el volumen de su esfera con radio %f es:\n%f\n", radio,(4*PI*pow(radio,3))/3);
    system("pause");
    return 0;
}