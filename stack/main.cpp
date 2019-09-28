#include <iostream>
#include "pila.h"
#include "validacion.h"
using namespace std;

int opcMenu,ValNum,MenuVal,num;

int main()
{
    pila p;

    do{
        system("cls");
        p.mostrarPila();
        p.gotoxy(52,0);std::cout << "Pila:";
        cout << endl << "1) Apilar" << endl;
        cout << "2) Desapilar" << endl;
        cout << "3)Tope de Pila" << endl;
        cout << "4) Salir" << endl << endl;
        cout << "Seleccione una opcion: ";
        MenuVal = enteroMenuPrincipal(opcMenu);
        if (MenuVal){
            if (MenuVal > 0 && MenuVal < 4){
                switch (MenuVal){
                    case 1:
                        cout << "Ingrese un numero: ";
                        ValNum = entero(num);
                        if (ValNum){
                            p.push(ValNum);
                        }

                        break;
                    case 2:
                        p.pop();
                        break;
                    case 3:
                        p.mostrarTope();
                        break;
                    case 4:
                        break;
                    default:
                        ;
                }
                system("pause");
            }
            else{
                system("cls");
            }
        }
        else{
            system("cls");
        }
    }while(MenuVal != 4);
    return 0;
}
