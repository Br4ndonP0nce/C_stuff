/*Brandon Ponce Aragon
 * 24/02/2019
 * MCD de dos numeros con el metodo de Euclides
 * Programa que dados 2 numeros por el usuario arroja el MCD
 * Formula: Teorema de Euclides
 * Comentarios:El problema suena mas complejo de lo que en realidad es.
 *
 *
 */
//Metodo de Euclides
#include "stdio.h"
main() {
    int x, y, comun;
    int n1, n2;
    printf("Digite primer numero \n");
    scanf("%d", &x);
    printf("Digite segundo \n");
    scanf("%d", &y);
    if (x < 0 || y < 0) {
        printf("no puede usar numeros negativos\n");
        system("pause");
        return 0;
    }

    n1 = x;
    n2 = y;

    while (n1 != n2) {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    comun = n1;
    printf("El M.C.D. de %d y %d es %d\n", x, y, comun);
    system("pause");
}