#ifndef LTAREA_LDINAMICA_PELICULA_H
#define LTAREA_LDINAMICA_PELICULA_H
#include"Produccion.h"
#include<iostream>
using namespace std;
class Pelicula:public Produccion
{
public:
    void setanio (int);
    int getanio();
    void setprotagonista (string);
    string getprotagonista();
private:
    int anio;
    string protagonista;
};

#endif //LTAREA_LDINAMICA_PELICULA_H
