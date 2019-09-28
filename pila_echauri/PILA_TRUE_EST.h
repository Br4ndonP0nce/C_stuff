#ifndef PILA_ECHAURI_PILA_TRUE_EST_H
#define PILA_ECHAURI_PILA_TRUE_EST_H

#include "PILA_EST.h"
using namespace std;
template<size_t  n, typename T>
class PilaEstatica {
private:
    ListaEstatica<n,T>list;
public:
    PilaEstatica();
    bool empty() const ;
    bool full() const ;
    size_t size() const;
    const T& top() const;
    void push(const T& value);
    void pop();

};
template <size_t n,typename T>
bool PilaEstatica<n,T>::empty() const{
    return list.empty();
}
template <size_t n,typename T>
bool PilaEstatica<n,T>::full() const{
    return list.full();
}
template <size_t n,typename T>
size_t PilaEstatica<n,T>::size() const{
    return list.size;
};
template <size_t n,typename T>
const T& PilaEstatica<n,T>::top()const{
    if(empty())
        throw range_error("cant see top with empty stack");
    return list.back();
}
template <size_t n,typename T>
void PilaEstatica<n,T>::push(const T &value) {
    if(full())
        throw range_error("cant push more stack full");
    list.push_back(value);
}
template <size_t n,typename T>
void PilaEstatica<n,T>::pop() {
    if(empty())
        throw range_error("cant pop with empty stack");
    list.pop_back();
}
#endif //PILA_ECHAURI_PILA_TRUE_EST_H
