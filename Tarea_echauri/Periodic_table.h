//
// Created by Brandon on 13/11/2019.
//
#ifndef TAREA_ECHAURI_PERIODIC_TABLE_H
#define TAREA_ECHAURI_PERIODIC_TABLE_H
#include "lsl.h"
#include "Elemento.h"

class TablaPeriodica
{
public:
    TablaPeriodica();
    void menu();
private:
    LSL<Elemento> elementos;
    void agregarElemento();
    void listarElementos();
};
#endif //TAREA_ECHAURI_PERIODIC_TABLE_H
