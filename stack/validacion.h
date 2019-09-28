#ifndef STACK_VALIDACION_H
#define STACK_VALIDACION_H
#include <iostream>
#include <ctype.h>
#include <cstdlib>
#include <cstring>

using namespace std;

int enteroMenuPrincipal(int num){
    int valido =0,cont=0,tamanio;
    char numero[30];
    cin>>numero;
    std::cin.ignore(256,'\n');
    tamanio= strlen(numero);
    do{
        if(isdigit(numero[cont])){
            if(cont+1==tamanio){
                valido= 1;
                num = atoi(numero);
            }
        }else{
            system("cls");
            cout << "\t\tPila" << endl << endl;
            cout << "1) Apilar" << endl;
            cout << "2) Desapilar" << endl;
            cout << "3) Tope de Pila" << endl;
            cout << "4) Salir" << endl << endl;
            cout << "Seleccione una opcion: ";
            cin >> numero;
            tamanio = strlen(numero);
            cont=-1;
        }
        cont++;
    }while(valido==0);
    return num;
}

int entero(int num){
    int valido =0,cont=0,tamanio;
    char numero[300];
    cin>>numero;
    std::cin.ignore(256,'\n');
    tamanio= strlen(numero);
    do{
        if(isdigit(numero[cont])){
            if(cont+1==tamanio){
                valido= 1;
                num = atoi(numero);
            }
        }else{
            system("cls");
            cout << "\t\tApilando:" << endl;
            cout<<"Ingrese un numero correcto: ";
            cin>>numero;
            std::cin.ignore(256,'\n');
            tamanio = strlen(numero);
            cont=-1;
        }
        cont++;
    }while(valido==0);
    return num;
}

#endif //STACK_VALIDACION_H
