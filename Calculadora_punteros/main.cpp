#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <clocale>
#include "conio.h"

using namespace std;


//Funciones Prototipos
int *calculadora(int*, int*, int*);
int menu();
int n1=0,n2=0,opc=0;//Variables Numero 1, Numero 2 y opcion
int *ptr1,*ptr2,*ptr3; //punteros 1, 2 y 3


int main (){// Inicio de MAIN

    opc = menu();
    system("cls");

//Se piden los numeros
    cout<<"ingrese el primer numero"<<endl;
    cin>>n1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>n2;
//se asignan a los punteros correspondientes
    ptr1=&n1; //puntero ligado a numero1
    ptr2=&n2; //puntero ligado a numero2
    ptr3=&opc;//puntero de opcion

//Se invoca la funcion
    cout<<"La respuesta es: "<<*calculadora(ptr3,ptr1,ptr2)<<endl;
    system("pause");
    return 0;
    //fin de main
}
//funcion para mostrar menu
int menu(){
    int opc;
    system("cls");
    cout<<endl<<"CALCULADORA"<<endl<<endl;
    cout<<"Seleccione una Opcion"<<endl;
    cout<<"_______________________"<<endl<<endl;
    cout<<"1)Suma"<<endl;
    cout<<"2)Resta"<<endl;
    cout<<"3)Multiplicacion"<<endl;
    cout<<"4)Division"<<endl;
    opc=getch();
    return opc;
}
//Funcion de calculadora
int *calculadora(int *opc, int *n1, int *n2){
    if (*opc == '1'){
        int *r=(int*)malloc(sizeof(int));

        *r=(*n1)+(*n2);
        return r;
    }
    if (*opc == '2'){
        int *r=(int*)malloc(sizeof(int));
        *r=(*n1)-(*n2);
        return r;
    }
    if (*opc == '3'){
        int *r=(int*)malloc(sizeof(int));
        *r=(*n1)*(*n2);
        return r;
    }
    if (*opc == '4'){
        int *r=(int*)malloc(sizeof(int));
        *r=(*n1)/(*n2);
        return r;
    }

}

