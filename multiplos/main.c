/*Moran Garcia Fernando Rene
 * Soto Martinez Christian Omar
 * Salgado Cortez Edgar Isai
 * Ponce Aragon Brandon Alejandro
 */
#include <stdio.h>

int main() {
    int range,count=1,a =2,b =5;
    printf("hasta que numero desea obtener los multiplos?\n");
    scanf("%i", &range);
    for(count = 1; count <= range;count ++) {

        if(count % a == 0 && count%b ==0){
            printf("el numero %i es multiplo de 2 y 5\n",count);

        }
    }
    return 0;
}