/*Moran Garcia Fernando Rene
 * Soto Martinez Christian Omar
 * Salgado Cortez Edgar Isai
 * Ponce Aragon Brandon Alejandro
 */
#include <stdio.h>

int main() {
    float limite,num,sum;
    int count;
    printf("cuantos elementos desea\n");
    scanf("%f",&limite);
    printf("que numero desea utiliza?\n");
    scanf("%f",&num);
    for(count = 0;count <=limite;count ++){
        printf("%f+",count/num);
        sum += count/num;

    }
    printf("\nla suma de su serie es %0.3f",sum);
    return 0;
}