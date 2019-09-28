#include <iostream>
#include "lista_estatica.h"
int main() {
    lista_estatica<25,int>enteros;
    enteros.pushfront(33);
    enteros.pushfront(55);
    enteros.pushback(5);
    enteros.pushback(11);
    cout<<"Vacio = "<<enteros.empty()<<endl;
    cout<<"lleno = "<<enteros.full()<<endl;
    cout<<"tamanio = "<<enteros.size()<<endl;
    cout<<"elemento frontal "<<enteros.front()<<endl;
    cout<<"back elemtnt"<<enteros.back();
    cout<<"font element popping"<<enteros.popfront()<<endl;
    cout<<enteros.popback();
    return 0;
}
