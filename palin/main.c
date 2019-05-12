
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Realizar un programa que diga si se introdujo un palindromo o no
en caso de que sea asi mostrar cuantos palindromos se introdujeron*/

int main (){
    //Instruccion que pone acentos y caracteres especiales
    setlocale (LC_ALL, "spanish_mexico");
    //Declaracion de variables
    int i, j, k, n, tam, palindromo=0;
    //Entrada de datos
    printf ("Ingrese el tamaño del arreglo: ");
    scanf ("%d", &tam);
    //Declaracion de arreglos
    char palabra[tam][30], aux[tam][30];

    //Llenado de arreglos
    for (i=0;i<tam;i++){
        printf ("ingresa palabra %d: ", i+1);
        fflush(stdin);
        gets (palabra[i]);

    }

    //Condición que elimina espacios y copia cadenas
    for (i=0;i<tam;i++){
        for (j=0;j<strlen(palabra[i]);j++){
            //Borra espacios
            if (palabra[i][j]==' '){
                k = j;
                n=strlen(palabra[i]);
                while (k<n){
                    palabra[i][k]=palabra[i][k+1];
                    k++;
                }
                n--;
                j--;

            }
            //Copia cadenas
            strcpy(aux[i], palabra[i]);
        }
        //Voltea la palabra
        strrev(aux[i]);
    }

    //compara cadenas
    for (i=0;i<tam;i++){

        if (strcmp(palabra[i],aux[i])==0){
            palindromo++;
        }
    }

    //Salida del programa
    printf ("La cantidad de palindromos es: %d", palindromo);

    return 0;
}