#include <iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

void menu_conversion(){

    enum menu_conversion{
        DEC_BIN = 1,
        BIN_DEC,
        DEC_HEX,
        HEX_DEC,
        DEC_OCT,
        OCT_DEC,
        SALIR
    };
    switch

}
void menu_simple(){

    enum menu_simple{
        SUMA =1,
        RESTA,
        DIVISION,
        MULTIPLICACION,
        POTENCIA,
        RAIZ,
        FACTORIAL,
        PORCENTAJE,

    };
}
void trigonometria(){
    enum trigonometricas{
        seno = 1,
        coseno
    };

}
int main() {
    enum menus{
        MENU_SIMPLE =1,
        MENU_CONVERSION,
        TRIGONOMETRIA,
        SALIR
    };
    unsigned char opc;

    do {
        cout << ") seleccione un menu\n" <<
        MENU_SIMPLE<<") OPERACIONES SIMPLE\n"<<
        MENU_CONVERSION<<") CONVERSIONES\n"<<
        TRIGONOMETRIA<<"TRIGONOMETRIA\n"<<
        SALIR<<"SALIR"<<endl;

        switch(opc){
            case MENU_SIMPLE:
                menu_simple();
                break;
            case MENU_CONVERSION:
                menu_conversion();
                break;
            case TRIGONOMETRIA:
                trigonometria();
                break;
            case SALIR:
                cout<<"adios,gracias!"<<endl;
                return 0;




        }




    }
    while(opc!=3);
}