#ifndef FINALMARIAELENA_EULER_H
#define FINALMARIAELENA_EULER_H
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//dy/dx=y-2x^2+1
double f(double x, double y)
{
    double v = y - 2 * x * x + 1;//definicion de la ecuación
    return v;
}


double prediccion(double x, double y, double h)
{
    //prediccion del valor siguiente para y
    double y1p = y + h * f(x, y);
    return y1p;
}

//correcion de euler modificado
double correcion(double x, double y,
                 double x1, double y1,
                 double h)
{

    double e = 0.00001;
    double y1c = y1;

    do {
        y1 = y1c;
        y1c = y + 0.5 * h * (f(x, y) + f(x1, y1));//formula de euler modificado
    } while (fabs(y1c - y1) > e);// fabs es una funcion para valores absolutos

    //cada iteracion corrige el valor para y
    return y1c;
}

void valorfinal(double x, double xn,
                double y, double h)
{

    while (x < xn) {
        double x1 = x + h;
        double y1p = prediccion(x, y, h);
        double y1c = correcion(x, y, x1, y1p, h);
        x = x1;
        y = y1c;
        cout << "valor de y en  x = "
             << x << " es : " << y << endl;
    }


}
void triggereul()
{
    cout<<"dy/dx=y-2x^2+1\n";
    cout<<"y(0)=0.5,x=0,h=0.2";
    //condiciones de la integral x=0 y (0)=.5
    double x = 0, y = 0.5;

    // valor final para el que se necesita la iteracion
    double xn = 1;

    // paso de la variable x
    double h = 0.2;

    valorfinal(x, xn, y, h);

    system("\npause");
    system("cls");
}

#endif //FINALMARIAELENA_EULER_H
