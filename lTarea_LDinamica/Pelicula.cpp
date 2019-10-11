#include "Pelicula.h"
#include<iostream>
using namespace std;

void Pelicula::setanio(int anio)
{
    this->anio = anio;
}

int Pelicula::getanio(){
    return this->anio;
}

void Pelicula::setprotagonista(string protagonista)
{
    this->protagonista = protagonista;
}

string Pelicula::getprotagonista(){
    return this->protagonista;
}