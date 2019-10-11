#include <iostream>
#include "ColaEstatica.h"
/*Coleccion de elemntos del mismo tipo
 * Las inserciones y eliminiaciones se realizan en extremos distintos de la estructura
 * Solamente son visibles los elementos del frente y final
 * LAS inserciones se realizan al final de la estructura; las eliminaciones al inicio
 * La informacion se organiza con el criterio primero en entrar primero en salir (FIFO= First In First Out)
 *
 * */
int main() {
    ColaEstatica<char,20>simbolos;
    simbolos.push('A');
    simbolos.push('B');
    simbolos.push('C');
    simbolos.pop();
    simbolos.push('D');
    cout<<"vacia"<<simbolos.empyt()<<endl<<
    "llena="<<simbolos.full()<<endl<<
    "tamanio:"<<simbolos.size()<<endl<<
    "frente="<<simbolos.front()<<endl<<
    "final="<<simbolos.back();


    return 0;
}