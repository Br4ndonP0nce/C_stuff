/*Actividad 1.7: Centigrados a Farenheit
 *Brandon Ponce Aragon
 *31/01/19
 * Programa que convierte una cantidad en grados centigrados ingresada por el usuario a grados Farenheit
 *Datos de entrada:Grados centigrados
 * Datos de salida:Grados Farenhit
 * Conclusiones:es importante saber que si la temperatura es 0
 * el programa no puede calcular por si sola el numero, ya que no puede decir entre 0
 */
#include <stdio.h>
int main(){
    float grados;
    printf("inserte su temperatura a convertir a grados Farenheit\n");
    scanf("%f", &grados);
    if(grados == 0){
        printf("la temperatura es 35\n");
        system("pause");
    }
    else{
    printf("la temperatura %f en grados Farenheit es: %f\n",grados,((grados*1.8)+32));
    system("pause");}
    return 0;
}