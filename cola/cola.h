#ifndef COLA_COLA_H
#define COLA_COLA_H
#include <iostream>
using namespace std;
class cola {
private:
    int inicio,fin;

public:
    cola();
    int lleno();
    int vacio();
    void llenar();
    void consultar_inicio();
    void consultar_final();
    void mostrar_cola();
    void eliminar();
    int dato[10]={-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
};

#endif //COLA_COLA_H
