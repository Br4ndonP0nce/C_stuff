#include <iostream>
#include "ObraArte.h"
#include "Escultura.h"
#include "Pintura.h"
using namespace std;
int const MAX = 10;
int main() {
    int opc;
    string title;
    string autor;
    string tecnica;
    string material;
    string year;
    int count_pint = 1,choice_arte=0,count_esc=1;
    float alto=0,ancho=0,peso,volumen;
    Pintura p;
    Escultura e;
    Escultura esculturas[MAX];
     Pintura pinturas[MAX];
     enum opciones{
         AGREGAR_PINTURA = 1,
         CONSULTAR_PINTURAS,
         AGREGAR_ESCULTURA,
         CONSULTAR_ESCULTURA,
         SALIR
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
                 cin>>title;
                 cin.ignore();
                 cout<<"Autor:"<<endl;
                 getline(cin,autor);
                 cout<<"year:\n";
                 getline(cin,year);
                 cout<<"Tecnica: \n";
                 getline(cin,tecnica);
                 cout<<"Alto:\n";
                 cin>>alto;
                 cout<<"Ancho\n";
                 cin>>ancho;
                 p.setTitulo(title);
                 p.setAutor(autor);
                 p.setYear(year);
                 p.setTecnica(tecnica);
                 p.setAlto(alto);
                 p.setAncho(ancho);
                 pinturas[count_pint]=p;
                 count_pint++;
                 break;
             case CONSULTAR_PINTURAS:
                 cout<<"que pintura desea ver puede escoger un numero del 1 al 10\n";
                 cin>>choice_arte;
                 if(choice_arte>count_pint){
                     cout<<"no hay pintura en el espacio seleccionado\n";
                     system("pause>>cls");
                     break;
                 }
                 cout<<"Titulo: "<<pinturas[choice_arte].getTitulo()<<endl;
                 cout<<"Autor: "<<pinturas[choice_arte].getAutor()<<endl;
                 cout<<"Year: "<<pinturas[choice_arte].getYear()<<endl;
                 cout<<"Tecnica:"<<pinturas[choice_arte].getTecnica()<<endl;
                 cout<<"Alto: "<<pinturas[choice_arte].getAlto()<<"cm"<<endl;
                 cout<<"Ancho: "<<pinturas[choice_arte].getAncho()<<"cm"<<endl;
                 system("pause>>cls");

                 break;
             case AGREGAR_ESCULTURA:
                 cout<<"deme el titulo: "<<endl;
                 cin>>title;
                 cin.ignore();
                 cout<<"Autor:"<<endl;
                 getline(cin,autor);
                 cout<<"year:\n";
                 getline(cin,year);
                 cout<<"Material: \n";
                 getline(cin,material);
                 cout<<"Volumen:\n";
                 cin>>volumen;
                 cout<<"Peso\n";
                 cin>>peso;
                 e.setTitulo(title);
                 e.setAutor(autor);
                 e.setYear(year);
                 e.setMaterial(material);
                 e.setVolumen(volumen);
                 e.setPeso(peso);
                 esculturas[count_pint]=e;
                 count_pint++;
                 break;
             case CONSULTAR_ESCULTURA:
                 cout<<"que escultura desea ver puede escoger un numero del 1 al 10\n";
                 cin>>choice_arte;
                 if(choice_arte>count_esc){
                     cout<<"no hay escultura en el espacio seleccionado\n";
                     system("pause>>cls");
                     break;
                 }
                 cout<<"Titulo: "<<esculturas[choice_arte].getTitulo()<<endl;
                 cout<<"Autor: "<<esculturas[choice_arte].getAutor()<<endl;
                 cout<<"Year: "<<esculturas[choice_arte].getYear()<<endl;
                 cout<<"Material: "<<esculturas[choice_arte].getMaterial()<<endl;
                 cout<<"Volumen: "<<esculturas[choice_arte].getVolumen()<<"cm3"<<endl;
                 cout<<"Peso: "<<esculturas[choice_arte].getPeso()<<"kg"<<endl;
                 system("pause>>cls");
                 break;
             case SALIR:

                 break;


         }


     }
     while(count_esc<=MAX||count_pint<=MAX);


}