#include <stdio.h>
#include <string.h>
int main() {
    int selector;
    int asc;
    char caracter[4];
    printf("si desea mostrar el caracter en ASCII presione 1 y luego enter\n"
           "o si desea obtener un decimal presione 2 y luego enter\n");
    scanf("%d",&selector);

    if(selector == 1) {
        system("cls");
        printf("su seleccion es mostrar el codigo ascii, puede ingresar un numero del 0 hasta el 255\n");
        scanf("%d", &asc);
        if (asc >= 0 && asc <= 255) {
            printf("su valor *%d* es en asci *%c*\n", asc, asc);
            system("pause");
        } else {
            printf("valores fuera de rango\n");
            system("pause");
        }
    }
    else if(selector == 2){
        system("cls");
        printf("sus seleccion es ingresar un caracter y obtener en decimal su codigo ascii\n");
        scanf("%s", caracter);
        printf("su caracter %s posee un valor decimal %d\n",caracter,caracter);
        system("pause");
    }
    return 0;
}