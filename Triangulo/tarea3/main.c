/*
 * Practica 1.1: Area de un triangulo
 * Brandon Ponce Aragon
 *31/01/19
 * Programa que calcula el area de un triangulo con valores dados por el usuario
 * Datos de entrada: Base y Altura del triangulo
 * Datos de salida: Area del triangulo
 * Conclusiones:Hay varias formas de obtener el resultado,
 * ya sea guardar en una variable el resultado, o arrojar solo la operacion
 *
*/
#include <stdio.h>
#include <math.h>
int main() {
   float base;
   float altura;
   float c;
   printf("cual es la base de su triangulo?");
   scanf("%2f", &base);
   printf("cual es la altura de su triangulo?");
   scanf("%2f", &altura);
   c = (base*altura)/2;
   printf("el area de su triangulo con base %2f y altura %2f es : %2f", base,altura, c);
   system("pause");

   return 0;



}


