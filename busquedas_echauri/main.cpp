#include <iostream>
#include "searcher.h"
#include "functional"
#include "lista_estatica.h"

using namespace std;

int main()
{
    Searcher srch;
    ListaEstatica<10,int> lista_num;
    ListaEstatica<10,string> lista_name;

    lista_name.push_back("Dulce");
    lista_name.push_back("Brandon");
    lista_name.push_back("Jean");
    lista_name.push_back("Archer");
    lista_name.push_back("Carlos");
    lista_name.push_back("Pollo");
    lista_name.push_back("Guason");
    lista_name.push_back("Adolfo");

    lista_num.push_back(6);
    lista_num.push_back(10);
    lista_num.push_back(50);
    lista_num.push_back(-52);


    cout << "Busqueda secuencial\nla busqueda esta en el espacio: " << srch.sequential(50, lista_num)<<" de su lista" << endl;
    cout << "Busqueda binaria\nla busqueda esta en el espacio: " << srch.binary(string("Guason"), lista_name)<<" de su lista" << endl;
    system("pause");


    return 0;
}