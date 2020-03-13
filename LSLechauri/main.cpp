#include <iostream>
#include "lsl.h"
#include "TablaPeriodica.h"
#include "Elementos.h"
#include <iostream>
using namespace std;

int main() {
    LSL<int>lista;
    lista.push_front(10);
    lista.push_front(2);
    lista.push_front(23);
    lista.erase(0);

    cout<<"vacia:"<<lista.empty()<<endl;
    cout<<"size:"<<lista.size()<<endl;

    for(size_t i(0);i<lista.size();++i){
        cout<<lista[i]<<endl;
    }
    return 0;
}