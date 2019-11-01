#include <iostream>
//Recursividad lineal. maximo una llamada recursiva por rama condicional
//por la cola
//no por la cola
//Recursividad no lineal: mas de una llamada recursiva
//en cascada
//anidada
using namespace std;
int morris(int n,int m){
    if(n==m)
        return m+1;
    else
        return morris(n,morris(n-1,m+1));
}
int fact(int n,int m){//funcion auxiliar para facto
    if(n<=1){
        return m;
    }
    else
        fact(n-1,n*m);
}
int factorial (int n){//recursividad no por la cola
    if (n<=1){
        return 1;
    } else
        return n*factorial(n-1);
}
int facto(int n){//recursividad por  la cola
    return fact(n,1);
}
int fibonacci(int n){
    if(n<=1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
    cout<<factorial(5)<<endl;
    cout<<facto(5)<<endl;
}
