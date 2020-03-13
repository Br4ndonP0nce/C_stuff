#include <iostream>
#include <stdio.h>
#include <conio.h>
#include<string>
#include <fstream>
#include<time.h>
#define DELIM_REG '♣' //Define el delimitador de campos
#define DELIM_CAMPO '|'
#include<windows.h>
using namespace std;
void menu();
void insertar();
void m_folio();
void m_area();
void show();
struct nodo{
  int dato;
  struct nodo *siguiente;
};

struct proyecto{
    string folio;//Folio generado por 3 primeras letras del nombre + un numero aleatorio de formato xx
    string  nombre;//arreglo de caracteres para el nombre
    int area;//Usamos solo el numero del area
    string especialidad;//Arreglo de caracteres para la especialidad
    int m_economico;//Cantidad en numeros enteros que indica
    string responsable;
};


int main(){
    int opc;
    ofstream file;
    do {
        menu();
        cin >> opc;
        switch (opc) {
            case 1:
                insertar();
                break;
            case 2:
                m_folio();
                break;
            case 3:
                m_area();
                break;
            case 4:
                return 0;
            default:
                cout << "opcion no valida";

        }
    }while(opc!=4);


}
void menu(){
    cout<<"Seleccione que desea hacer:"
          "\n1.- Insertar proyecto.\n"
          "2.-Mostrar proyecto por folio\n"
          "3.-Mostrar proyecto por area.\n"
          "4.-Salir."<<endl;
}
void insertar(){

    string primary_key;
    srand(time(NULL));
    int rand_num = rand() % 10+1;
    int rand_num2 = rand() % 10+1;
    proyecto I;
ofstream toInsert;
toInsert.open("registros.txt",ios::app);
cout<<"Inserte el nombre: \n";
cin.ignore();
getline(cin,I.nombre);
cout<<"Inserte el numer de Area al que pertenece:\n";
cin>>I.area;
cout<<"Inserte especialidad: \n";
cin.ignore();
getline(cin,I.especialidad);
cout<<"Inserte el monto economico: \n";
cin>>I.m_economico;
cout<<"Inserte el nombre del responsable: \n";
cin.ignore();
getline(cin,I.responsable);
for(int i=0;i<3;i++){
    primary_key+=I.nombre[i];//mediante este ciclo for podemos concatenar las primeras 3 letras del nombre del proyecto
}
primary_key+="-";
primary_key += to_string(rand_num);
primary_key += to_string(rand_num2);
I.folio += primary_key;

toInsert <<I.folio<<DELIM_CAMPO<<I.nombre<<DELIM_CAMPO<<I.area<<DELIM_CAMPO<<I.especialidad<<DELIM_CAMPO<<I.m_economico<<DELIM_CAMPO<<I.responsable<<"\n";

toInsert.close();
}
void m_folio(){

}
void m_area(){

}
