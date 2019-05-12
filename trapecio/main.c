/*Practica 1.1: Area de un trapecio
 * Brandon Ponce Aragon
 *31/01/19
 * Programa que calcula el area de un trapecio con valores dados por el usuario
 * Datos de entrada: Base menor y mayor y Altura del triangulo
 * Datos de salida: Area del trapecio
 * Conclusiones:Es importante respetar la jerarquia de operaciones
 *
 *
 */
#include <stdio.h>
int main() {
    int altura,base1,base2;

    printf("inserte la altura de su trapecio: ");
    scanf("%d", &altura);
    printf("escriba la medida de la base menor");
    scanf("%d",&base1);
    printf("inserte la medida de la base mayor");
    scanf("%d", &base2);
    printf("el area de su trapecio de bases: Mayor %d y Menor %d y de altura %d es: %d \n"
    ,base1,base2,altura, altura*((base1+base2)/2));
    system("pause");
}