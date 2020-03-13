#include <iostream>
#include "ldl.h"
using namespace std;
int main() {
    LDL<int>lista;
    lista.push_front(3);
    lista.push_front(324);
    lista.push_front(13);
    lista.push_front(12);
    for(size_t i(0);i<lista.size();++i){
        cout<<lista[i]<<endl;
    }
    cout<<"vacia"<<lista.empty()<<endl;
    cout<<"size"<<lista.size()<<endl;
    lista.remove(12);
    lista.erase(2);
    for(size_t i(0);i<lista.size();++i){
        cout<<lista[i]<<endl;
    }
    cout<<"size"<<lista.size();

    return 0;
}