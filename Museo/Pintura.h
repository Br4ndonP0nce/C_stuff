#ifndef MUSEO_PINTURA_H
#define MUSEO_PINTURA_H
#include "ObraArte.h"
#include <iostream>
using namespace std;
class Pintura : public ObraArte {
public:
    Pintura();
    void setTecnica(string tech);
    string getTecnica();
    void setAlto(float alto);
    float getAlto();
    void setAncho(float ancho);
    float getAncho();

private:
    string tecnica;
    float Alto;
    float Ancho;

};


#endif //MUSEO_PINTURA_H
