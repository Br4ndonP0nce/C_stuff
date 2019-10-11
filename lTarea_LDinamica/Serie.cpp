#include "Serie.h"
#include<iostream>
using namespace std;
void Serie::settemporadas(int temporadas)
{
    this->temporadas = temporadas;
}

int Serie::gettemporadas(){
    return this->temporadas;
}

void Serie::setcapitulos(int capitulos)
{
    this->capitulos = capitulos;
}

int Serie::getcapitulos(){
    return this->capitulos;
}