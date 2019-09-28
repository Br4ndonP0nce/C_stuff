#include <iostream>
#include "cola.h"
using namespace std;
int main() {
    int dato;
    int opcion;
    cola c;
    do{
        system("cls");
        c.mostrar_cola();
        cout<<"[1]ingresar dato\n[2].mostrar i"<<endl;
        cin>>opcion;
        switch (opcion){
            case 1:
                c.llenar();
                break;
            case 2:
                c.consultar_inicio();
                break;
            case 3:
                c.consultar_final();
                break;
            case 4:
                c.eliminar();
                break;
            case 5:
                c.mostrar_cola();
                break;
            default:
                cout<<"invalid";
                system("pause");
                system("cls");
                break;
        }
    }
    while(opcion!=6);

}