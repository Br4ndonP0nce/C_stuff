#ifndef POLIMORFISMO_ENEMIGO_H
#define POLIMORFISMO_ENEMIGO_H
using namespace std;
#include <iostream>
class enemigo {
enemigo(){}
~enemigo()= default;
public:

    virtual void atacar()=0;
    string getTipo() const;
    void setTipo(const string &value);

    string getNombreAtaque()const;
    void setNombreAtaque(const string &value);

    int getEnergia() const;
    void setEnergia(int value);

    int getFuerza()const ;
    void setFuerza(int value);

private:
    string tipo;
    string nombreataque;
    int energia{};
    int fuerza{};

};


#endif //POLIMORFISMO_ENEMIGO_H
