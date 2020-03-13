#include <iostream>
#include <cmath>
#include "series.h"
#include "puntofijo.h"
#include "interpolacion.h"
#include "d_numerica.h"
#include "euler.h"

using namespace std;
int opc;
enum opciones{
    TAYLORMCLAURIN=1,
    NEWTONRAPHSON,
    PUNTOFIJO,
    INTERPOLACION,
    COTES,
    EULER
};
void menu(){

    cout<<".-|Menu de metodos numericos|\n"<<endl;
cout<<TAYLORMCLAURIN<<"    .-|Series|\n"<<
    NEWTONRAPHSON<<"    .-|Ecuaciones no lineales|\n"<<
    PUNTOFIJO<<"    .-|Sistemas de ecuaciones|\n"<<
    INTERPOLACION<<"    .-|Interpolacion y ajuste de curvas|\n"<<
    COTES<<"    .-|Derivacion numerica|\n"<<
    EULER<<"    .-|Ecuaciones diferenciales ordinarias|\n"<<
    "   inserte su opcion: ";

}
int main() {
    do {
        menu();
        cin>>opc;
        switch (opc){
            case TAYLORMCLAURIN:
                system("cls");
                break;
            case NEWTONRAPHSON:
                system("cls");
                triggernraph();
                break;
            case PUNTOFIJO:
                system("cls");
                triggerpfijo();
                break;
            case INTERPOLACION:
                system("cls");
                triggertay();
                break;
            case COTES:
                system("cls");
                triggerder();
                break;
            case EULER:
                system("cls");
                triggereul();

                break;
        }

    }while(opc!=0);

    return 0;
}