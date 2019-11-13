#ifndef LDLECHAURI_LDL_H
#define LDLECHAURI_LDL_H
#include <iostream>
#include <stdexcept>
using namespace std;
template<typename T>
class LDL{
    struct NodoLDL {
        T dato;
        NodoLDL *siguiente;
        NodoLDL *anterior;

        NodoLDL(const T &element, NodoLDL *sig = nullptr, NodoLDL *ant = nullptr) {
            dato = element;
            siguiente = sig;
            anterior = ant;
        }
    };
        size_t listSize;
        NodoLDL* listFront;
        NodoLDL listback;

public:
    LDL(){
        listSize=0;
        listFront= nullptr;
        listback= nullptr;

    }
    bool empty()const;
    void size()const ;
    void push_front(const T& element);
    void puah_back(const T& element);
    const T& front()const;
    const T& back()const;
    void pop_front();
    void pop_back();
};
template<typename T>
bool LDL<T>::empty()const{
    return listSize==0;
}
template <typename T>
void LDL<T>::size()const {
    return listSize;
}
template<typename T>
void LDL<T>::push_front(const T &element) {
    if(empty()){
        listFront=new NodoLDL(element);
        listback=listFront;
    }
    else
    {
        NodoLDL* nuevo=new NodoLDL(element,listFront);
        listFront->anterior=nuevo;
        listFront=nuevo;
    }
    ++listSize;

}
template<typename T>
void LDL<T>::puah_back(const T &element) {
    if(empty()){
        listFront=new NodoLDL(element);
        listback=listFront;
    }
    else{
        NodoLDL*nuevo=new NodoLDL(element, nullptr,listback);
        listback->siguiente=nuevo;
        listback=nuevo;

    }
    ++listSize;
}
template <typename T>
const T& LDL<T>::front() const {
    if(empty()){
        throw range_error("trying to front() in an empty list");
    }
    return listFront->dato;
}
template <typename T>
const T& LDL<T>::back() const {
    if(empty()){
        throw range_error("trying to back() in an empty list");
    }
    return listback->dato;
}
template<typename T>
void LDL<T>::pop_front() {
    if(empty()){
        throw range_error("trying to pop_front() on empty list");
    }
    NodoLDL* eliminar=listFront;
    listFront=listFront->siguiente;
    listFront->anterior= nullptr;
    eliminar->siguiente= nullptr;
    delete eliminar;
    eliminar = nullptr;
    --listSize;
}
template<typename T>
void LDL<T>::pop_back() {
    if(empty()){
        throw range_error("trying to pop_front() on empty list");
    }
    NodoLDL*eliminar=listback;
    listback=listback.anterior;
    listback.siguiente= nullptr;
    eliminar->anterior=nullptr;
    delete eliminar;
    eliminar= nullptr;

    --listSize;
}
#endif //LDLECHAURI_LDL_H
