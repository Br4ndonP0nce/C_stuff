/*Brandon Ponce
 * Promedio de numeros y Mayor y Menor
 * 02/26/2019
 * Porgrama que dados indeterminados numeros calcula los mayores y menores
 * Formula: modulo y operadores logicos
 * Datos de entrada:  n numeros de numeros
 * Datos de salida: Suma, Promedio, Cantidad de numeros ingresados, Numeros menor y mayor
 *
 *
 */
#include <stdio.h>

int main() {
    int numeros,sum=0,cont=0,max=0,min=0;
    float prom;

    while(1){
    printf("ingrese un numero");
    scanf("%i",&numeros);
    if(numeros !=0){
        cont++;
        sum+=numeros;
        prom = sum;
        if(max == 0 ){
        max = numeros;}
        else if(min ==0){
        min = numeros;}
        if(numeros > max){
            max = numeros;
        }
        else if(numeros< min){
            min = numeros;
        }
    }
    else{
       printf("Usted ingreso %i numeros\nla suma de sus numeros es %i\ny el promedio es %.2f\n",cont,sum,prom/cont);
       printf("num mayor %i, num menor %i\n",max,min);
       system("pause");

        return 0;
    }




    }
    }