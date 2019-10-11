#ifndef LTAREA_LDINAMICA_SERIE_H
#define LTAREA_LDINAMICA_SERIE_H
#include"Produccion.h"
#include<iostream>
using namespace std;
class Serie:public Produccion
{
public:
    void settemporadas (int);
    int gettemporadas();
    void setcapitulos (int);
    int getcapitulos();
private:
    int temporadas,capitulos;
};

#endif //LTAREA_LDINAMICA_SERIE_H
