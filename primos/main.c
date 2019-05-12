/*Brandon Ponce Aragon
 * Numeros primos
 * Programa que dado un rango del 2 al definido por el usuario entrega los numeros primos
 * Formulas: N/A
 * Datos de entrada. limite
 * datos de salida :numeros primos del 0 al limiye
 */
#include <stdio.h>

int main() {
    int limite, n, d;
    int primo;

    printf("Cuantos primos desea mostrar: ");
    scanf("%d", &limite);

    n = 2;
    while (limite > 0) {


        primo = 1;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                primo = 0;
                break;
            }
        }


        if (primo) {
            printf("%d ", n);
            limite--;
        }
        n++;
    }

    printf("\n");
    system("pause");
    return 0;
}