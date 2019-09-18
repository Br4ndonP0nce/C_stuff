#ifndef LISTAS_LISTA_ESTATICA_H
#define LISTAS_LISTA_ESTATICA_H
#include <iostream>
#include <stdexcept>
using namespace std;
//template indicates that the class is a template(supports any data type)
//size_t:unsigned int, its used to indicate collection sizes
//typename:declares that data type T can be any valid data type
template<size_t n,typename T>
class lista_estatica {
private:
    static const size_t CAPACITY =1000;
    T elements[CAPACITY];
    size_t index;
    size_t  containerSize;

public:
    lista_estatica(){
        if(n>CAPACITY)
            throw invalid_argument("Trying to create a list with non valid size");
        index = 0;
        containerSize = n;
    }
    bool empty() const;
    bool full() const;
    size_t size() const;
    void pushfront(const T &element);
    void pushback(const T &element);
};
template<size_t n,typename T>
bool lista_estatica<n,T>::empty() const
{
    return  index == 0;
}
template<size_t n,typename T>
bool lista_estatica<n,T>::full() const
{
return index == containerSize;
}
template<size_t n,typename T>
size_t lista_estatica<n,T>::size() const {
    return index;
}
template <size_t n,typename T>
void lista_estatica<n,T>::pushfront(const T &element){
    if (full())
        throw range_error("Trying to push front(const t&element) on a full list");
    if(empty())
        elements[0]=element;
    else{
        for(size_t i(index);i>0;--i)
            elements[i]=elements[i-1];
        elements[0]=element;
    }
    ++index;
}
template <size_t n,typename T>
void lista_estatica<n,T>::pushback(const T &element){
    if (full())
        throw range_error("Trying to push back(const t&element) on a full list");
    elements[index] = element;
    ++index;
}
#endif //LISTAS_LISTA_ESTATICA_H
