#include <iostream>
#include "lista_estatica.h"
int main() {
    ListaEstatica<25,int>enteros;
    enteros.push_front(33);
    enteros.push_front(55);
    enteros.push_back(5);
    enteros.push_back(11);
    cout<<"Vacio = "<<enteros.empty()<<endl;
    cout<<"lleno = "<<enteros.full()<<endl;
    cout<<"tamanio = "<<enteros.size()<<endl;
    cout<<"elemento frontal "<<enteros.front()<<endl;
    cout<<"back element"<<enteros.back()<<endl;
    cout<<"font element pop";enteros.pop_front();
    cout<<"back element pop back";enteros.pop_back();
    for(int i =0;i<=4;i++){
        cout<<
    }
    return 0;
}
