#include <iostream>
#include "persona.h"

using namespace std;
int main() {
   persona per1;
   string nombre;
   string nacionalidad;
   int edad;


   cout<<"ingresa los siguientes datos\n"<<
   "Nombre\n";
   getline(cin,nombre);
   cout<<"nacionalidad\n";
   getline(cin,nacionalidad);
   cout<<"edad\n";
   cin>>edad;

   per1.setNombre(nombre);
   per1.setNacionalidad(nacionalidad);
   per1.setEdad(edad);
   cout<<"datos:\n"
   <<"nombre: "<<per1.getNombre()<<endl
   <<"nacionalidad"<<per1.getNacionalidad()<<endl
   <<"edad"<<per1.getEdad()<<endl;

   per1.comer("tacos dorados");


}