#include<stdio.h>
int main(){
    int num1,num2,suma,cont,des;
    des =1;
    while(des ==1){
        cont =0;
        suma =0;
        printf("ingrese un numero");
        scanf("%d",&num1);
        printf("ingrese otro numero para multiplicarlos");
        scanf("%d",&num2);
        if(num2<0){
            num1 = num1-num1-num1;
            num2 = num2-num2-num2;
        }
        while(cont<num2){
            suma += num1;
            cont++;
        }
        printf("el resultado de la multiplicacion es %d\n",suma);
        printf("si quiere repetir el programa ingrese el numero 1 si no ingrese el numero 2\n");
        scanf("%d",&des);
    }
}
