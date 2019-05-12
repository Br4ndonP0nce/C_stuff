/*Brandon Ponce Aragon
 * Practica 9
 * 07/02/2019
 * Programa que toma las calificaciones de un alumno y muestra si estás aprobado o reprobado
 * Datos de entrada: Calificaciones ingresadas por el usuario
 * Datos de salida: Aprobado/reprobado y cal final
 * Formulas: Regla de 3
 *Comentarios: quitar los comentarios en el codigo permiten al usuario ver su calificacion por rubro
 */
#include <stdio.h>
//40 40 20
int main() {

    float p_parcial;
    float s_parcial;
    float proy;
    float cal;
    printf("inserte su calificacion en el primer parcial\n");
    scanf("%f", &p_parcial);
    //printf("calificaion 1er parcial %f\n", (p_parcial * 40) / 100);
    printf("inserte su calificacion en el segundo parcial\n");
    scanf("%f", &s_parcial);
    //printf("calificaion 2do parcial %f\n", (s_parcial * 40) / 100);
    printf("inserte su calificaion de proyecto\n");
    scanf("%f", &proy);
    //printf("su calificacion en el proyecto es: %f\n", (proy * 20) / 100);
    printf("cal final %f\n\n", ((p_parcial * 40) / 100) + ((s_parcial * 40) / 100) + ((proy * 20) / 100));
    cal = ((p_parcial * 40) / 100) + ((s_parcial * 40) / 100) + ((proy * 20) / 100);

    if (cal >= 60) {
        printf("aprobado\n");

        }
    else {
            printf("reprobado\n");
        }
        system("pause");
        return 0;

}