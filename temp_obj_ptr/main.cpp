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
celsius *ptrcelfar,*ptrcelkel;
kelvin *ptrkelcel,*ptrkelfar;
farenheit *ptrfarcel,*ptrfarkel;

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
                        ptrcelfar=&a;
                        ptrcelfar->setCelcius(dato);
                        ptrcelfar->CalcularCelfa();
                        cout<<"El resultado es: "<<ptrcelfar->getCelfa()<<endl;
                        system("pause");
                        break;

                    case '2':
                        ptrcelkel=&a;
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        ptrcelkel->setCelcius(dato);
                        ptrcelkel->CacularCelkel();
                        cout<<"El resultado es: "<<ptrcelkel->getCelkel()<<endl;
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
                        ptrfarcel=&f;
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        ptrfarcel->setFarenheit(dato);
                        ptrfarcel->CalcularFarcel();
                        cout<<"El resultado es: "<<ptrfarcel->getFarcel()<<endl;
                        system("pause");
                        break;

                    case '2':
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        ptrfarkel=&f;
                        cin>>dato;
                        ptrfarkel->setFarenheit(dato);
                        ptrfarkel->CalcularFarkel();
                        cout<<"El resultado es: "<<ptrfarkel->getFarkel()<<endl;
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
                        ptrkelcel=&k;
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        ptrkelcel->setKelv(dato);
                        ptrkelcel->CalcularKelcel();
                        cout<<"El resultado es: "<< ptrkelcel->getKelcel()<<endl;
                        system("pause");
                        break;

                    case '2':
                        ptrkelfar=&k;
                        system("cls");
                        cout<<"Ingresa el Valor de conversion: "<<endl;
                        cin>>dato;
                        ptrkelfar->setKelv(dato);
                        ptrkelfar->CalcularKelfar();
                        cout<<"El resultado es: "<<ptrkelfar->getKelfar()<<endl;
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
