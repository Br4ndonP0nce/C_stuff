#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <clocale>
#include "conio.h"
#include "math.h"
using namespace std;
//Funciones Prototipos

char *valida(char *valor);
char *valida2(char *valor2);
char menu_basicos();
char *valida(char *valor);
float *suma(float *n1,float *n2);
float *resta(float *n1,float *n2);
float *mult(float *n1,float *n2);
float *div(float *n1,float *n2);
float *validacionnum1(char *ptr);
float *porcentaje(float *num1, float *num2);
float *potencia(float *n1,float *n2);
int * factorial(float *number);
double *seno(double *n1);
double *coseno(double *n1);
double *tangente(double *n1);
double *raiz(double *n1);
void bin(int *n1);
void BinaDec(int *n1);
void Octal(int *n1);
void octalDec(int *n1);
void Hexa(int *n1);
void Hexadec(char hex[30]) ;


double *validaciontrigo(char *ptr);
int *validacionint(char *ptr);

float n1=0,n2=0;
char opc,numero1[1000],numero2[1000];
double numtri;
int number;
float *ptr1,*ptr2;
char *ptr3,*ptr6=NULL,*ptr7=NULL; //punteros 1, 2 y 3
double *ptr4;
int *ptr5;
int band=0;



int main (){// Inicio de MAIN

    do{
        ptr1=&n1; //puntero ligado a numero1
        ptr2=&n2; //puntero ligado a numero2
        //ptr3=&opc;//puntero de opcion
        ptr4=&numtri;
        ptr5=&number;
        ptr6=numero1;
        ptr7=numero2;

        menu_basicos();

        switch (opc) {
            case 'A':case'a':
                //entrada de datos
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                n1=*validacionnum1(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                gets(numero2);
                n2=*validacionnum1(ptr7);
                cout<<"El resultado es: "<<*suma(ptr1,ptr2)<<endl;
                system("pause");
                break;

            case 'B':case'b':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                n1=*validacionnum1(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                gets(numero2);
                n2=*validacionnum1(ptr7);
                cout<<"Numero: "<<n1<<endl;
                cout<<"puntero: "<<*ptr1<<endl;
                cout<<"El resultado es: "<<*resta(ptr1,ptr2)<<endl;
                system("pause");
                break;

            case 'C':case'c':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                n1=*validacionnum1(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                gets(numero2);
                n2=*validacionnum1(ptr7);
                cout<<"El resultado es: "<<*mult(ptr1,ptr2)<<endl;
                system("pause");
                break;

            case 'D':case'd':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                n1=*validacionnum1(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                gets(numero2);
                n2=*validacionnum1(ptr7);
                cout<<"El resultado es: "<<*div(ptr1,ptr2)<<endl;
                system("pause");
                break;

            case 'E':case'e':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                n1=*validacionint(ptr6);
                cout<<"El resultado es: "<<*factorial(ptr1)<<endl;
                system("pause");
                break;

            case 'F':case'f':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                n1=*validacionnum1(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                gets(numero2);
                n2=*validacionnum1(ptr7);
                cout<<"El resultado es: "<<*porcentaje(ptr1,ptr2)<<endl;
                system("pause");
                break;

            case 'G':case'g':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                numtri=*validaciontrigo(ptr6);
                cout<<"El resultado es: "<<*seno(ptr4)<<endl;
                system("pause");
                break;

            case 'H':case'h':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                numtri=*validaciontrigo(ptr6);
                cout<<"El resultado es: "<<*coseno(ptr4)<<endl;
                system("pause");
                break;

            case 'I':case'i':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                numtri=*validaciontrigo(ptr6);
                cout<<"El resultado es: "<<*tangente(ptr4)<<endl;
                system("pause");
                break;

            case 'J':case'j':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                n1=*validacionnum1(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                gets(numero2);
                n2=*validacionnum1(ptr7);
                cout<<"El resultado es: "<<*potencia(ptr1,ptr2)<<endl;
                system("pause");
                break;

            case 'K':case'k':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                numtri=*validaciontrigo(ptr6);
                cout<<"El resultado es: "<<*raiz(ptr4)<<endl;
                system("pause");
                break;

            case 'L':case'l':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                number=*validacionint(ptr6);
                bin(ptr5);
                system("pause");
                break;

            case 'M':case'm':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                number=*validacionint(ptr6);
                BinaDec(ptr5);
                system("pause");
                break;

            case 'N':case'n':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                number=*validacionint(ptr6);
                Octal(ptr5);
                system("pause");
                break;

            case 'x':case 'X':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                number=*validacionint(ptr6);
                octalDec(ptr5);
                system("pause");
                break;

            case 'P':case'p':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                gets(numero1);
                number=*validacionint(ptr6);
                cout<<"El resultado es: ";
                Hexa(ptr5);
                cout<<endl;
                system("pause");


                break;

            case 'Q':case'q':
                system("cls");
                cout<<" Enter 32-bit Hexadecimal Number : ";
                cin>>numero1;
                Hexadec(ptr6);
                break;
            case '0':
                system("cls");
                cout<<"ADIOS"<<endl;
                return 0;
                break;

            default:
                cout<<"Invalid"<<endl;
                system("pause");
                break;
        }

    }while(band!=1);
    return 0;
    //fin de main
}


//funcion para mostrar menu
char menu_basicos(){
    system("cls");
    cout<<endl<<"CALCULADORA"<<endl<<endl
        <<"Seleccione una Opcion"<<endl
        <<"_______________________"<<endl<<endl
        <<"A)Suma"<<endl
        <<"B)Resta"<<endl
        <<"C)Multiplicacion"<<endl
        <<"D)Division"<<endl
        <<"E)Factorial"<<endl
        <<"F)Pocentaje"<<endl
        <<"G)Seno"<<endl
        <<"H)Coseno"<<endl
        <<"I)Tangente"<<endl
        <<"J)Potencia"<<endl
        <<"K)Raiz cuadrada"<<endl
        <<"l)Decimal-Binario"<<endl
        <<"M)Binario-Decimal"<<endl
        <<"N)Decimal-Octal"<<endl
        <<"O)Octal-Decimal"<<endl
        <<"P)Decimal-Hexadecimal"<<endl
        <<"Q)Hexadecimal-Decimal"<<endl
        <<"0)Salir"<<endl;
    opc=getch();
    return opc;
}


float *suma(float *n1,float *n2){
    float *r=(float*)malloc(sizeof(float));
    *r=(*n1)+(*n2);
    return r;
}
float *resta(float *n1,float *n2){
    float *r=(float*)malloc(sizeof(float));
    *r=(*n1)-(*n2);
    return r;
}
float *mult(float *n1,float *n2){
    float *r=(float*)malloc(sizeof(float));
    *r=(*n1)*(*n2);
    return r;
}
float *div(float *n1,float *n2){
    float *r=(float*)malloc(sizeof(float));
    *r=(*n1)/(*n2);
    return r;
}
float *potencia(float *n1,float *n2) {
    float *res=(float*)malloc(sizeof(float));
    *res=1;
    for(int i=1;i<=*n2;i++)
        *res *= *(n1);
    return(res);
}
float *porcentaje(float *number1, float *number2){
    float *r=(float*)malloc(sizeof(float));
    *r=(*number1)*(*number2/100);
    cout<<"El porcentaje es: ";
    return r;
}
int * factorial(float *number){
    int *res= (int*)malloc(sizeof(int));
    *res=*number;
    for(int i=1; i<*number; i++){
        *res=*(res)*i;
    }
    return res;
}

double *seno(double *n1){
    double *r=(double*)malloc(sizeof(double));
    *r=sin(*n1);
    return r;
}
double *coseno(double *n1){
    double *r=(double*)malloc(sizeof(double));
    *r=cos(*n1);
    return r;
}
double *tangente(double *n1){
    double *r=(double*)malloc(sizeof(double));
    *r=tan(*n1);
    return r;

}
double *raiz(double *n1){
    double *r=(double*)malloc(sizeof(double));
    *r=sqrt(*n1);
    return r;
}

void bin(int *n1) {
    string binario = "";
    if (*n1 > 0) {
        while (*n1 > 0)
        {
            if (*n1%2 == 0)
            {
                binario =  "0" +binario;
            }

            else
            {
                binario = "1" + binario;
            }

            *n1 = *n1/2;
        }
    }
    else  {
        binario = "0";
    }
    cout << "El Numero en binario es: " << binario<<endl;
}
void BinaDec(int *n1){
    int Bin, Dec = 0, base = 1, base2;
    Bin = *n1;
    while (*n1 > 0)
    {
        base2 = *n1 % 10;
        Dec = Dec + base2 * base;
        *n1 = *n1 / 10 ;
        base = base * 2;
    }
    cout<<"El numero en Decimal es = "<<Dec<<endl;

}
void Octal(int *n1){
    int r, i = 1, octal = 0;
    while (*n1!= 0)
    {
        r = *n1 % 8;
        *n1/= 8;
        octal += r*i;
        i *= 10;
    }
    cout<<"La respuesta es "<<octal<<endl;
}
void octalDec(int *n1){
    int decimal = 0, i = 0, r;
    while (*n1 != 0){
        r = *n1 % 10;
        *n1 /= 10;
        decimal += r * pow(8, i);
        ++i;
    }
    cout<<"La conversion es: "<<decimal<<endl;
}
void Hexa(int *n1){
    // char array to store hexadecimal number
    char hex[100];
    int i = 0;
    while(*n1!=0){
        int temp = 0;
        temp = *n1 % 16;
        if(temp < 10){
            hex[i] = temp + 48;
            i++;
        }
        else{
            hex[i] = temp + 55;
            i++;
        }
        *n1 = *n1/16;
    }
    for(int j=i-1; j>=0; j--)
        cout<<hex[j];
}
void Hexadec(char hex[30]) {
    int ban;
    char *hexstr;
    int tam = 0;
    const int base = 16;
    int decnum = 0;
    int i;

    for (hexstr = hex; *hexstr != '\0'; hexstr++) {
        tam++;
    }
    hexstr = hex;
    for (i = 0; *hexstr != '\0' && i < tam; i++, hexstr++) {
        if (*hexstr >= 48 && *hexstr <= 57) {

            band=1;
            decnum += (((int)(*hexstr)) - 48) * pow(base, tam - i - 1);

        }
        else if ((*hexstr >= 65 && *hexstr <= 70))  {
            decnum += (((int)(*hexstr)) - 55) * pow(base, tam - i - 1);

        }
        else if (*hexstr >= 97 && *hexstr <= 102) {

            band=1;
            decnum += (((int)(*hexstr)) - 87) * pow(base, tam - i - 1);

        }
        else {
            cout<<"Numero hexadecimal Invalido "<<endl;
            decnum=0;

            break;


        }
    }
    cout<<"La conversion es: "<<decnum<<endl;
    system("pause");
}

char*valida(char *valor){
    char *ptr=NULL;
    if(isalpha(*valor) )
        ptr=valor;
    return ptr;
}
float *validacionnum1(char *ptr){
    float *res=(float*)malloc(sizeof(float));
    if(valida(ptr)!= nullptr){
        cout<<"El valor se tomara como 0"<<endl;
        *res=0;
    }
    else{
        cout<<"Bien hecho"<<endl;
        *res=atof(ptr);

    }
    return res;
}
double *validaciontrigo(char *ptr){
    double *res=(double*)malloc(sizeof(double));
    if(valida(ptr)!=NULL){
        cout<<"El valor se tomara como 0"<<endl;
        *res=0;
    }
    else{
        cout<<"Bien hecho"<<endl;
        *res=atof(ptr);

    }
    return res;
}
int *validacionint(char *ptr){
    int *res=(int*)malloc(sizeof(int));
    if(valida(ptr)!=NULL){
        cout<<"El valor se tomara como 0"<<endl;
        *res=0;
    }
    else{
        *res=atoi(ptr);
    }
    return res;

}
