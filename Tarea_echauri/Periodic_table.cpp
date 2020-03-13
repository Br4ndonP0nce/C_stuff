//
// Created by Brandon on 13/11/2019.
//

#include "Periodic_table.h"
TablaPeriodica::TablaPeriodica()
{

}

void TablaPeriodica::menu(){

    int opc = 0;
    do{
        cout << "TABLA PERIODICA" << endl
             << "1" << ") Agregar elemento" << endl
             << "2" << ") Listar elementos" << endl
             << "3" << ") Salir" << endl
             << "Selecciona una opcion: ";
        cin >> opc;

        cin.ignore();

        switch(opc){
            case 1:
                agregarElemento();
                break;
            case 2:
                listarElementos();
                break;
            case 3:
                break;
            default:
                cout << "Opcion no valida" << endl << endl;
        }

    } while(opc != 3);
}

void TablaPeriodica::agregarElemento(){
    string symbol;
    int atomicNumber;
    float atomicWeight;
    string name;



       cout << "INSERTE SIMBOLO: ";
    cin >> symbol;
    cout << "INSERTE NUM ATOMICO: ";
    cin >> atomicNumber;
    cout << "INSERTE PESO ATOMICO: ";
    cin >> atomicWeight;
    cin.ignore();
    cout << "NOMBRE DEL ELEMENTO: ";
    getline(cin, name);

    Elemento* elem = new Elemento(symbol, atomicNumber, atomicWeight, name);
    elementos.push_back(*elem);
}

void TablaPeriodica::listarElementos(){
    if(elementos.empty()){
        cout << "LISTA VACIA,AÑADIR ANTES DE LISTAR" << endl << endl;
        return;
    } else{
        cout << "           |TABLA PERIODICA|" << endl;
        for(size_t i(0); i < elementos.size(); i++){
            cout << elementos[i].getNombre() << " (" << elementos[i].getSimbolo() << ") [Número atómico: " << elementos[i].getNumeroAtomico() << "] [Peso atómico: " << elementos[i].getPesoAtomico() << "]" << endl;
        }
    }
}
