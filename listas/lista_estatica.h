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
    const T& front() const;
    const T& back() const;
    void popfront();
    void popback();
    void erase(size_t position);
    void insert(size_t position,const T& element);
    T&operator[](size_t,n);
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
template<size_t n,typename T>
const T& lista_estatica<n, T>::front() const {
    if(empty()){
        throw range_error("trying front() on empty list");
    }
    return elements[0];
}
template <size_t n, typename T>
const T& lista_estatica<n,T>::back() const {
    if(empty()){
        throw range_error("error");
    }
    return elements[index-1];
}
template<size_t n,typename T>
void lista_estatica<n,T>::insert(size_t position, const T &element) {
    if(full()){
        throw range_error("trying insert in a full list");
    }
    if(position>index){
        throw range_error("trying insert in a full list");
    }
    if(empty()|| position==0){
        pushfront(element);
    }
    else if(position== size()){
        pushback(element);
    }
    else{
        for(size_t i(index);i>position;--i){
            elements[i]= elements[i-1];
            elements[position]=element;
            ++index;
        }
    }
}
template<size_t n,typename T>
void lista_estatica<n,T>::popfront() {
    if(empty())
        throw range_error("unbale to pop");
    for(size_t i(0);i<index-1;i++)
        elements[i]=elements[i+1];
    index--;

}
        template <size_t n,typename T>
        void lista_estatica<n,T>::erase(size_t position) {
            if (empty())
                throw range_error("inable to");
            if(position>=index){

                throw range_error("non valid pos");
            }
            if(position==0)
                popfront();
            else if (position==index-1)
                popback();
            else{
                for(size_t i(position);i<index-1;++i)
                    elements[i]= elements[i+1];
                index--;
            }
        }
    template <size_t n,typename T>
            &T void lista_estatica<n ,T>::popback() {

            }

#endif //LISTAS_LISTA_ESTATICA_H
