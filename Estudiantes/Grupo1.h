// Created by Brandon on 29/08/2019.
#include <iostream>
#include "Estudiantes.h"
#include<string>
#ifndef ESTUDIANTES_GRUPO1_H
#define ESTUDIANTES_GRUPO1_H
using namespace std;
class grupo {
public:
    grupo();
    void setMateria(string valor);
    string getMateria();
    void menu();


private:
    static const int SIZE = 20;
    Estudiantes alumnos[SIZE];
    string materia;
    int cont;
    enum OPCIONES{
        OPC_AGREGAR = 1,
        OPC_ELIMINAR,
        OPC_SALIR
    };

};


#endif //ESTUDIANTES_GRUPO1_H
