#ifndef TESTFIELD_NODO_H
#define TESTFIELD_NODO_H
#include "dato.h"
#pragma once
class Nodo { public:
    Dato dato;
    Nodo *puntero;

    Nodo(){ //Constructor de la clase
        puntero = NULL;
    }
};
#endif //TESTFIELD_NODO_H
