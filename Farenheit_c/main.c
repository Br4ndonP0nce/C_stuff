/*Actividad 1.8:Farenheit Centigrados
*Brandon Ponce Aragon
*31/01/19
* Programa que convierte una cantidad en grados centigrados ingresada por el usuario a grados Farenheit
*Datos de entrada:Grados Farenhit
* Datos de salida:Grados centogrados
* Conclusiones:hay dos formas de representar el 5/9 ya sea en su forma decimal o multiplicando
*todo por 5 y dividiendolo entre 9
*/
#include <stdio.h>

int main() {
    float grados;
    printf("inserte la temperatura a convertir en grados centigrados\n");
    scanf("%f", &grados);
    printf("la temperatura es %f",(grados-32)*0.55);
    system("pause");
    return 0;
}