#include <iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cstdio>
#include "conio.h"
#include "math.h"


using namespace std;
//validaciones:
char *is_char(char *valor);
char *is_char(char *valor);
int *catch_binaryxcpt(char *ptr);
int *catch_octexcpt(char *ptr);
float *show_result(char *ptr);
int *catch_octexcpt(char *ptr);
double *catch_trigoxcpt(char *ptr);
int *validacionint(char *ptr);
//operaciones proto
float *suma(float *n1,float *n2);
float *resta(float *n1,float *n2);
float *mult(float *n1,float *n2);
float *div(float *n1,float *n2);
float *porcentaje(float *num1, float *num2);
float *potencia(float *n1,float *n2);
int * factorial(float *number);
double *raiz(double *n1);
//Trigonometria
double *seno(double *n1);
double *coseno(double *n1);
double *tangente(double *n1);
//Comversiones
void bin(int *n1);
void BinaDec(int *n1);
void Octal(int *n1);
void octalDec(int *n1);
void Hexa(int *n1);
void Hexadec(char hex[30]) ;
//Menús
char menu_conversion();
char menu_simple();
int trigonometria();
int main();
//Variables
float n1=0,n2=0;
char arr1[100000],arr2[100000];
double numtri;
int number;
float *ptr1,*ptr2;
char *ptr6= NULL,*ptr7= NULL;
double *ptr4;
int *ptr5,*ptr3;
int band2=0;

char menu_conversion(){

    char user;
    enum menu_conversion{
        DEC_BIN = 1,
        BIN_DEC,
        DEC_HEX,
        HEX_DEC,
        DEC_OCT,
        OCT_DEC,
        SALIR
    };
    do {
        ptr1=&n1;
        ptr2=&n2;
        ptr4=&numtri;
        ptr5=&number;
        ptr6=arr1;
        ptr7=arr2;
        cout << "selecciona una opcion\n"<<
        DEC_BIN<<") Decimal-binario"<<endl<<
        BIN_DEC<<") binario-Decimal"<<endl<<
        DEC_HEX<<") decimal-Hexadecimal-"<<endl<<
        HEX_DEC<<") Hexadecimal-Decimal"<<endl<<
        DEC_OCT<<") Decimal-octal"<<endl<<
        OCT_DEC<<") Octal-decimal"<<endl<<
        SALIR<<") salir"<<endl;
        cin>>user;

        switch (user) {
            case '1':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
               cin >> arr1;
                number=*validacionint(ptr6);
                bin(ptr5);
                system("pause");
                system("cls");
                break;
            case '2':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                band2 = *catch_binaryxcpt(ptr6);
                if (band2==1){
                    cout<<"formato binario invalido"<<endl;
                    getch();
                    system("cls||clear");
                }
                else {
                    number=*validacionint(ptr6);
                    BinaDec(ptr5);
                    system("pause");
                    system("cls||clear");
                }
                break;
            case '3':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                number=*validacionint(ptr6);
                cout<<"El resultado es: ";
                Hexa(ptr5);
                cout<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '4':
                system("cls");
                cout<<" Ingrese un numero Hexadecimal : ";
                cin>>arr1;
                Hexadec(ptr6);
                system("pause\n");
                system("cls");
                break;

            case '5':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                number=*validacionint(ptr6);
                Octal(ptr5);
                system("pause");
                break;
            case '6':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                band2 = *catch_octexcpt(ptr6);
                if (band2==1){
                    cout<<"El numero ingresado no es un numero octal"<<endl;
                    getch();
                }
                else {
                    number=*validacionint(ptr6);
                    octalDec(ptr5);
                    system("pause");
                }
                break;
            case '7':
                system("cls");
                main();
                break;
            default:
                cout<<"opcion invalida intente de nuevo\n";
                system("pause");
                system("cls");
                break;
        }
    }
        while(user!=7);
}
char menu_simple(){
    char choose;
    enum menu_simple{
        SUMA =1,
        RESTA,
        DIVISION,
        MULTIPLICACION,
        POTENCIA,
        RAIZ,
        FACTORIAL,
        PORCENTAJE,
        SALIR

    };
    do{
        ptr1=&n1;
        ptr2=&n2;
        ptr4=&numtri;
        ptr5=&number;
        ptr6=arr1;
        ptr7=arr2;

        cout<<SUMA<<") Suma"<<endl
        <<RESTA<<") Resta "<<endl
        <<DIVISION<<") Division"<<endl
        <<MULTIPLICACION<<") Multiplicacion"<<endl
        <<POTENCIA<<") Potencia"<<endl
        <<RAIZ<<") Raiz"<<endl
        <<FACTORIAL<<") Factorial"<<endl
        <<PORCENTAJE<<") Porcentaje"<<endl
        <<SALIR<<") Salir\n";
        cin>>choose;
        switch(choose){
            case '1':
                cout<<"ingrese el primer numero:\n";
                cin >> arr1;
                n1=*show_result(ptr6);
                cout<<"\ningrese 2do numero:\n";
                cin >> arr2;
                n2=*show_result(ptr7);
                    cout <<"Resultado: "<<*suma(ptr1,ptr2)<<endl;
                    system("pause");
                    system("cls||clear");
                break;
            case '2':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                n1=*show_result(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                cin >> arr2;
                n2=*show_result(ptr7);
                cout<<"El resultado es: "<<*resta(ptr1,ptr2)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '3':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                n1=*show_result(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                cin >> arr2;
                n2=*show_result(ptr7);
                cout<<"El resultado es: "<<*div(ptr1,ptr2)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '4':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                n1=*show_result(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                cin >> arr2;
                n2=*show_result(ptr7);
                cout<<"El resultado es: "<<*mult(ptr1,ptr2)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '5':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                n1=*show_result(ptr6);
                cout<<"Ingresa el segundo numero: "<<endl;
                cin >> arr2;
                n2=*show_result(ptr7);
                cout<<"El resultado es: "<<*potencia(ptr1,ptr2)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '6':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                numtri=*catch_trigoxcpt(ptr6);
                cout<<"El resultado es: "<<*raiz(ptr4)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '7':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                n1=*validacionint(ptr6);
                cout<<"El resultado es: "<<*factorial(ptr1)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '8':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                n1=*show_result(ptr6);
                cout<<"Ingresa el porcentaje deseado: "<<endl;
                cin >> arr2;
                n2=*show_result(ptr7);
                cout<<*porcentaje(ptr1,ptr2)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '9':
                cout<<"Adios,gracias!\n";
                system("pause\n");
                system("cls||clear");
                return 0;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                system("cls");


        }

    }
    while(choose!=9);
}
int trigonometria(){
    char option;
    enum trigonometricas{
        sen = 1,
        cosen,
        tang,
        salir
    };
    do{
        ptr1=&n1;
        ptr2=&n2;
        ptr4=&numtri;
        ptr5=&number;
        ptr6=arr1;
        ptr7=arr2;

        cout<<"seleccione una opcion:"<<endl<<
        sen<<") seno"<<endl<<
        cosen<<") coseno"<<endl<<
        tang<<") tang"<<endl<<
        salir<<") salir"<<endl;
        cin>>option;

        switch(option){
            case '1':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                numtri=*catch_trigoxcpt(ptr6);
                cout<<"El resultado es: "<<*seno(ptr4)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '2':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                numtri=*catch_trigoxcpt(ptr6);
                cout<<"El resultado es: "<<*coseno(ptr4)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '3':
                system("cls");
                cout<<"Ingresa el primer numero: "<<endl;
                cin >> arr1;
                numtri=*catch_trigoxcpt(ptr6);
                cout<<"El resultado es: "<<*tangente(ptr4)<<endl;
                system("pause");
                system("cls||clear");
                break;
            case '4':
                system("cls||clear");
                main();
                break;
            default:
                cout<<"opcion invalida"<<endl;
                system("pause");
                system("cls");
        }

    }
    while(option!=3);
}
int main() {
    char opc;
    enum menus {
        MENU_SIMPLE = 1,
        MENU_CONVERSION,
        TRIGONOMETRIA,
        SALIR
    };
    try {
        do {
            ptr1=&n1;
            ptr2=&n2;
            ptr4=&numtri;
            ptr5=&number;
            ptr6=arr1;
            ptr7=arr2;
            cout << "Menu principal\n" <<
                 MENU_SIMPLE << ") OPERACIONES SIMPLE\n" <<
                 MENU_CONVERSION << ") CONVERSIONES\n" <<
                 TRIGONOMETRIA << ")TRIGONOMETRIA\n" <<
                 SALIR << ") SALIR" << endl;
            cin>>opc;


            switch (opc) {
                case '1':
                    system("cls");
                    menu_simple();
                    break;
                case '2':
                    system("cls");
                    menu_conversion();
                    break;
                case '3':
                    system("cls");
                    trigonometria();
                    break;
                case '4':
                    cout << "adios,gracias!" << endl;
                    return 0;
                default:
                    system("cls");
                    cout << "opcion invalida\n";

            }


        } while (opc != 4);
    }
catch(invalid_argument){
    cout<<"not valid";
}
}
//funciones operacion
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
    if (*n2 == 0){
        cout<<"Error: division entre 0 no posible"<<endl;
        *r=0;
        return r;
    }
    else{
        *r=(*n1)/(*n2);
        return r;
    }
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
    cout<<"El resultado es: ";
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
double *raiz(double *n1){
    double *r=(double*)malloc(sizeof(double));
    *r=sqrt(*n1);
    return r;
}
//funciones trigonometricas
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
//Conversiones
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
    cout << "Numero Binario: " << binario<<endl;
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
    cout<<"Numero decimal: "<<Dec<<endl;

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
    cout<<"Numero en octal:"<<octal<<endl;
}
void octalDec(int *n1){
    int decimal = 0, i = 0, r;
    while (*n1 != 0){
        r = *n1 % 10;
        *n1 /= 10;
        decimal += r * pow(8, i);
        ++i;
    }
    cout<<"Numero en decimal: "<<decimal<<endl;
}
void Hexa(int *n1){
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
            decnum += (((int)(*hexstr)) - 48) * pow(base, tam - i - 1);

        }
        else if ((*hexstr >= 65 && *hexstr <= 70))  {
            decnum += (((int)(*hexstr)) - 55) * pow(base, tam - i - 1);
        }
        else if (*hexstr >= 97 && *hexstr <= 102) {
            decnum += (((int)(*hexstr)) - 87) * pow(base, tam - i - 1);

        }
        else {
            cout<<"Fuera de rango o numero invalido "<<endl
                <<"valor dado = 0"<<endl;
            decnum=0;

            break;


        }
    }
    cout<<"El numero en decimal es: "<<decnum<<endl;
    system("pause");
}
//funciones validacion
char*is_char(char *valor){
    char *ptr=NULL;
    if(isalpha(*valor) )
        ptr=valor;
    return ptr;
}

float *show_result(char *ptr){
    float *res=(float*)malloc(sizeof(float));
    if(is_char(ptr) != NULL){
        cout<<"Dato ingresado invalido"<<endl;
        cout<<"Valor = 0"<<endl;
        *res=-0;
    }
    else{
        *res=atof(ptr);

    }
    return res;
}
double *catch_trigoxcpt(char *ptr){
    double *res=(double*)malloc(sizeof(double));
    if(is_char(ptr) != NULL){
        cout<<"Dato ingresado invalido"<<endl
            <<"Valor = 0"<<endl;
        *res=0;
    }
    else{
        *res=atof(ptr);

    }
    return res;
}
int *validacionint(char *ptr){
    int *res=(int*)malloc(sizeof(int));
    if(is_char(ptr) != NULL){
        cout<<"Dato ingresado invalido"<<endl
            <<"Valor = 0"<<endl;
        *res=0;
    }
    else{
        *res=atoi(ptr); //atoi works with any type of array converting it to integer type data
    }
    return res;

}
int *catch_binaryxcpt(char *ptr){
    int bandera;
    int *ptr1;

    int x=0;
    int tam;
    ptr1=&bandera;
    tam = strlen(ptr);
    for(ptr[x]; x<tam; x++)
        if(ptr[x]!='0' && ptr[x] != '1'){
            bandera=1;
        }
        else{
            bandera =0;
        }
    return ptr1;
}
int *catch_octexcpt(char *ptr){
    int flag_on;
    int *ptr1;

    int x=0;
    int size;
    ptr1=&flag_on;
    size = strlen(ptr);
    for(ptr[x]; x < size; x++)
        if(ptr[x]=='9' || ptr[x] == '8'){
            flag_on=1;
        }
        else{
            flag_on =0;
        }
    return ptr1;
}
