#include <iostream>
#include <conio.h>
#include "celsius.h"
#include "farenheit.h"
#include "kelvin.h"
using namespace std;

void menu();
void menucelcius();
void menufarenheit();
void menukelvin();
celsius *ptrcel;
kelvin *ptrckel;
farenheit *ptrfar;

int main()
{
    celsius a;
    kelvin k;
    farenheit f;

    double dato;
    int opc=0,opc1=0;

    do{
        system("cls");
        menu();
        opc1=getch();

        if (opc1=='1') {//if 1
            do{
                system("cls");
                menucelcius();
                opc=getch();
                switch (opc) {//switch

                    case '1':
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        a.setCelcius(dato);
                        a.CalcularCelfa();
                        cout<<"El resultado es: "<<a.getCelfa()<<endl;
                        system("pause");
                        break;

                    case '2':
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        a.setCelcius(dato);
                        a.CacularCelkel();
                        cout<<"El resultado es: "<<a.getCelkel()<<endl;
                        system("pause");
                        break;

                    case '3':
                        system("cls");
                        break;

                    default:
                        cout<<"Opcion Invalida"<<endl;
                        system("pause");
                        break;



                }//switch
            }while(opc!='3');
        }//if

        if (opc1=='2') {//if 2
            do{
                system("cls");
                menufarenheit();
                opc=getch();
                switch (opc) {//switch

                    case '1':
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        f.setFarenheit(dato);
                        f.CalcularFarcel();
                        cout<<"El resultado es: "<<f.getFarcel()<<endl;
                        system("pause");
                        break;

                    case '2':
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        f.setFarenheit(dato);
                        f.CalcularFarkel();
                        cout<<"El resultado es: "<<f.getFarkel()<<endl;
                        system("pause");
                        break;

                    case '3':
                        system("cls");
                        break;

                    default:
                        cout<<"Opcion Invalida"<<endl;
                        system("pause");
                        break;



                }//switch
            }while(opc!='3');
        }//if2

        if (opc1=='3') {//if 3
            do{
                system("cls");
                menukelvin();
                opc=getch();
                switch (opc) {//switch

                    case '1':
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        k.setKelv(dato);
                        k.CalcularKelcel();
                        cout<<"El resultado es: "<<k.getKelcel()<<endl;
                        system("pause");
                        break;

                    case '2':
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        k.setKelv(dato);
                        k.CalcularKelfar();
                        cout<<"El resultado es: "<<k.getKelfar()<<endl;
                        system("pause");
                        break;

                    case '3':

                        break;

                    default:
                        cout<<"Opcion Invalida"<<endl;
                        system("pause");
                        break;



                }//switch
            }while(opc!='3');
        }//if3





    }while(opc1!='4');
    return 0;
}


void menu(){
    std::cout<<"Que quieres convertir?"<<endl
             <<"1) Celcius"<<endl
             <<"2) Farenheit"<<endl
             <<"3) Kelvin"<<endl
             <<"4) Salir"<<endl;
}

void menucelcius(){
    cout<<"Que quieres convertir?"<<endl
        <<"1) Celcius-Farenheit"<<endl
        <<"2) Celcius-Kelvin"<<endl
        <<"3) Menu anterior"<<endl;
}


void menufarenheit(){
    cout<<"Que quieres convertir?"<<endl
        <<"1) Farenheit-Celcius"<<endl
        <<"2) Farenheit-Kelvin"<<endl
        <<"3) Menu anterior"<<endl;
}

void menukelvin(){
    cout<<"Que quieres convertir?"<<endl
        <<"1) Kelvin-Farenheit"<<endl
        <<"2) Kelvin-Celcius"<<endl
        <<"3) Menu anterior"<<endl;
}
