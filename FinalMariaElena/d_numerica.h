#ifndef FINALMARIAELENA_D_NUMERICA_H
#define FINALMARIAELENA_D_NUMERICA_H

#include <cmath>
#include <iostream>
using namespace std;
#define Pi 3.14159265
template<typename T, typename F> T NewtonCotes(F f, T a, T b, unsigned int segments, unsigned int degree, unsigned int divisor, const T coeff[]){

    T seg_step = (b - a)/segments;
    T f_val = T(0);

    for(unsigned int s = 0; s < segments; ++s){

        T seg_a = a + seg_step*s;
        T seg_b = seg_a + seg_step;
        T f_subval = T(0);

        for(unsigned int i = 0; i < degree + 1; ++i){
            f_subval += coeff[i] * f(seg_a + i*(seg_b - seg_a)/degree);
        }

        f_val += ((seg_b - seg_a)/T(divisor)) * f_subval;
    }

    return f_val;
}

//Simpson 1/3
template<typename T, typename F> T Simpsons(F f, T a, T b, unsigned int segments){

    const unsigned int degree = 2;
    const unsigned int divisor = 6;
    const T coeff[] = {1., 4., 1.};

    return NewtonCotes<T, F>(f, a, b, segments, degree, divisor, coeff);
}


// Simpson 3/8

template<typename T, typename F> T Simpsons3_8(F f, T a, T b, unsigned int segments){

    const unsigned int degree = 3;
    const unsigned int divisor = 8;
    const T coeff[] = {1., 3., 3., 1.};

    return NewtonCotes<T, F>(f, a, b, segments, degree, divisor, coeff);
}
struct ConstTest{
    float operator()(float t) { return 1;}
};

struct PythagorianTest{
    float operator()(float t) {
        return sin(t)*sin(t) + cos(t)*cos(t);
    }
};

void triggerder(){
    cout<<"Funcion: sin^2(x)+cos^2(x)"<<endl<<endl;
    cout<<"|Simpsons1/8: "<<Simpsons<float, PythagorianTest>(PythagorianTest(), 0, Pi, 10)<<endl;
    cout<<"|_____________________|"<<endl;
    cout<<"|Simpsons3/8: "<<Simpsons3_8<float, PythagorianTest>(PythagorianTest(), 0, Pi, 10)<<endl;
    cout<<"|_____________________|"<<endl;
    system("\npause");
    system("cls");

}
#endif //FINALMARIAELENA_D_NUMERICA_H
