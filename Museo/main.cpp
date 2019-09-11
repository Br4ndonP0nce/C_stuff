#include <iostream>
#include "ObraArte.h"
#include "Escultura.h"
#include "Pintura.h"
using namespace std;
int const MAX = 10;
int main() {
    int opc;
    string titulo;
    string autor;
    string tecnica;
    string material;
    int year,count = 1,choice_arte;
    float alto,ancho,peso,volumen;
    Pintura p;
    Escultura e;
    Escultura esculturas[MAX];
     Pintura pinturas[MAX];
     enum opciones{
         AGREGAR_PINTURA = 1,
         CONSULTAR_PINTURAS,
         AGREGAR_ESCULTURA,
         CONSULTAR_ESCULTURA
     };

     do{
         cout<<"Que desea hacer?\n"<<
         AGREGAR_PINTURA<<" Agregar pintura\n"<<
         CONSULTAR_PINTURAS<<" Consultar pinturas\n"<<
         AGREGAR_ESCULTURA<<" Agregar escultura\n"<<
         CONSULTAR_ESCULTURA<<" Consultar esculturas\n"<<endl;
         cin>>opc;
         switch(opc){
             case AGREGAR_PINTURA:
                 cout<<"deme el titulo: "<<endl;
                 getline(cin,titulo);
                 //cin.ignore();
                 cout<<"Autor:"<<endl;
                 getline(cin,autor);
                 //cin.ignore();
                 cout<<"year:\n";
                 cin>>year;
                 cout<<"Tecnica: \n";
                 getline(cin,tecnica);
                 cin.ignore();
                 cout<<"Alto:\n";
                 cin>>alto;
                 cout<<"Ancho\n";
                 cin>>ancho;
                 p.setTitulo(titulo);
                 p.setAutor(autor);
                 p.setYear(year);
                 p.setTecnica(tecnica);
                 p.setAlto(alto);
                 p.setAncho(ancho);
                 pinturas[count]=p;
                 count++;
                 break;
             case CONSULTAR_PINTURAS:
                 cout<<"que pintura desea ver puede escoger un numero del 1 al 10\n";
                 cin>>choice_arte;
                 cout<<"Titulo: "<<pinturas[choice_arte].getTitulo()<<endl;
                 cout<<"Autor: "<<pinturas[choice_arte].getAutor()<<endl;
                 cout<<"Year: "<<pinturas[choice_arte].getYear()<<endl;
                 cout<<"Tecnica:"<<pinturas[choice_arte].getTecnica()<<endl;
                 cout<<"Alto: "<<pinturas[choice_arte].getAlto()<<endl;
                 cout<<"Ancho"<<pinturas[choice_arte].getAncho()<<endl;

                 break;
             case AGREGAR_ESCULTURA:
                 break;
             case CONSULTAR_ESCULTURA:
                 break;

         }


     }
     while(count<=MAX);


}