#include <iostream>
#include "pila.h"
#include "validacion.h"

using namespace std;

int opcMenu,numValidado,opcMenuValidada,num;

int main()
{
    pila p;

    do{
        system("cls");
        p.mostrarPila();
        p.gotoxy(52,0);std::cout << "~~~PILA~~~";
        cout << endl << "1) Apilar" << endl;
        cout << "2) Desapilar" << endl;
        cout << "3) Mostrar Tope de Pila" << endl;
        cout << "4) Salir" << endl << endl;
        cout << "Seleccione una opcion: ";
        opcMenuValidada = enteroMenuPrincipal(opcMenu);
        if (opcMenuValidada){
                if (opcMenuValidada > 0 && opcMenuValidada < 4){
                    switch (opcMenuValidada){
                        case 1:
                            cout << "Ingrese un numero: ";
                            numValidado = entero(num);
                            if (numValidado){
                                p.push(numValidado);
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
    }while(opcMenuValidada != 4);
    return 0;
}
