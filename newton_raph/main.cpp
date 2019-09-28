#include <iostream>
#include <cmath>
const double EPSILON =0.001;
using namespace std;
int count=1;
double func(double x)
{
    return pow(x,2)-(5*x)+4;//ecuacion original
}
double derivFunc(double x)
{
    return (2*x)-5;//derivada de la ecuacion
}
void newtonRaphson(double x)
{
    double h = func(x) / derivFunc(x);
    cout<<"valor estimado = 6\n";
    while (abs(h) >= EPSILON)
    {
        h = func(x)/derivFunc(x);
        x = x - h;
        cout << "x"<<count<<" "<< x <<" "<<count<<"* iteracion ";
        count++;
        cout<<"\n";
    }
    cout << "La raiz es: " << x;

}
int main()
{
    double x0 = 6; //valor estimado
    newtonRaphson(x0);
    return 0;
}