/*Brandon Ponce Aragon
 * Practica 12 Ordenar 3 numeros
 *14/02/19
 * Programa que dados tres numeros los ordena de manera ascendente
 * Datos de entrada: 3 numeros enteros
 * Datos de salida: los mismos 3 numeros ordenados
 * Formula:
 * Comentarios:El uso correcto de enunciados de comparacion es importante
 *
 */

#include <stdio.h>

int main() {
    int a,b,c;
    printf("deme su primer numero");
    scanf("%d",&a);
    printf("deme su segundo numero");
    scanf("%d", &b);
    printf("deme su tercer numero");
    scanf("%d",&c);
    if(a<= b && a<=c){
        if(b<=c){
        printf("%d,%d,%d\n",a,b,c);
        system("pause");
        }
        else{
            printf("%d,%d,%d\n",a,c,b);
            system("pause");

        }

    }
    else if(b<= a && b<=c){
        if(a<=c){
            printf("%d,%d,%d\n",b,a,c);
            system("pause");
        }
        else
            printf("%d,%d,%d\n",b,c,a);
            system("pause");

        }
    else if(c<= a && c<=b){
        if(b<=a){
            printf("%d,%d,%d\n",c,b,a);
            system("pause");
        }
        else
            printf("%d,%d,%d\n",c,a,b);
            system("pause");

    }
    return 0;
    }

