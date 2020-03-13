//
// Created by Brandon on 13/11/2019.
//
#include "Elemento.h"
Elemento::Elemento()
{

}

std::string Elemento::getSimbolo() const
{
    return simbolo;
}

int Elemento::getNumeroAtomico() const
{
    return numeroAtomico;
}

float Elemento::getPesoAtomico() const
{
    return pesoAtomico;
}

std::string Elemento::getNombre() const
{
    return nombre;
}
