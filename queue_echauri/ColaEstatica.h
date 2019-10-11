#ifndef QUEUE_ECHAURI_COLAESTATICA_H
#define QUEUE_ECHAURI_COLAESTATICA_H
#include <iostream>
#include <stdexcept>
using namespace std;
const int CAPACITY =1000;
template<typename T,size_t n=CAPACITY>


class ColaEstatica{
private:
    T elements[CAPACITY];
    size_t frontIndex;
    size_t backindex;
    size_t containerSize;
    size_t queueSize;
public:
    ColaEstatica(){
        if (n>CAPACITY)
            throw invalid_argument("Invalid queue size");
        frontIndex=0;
        backindex=0;
        containerSize=n;
        queueSize=0;
    }
    bool empyt() const;
    bool full() const;
    size_t size() const;
    const T& front() const;
    const T& back() const;
    void push(const T& element);
    void pop();
};
template <typename T,size_t n>
bool ColaEstatica<T,n>::empyt() const {
    return queueSize==0;
}
template <typename T,size_t n>
bool ColaEstatica<T,n>::full() const {
    return queueSize==containerSize;
}
template <typename T,size_t n>
size_t ColaEstatica<T,n>::size() const {
    return queueSize;
}
template <typename T,size_t n>
const T& ColaEstatica<T,n>::front() const {
    if(empyt()){
        throw range_error("trying front() on an empty queue");
    }
    return elements[frontIndex];
}
template <typename T,size_t n>
const T& ColaEstatica<T,n>::back() const{
    if(empyt()){
        throw range_error("trying to back() on an empty queue");
    }
    if (backindex==0){
        return elements[containerSize-1];
    }
    else
        return elements[backindex-1];
}
template <typename T,size_t n>
void ColaEstatica<T,n>::push(const T &element) {
    if(full()){
        throw range_error("trying to push() on an full queue");
    }
    else
        elements[backindex] = element;
    backindex = (backindex+1) % containerSize;
    ++queueSize;

}
template <typename T,size_t n>
void ColaEstatica<T,n>::pop() {
    if(empyt()){
        throw range_error("trying to pop() on empty queue");
    }
    frontIndex = (frontIndex+1)%containerSize;
    --queueSize;
}

#endif //QUEUE_ECHAURI_COLAESTATICA_H