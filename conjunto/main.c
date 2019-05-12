/*Moran Garcia Fernando Rene
 * Soto Martinez Christian Omar
 * Salgado Cortez Edgar Isai
 * Ponce Aragon Brandon Alejandro
 */
#include <stdio.h>

int main(){
    int sum=0, countimp =0, num;
    while(countimp <=7){
    printf("deme su numero\n");
    scanf("%i",&num);
    if(num %2==0){
        sum+=num;
    }
    else if(num%2!=0){
        sum+=num;
        countimp++;

    }

    }
    printf("la suma de sus numeros es %i",sum);

    return 0;
}