#ifndef TESTFIELD_DATO_H
#define TESTFIELD_DATO_H
#include <iostream>
#include<cstring>
using namespace std;
class Dato {
public:
    double Codigo;
    string Nombre;
    string Carrera;
    Dato(){
        Codigo = 0;
        Nombre = "Unknow";
        Carrera = "Unknow";
    }
};
#endif //TESTFIELD_DATO_H
