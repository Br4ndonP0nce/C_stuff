/*Moran Garcia Fernando Rene
 * Soto Martinez Christian Omar
 * Salgado Cortez Edgar Isai
 * Ponce Aragon Brandon Alejandro
 */
#include <stdio.h>
#include <string.h>
int main() {
    int inicio,final,value,salto,salida=1;
    char exit[5];

    init: while(salida) {
        printf("Inserte el valor inicial\n");
        scanf("%i", &inicio);
        printf("inserte el valor final\n");
        scanf("%i", &final);
        printf("inserte el salto\n");
        scanf("%i", &salto);
        value = inicio;
        while (value <= final) {
            printf("%i\n", value);
            value += salto;

        }
        printf("desea repetir?");
        scanf("%s",exit);
        if(strcmp(exit,"no")==0){
            salida =0;
            system("pause");
        }
        else if(strcmp(exit,"si")==0){
            system("cls");
            goto init;
        }
    }

    return 0;
}