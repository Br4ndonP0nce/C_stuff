#ifndef VALIDACION_H_INCLUDED
#define VALIDACION_H_INCLUDED
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
            cout << "\t\t~~~PILA~~~" << endl << endl;
            cout << "1) Apilar" << endl;
            cout << "2) Desapilar" << endl;
            cout << "3) Mostrar Tope de Pila" << endl;
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
            cout << "\t\t~~~Apilar~~~" << endl;
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

#endif // VALIDACION_H_INCLUDED
