#ifndef AEROPUERTO_PILA_H
#define AEROPUERTO_PILA_H
using namespace std;
class Pila {
private:
    class Nodo {
    public:
        string info;
        Nodo *sig;
    };

    Nodo *raiz;
public:
    Pila();
    ~Pila();
    void insertar(string name);
    string extraer();
    void imprimir();
};


#endif //AEROPUERTO_PILA_H
