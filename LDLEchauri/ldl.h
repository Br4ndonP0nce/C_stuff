#ifndef LDLECHAURI_LDL_H
#define LDLECHAURI_LDL_H
#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
class LDL
{
private:
    struct NodoLDL
    {
        T dato;
        NodoLDL* siguiente;
        NodoLDL* anterior;
        NodoLDL(const T& element, NodoLDL* sig = nullptr, NodoLDL* ant = nullptr)
        {
            dato = element;
            siguiente = sig;
            anterior = ant;
        }
    };
    size_t listSize;
    NodoLDL* listFront;
    NodoLDL* listBack;

public:
    LDL()
    {
        listSize = 0;
        listFront = nullptr;
        listBack = nullptr;
    }

    LDL(const LDL& other)
    {
        listSize = 0;
        listFront = nullptr;
        listBack = nullptr;
        for (size_t i(0); i < other.size(); ++i)
            push_back(other[i]);
    }

    ~LDL(){
        clear();
    }

    LDL& operator = (const LDL& other)
    {
        listSize = 0;
        listFront = nullptr;
        listBack = nullptr;
        for (size_t i(0); i < other.size(); ++i)
            push_back(other[i]);
        return *this;
    }

    bool empty() const;
    size_t size() const;
    void push_front(const T& element);
    void push_back(const T& element);
    const T& front() const;
    const T& back() const;
    void pop_front();
    void pop_back();
    void insert(size_t position, const T& element);
    void erase(size_t position);//erase by position
    void clear();//clears list by deleting all nodes
    void remove(const T& element);//looks for a value, removes it from list
    T& operator [](size_t index) const;
};

template<typename T>
bool LDL<T>::empty() const
{
    return listSize == 0;
}

template<typename T>
size_t LDL<T>::size() const
{
    return listSize;
}

template<typename T>
void LDL<T>::push_front(const T& element)
{
    if (empty())
    {
        listFront = new NodoLDL(element);
        listBack = listFront;
    }
    else
    {
        NodoLDL* nuevo = new NodoLDL(element, listFront);
        listFront->anterior = nuevo;
        listFront = nuevo;
    }

    ++listSize;
}

template<typename T>
void LDL<T>::push_back(const T& element)
{
    if (empty())
    {
        listFront = new NodoLDL(element);
        listBack = listFront;
    }
    else
    {
        NodoLDL* nuevo = new NodoLDL(element, nullptr, listBack);
        listBack->siguiente = nuevo;
        listBack = nuevo;
    }
    ++listSize;
}

template<typename T>
const T& LDL<T>::front() const
{
    if (empty())
        throw range_error("front() on empty list");
    return listFront->dato;
}

template<typename T>
const T& LDL<T>::back() const
{
    if (empty())
        throw range_error("back() on empty list");
    return listBack->dato;
}

template<typename T>
void LDL<T>::pop_front()
{
    if (empty())
        throw range_error("pop_front() on empty list");

    NodoLDL* eliminar = listFront;
    listFront = listFront->siguiente;
    if (listFront != nullptr)
        listFront->anterior = nullptr;
    eliminar->siguiente = nullptr;
    delete eliminar;
    eliminar = nullptr;

    --listSize;
}

template<typename T>
void LDL<T>::pop_back()
{
    if (empty())
        throw range_error("pop_back() on empty list");

    NodoLDL* eliminar = listBack;
    listBack = listBack->anterior;
    if (listBack != nullptr)
        listBack->siguiente = nullptr;
    eliminar->anterior = nullptr;
    delete eliminar;
    eliminar = nullptr;

    --listSize;
}

template<typename T>
void LDL<T>::insert(size_t position, const T& element)
{
     if (position > listSize)
        throw range_error("insert() in non valid position");
    if (position == 0)
        push_front(element);
    else if (position == listSize)
        push_back(element);
    else
    {
        if(position <= listSize/2){
            NodoLDL* temp = listFront;
            for (size_t i(0); i < position-1; ++i)
                temp = temp->siguiente;
            NodoLDL* nuevo = new NodoLDL(element, temp->siguiente, temp);
            temp->siguiente = nuevo;
            nuevo->siguiente->anterior = nuevo;
        } else{
            NodoLDL* temp = listBack;
            for (size_t i(listSize-1); i > position+1; --i)
                temp = temp->anterior;
            NodoLDL* nuevo = new NodoLDL(element, temp, temp->anterior);
            temp->anterior = nuevo;
            nuevo->anterior->siguiente = nuevo;
        }
        ++listSize;
    }
}

template<typename T>
void LDL<T>::erase(size_t position)
{
    if (empty())
        throw range_error("trying to erase() in an empty list ");
    if (position >= listSize)
        throw range_error("trying to erase() in non valid position");
    else if(position == 0)
        pop_front();
    else if (position == listSize-1)
        pop_back();
    else
    {
        if(position < listSize/2){
            NodoLDL* temp = listFront;
            for(size_t i(0); i < position-1; ++i){
                temp = temp->siguiente;
            }
            NodoLDL* eliminar = temp->siguiente;
            temp->siguiente = eliminar->siguiente;
            eliminar->siguiente->anterior = eliminar->anterior;
            delete eliminar;
            eliminar = nullptr;
        } else{
            NodoLDL* temp = listBack;
            for(size_t i(listSize-1); i > position+1; --i){
                temp = temp->anterior;
            }
            NodoLDL* eliminar = temp->anterior;
            temp->anterior = eliminar->anterior;
            eliminar->anterior->siguiente = eliminar->siguiente;
            delete eliminar;
            eliminar = nullptr;
        }
        --listSize;
    }
}

template<typename T>
void LDL<T>::clear()
{
    for (size_t i(0); i < listSize; ++i)
        pop_front();
    listSize = 0;
    listFront = nullptr;
    listBack = nullptr;
}

template<typename T>
void LDL<T>::remove(const T& value)
{
    if (empty())
        throw range_error("trying to remove() from empty list");
    NodoLDL* temp = listFront;
    size_t i = 0;
    T dato;
    while (temp != nullptr)
    {
        dato = temp->dato;
        temp = temp->siguiente;
        if (dato == value)
        {
            erase(i);
            --i;
        }
        ++i;
    }
}

template<typename T>
T& LDL<T>::operator [](size_t index) const
{
    if (empty())
        throw range_error("[] in empty list");
    if (index >= listSize)
        throw range_error("[] in non valid position");

    if(index < listSize/2){
        NodoLDL* temp = listFront;
        for(size_t i(0); i < index; ++i){
            temp = temp->siguiente;
        }
        return temp->dato;
    } else{
        NodoLDL* temp = listBack;
        for(size_t i(listSize-1); i > index; --i){
            temp = temp->anterior;
        }
        return temp->dato;
    }
}
#endif //LDLECHAURI_LDL_H
