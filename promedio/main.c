/*Practica 1.6 Promedio de 3 numeros
 * Brandon Alejandro Ponce Aragon
 * 31/01/19
 * Este programa recibe 3 numeros cualesquiera ingresados por el usuario , y devuelve el promedio de los 3
 * Datos de entrada: 3 numeros
 * Datos de salida: Promedio
 * Conclusiones:Resulta ser algo ineficiente hacer solo el problema para que funcione con 3 numeros
 *
 *
 */
#include <stdio.h>

int main() {
    float a,b,c;
    float prom;
    printf("inserte su primer numero\n");
    scanf("%f", &a);
    printf("inserte su segundo numero\n");
    scanf("%f", &b);
    printf("inserte su 3er numero\n");
    scanf("%f", &c);
    prom = (a+b+c)/3;
    printf("el promedio de sus sus numeros es %f\n", prom);
    system("pause");

}