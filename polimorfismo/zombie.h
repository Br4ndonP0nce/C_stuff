#ifndef POLIMORFISMO_ZOMBIE_H
#define POLIMORFISMO_ZOMBIE_H
#include "Enemigo.h"
class zombie :public enemigo {
public:
    zombie();

    string getTipo()const ;
    void setTipo(string valor);

    string getNombreAtaque()const ;
    void setNombreAtaque(string valor);

    string getFuerza()const ;
    void setFuerza(int valor);




};


#endif //POLIMORFISMO_ZOMBIE_H
