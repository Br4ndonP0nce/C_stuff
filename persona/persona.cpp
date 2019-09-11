#include "persona.h"
Persona::persona()
{
    nombre = "-"
    nacionalidad = "-"
    edad=0
}

void Persona::setNombre(string valor){
    nombre = valor;
}
void Persona::getNombre(){
    return nombre;
}
void Persona::setNacionalidad(string valor){
    nacionalidad =valor;
};

void Persona::getNacionalidad(){
    return   nacionalidad;
};

void Persona::setEdad(int valor){
    edad = valor;
}

void Persona::getEdad(){
    return edad;
}

void Persona::comer(string alimento) {
    cout<<nombre"esta comiendo"<<endl;
}