#include <iostream>

using namespace std;

class Cola {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };

    Nodo *raiz;
    Nodo *fondo;
public:
    Cola();
    ~Cola();
    void insertar(int x);
    int extraer();
    void imprimir();
    bool vacia();
};


Cola::Cola()
{
    raiz = NULL;
    fondo = NULL;
}

Cola::~Cola()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void Cola::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (vacia())
    {
        raiz = nuevo;
        fondo = nuevo;
    }
    else {
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}

int Cola::extraer()
{
    if (!vacia())
    {
        int informacion = raiz->info;
        Nodo *bor = raiz;
        if (raiz == fondo)
        {
            raiz = NULL;
            fondo = NULL;
        }
        else
        {
            raiz = raiz->sig;
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}

void Cola::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado de todos los elementos de la cola.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

bool Cola::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

int main()
{
    int usr=1;
    Cola *cola1 = new Cola();
    while(usr!=0)
    {
        cout<<"inserte un numero";
        cin>>usr;
        cola1->insertar(usr);
    }
    cola1->imprimir();
    cout <<"Extraemos uno de la cola:" <<cola1->extraer()<<"\n";
    cola1->imprimir();
    delete cola1;
    return 0;
}