//
// Created by Brandon on 13/11/2019.
//
#ifndef TAREA_ECHAURI_ELEMENTO_H
#define TAREA_ECHAURI_ELEMENTO_H
#include <iostream>
#include <string>

class Elemento
{
public:
    Elemento();

    Elemento(std::string symbol, int atomicNumber, float atomicWeight, std::string name){
        this->nombre = name;
        this->numeroAtomico = atomicNumber;
        this->simbolo = symbol;
        this->pesoAtomico = atomicWeight;
    }

    std::string getSimbolo() const;

    int getNumeroAtomico() const;

    float getPesoAtomico() const;

    std::string getNombre() const;

private:
    std::string simbolo;
    int numeroAtomico;
    float pesoAtomico;
    std::string nombre;
};

#endif //TAREA_ECHAURI_ELEMENTO_H
