#include <stdio.h>
#define y 0.02
#include <string.h>
/*
 *     Calcular el sueldo neto por horas trabajadas de un profesor bajo las siguientes condiciones:

a)    Si es categoría A gana 60.00 x hora, pero si es B gana 80.00.

b)    A partir de los 5 años de servicio le pagan un bono de antigüedad del 10% del sueldo bruto y cada año dicho bono se incrementa en un 2%,
 hasta llegar al 60%.

c)    Paga impuestos a razón del 3% de su sueldo bruto.

d)    Percibe ayuda por concepto de vivienda, despensa, etc de 5%.

e)    Si tiene crédito INFONAVIT debe pagar el 5% de su sueldo bruto también.


 */

int main() {
    char cat[2];
    int horas;
    float yr_bonus;
    int yrs;
    int sal_b;
    double sal_f;
    char info[2];


    printf("Dependiendo de su categoria su sueldo sera distinto\ncat A = 60$\ncat B = 80$\n");
    scanf("%s", cat);
    if(strcmp(cat,"a")==0){
        system("cls");
        printf("su salario por hora es de 60\n");
        printf("cuantos años lleva en la empresa?\n");
        scanf("%d",&yrs);
        system("cls");
        printf("inserte sus horas trabajadas\n");
        scanf("%d", &horas);
        system("cls");
        printf("tiene infonavit?\n");
        scanf("%s", info);
        system("cls");
        sal_b = horas*60;
        if(yrs >= 5 && yrs <= 30 && strcmp(info,"si")==0){
            sal_f = (sal_b+(sal_b*(y*yrs))+(sal_b*0.5)-(sal_b*0.3)-(sal_b*0.5));
            printf("su salario final es: %f",sal_f);
            system("pause");
        }
        else if(yrs >= 5 && yrs <= 30 && strcmp(info,"no")==0){
            sal_f = (sal_b+(sal_b*(y*yrs))+(sal_b*0.5)-(sal_b*0.3));
            printf("su salario final es: %f",sal_f);
            system("pause");
        }
        else if(yrs<= 5 && strcmp(info,"si")==0 ){
            sal_f = (sal_b+(sal_b*0.5)-(sal_b*0.3));
            printf("su salario final es: %f",sal_f);
            system("pause");
        }
        else if(yrs<= 5 && strcmp(info,"no")==0){
            sal_f = (sal_b+(sal_b*0.5)-(sal_b*0.3));
            printf("su salario final es: %f",sal_f);
            system("pause");
        }



    }
    else if(strcmp(cat,"b")==0) {
        system("cls");
        printf("su salario por hora es de 80");
        printf("cuantos años lleva en la empresa?\n");
        scanf("%d",&yrs);
        system("cls");
        printf("inserte sus horas trabajadas\n");
        scanf("%d", &horas);
        system("cls");
        printf("tiene infonavit?\n");
        scanf("%s", info);
        system("cls");
        sal_b = horas*80;
        if(yrs >= 5 && yrs <= 30 && strcmp(info,"si")==0){
            sal_f = (sal_b+(sal_b*(y*yrs))+(sal_b*0.5)-(sal_b*0.3)-(sal_b*0.5));
            printf("su salario final es: %f",sal_f);
            system("pause");
        }
        else if(yrs >= 5 && yrs <= 30 && strcmp(info,"no")==0){
            sal_f = (sal_b+(sal_b*(y*yrs))+(sal_b*0.5)-(sal_b*0.3));
            printf("su salario final es: %f",sal_f);
            system("pause");
        }
        else if(yrs<= 5 && strcmp(info,"si")==0 ){
            sal_f = (sal_b+(sal_b*0.5)-(sal_b*0.3));
            printf("su salario final es: %f",sal_f);
            system("pause");
        }
        else if(yrs<= 5 && strcmp(info,"no")==0){
            sal_f = (sal_b+(sal_b*0.5)-(sal_b*0.3));
            printf("su salario final es: %f",sal_f);
            system("pause");
        }
    }
    else{
        printf("fuera de rango");
        system("pause");
    }

    return 0;
}