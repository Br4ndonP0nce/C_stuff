#ifndef MUSEO_ESCULTURA_H
#define MUSEO_ESCULTURA_H
#include "ObraArte.h"

class Escultura : public ObraArte {
private:
    string material;
    float volumen;
    float peso;
public:
    Escultura();
    void setMaterial(string mat);
    string getMaterial();
    void setVolumen(float vol);
    float getVolumen();
    void setPeso(float weight);
    float getPeso();

};


#endif //MUSEO_ESCULTURA_H
