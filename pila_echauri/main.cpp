#include <iostream>
#include <stdexcept>
#include <cstring>
#include "PILA_EST.h"
#include "PILA_TRUE_EST.h"
//coleccion de elementos de mismo tipo
//solamente es accesible un elemento
//dicho elemento es el que s eencuentra en la cima de la pila
//las inserciones y eliminaciones suceden en un extremp de la estructura
//Los elementos estan organizados de acuerdo al critero LIFO
using namespace std;
int main(){
        PilaEstatica<10,string> cadenas;
        cout<<"vacia"<<cadenas.empty()<<endl;
        cout<<"llena"<<cadenas.full()<<endl;
        return 0;}
