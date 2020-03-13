#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H
#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <stdexcept>


using namespace std;

template<typename T>
class Vector
{
private:
    size_t Vectorcapacity;
    size_t Vectorsize;
    T *cont;
public:
    Vector();
    ~Vector();
    void generate(size_t size);
    bool empty();
    size_t size();
    size_t capacity();
    void push_back(const T& element);
    void pop_back();
    void insert(size_t position, const T& element);
    void PrintAll();
    void erase(size_t position);
    void clear();
    void resize();
    const T& at(size_t position);
    T& operator [](size_t index);

};
template<typename T>
Vector<T>::Vector()
{
    Vectorcapacity=2;
    Vectorsize=0;
    cont = new T[Vectorcapacity];
}

template<typename T>
Vector<T>::~Vector()
{
    delete[] cont;
}

template<typename T>
void Vector<T>::generate(size_t size)
{
    for (size_t i = size; i < capacity(); i++)
    {
        cont[i] = 0;
    }
}

template<typename T>
bool Vector<T>::empty()
{
    return Vectorsize==0;
}

template<typename T>
size_t Vector<T>::size()
{
    return  Vectorsize;

}

template<typename T>
size_t Vector<T>::capacity()
{
    return Vectorcapacity;
}



template<typename T>
void Vector<T>::insert(size_t position, const T& element)
{
    if(position > Vectorsize){
        throw std::range_error("insert() on non-valid position");
    }

    if(Vectorsize == Vectorcapacity){
        resize();
    }

    if(position == Vectorsize){
        push_back(element);
    } else{

        for (size_t i(Vectorsize+1); i > position; --i){
            cont[i] = cont[i - 1];
        }
        cont[position] = element;
        Vectorsize++;
    }
}

template<typename T>
void Vector<T>::PrintAll()
{
    if(empty())
        cout<<"Vector Vacio"<<endl;

    for(size_t i=0; i<size(); i++){
        cout<<"Item"<<i<<" : "<<cont[i]<<endl;
    }
}

template<typename T>
void Vector<T>::erase(size_t position)
{
    if (empty())
        cout<<"Vector Vacia"<<endl;
    if (position >= Vectorsize)
        cout<<"Posicion Invalida"<<endl;
    else if (position == Vectorsize)
        pop_back();
    else
    {
        for (size_t i=position; i < Vectorsize; ++i)
            cont[i]=cont[i+1];

        --Vectorsize;
    }
}
template<typename T>
void Vector<T>::clear()
{
    Vectorsize=0;

}

template<typename T>
void Vector<T>::push_back(const T &element)
{
    if (size() >= capacity())
        resize();

    cont[Vectorsize++] = element;
}

template<typename T>
void Vector<T>::pop_back()
{
    if (size() > 0)
        cont[--Vectorsize] = 0;
    else
        throw("Empty array!");
}

template<typename T>
T& Vector<T>::operator[](size_t index)
{
    if (empty())
        throw range_error("[] in empty array");
    if (index >= Vectorsize)
        throw range_error("[] in non valid position");
    else{
        return cont[index];
    }
}

template<typename T>
void Vector<T>::resize()
{
    Vectorcapacity *= 2;

    int *tempvector = new T[Vectorcapacity];

    for (size_t i = 0; i < size(); i++)
    {
        tempvector[i] = cont[i];
    }

    delete[] cont;

    cont = tempvector;

    generate(size());
}

template<typename T>
const T &Vector<T>::at(size_t position)
{
    if (position < 0 || position >= size())
        throw ("Out of bounds exception!");

    return cont[position];
}




#endif // VECTOR_H

#endif //VECTOR_VECTOR_H
