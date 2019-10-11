#include "Produccion.h"
#include<iostream>
using namespace std;

void Produccion::setnombre(string nombre)
{
    this->nombre = nombre;
}

string Produccion::getnombre(){
    return this->nombre;
}

void Produccion::setdirector(string director)
{
    this->director = director;
}

string Produccion::getdirector(){
    return this->director;
}