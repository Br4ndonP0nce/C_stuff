//
// Created by Brandon on 29/08/2019.
//

#include "Grupo1.h"
grupo::grupo(){
    cont = 0;
}

void grupo::setMateria(string valor) {
    materia = valor;

}
string grupo::getMateria() {
    return materia;
}
void grupo::menu() {
    int opc;
    do{
        cout<<"Menu para"<<materia<<endl
        <<OPC_AGREGAR<<"agregar alumno"<<endl
        <<OPC_ELIMINAR<<"eliminar alumno"<<endl
        <<OPC_SALIR<<"salir"<<endl
        <<"seleccion una opcion"<<endl;
        cin>>opc;
        cin.ignore();




    }
    while(opc != OPC_SALIR);
}