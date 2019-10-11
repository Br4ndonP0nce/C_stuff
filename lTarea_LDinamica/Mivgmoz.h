#ifndef LTAREA_LDINAMICA_MIVGMOZ_H
#define LTAREA_LDINAMICA_MIVGMOZ_H
#include"Produccion.h"
#include"ListaEstatica.h"
#include"Pelicula.h"
#include "Serie.h"
#include<iostream>
using namespace std;
class Mivgmoz{
public:
    void menu();
private:
    void agregarpelicula();
    void agregarserie();
    void listarpeliculas();
    void listarserie();
    ListaEstatica<10,Pelicula> peliculas;
    ListaEstatica<10,Serie> series;

};

#endif //LTAREA_LDINAMICA_MIVGMOZ_H
