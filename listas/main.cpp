#include <iostream>
#include "lista_estatica.h"
int main() {
    lista_estatica<25,int>enteros;
    enteros.pushfront(33);
    enteros.pushfront(55);
    enteros.pushback(5);
    cout<<"Vacio = "<<enteros.empty()<<endl;
    cout<<"lleno = "<<enteros.full()<<endl;
    cout<<"tamanio = "<<enteros.size()<<endl;

    return 0;
}
